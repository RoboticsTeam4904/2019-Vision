import cv2
import time
import math
import sys
import WebCam
import ImageAnalysis
import config
import Constants
import TwoCameraMeasurement
import GetAngle
import Printing
#import NetworkTablesInterface
   

def twoCameras(left_image, right_image, frame_num):
    leftMeasurements = ImageAnalysis.imageAnalysis(left_image, Constants.LEFT_CAMERA_PORT) # leftMesaurements is a tuple of isVisible, left camera distance, left camera theta
    rightMeasurements = ImageAnalysis.imageAnalysis(right_image, Constants.RIGHT_CAMERA_PORT) # rightMesaurements is a tuple of isVisible boolean, right camera distance, right camera theta
    print("LEFT DISTANCE TO WALL: " + str(leftMeasurements[0][1]))
    print("RIGHT DISTANCE TO WALL: " + str(rightMeasurements[1][1]))
    if config.save: # Save images with objects drawn in
        Printing.savePair(left_image, right_image, drawn=True)

    if (not leftMeasurements[0][0] and not rightMeasurements[0][0]) or (not leftMeasurements[1][0] and not rightMeasurements[1][0]): # Make sure we have a measurement for each tape
        isVisible = False
        return 0
    beta = GetAngle.getBeta(leftMeasurements[0][0:2], leftMeasurements[1][0:2], rightMeasurements[0][0:2], rightMeasurements[1][0:2]) #Get's beta
    print("BETA (In degrees): " +  str(beta/math.pi * 180))
    if(not leftMeasurements[0][0] and not rightMeasurements[1][0]): # Make sure we have D1,1 and D2,2
        return 0
    #Get's final theta and distance from center of the tape to center of the robot
    finalTheta, finalDistance = TwoCameraMeasurement.finalDistanceTheta(leftMeasurements[0][3], 
            rightMeasurements[1][3], leftMeasurements[0][2], rightMeasurements[1][2]) 
    
    #print("FINAL THETA (IN DEGREES): " +  str(finalTheta/math.pi * 180))
    #print("FINAL DISTANCE: " + str(finalDistance))

    if beta:
        x, y = TwoCameraMeasurement.getXandY(finalTheta, finalDistance, beta) #returns x and y coordinate from center of tape to center of robot
        print("X COORDINATE", x)
	print("Y COORDINATE", y)
    else:
        x, y = 0, 0
        print ("CAN'T GET BETA OR FINAL DISTANCE")
    #finalTheta finalDistance is the final theta and distance from the center of the robot to the center of the tape.
    """if config.network_tables:
        NetworkTablesInterface.send_data(x, y, finalTheta, beta, finalDistance, frame_num)"""
if __name__ == "__main__":
    if config.live_image:
        frame_num = 0
        WebCam.set(port=Constants.LEFT_CAMERA_PORT, exposure=Constants.exposure)
        WebCam.set(port=Constants.RIGHT_CAMERA_PORT, exposure=Constants.exposure)
        for t in range(2):
            frame_num += 1
            left_image, right_image = WebCam.getImages()
            if config.save:
                Printing.savePair(left_image, right_image)
            twoCameras(left_image, right_image, frame_num)
    else:
        # Taking images from folder of TestImages
        left_image, right_image = cv2.imread("./TestImages/TEST149.jpg"), cv2.imread("./TestImages/TEST150.jpg")
        twoCameras(left_image, right_image, 0)
