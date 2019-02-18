import numpy as np
import math
import cv2

# GAMMA is the angle the camera is at (in radians) to the horizontal plane. An upwards-facing camera implies a positive GAMMA.

#One Camera getDistance approach

def getDistanceToWall(heightPixels, distanceConstant=96185.4, gamma=0): # gamma default value should be tuned.
    #knownHeightMilimeters is the height of the vision tape in millimeters, which stays constant in the code
    #Focal Length 3.67 mm
    #knowHeightPixel is the pixel height of the vision tape which is constantly getting updated
    knownHeightMillimeters *= math.cos(gamma) #This gets the knownHeightMillimeters based on the angle of the camera
    # print("KNOWN HEIGHT PIXELS", knownHeightPixels)
    try:
        distanceToObject = distanceConstant/heightPixels
        return distanceToObject
    except:
        return "CAN'T GET DISTANCE"

def getDistanceToTape(heightPixels, theta, distanceConstant=96185.4, gamma=0):
    # knownHeightMilimeters is the height of the vision tape in millimeters, which stays constant in the code
    # Focal Length 3.67 mm
    # knowHeightPixel is the pixel height of the vision tape which is constantly getting updated
    # This gets the knownHeightMillimeters based on the angle of the camera
    knownHeightMillimeters *= math.cos(gamma)
    # print("KNOWN HEIGHT PIXELS", knownHeightPixels)
    try:
        distanceToWall = distanceConstant/heightPixels #distanceConstant
        # final_distance is the distance to the tape
        final_distance = (distanceToWall / math.cos(theta) * 0.0393701)
        return final_distance
    except:
        return "CAN'T GET DISTANCE"

#NOT USING RIGHT NOW
def find_center_point(total_contour):
    x, y, w, h = cv2.boundingRect(total_contour)
    center_point = (x+(w/2), y+(h/2))
    return center_point