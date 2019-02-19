import cv2
import sys
import ImageAnalysis
import config
import Constants
import AutoCalibrate
import GetAngle
import time
import TwoCameraMeasurementConsolidation
import WebCam
#import NetworkTablesInterface

start_time = time.time()
if(__name__ == "__main__"):
    if config.LiveImage:
        frame_num = 0
        WebCam.set(port=Constants.LEFT_CAMERA_PORT, exposure=sys.argv[1])
        WebCam.set(port=Constants.RIGHT_CAMERA_PORT, exposure=sys.argv[1])
        # print("Camera 0: " + AutoCalibrate.calibrate(0, config.MIN_EXPOSURE, config.MAX_EXPOSURE, config.WEIGHTS))
        # print("Camera 1: " + AutoCalibrate.calibrate(1, config.MIN_EXPOSURE, config.MAX_EXPOSURE, config.WEIGHTS))
        while True: #"while True" code can only run if LiveImage from config.py is set to True
            frame_num += 1
            leftImage, rightImage = WebCam.getImages()
            leftMeasurements = ImageAnalysis.imageAnalysis(leftImage) #leftMesaurements is a tuple of isVisible, left camera distance, left camera theta
            rightMeasurements = ImageAnalysis.imageAnalysis(rightImage) #rightMesaurements is a tuple of isVisible boolean, right camera distance, right camera theta
            if leftMeasurements[0] and rightMeasurements[0] == False:
                isVisible = False 
                continue
            beta = GetAngle.getBeta(leftMeasurements[0][0:2], leftMeasurements[1][0:2], rightMeasurements[0][0:2], rightMeasurements[1][0:2]) #Get's beta
	    print("THIS IS BETA", beta)
            #Get's final theta and distance from center of the tape to center of the robot
            if(leftMeasurements[0] or rightMeasurements[0]):
	        finalTheta, finalDistance = TwoCameraMeasurementConsolidation.finalDistanceTheta(leftMeasurements[0][3], 
	        rightMeasurements[1][3], leftMeasurements[0][2], rightMeasurements[1][2]) 
	        if beta:
                    x, y = TwoCameraMeasurementConsolidation.getXandY(finalTheta, finalDistance, beta) #returns x and y coordinate from center of tape to center of robot
                    print("X COORDINATE", x)
		    print("Y COORDINATE", y)
                else:
                    x, y = 0, 0
                    print ("CAN'T PASS IN BETA OR FINAL DISTANCE AND THETA")
            #finalTheta finalDistance is the final theta and distance from the center of the robot to the center of the tape.
            
            #NetworkTablesInterface.send_data(x, y, finalTheta, beta, finalDistance, frame_num)
            print("FINAL THETA: " +  str(finalTheta))
            print("FINAL DISTANCE: " + str(finalDistance))
    else:
        # Taking an image from folder of TestImages
        img = cv2.imread("./x.jpg")
        #img = cv2.imread("./TestImages/TEST0.jpg")
        ImageAnalysis.imageAnalysis(img)
        print("START TIME: " + str(start_time))
        print("FPS: " + str(1/(time.time()-start_time)))
