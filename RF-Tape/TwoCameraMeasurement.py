import math

distanceTapes = 11

# LC_LT = Left Camera, Left Tape
def extrapolateData(LC_LT, LC_RT, RC_LT, RC_RT):
    data = {}
    if LC_LT and RC_RT:
        data["theta"], data["dist"] = calcThetaDist(LC_LT["theta"], RC_RT["theta"], LC_LT["real_dist"], RC_RT["real_dist"])
    beta = calcBeta(LC_LT, LC_RT, RC_LT, RC_RT)
    if beta != None:
        data["beta"] = beta
    
    LL_forward_dist, LL_real_dist, LL_theta = leftCamLeftTape
    LR_forward_dist, LR_real_dist, LR_theta = LC_RT
    RL_forward_dist, RL_real_dist, RL_theta = RC_LT
    RR_forward_dist, RR_real_dist, RR_theta = RC_RT




def calcThetaDist(ThetaLeftCamLeftTape, ThetaRightCamRightTape, DistLeftCamLeftTape, DistRightCamRightTape):
    # left_x computes the x coordinate from the distance and theta of the left camera to the left tape
    left_x = (DistLeftCamLeftTape  * math.sin(ThetaLeftCamLeftTape))
    # right_x computes the x coordinate from distance and theta from the right camera to the right tape
    right_x = (DistRightCamRightTape * math.sin(ThetaRightCamRightTape))

    # left_y computes the y coordinate from distance and theta from the left camera to the left tape
    left_y = (DistLeftCamLeftTape * math.cos(ThetaLeftCamLeftTape))
    # right_y computes the y coordinate from distance and theta from the right camera to the right tape
    right_y = (DistRightCamRightTape * math.cos(ThetaRightCamRightTape))

    print("LEFT_X:", left_x)
    print("RIGHT_X:", right_x)
    print("LEFT_Y:",  left_y)
    print("RIGHT_Y:", right_y)
    averageX = (left_x + right_x)/2 #averageX is the x coordinate from the center of the tape to the center of the robot 
    averageY = (left_y + right_y)/2 #averageY is the y coordinate from the center of the tape to the center of the robot 

    finalTheta = math.atan(averageX/averageY) #range of arctan is from -90 degress to 90 degrees
    distFinal = math.sqrt((averageX**2) + (averageY**2))

    return finalTheta, distFinal

def calcXY(finalTheta, distFinal, beta):
    x = (distFinal * math.sin(finalTheta + beta))
    y = (distFinal * math.cos(finalTheta + beta))
    return x, y

# distanceCameras is the distance between cameras
def calcBeta(leftCamLeftTape, rightCamLeftTape, leftCamRightTape, rightCamRightTape): # The distance between the two tapes
    # d_l, d_r are distances to wall

    if leftCamLeftTape and rightCamLeftTape:
        d_l = 1/2.0 * (leftCamLeftTape['forward_dist'] + rightCamLeftTape['forward_dist'])
    elif leftCamLeftTape:
        d_l = leftCamLeftTape['forward_dist']
    elif rightCamLeftTape:
        d_l = rightCamLeftTape['forward_dist']
    else:
        print("Left tape not visible from either camera (for beta calc)")
        return None

    if leftCamRightTape and rightCamRightTape:
        d_r = 1/2.0 * (leftCamRightTape['forward_dist'] + rightCamRightTape['forward_dist'])
    elif leftCamRightTape:
        d_r = leftCamRightTape['forward_dist']
    elif rightCamRightTape:
        d_r = rightCamRightTape['forward_dist']
    else:
        print("Right tape not visible from either camera (for beta calc)")
        return None

    if config.debug:
        print("\t \t \t \t DISTANCE TO WALL for LEFT TAPE is " + str(d_l))
        print("\t \t \t \t DISTANCE TO WALL for RIGHT_TAPE is " + str(d_r))
    if abs(d_r - d_l) > distanceTapes: # Protects against out of range asin errors
        print("Tape distances too far to be the same target")
        return None
   
    beta = math.asin((d_r - d_l) / distanceTapes) # Calculate beta
    if config.debug:
            print("\t BETA (In degrees): {}".format(beta))
    return beta

    