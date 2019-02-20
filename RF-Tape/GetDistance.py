import numpy as np
import math
import cv2

# One Camera getDistance approach
# knownHeightMilimeters is the height of the vision tape in millimeters, which stays constant in the code
# Focal Length 3.67 mm
distanceConstant = 96185.4
mToIn = 1.0/254.0
gamma = 0 # GAMMA is the angle the camera is at (in radians) to the horizontal plane. An upwards-facing camera implies a positive GAMMA.

def forwardDist(h_pxl):
    # h_pxl is the pixel height of the vision tape which is constantly getting updated
    assert h_pxl != 0
    return  distanceConstant*math.cos(gamma)/h_pxl

def realDist(forward_dist, theta):
    try:
        return (forward_dist / math.cos(theta))
    except:
        return "CAN'T GET DISTANCE" # TODO: fix return and except specific exception