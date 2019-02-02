import cv2
import numpy as np
from PIL import Image
import ScoringMetric
import sys
import math
import WebCam
import PairFinding
import random
import GetDistance
import HSVThreshold
import Printing
# WebCam.set(exposure = sys.argv[1])

MIN_AREA = 50
MIN_PERIMETER = 0.0
MIN_WIDTH = 0
MAX_WIDTH = 500
MIN_HEIGHT = 0
MAX_HEIGHT = 500
SOLIDITY = [0, 100.0]
MAX_VERTICES = 1000000.0
MIN_VERTICES = 0
MIN_RATIO = 0
MAX_RATIO = 30
MIN_THRESHOLD = 13

WEIGHTS = {
    "hw_ratio": 10,
    "area": 1,
    "contour_area_values": 5,
    "rotation_angle_infunc":1,
    "rotation_angle_outfunc":1,
}

def detect(c):
    # Initialize the shape name and approximate the contour
    x, y, w, h = cv2.boundingRect(c)
    if (w < MIN_WIDTH or w > MAX_WIDTH):
        return False
    if (h < MIN_HEIGHT or h > MAX_HEIGHT):
        return False
    area = cv2.contourArea(c)
    if (area < MIN_AREA):
        return False
    if (cv2.arcLength(c, True) < MIN_PERIMETER):
        return False
    hull = cv2.convexHull(c)
    solid = 100 * area / cv2.contourArea(hull)
    if (solid < SOLIDITY[0] or solid > SOLIDITY[1]):
        return False
    ratio = (float)(w) / h
    if (ratio < MIN_RATIO or ratio > MAX_RATIO):
        return False
    return True

def filterContours(contours):
    return [x for x in contours if (cv2.contourArea(x) > 0 and detect(x))]

def findTarget(contours):
    x, y, w, h = cv2.boundingRect(np.concatenate((contours[0], contours[1])))
    return (int(x + w/2), int(y + h/2))

def findContours(img):

    thresholder = HSVThreshold.HSVPipeline()
    thresh = thresholder.process(img)

    mask = cv2.bitwise_and(img, img, mask=thresh)
    mode = cv2.RETR_LIST
    method = cv2.CHAIN_APPROX_SIMPLE
    contours = [] 

    if(cv2.__version__[0] == "4"):
        contours, hierarchy = cv2.findContours(thresh, mode, method) # im2 only in cv2 v3.x
    if(cv2.__version__[0] == "3"):
        im2, contours, hierarchy = cv2.findContours(thresh, mode, method) # im2 only in cv2 v3.x
    if(cv2.__version__[0] == "2"):
        contours, hierarchy = cv2.findContours(thresh, mode, method) # im2 only in cv2 v3.x

    return thresh, contours, mask

def drawBoxes(box_scores):
    for i in box_scores:
        for point in i[0]:
            cv2.circle(mask, (point[0], point[1]), 5, (255,255,0), 2)

def drawPairs(pairBoxes):
    for i in pairBoxes:
        randomBlue = random.randint(0,255)
        randomGreen = random.randint(0,255)
        randomRed = random.randint(0,255)
        for j in i:
            cv2.circle(mask, (j[0][0], j[0][1]), 5, (randomRed,randomGreen,randomBlue), 2)
            cv2.circle(mask, (j[1][0], j[1][1]), 5, (randomRed,randomGreen,randomBlue), 2)
            cv2.circle(mask, (j[2][0], j[2][1]), 5, (randomRed,randomGreen,randomBlue), 2)
            cv2.circle(mask, (j[3][0], j[3][1]), 5, (randomRed,randomGreen,randomBlue), 2)

def distanceAngleAnalysis(boxes):
    for i in boxes:
        print(GetDistance.getDistance(j))
        print(GetDistance.getAngle(j))

if(__name__ == "__main__"):
    # n=0
    while True:
        box_scores = []
        # img = WebCam.getImage()
        img = cv2.imread("../../../Desktop/TestImages/TEST0.jpg")
        thresh, contours, mask = findContours(img)
        
        if len(contours) < 0:
            print "No Contours"
            continue
        
        contours = filterContours(contours)
        
        boxes = []


        for i in range(len(contours)):
            rect = cv2.minAreaRect(contours[i])
            if(cv2.__version__[0] == "2"):
                box = cv2.cv.BoxPoints(rect)
            else:
                box = cv2.boxPoints(rect)
            
            box = np.int0(box)

            points, contour_score = ScoringMetric.score(box, contours[i], img, WEIGHTS)
            boxes.append(points) #Array with all of the boxes with the format (t, r, b, l) for pair finding 
            box_scores.append((box, contour_score))
            cv2.drawContours(mask,[box],0,(0,255,0),2)


        # Now we draw boxes;
        box_scores = sorted(box_scores, key=lambda x: x[1])[::-1]
        box_scores_filtered = []
        for elem in box_scores:
            if(elem[1] >= MIN_THRESHOLD):
                box_scores_filtered.append(elem)
            else:
                break
        box_scores = box_scores_filtered # Final scores for each contour
        
        # pairBoxes = PairFinding.pair_finding(boxes)
        # if pairBoxes == None:
        #     foundPairs = False
        # else:
        #     foundPairs = True
        # if foundPairs:
        #     drawPairs(pairBoxes)
        #drawBoxes(box_scores)

        #distanceAngleAnalysis(boxes)

        cv2.drawContours(mask, contours, 0, (0,0,255), 2) # BGR, so this is red.
        if len(contours) > 1:
            cv2.circle(mask, findTarget(contours), 1, (0,255,0), -1)
        else:
            pass
        print(len(box_scores))

        cv2.imshow("Threshold", cv2.resize(thresh, (980, 540)))
        cv2.imshow("Image", cv2.resize(img, (980, 540)))
        cv2.imshow("Mask", cv2.resize(mask, (980, 540)))
        # if n%1==0 and n!=0:
        #     Printing.save(mask, name="TEST" + str(n//10))
        # n+=1