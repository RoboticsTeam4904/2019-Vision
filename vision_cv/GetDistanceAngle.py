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
        return width, height
    return theta, theta/math.pi*180

def getDistance(box, sensorHeight, focalLength=3.67, knownHeightMillimeters=139.7, imageHeight=640): 

    #knownHeightMilimeters is the height of the vision tape in millimeters, which stays constant in the code
    #Focal Length 3.67 mm
    top = box[0]
    right = box[1]
    bottom = box[1]
    left = box[3] #Why should left = box[3]?
    knownHeightPixels = (top[1] - bottom[1]) #knowHeightPixel is the pixel height of the vision tape which is constantly getting updated
    try:
        distanceToObject = (focalLength * knownHeightMillimeters * imageHeight) / (knownHeightPixels * sensorHeight)
        return distanceToObject
    except: 
        return "CAN'T GET DISTANCE"

def getSensorHeight(box, distanceMillimeters, focalLength=3.67, knownHeightMillimeters=139.7, imageHeight = 640):
    top = box[0]
    right = box[1]
    bottom = box[1]
    left = box[3]
    knownHeightPixels = (top[1] - bottom[1]) #knowHeightPixel is the pixel height of the vision tape which is constantly getting updated
    sensorHeight = focalLength * knownHeightMillimeters * imageHeight/(distanceMillimeters*knownHeightPixels)
    return sensorHeight

def distanceAngleAnalysis(boxes):
    SENSOR_HEIGHT = -1 # Tune value later
    for i in boxes:
        print(getSensorHeight(i))
        print(getAngle(i))