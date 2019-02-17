import math
import cv2
import GetDistance


# Perfect width and height describe the pixel width and height when at the vertical offset and looking straight at the tape. This facilitates angle calculations.
def getAngle(box, perfectWidth=3.3133853031, perfectHeight=5.8255720302, fieldOfVision=1.229, imageWidth=640, GAMMA=0):
    perfectHeight = perfectHeight * math.cos(GAMMA)
    # Perfect ratio is the perfect width divided by the perfect height
    perfectRatio = perfectWidth/perfectHeight
    perfectRatio = .589
    top = box[0]
    left = box[1]
    bottom = box[2]
    right = box[3]
    width = right[0]-left[0]
    height = top[1]-bottom[1]
    P2 = imageWidth/2
    averageX = (left[0]+right[0])/2
    width = float(width)
    height = float(height)
    print("WIDTH", width)
    print("HEIGHT", height)
    P1 = averageX - 320
    P1 = float(P1)
    P2 = float(P2)
    width = float(width)
    height = float(height)
    try:
        beta = math.acos(width/(height*perfectRatio))
        theta = math.atan(P1 * math.tan(fieldOfVision/2)/P2)
        print("beta", beta/math.pi*180)
        print("theta", theta/math.pi*180)
        print(width/height)
    except:
        return width/(height*perfectRatio)
 #   alpha = math.pi -beta + theta
    return theta, theta/math.pi*180


# distanceCameras is the distance between cameras
def getBeta(AllBoxes, distanceCameras=279.4): #673.1
    boxes1 = AllBoxes[0]
    boxes2 = AllBoxes[1]
    distance1 = 0
    counter = 0
    for i in range(0,len(boxes1)):
	box = boxes1[i]
	print(box)
        distance1 = GetDistance.getDistanceToWall(box)
        print("\t \t \t \t DISTANCE TO WALL for CAMERA 1, TAPE " + str(i)  + ": " + str(distance1*.03937))
    distance2 = 0
    counter = 0
    for i in range(0,len(boxes2)):
	box = boxes2[i]
	print(box)
        distance2 = GetDistance.getDistanceToWall(box)
        print("\t \t \t \t DISTANCE TO WALL for CAMERA 2, TAPE " + str(i) + ": " + str(distance2*.03937))
    beta = math.asin((distance2-distance1)/distanceCameras)
    return "BETA, IN DEGREES: " + str(beta/math.pi * 180)  # Converting beta into degrees.
