import numpy as np
import math
import cv2

# GAMMA is the angle the camera is at (in radians) to the horizontal plane. An upwards-facing camera implies a positive GAMMA.

#One Camera getDistance approach

def getDistanceToWall(heightPixels, sensorHeight=2.95, focalLength=3.67, knownHeightMillimeters=147.96, imageHeight=480, gamma=0): # gamma default value should be tuned.
    #knownHeightMilimeters is the height of the vision tape in millimeters, which stays constant in the code
    #Focal Length 3.67 mm
    #knowHeightPixel is the pixel height of the vision tape which is constantly getting updated
    knownHeightMillimeters *= math.cos(gamma) #This gets the knownHeightMillimeters based on the angle of the camera
    # print("KNOWN HEIGHT PIXELS", knownHeightPixels)
    try:
        distanceToObject = (focalLength * knownHeightMillimeters * imageHeight) / (heightPixels * sensorHeight)
        return distanceToObject
    except:
        return "CAN'T GET DISTANCE"


def getDistanceToTape(box, beta, theta, sensorHeight=2.95, focalLength=3.67, knownHeightMillimeters=147.96, imageHeight=480, gamma=0):
    # knownHeightMilimeters is the height of the vision tape in millimeters, which stays constant in the code
    # Focal Length 3.67 mm
    # knowHeightPixel is the pixel height of the vision tape which is constantly getting updated

    #knownHeightPixels = box[3]  # box[3] is part of the bounding

    # This gets the knownHeightMillimeters based on the angle of the camera
    knownHeightMillimeters *= math.cos(GAMMA)
    # print("KNOWN HEIGHT PIXELS", knownHeightPixels)
    try:
        distanceToWall = (focalLength * knownHeightMillimeters * imageHeight) / (
            knownHeightPixels * sensorHeight)  # distanceToObject is the distance to the wall
        # final_distance is the distance to the tape
        final_distance = distanceToWall * math.cos(beta) / math.cos(beta+theta)
        return final_distance
    except:
        return "CAN'T GET DISTANCE"

#NOT USING RIGHT NOW
def find_center_point(total_contour):
    x, y, w, h = cv2.boundingRect(total_contour)
    center_point = (x+(w/2), y+(h/2))
    return center_point