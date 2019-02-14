import numpy as np
import math

def getDistance(box, sensorHeight=2.95, focalLength=3.67, knownHeightMillimeters=139.7, imageHeight=480):
    #knownHeightMilimeters is the height of the vision tape in millimeters, which stays constant in the code
    #Focal Length 3.67 mm
    #knowHeightPixel is the pixel height of the vision tape which is constantly getting updated
    knownHeightPixels = box[3] #box[3] is part of the bounding
    # print("KNOWN HEIGHT PIXELS", knownHeightPixels)
    try:
        distanceToObject = (focalLength * knownHeightMillimeters * imageHeight) / (knownHeightPixels * sensorHeight)
        return distanceToObject
    except: 
        return "CAN'T GET DISTANCE"


# From this paper (http://dsc.ijs.si/files/papers/s101%20mrovlje.pdf), we can use the following formula:
# D = (BX_0)/(2tan(phi0/2)(X_L-X_D))
# Dual image is the image of the center points of the tapes from both cameras with SIZE 1 PIXEL.

DISTANCE_BETWEEN_CAMERAS = 0 # meters
VIEWING_ANGLE = 70.42 # degrees (radians?)
HORIZONTAL_PIXELS = 640 # pixels

def distance_finding(dual_image): 
    locations = np.where(dual_image==255)
    locations = zip(locations[0], locations[1])
    distance = (DISTANCE_BETWEEN_CAMERAS*HORIZONTAL_PIXELS)/(2*math.tan(VIEWING_ANGLE/2)*(locations[1][0]-locations[0][0]))
    return distance


