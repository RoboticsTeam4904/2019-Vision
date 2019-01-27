import math
import cv2
def getAngle(perfectWidth=3.3133853031, perfectHeight=5.8255720302, box): 
    perfectRatio = perfectWidth/perfectHeight # Perfect ratio is the perfect width divided by the perfect height
    top = box[0]
    right = box[1]
    bottom = box[2]
    left = box[3]
    width = right[0]-left[0]
    height = top[1]-bottom[1]
    theta = math.asin(width/(height*perfectRatio))
    return theta

