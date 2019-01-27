import cv2
import numpy as np
from PIL import Image
from ScoringMetric import score
import sys
import WebCam
# WebCam.set(exposure = 0.1)

min_area = 50
min_perimeter = 0.0
min_width = 0
max_width = 500
min_height = 0
max_height = 500
solidity = [0, 100.0]
max_vertices = 1000000.0
min_vertices = 0
min_ratio = 0
max_ratio = 30

def rgbThreshold(inp, red, green, blue):
    out = cv2.cvtColor(inp, cv2.COLOR_BGR2RGB)
    return cv2.inRange(out, (red[0], green[0], blue[0]), (red[1], green[1], blue[1]))

def detect(c):
    # initialize the shape name and approximate the contour
    x, y, w, h = cv2.boundingRect(c)
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
    # Now we create bounding boxes around contours, etc. for filtering by ratio even more.
    return True

def filterContours(contours):
    return [x for x in contours if (cv2.contourArea(x) > 0 and detect(x))]

def findTarget(contours):
    x, y, w, h = cv2.boundingRect(np.concatenate((contours[0], contours[1])))
    return (int(x + w/2), int(y + h/2))

def findContours():
    #image = WebCam.getImage()
    #file_obj = Image.open("../vision_cv/TestImages/TEST90.jpg")
    file_obj = Image.open("../vision_cv/TestImages0-1Tape/TEST2.jpg")

    

    data = []
    for x in range(640):
        a_ = []
        for y in range(480):
            a_.append(file_obj.getpixel((x, y)))
        data.append(a_)
    image = np.array(data, dtype=np.uint8)
    image = np.rot90(image, k=3)
    image = np.fliplr(image)
    thresh = rgbThreshold(image, (40,130), (70,180), (0,60)) #Working RGB Threshold: (40,130), (90,180), (0,60))
    mask = cv2.bitwise_and(image, image, mask=thresh)
    mode = cv2.RETR_LIST
    method = cv2.CHAIN_APPROX_SIMPLE
    contours = None 

    if(cv2.__version__[0] == "4"):
        contours, hierarchy = cv2.findContours(thresh, mode, method) # im2 only in cv2 v3.x
    if(cv2.__version__[0] == "3"):
        im2, contours, hierarchy = cv2.findContours(thresh, mode, method) # im2 only in cv2 v3.x

    return thresh, contours, mask, image

if(__name__ == "__main__"):
    while True:
        box_scores = []
        thresh, contours, mask, image = findContours()
        contours = filterContours(contours)
        #cv2.drawContours(mask, contours, -1, (0,0,255), 5)
        #print("LENGTH OF CONTOURS: {}\n\n".format(len(contours)))
        threshold_contours = 5  # This is the threshold that defines "How good" something needs to be a 
        # contour... Start with high values, and increment down as necessary...
        #Assigning weights to each scoring metric 
        weight_ratio = 3
        weight_area = 1
        weight_parallelogram_infunc = 1 #Small, more important
        weight_parallelogram_outfunc = 0
        weight_rotation_angle_infunc = 1 #Small, more important
        weight_rotation_angle_outfunc = 1
        weight_contour_area_values = 1 
        min_threshold = 3
        if len(contours) < 1:
            print "No Contours"
            continue 
        for i in range(len(contours)):
            bb = contours[i]
        for i in range(len(contours)):
            rect = cv2.minAreaRect(contours[i])
            box = cv2.boxPoints(rect)
            box = np.int0(box)
            box_scores.append((box, score(box, weight_contour_area_values, weight_ratio, weight_area, weight_parallelogram_infunc, 
    weight_parallelogram_outfunc, weight_rotation_angle_infunc, weight_rotation_angle_outfunc, contours[i], thresh)))
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
        #print(box_scores)
        #print(box_scores[0][1], box_scores[1][1])
        if(len(box_scores) > 0):
            for point in box_scores[0][0]:
                print(point)
                cv2.circle(mask, (point[0], point[1]), 5, (255,255,0), 2)
        if(len(box_scores) > 1):
            for point in box_scores[1][0]:
               #print(point)
                cv2.circle(mask, (point[0], point[1]), 5, (255,255,0), 2)

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