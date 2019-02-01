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
WebCam.set(exposure = 50)

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

WEIGHTS = {
    "hw_ratio": 10,
    "area": 1,
    "contour_area_values": 5,
    "rotation_angle_infunc":1,
    "rotation_angle_outfunc":1,
}
MIN_THRESHOLD = 14

def rgbThreshold(inp, red, green, blue):
    out = cv2.cvtColor(inp, cv2.COLOR_BGR2RGB)
    return cv2.inRange(out, (red[0], green[0], blue[0]), (red[1], green[1], blue[1]))

def hsvThreshold(inp, hue, saturation, value):
    out = cv2.cvtColor(inp, cv2.COLOR_BGR2HSV)
    return cv2.inRange(out, (hue[0], saturation[0], value[0]), (hue[1], saturation[1], value[1]))

def detect(c):
    # initialize the shape name and approximate the contour
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

def findContours():
    # img = WebCam.getImage()
    # file_obj = Image.open("../../../Desktop/TestImages/TEST3.jpg") # Subject to change for tests.
    # data = []
    # for x in range(640):
    #     a_ = []
    #     for y in range(480):
    #         a_.append(file_obj.getpixel((x, y)))
    #     data.append(a_)

    img = cv2.imread("../../../Desktop/TestImages/TEST3.jpg")

    # img = np.array(data, dtype=np.uint8)
    # img = np.rot90(img, k=3)
    # img = np.fliplr(img)
    # thresh = rgbThreshold(img, (190,210), (240,255), (240,255)) #Working RGB Threshold: (40,130), (90,180), (0,60))
    thresholder = HSVThreshold.HSVPipeline()
    thresh = thresholder.process(img)

    # thresh = hsvThreshold(img, (60,100), (115,255), (60,255))
    mask = cv2.bitwise_and(img, img, mask=thresh)
    mode = cv2.RETR_LIST
    method = cv2.CHAIN_APPROX_SIMPLE
    contours = [] 

    if(cv2.__version__[0] == "4"):
        contours, hierarchy = cv2.findContours(thresh, mode, method) # im2 only in cv2 v3.x
    if(cv2.__version__[0] == "3"):
        im2, contours, hierarchy = cv2.findContours(thresh, mode, method) # im2 only in cv2 v3.x
    if(cv2.__version__[0] == "2"):
        im2, contours, hierarchy = cv2.findContours(thresh, mode, method) # im2 only in cv2 v3.x

    return thresh, contours, mask, img

if(__name__ == "__main__"):
    while True:
        box_scores = []
        thresh, contours, mask, img = findContours()
        
        if len(contours) < 0:
            print "No Contours"
            continue 
        contours = filterContours(contours)
        #cv2.drawContours(mask, contours, -1, (0,0,255), 5)
        #print("LENGTH OF CONTOURS: {}\n\n".format(len(contours)))
        
        boxes = []



        min_threshold = 0

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
            #print(box, score(box))
            cv2.drawContours(mask,[box],0,(0,255,0),2)
        # Now we draw boxes;
        box_scores = sorted(box_scores, key=lambda x: x[1])[::-1]
        box_scores_filtered = []
        for elem in box_scores:
            if(elem[1] >= min_threshold):
                box_scores_filtered.append(elem)
            else:
                break
        box_scores = box_scores_filtered
        print(box_scores)
        pairBoxes = PairFinding.pair_finding(boxes)
        if pairBoxes == None:
            foundPairs = False
            # print("NO PAIRS")
        else:
            foundPairs = True
            # print("FOUND " + str(len(pairBoxes)) + " PAIRS")
        """ 
       for i in boxes:
            print(GetDistance.getAngle(i))
        """
        # for j in boxes: 
        #     #Todo: Implement 
        #     print(GetDistance.getDistance(j))
        if(len(box_scores) > 0):
            for point in box_scores[0][0]:
                print(point)
                cv2.circle(mask, (point[0], point[1]), 5, (255,255,0), 2)
        if(len(box_scores) > 1):
            for point in box_scores[1][0]:
               #print(point)
                cv2.circle(mask, (point[0], point[1]), 5, (255,255,0), 2)
        """
        if foundPairs:
            for i in pairBoxes:
                randomBlue = random.randint(0,255)
                randomGreen = random.randint(0,255)
                randomRed = random.randint(0,255)
                for j in i:
                    cv2.circle(mask, (j[0][0], j[0][1]), 5, (randomRed,randomGreen,randomBlue), 2)
                    cv2.circle(mask, (j[1][0], j[1][1]), 5, (randomRed,randomGreen,randomBlue), 2)
                    cv2.circle(mask, (j[2][0], j[2][1]), 5, (randomRed,randomGreen,randomBlue), 2)
                    cv2.circle(mask, (j[3][0], j[3][1]), 5, (randomRed,randomGreen,randomBlue), 2)
        """
        cv2.drawContours(mask, contours, 0, (0,0,255), 2) # BGR, so this is red.
        if len(contours) > 1:
    #        try:
            #print("1 LENGTH OF CONTOURS: {}".format(len(contours)))
            # findTarget(contours)
            cv2.circle(mask, findTarget(contours), 1, (0,255,0), -1)
            # cv2.rectangle(mask, (0,0), (1000,1000), (100,100,100),-1)
        else:
            print("Invalid contours")
        # cv2.imshow("aa", cv2.resize(thresh, (980, 540)))
        # Printing.save(mask, name="TEST" + str(0))
        cv2.imshow("thresh", cv2.resize(mask, (980, 540)))
        key = cv2.waitKey(10)
        if key == 27:
            sys.exit()