import math
import cv2
def getAngle(box, perfectWidth=3.3133853031, perfectHeight=5.8255720302): 
    perfectRatio = perfectWidth/perfectHeight # Perfect ratio is the perfect width divided by the perfect height
    top = box[0]
    right = box[1]
    bottom = box[2]
    left = box[3]
    width = right[0]-left[0]
    height = top[1]-bottom[1]
    try:
        theta = math.asin(width/(height*perfectRatio))
    except:
        return "NOT POSSIBLE"
    return theta, theta/math.pi*180

def getDistance(theta, focalLength, perfectHeight):
    pass