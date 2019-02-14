import math
import cv2

def getAngle(box, perfectWidth=3.3133853031, perfectHeight=5.8255720302, fieldOfVision=1.229, imageWidth=640): #Perfect width and height describe the pixel width and height when at the vertical offset and looking straight at the tape. This facilitates angle calculations.
    perfectRatio = perfectWidth/perfectHeight # Perfect ratio is the perfect width divided by the perfect height
    top = box[0]
    right = box[1]
    bottom = box[2]
    left = box[3]
    width = right[0]-left[0]
    height = top[1]-bottom[1]
    P2 = imageWidth/2
    averageX = (left[0]+right[0])/2
    P1 = averageX - 320

    try:
#        beta = math.asin(width/(height*perfectRatio))
        theta = math.atan(P1 * math.tan(fieldOfVision/2)/P2)
    except:
        return width, height
 #   alpha = math.pi -beta + theta
    return theta, theta/math.pi*180
