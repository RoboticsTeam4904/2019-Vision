import cv2
import WebCam
#from gripCode import Grip
import numpy as np
from PIL import Image
import math 
from ScoringMechanism import *

#WebCam.set(exposure = 0.1)

min_area = 0.0
min_perimeter = 0.0
min_width = 0
max_width = 100000
min_height = 0
max_height = 100000
solidity = [0, 100.0]
max_vertices = 1000000.0
min_vertices = 0
min_ratio = 0
max_ratio = 100000


def rgbThreshold(inp, red, green, blue):
    out = cv2.cvtColor(inp, cv2.COLOR_BGR2RGB)
    return cv2.inRange(out, (red[0], green[0], blue[0]),  (red[1], green[1], blue[1]))

def detect(c):
    # initialize the shape name and approximate the contour
    x,y,w,h = cv2.boundingRect(c)
    if (w < min_width or w > max_width):
        return False
    if (h < min_height or h > max_height):
        return False
    area = cv2.contourArea(c)
    if (area < min_area):
        return False
    if (cv2.arcLength(c, True) < min_perimeter):
        return False
    hull = cv2.convexHull(c)
    solid = 100 * area / cv2.contourArea(hull)
    if (solid < solidity[0] or solid > solidity[1]):
        return False
    ratio = (float)(w) / h
    if (ratio < min_ratio or ratio > max_ratio):
        return False
    #print(contours)
    
    # Now we create bounding boxes around contours, etc. for filtering by ratio even more.

    return True
   
    """sizeScores = [size(area)for area in areas]
	ratioScores = ratios(widths, heights)
	rotationScores = [rotation(rect) for rect in rotatedRects]
	rectangularScores = [distToPolygon(contour, poly) for contour,poly in zip(contours, rotatedBoxes)]
	areaScores = polygonAreaDiff(areas, rotatedAreas)
	quadScores = [Quadrify(contour) for contour in contours]"""


def filterContours(contours):
    return [x for x in contours if (cv2.contourArea(x) > 0 and detect(x))]

def findTarget(contours):
    # contour1 = contours[0]
    # for i in contours[1]:
    #     contour1.append(i)
    x,y,w,h = cv2.boundingRect(np.concatenate((contours[0], contours[1])))
    return (int(x + w/2), int(y + h/2))

def findContours():
    image = WebCam.getImage()
    '''file_obj = Image.open("../vision_cv/TestImages/TEST1.jpg")
    data = []
    for x in range(640):
        a_ = []
        for y in range(480):
            a_.append(file_obj.getpixel((x, y)))
        data.append(a_)
    image = np.array(data, dtype=np.uint8)'''
    
    #thresh = rgbThreshold(image,(0,78.4),(114.7,255.0),(98.6,255.0))
    thresh = rgbThreshold(image, (0,100), (100,255), (0,255))

    """
        self.__rgb_threshold_red = [0.0, 78.41669583131537]
        self.__rgb_threshold_green = [114.65827338129496, 255.0]
        self.__rgb_threshold_blue = [98.60611510791367, 255.0]
    """
    mask = cv2.bitwise_and(image, image, mask=thresh)

    mode = cv2.RETR_LIST
    method = cv2.CHAIN_APPROX_SIMPLE
    contours = None
    if(cv2.__version__[0] == "4"):
        contours, hierarchy = cv2.findContours(thresh, mode, method) # im2 only in cv2 v3.x
    if(cv2.__version__[0] == "4"):
        contours, hierarchy = cv2.findContours(thresh, mode, method) # im2 only in cv2 v3.x
    #print(contours)

    return contours, mask, image

if(__name__ == "__main__"):
    while True:
        box_scores = []
        contours, mask, image = findContours()
        contours = filterContours(contours)
        #cv2.drawContours(mask, contours, -1, (0,0,255), 5)
        #print("LENGTH OF CONTOURS: {}\n\n".format(len(contours)))
        threshold_contours = 5  # This is the threshold that defines "How good" something needs to be a 
        # contour... Start with high values, and increment down as necessary...
        weight_ratio = 100
        weight_area = 10
        weight_parallelogram_infunc = 10
        weight_parallelogram_outfunc = 1 
        weight_rotation_angle_infunc = 10 
        weight_rotation_angle_outfunc = 1 
        threshold = 2
        for i in range(len(contours)):
            bb = contours[i]
        for i in range(len(contours)):
            rect = cv2.minAreaRect(contours[i])
            box = cv2.boxPoints(rect)
            box = np.int0(box)
            box_scores.append((box, score(box, weight_ratio, weight_area, weight_parallelogram_infunc, 
    weight_parallelogram_outfunc, weight_rotation_angle_infunc, weight_rotation_angle_outfunc, threshold)))
            #print(box, score(box))
            cv2.drawContours(mask,[box],0,(0,255,0),2)
        
        # Now we draw boxes;
        box_scores = sorted(box_scores, key=lambda x: x[1])[::-1][:2]
        print(box_scores[0][1], box_scores[1][1])
        for point in box_scores[0][0]:
            print(point)
            cv2.circle(mask, (point[0], point[1]), 5, (255,255,0), 2)
        for point in box_scores[1][0]:
            print(point)
            cv2.circle(mask, (point[0], point[1]), 5, (255,255,0), 2)

        cv2.drawContours(mask, contours, 0, (0,0,255), 2)
        if len(contours) > 1:
    #        try:
            print("1 LENGTH OF CONTOURS: {}".format(len(contours)))
            # findTarget(contours)
            cv2.circle(mask, findTarget(contours), 1, (0,255,0), -1)
            # cv2.rectangle(mask, (0,0), (1000,1000), (100,100,100),-1)
            # print(contours)
    #        except Exception as e:
        else:
            print("Invalid contours")
        cv2.imshow("aa", mask)

        
        key = cv2.waitKey(10)
        if key == 27:
            sys.exit()

