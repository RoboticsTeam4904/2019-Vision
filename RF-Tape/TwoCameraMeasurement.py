import math

def finalDistanceTheta(ThetaLeftCamLeftTape, ThetaRightCamRightTape, DistLeftCamLeftTape, DistRightCamRightTape):
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

def getXandY(finalTheta, distFinal, beta):
    x = (distFinal * math.sin(finalTheta + beta))
    y = (distFinal * math.cos(finalTheta + beta))
    return x, y



