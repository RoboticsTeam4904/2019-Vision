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

    if leftCamLeftTape and rightCamLeftTape:
        d_l = 1/2.0 * (leftCamLeftTape['forward_dist'] + rightCamLeftTape['forward_dist'])
    elif leftCamLeftTape:
        d_l = leftCamLeftTape['forward_dist']
    elif rightCamLeftTape:
        d_l = rightCamLeftTape['forward_dist']
    else:
        print("Left tape not visible from either camera (for beta calc)")
        return 0

    if leftCamRightTape and rightCamRightTape:
        d_r = 1/2.0 * (leftCamRightTape['forward_dist'] + rightCamRightTape['forward_dist'])
    elif leftCamRightTape:
        d_r = leftCamRightTape['forward_dist']
    elif rightCamRightTape:
        d_r = rightCamRightTape['forward_dist']
    else:
        print("Right tape not visible from either camera (for beta calc)")
        return 0
    if config.debug:
        print("\t \t \t \t DISTANCE TO WALL for LEFT TAPE is " + str(d_l))
        print("\t \t \t \t DISTANCE TO WALL for RIGHT_TAPE is " + str(d_r))
    if abs(d_r - d_l) > distanceTapes: # Protects against out of range asin errors
        print("Tape distances too far to be the same target")
        return 0
   
    beta = math.asin((d_r - d_l) / distanceTapes) # Calculate beta
    return beta
