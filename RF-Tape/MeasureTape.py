import numpy as np
import math
import cv2

# One Camera getDistance approach
# knownHeightMilimeters is the height of the vision tape in millimeters, which stays constant in the code
# Focal Length 3.67 mm
 # TODO: Use config
distanceConstant = 96185.4
mToIn = 1.0/254.0
gamma = 0 # GAMMA is the angle the camera is at (in radians) to the horizontal plane. An upwards-facing camera implies a positive GAMMA.
fieldOfVision = 1.229
imageWidth = 640

def forwardDist(h_pxl):
    # h_pxl is the pixel height of the vision tape which is constantly getting updated
    assert h_pxl != 0
    return  distanceConstant * math.cos(gamma)/h_pxl

def realDist(forward_dist, theta):
    try:
        return (forward_dist / math.cos(theta))
    except:
        return "CAN'T GET DISTANCE" # TODO: fix return and except specific exception

# Perfect width and height describe the pixel width and height when at the vertical offset and looking straight at the tape. This facilitates angle calculations.
def getTheta(box):
    # Perfect ratio is the perfect width divided by the perfect height
    top = box[0]
    left = box[1]
    bottom = box[2]
    right = box[3]
    width = float(right[0]-left[0])
    height = float(top[1]-bottom[1])
    averageX = float((left[0]+right[0])/2)
    P1 = (averageX - 320)
    P2 = float(imageWidth/2)
    try:
        theta = math.atan(P1 * math.tan(fieldOfVision/2)/P2)
    except:
        return 0
    # alpha = math.pi -beta + theta
    return theta
