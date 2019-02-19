import math
import cv2
import GetDistance

# Perfect width and height describe the pixel width and height when at the vertical offset and looking straight at the tape. This facilitates angle calculations.
def getTheta(box, fieldOfVision=1.229, imageWidth=640):
    # Perfect ratio is the perfect width divided by the perfect height
    top = box[0]
    left = box[1]
    bottom = box[2]
    right = box[3]
    width = float(right[0]-left[0])
    height = float(top[1]-bottom[1])
    averageX = float((left[0]+right[0])/2)
    P1 = (averageX - 320) # 
    P2 = float(imageWidth/2) #  
    try:
        theta = math.atan(P1 * math.tan(fieldOfVision/2)/P2)
    except:
        return 0
    # alpha = math.pi -beta + theta
    return theta

# distanceCameras is the distance between cameras
def getBeta(Camera1LeftTape, Camera2LeftTape, Camera1RightTape, Camera2RightTape, distanceTapes=279.4): # The distance between the two tapes
    distance1 = 0
    distance2 = 0
    
    if Camera1LeftTape[0]: # Takes in isVisible
        distance1 += Camera1LeftTape[1]
    if Camera2LeftTape[0]:
        distance1 += Camera2LeftTape[1]
    if Camera1RightTape[0]: #
        distance2 += Camera1RightTape[1]
    if Camera2RightTape[0]:
        distance1 += Camera2RightTape[1]
    
    distance1 = distance1/2
    distance2 = distance2/2
    
    if distance1 != None:
        print("\t \t \t \t DISTANCE TO WALL for TAPE 1 is " + str(distance1))
    if distance2 != None:
        print("\t \t \t \t DISTANCE TO WALL for TAPE 2 is " + str(distance2))
    if distance1 + distance2>distanceTapes:
        return False # Protects against out of range asin errors
   
    beta = math.asin((distance2-distance1)/distanceTapes) #This is the equation that calculates beta
    # Converting beta into degrees.
    return beta/math.pi * 180
