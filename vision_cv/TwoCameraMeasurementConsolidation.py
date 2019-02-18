import math

def finalDistanceTheta(theta1, theta2, leftCameraleftTape, cam2distance2):
    #x1 takes the x coordinate from camera 1 on the robot. This takes in the distance from the camera1 to the tape and the  from camera 1 theta to tape
    x1 = (leftCameraleftTape  * math.sin(theta1)) 
    #x2 takes the x coordinate from camera 2 on the robot. This takes in the distance from the camera2 to the tape and the theta from camera2 to tape
    x2 = (cam2distance2 * math.sin(theta2)) 
    
    #y1 takes the y coordinate from camera 1 on the robot. This takes in the distance from the camera2 to the tape and the theta from camera2 to tape
    y1 = (cam1distance1 * math.cos(theta1))
    #y1 takes the y coordinate from camera 1 on the robot. This takes in the distance from the camera2 to the tape and the theta from camera2 to tape
    y2 = (cam2distance2 * math.cos(theta2))

    averageX = ((x1 + x2)/2))
    averageY = ((y1 + y2/2))

    thetaFinal = math.atan(averageX/averageY)
    distanceFinal = math.sqrt((averageX^2) + (averageY^2))
    
    return thetaFinal, distanceFinal

def getXandY(dist, finalTheta, finalBeta):
    x = (distanceFinal * math.sin(finalTheta + finalBeta))
    y = (distanceFinal * math.cos(finalTheta + finalBeta))
    return (x, y)
