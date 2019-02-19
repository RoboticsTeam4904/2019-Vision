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
def getBeta(leftCamLeftTape, rightCamLeftTape, leftCamRightTape, rightCamRightTape, distanceTapes=11): # The distance between the two tapes
    # d_l, d_r are distances to wall

    if leftCamLeftTape[0] and rightCamLeftTape[0]:
        d_l = (leftCamLeftTape[1] + rightCamLeftTape[1])/2
    elif leftCamLeftTape[0]:
        d_l = leftCamLeftTape[1]
    elif leftCamLeftTape[1]:
        d_l = rightCamLeftTape[1]
    else:
        print("Left tape not visible (for beta calc)")
        return False

    if leftCamRightTape[0] and rightCamRightTape[0]:
        d_r = (leftCamRightTape[1] + rightCamRightTape[1])/2
    elif leftCamRightTape[0]:
        d_r = leftCamRightTape[1]
    elif leftCamRightTape[1]:
        d_r = rightCamRightTape[1]
    else:
        print("Right tape not visible (for beta calc)")
        return False
    print("\t \t \t \t DISTANCE TO WALL for TAPE 1 is " + str(d_l))
    print("\t \t \t \t DISTANCE TO WALL for TAPE 2 is " + str(d_r))
    if abs(d_l - d_r) > distanceTapes:
        print("tape distances too far to be the same target")
        return False # Protects against out of range asin errors
   
    beta = math.asin((d_r-d_l)/distanceTapes) #This is the equation that calculates beta
    # Converting beta into degrees.
    return beta/math.pi * 180
