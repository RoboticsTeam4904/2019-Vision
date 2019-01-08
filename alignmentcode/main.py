import cv2
import WebCam
from gripCode import Grip

WebCam.set(exposure = 1)

def rgbThreshold(input, red, green, blue):
    out = cv2.cvtColor(input, cv2.COLOR_BGR2RGB)
    return cv2.inRange(out, (red[0], green[0], blue[0]),  (red[1], green[1], blue[1]))

while True:
    image = WebCam.getImage()
    thresh = rgbThreshold(image,(150,255),(150,255),(220,255))
    # mask = cv2.bitwise_and(image, input, mask=mask)
    cv2.imshow('aa', thresh)

    key = cv2.waitKey(20)
    if key == 27:
    	sys.exit()
