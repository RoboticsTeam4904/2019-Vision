import math
import cv2
import GetDistance


# Perfect width and height describe the pixel width and height when at the vertical offset and looking straight at the tape. This facilitates angle calculations.
def getTheta(box, perfectWidth=3.3133853031, perfectHeight=5.8255720302, fieldOfVision=1.229, imageWidth=640, GAMMA=0):
    perfectHeight = perfectHeight * math.cos(GAMMA)
    # Perfect ratio is the perfect width divided by the perfect height
    perfectRatio = perfectWidth/perfectHeight
    perfectRatio = .589
    top = box[0]
    left = box[1]
    bottom = box[2]
    right = box[3]
    width = float(right[0]-left[0])
    height = float(top[1]-bottom[1])
    
    P1 = float(averageX - 320)
    P2 = float(imageWidth/2)
    print("WIDTH", width)
    print("HEIGHT", height)
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
def getBeta(AllBoxes, distanceCameras=673.1): #TODO fix distanceCameras constant, incorrect
    boxes1 = AllBoxes[0]
    boxes2 = AllBoxes[1]
    distance1 = 0
    counter = 0
    for i in boxes1: #TODO what does this do?
        distance1 += GetDistance.getDistanceToWall(i)
        counter += 1
    distance1 /= counter
    distance2 = 0
    counter = 0
    for i in boxes2:
        distance2 += GetDistance.getDistanceToWall(i)
        counter += 1
    distance2 /= counter
    beta = math.atan((distance2-distance1)/distanceCameras)
    return beta/math.pi*180  # Converting beta into degrees.
