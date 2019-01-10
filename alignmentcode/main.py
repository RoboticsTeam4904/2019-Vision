import cv2
import WebCam
from gripCode import Grip
import numpy as np

WebCam.set(exposure = 1)

def rgbThreshold(input, red, green, blue):
    out = cv2.cvtColor(input, cv2.COLOR_BGR2RGB)
    return cv2.inRange(out, (red[0], green[0], blue[0]),  (red[1], green[1], blue[1]))

def filterContours(contours):
    return [x for x in contours if cv2.contourArea(x) > 100]

def findTarget(contours):
    # contour1 = contours[0]
    # for i in contours[1]:
    #     contour1.append(i)
    x,y,w,h = cv2.boundingRect(np.concatenate((contours[0], contours[1])))
    return (int(x + w/2), int(y + h/2))

while True:
    image = WebCam.getImage()
    thresh = rgbThreshold(image,(150,255),(150,255),(220,255))
    mask = cv2.bitwise_and(image, image, mask=thresh)

    mode = cv2.RETR_LIST
    method = cv2.CHAIN_APPROX_SIMPLE
    im2, contours, hierarchy = cv2.findContours(thresh, mode, method)
    # print(len(contours))
    contours = filterContours(contours)
    # findTarget(contours)
    cv2.drawContours(mask, contours, -1, (0,0,255), 5)
    cv2.circle(mask, findTarget(contours), 5, (0,255,0), -1)
    # cv2.rectangle(mask, (0,0), (1000,1000), (100,100,100),-1)
    cv2.imshow('aa', mask)
    # print(contours)


    key = cv2.waitKey(10)
    if key == 27:
    	sys.exit()
