import cv2
import HSVThreshold
import main
import numpy as np
import Constants


def detect(c):
    # Initialize the shape name and approximate the contour
    x, y, w, h = cv2.boundingRect(c)
    if (w < Constants.MIN_WIDTH or w > Constants.MAX_WIDTH):
        return False
    if (h < Constants.MIN_HEIGHT or h > Constants.MAX_HEIGHT):
        return False
    area = cv2.contourArea(c)
    if (area < Constants.MIN_AREA):
        return False
    if (cv2.arcLength(c, True) < Constants.MIN_PERIMETER):
        return False
    hull = cv2.convexHull(c)
    solid = 100 * area / cv2.contourArea(hull)
    if (solid < Constants.SOLIDITY[0] or solid > Constants.SOLIDITY[1]):
        return False
    ratio = (float)(w) / h
    if (ratio < Constants.MIN_RATIO or ratio > Constants.MAX_RATIO):
        return False
    return True


def findContours(img):

    thresholder = HSVThreshold.HSVPipeline()
    thresh = thresholder.process(img)
    mask = cv2.bitwise_and(img, img, mask=thresh)
    mode = cv2.RETR_LIST
    method = cv2.CHAIN_APPROX_SIMPLE
    contours = []

    if(cv2.__version__[0] == "4"):
        contours, hierarchy = cv2.findContours(
            thresh, mode, method)  # im2 only in cv2 v3.x
    if(cv2.__version__[0] == "3"):
        im2, contours, hierarchy = cv2.findContours(
            thresh, mode, method)  # im2 only in cv2 v3.x
    if(cv2.__version__[0] == "2"):
        contours, hierarchy = cv2.findContours(
            thresh, mode, method)  # im2 only in cv2 v3.x
    return thresh, contours, mask


def filterContours(contours):
    return [x for x in contours if (cv2.contourArea(x) > 0 and detect(x))]


def getContours(img):
    thresh, contours, mask = findContours(img)

    if len(contours) < 1:
        return [], [], []
    else:
        contours = filterContours(contours)
    return thresh, contours, mask
