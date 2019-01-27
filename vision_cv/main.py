import cv2
import numpy as np
from PIL import Image
from ScoringMetric import score
import ScoringMetric
import sys
#import WebCam
import PairFinding
# WebCam.set(exposure = 0.1)

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
    "ratio": 0,
    "area": 0,
    "contour_area_values": 1,
}
MIN_THRESHOLD = 0

def rgbThreshold(inp, red, green, blue):
    out = cv2.cvtColor(inp, cv2.COLOR_BGR2RGB)
    return cv2.inRange(out, (red[0], green[0], blue[0]), (red[1], green[1], blue[1]))

def detect(c):
    # initialize the shape name and approximate the contour.
    # This code is adapted from the GRIP export function in the application version.
    _, _, w, h = cv2.boundingRect(c)
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
    return [x for x in contours if detect(x)]

def findTarget(contours): # Get position of center dot.
    x, y, width, height = cv2.boundingRect(np.concatenate((contours[0], contours[1])))
    return (int(x + width/2), int(y + height/2))

def findContours():
    #image = WebCam.getImage()
    file_obj = Image.open("../vision_cv/TestImages/TEST45.jpg") # Subject to change for tests.
    #file_obj = Image.open("../vision_cv/TestImages0-1Tape/TEST2.jpg")
    data = []
    for x in range(file_obj.size[0]):
        temp = []
        for y in range(file_obj.size[1]):
            temp.append(file_obj.getpixel((x, y)))
        data.append(temp)

    img = np.array(data, dtype=np.uint8)
    img = np.rot90(img, k=3)
    img = np.fliplr(img)

    thresh = rgbThreshold(img, (40,130), (70,180), (0,60)) # TODO: Tune these values.
    mask = cv2.bitwise_and(img, img, mask=thresh)
    mode = cv2.RETR_LIST
    method = cv2.CHAIN_APPROX_SIMPLE
    contours = None 

    if(cv2.__version__[0] == "4"):
        contours, _ = cv2.findContours(thresh, mode, method) # im2 only in cv2 v3.x
    if(cv2.__version__[0] == "3"):
        _, contours, _ = cv2.findContours(thresh, mode, method) # im2 only in cv2 v3.x

    return thresh, contours, mask, img

if(__name__ == "__main__"):
    while True:
        box_scores = []
        thresh, contours, mask, img = findContours()
        contours = filterContours(contours)
        #cv2.drawContours(mask, contours, -1, (0,0,255), 5)
        #print("LENGTH OF CONTOURS: {}\n\n".format(len(contours)))
        if len(contours) == 0:
            print "No Contours"
            continue 
        boxes = []

        for i in range(len(contours)):
            rect = cv2.minAreaRect(contours[i]) # Find the rotated bounding box around a contour.
            box = cv2.boxPoints(rect)
            box = np.int0(box)

            points, contour_score = score(box, contours[i], img, WEIGHTS)
            boxes.append(points) #Array with all of the boxes with the format (t, r, b, l) for pair finding 
            box_scores.append((box, contour_score))
            cv2.drawContours(mask,[box],0,(0,255,0),2)
        # We now filter the boxes to pick the contours that are above the required threshold.
        box_scores = sorted(box_scores, key=lambda x: x[1])[::-1]
        box_scores_filtered = []
        for elem in box_scores:
            if(elem[1] >= MIN_THRESHOLD): # Score must be greater than min_threshold to be considered.
                box_scores_filtered.append(elem)
            else:
                break
        box_scores = box_scores_filtered
        print(box_scores)
        #print(box_scores)
        #print(box_scores[0][1], box_scores[1][1])
        pairBoxes = PairFinding.pair_finding(boxes)
        if pairBoxes == None:
            foundPairs = False
            print("NO PAIRS")
        else:
            foundPairs = True
            print("FOUND",len(pairBoxes) ,"PAIRS")
        '''
        if(len(box_scores) > 0):
            for point in box_scores[0][0]:
                print(point)
                cv2.circle(mask, (point[0], point[1]), 5, (255,255,0), 2)
        if(len(box_scores) > 1):
            for point in box_scores[1][0]:
               #print(point)
                cv2.circle(mask, (point[0], point[1]), 5, (255,255,0), 2)
        '''
        if foundPairs:
            for i in pairBoxes:
                for j in i:
                    cv2.circle(mask, (j[0], j[1]), 5, (255,255,0), 2)
        cv2.drawContours(mask, contours, 0, (0,0,255), 2) # BGR, so this is red.
        if len(contours) > 1:
    #        try:
            #print("1 LENGTH OF CONTOURS: {}".format(len(contours)))
            # findTarget(contours)
            cv2.circle(mask, findTarget(contours), 1, (0,255,0), -1)
            # cv2.rectangle(mask, (0,0), (1000,1000), (100,100,100),-1)
        else:
            print("Invalid contours")
        cv2.imshow("aa", mask)

        
        key = cv2.waitKey(10)
        if key == 27:
            sys.exit()