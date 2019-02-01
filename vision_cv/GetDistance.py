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
        return "CAN'T GET ANGLE"
    return theta, theta/math.pi*180

def getDistance(knownHeightPixels, sensorHeight, focalLength=3.67, knownHeightMilimeters = 139.7, imageHeight=640): 

#knownHeightMilimeters is the height of the vision tape which stays constant in the code

    top = box[0]
    right = box[1]
    bottom = box[1]
    left = box[3]
    knownHeightPixels = (top[0] - bottom[1]) #knowHeightPixel is the pixel height of the vision tape which is constantly getting updated
    try:
        distanceToObject = (focalLength * knownHeightMilimeters * imageHeight) / (knownHeightPixels * sensorHeight)
    except: 
        return "CAN'T GET DISTANCE"
    #Focal Length 3.67 mm