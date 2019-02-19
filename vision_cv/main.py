import cv2
import sys
import WebCam
import ImageAnalysis
import config
import Constants
import AutoCalibrate
import GetAngle
import TwoCameraMeasurementConsolidation

if(__name__ == "__main__"):
    if config.LiveImage:
        frame_num = 0
        WebCam.set(port=Constants.LEFT_CAMERA_PORT, exposure=sys.argv[1])
        WebCam.set(port=Constants.RIGHT_CAMERA_PORT, exposure=sys.argv[1])
        # print("Camera 0: " + AutoCalibrate.calibrate(0, config.MIN_EXPOSURE, config.MAX_EXPOSURE, config.WEIGHTS))
        # print("Camera 1: " + AutoCalibrate.calibrate(1, config.MIN_EXPOSURE, config.MAX_EXPOSURE, config.WEIGHTS))
        while True:
            frame_num += 1
            leftImage, rightImage = WebCam.getImages()
            leftMeasurements = ImageAnalysis.imageAnalysis(leftImage) #leftMesaurements is a tuple of isVisible, left camera distance, left camera theta
            rightMeasurements = ImageAnalysis.imageAnalysis(rightImage) #rightMesaurements is a tuple of isVisible boolean, right camera distance, right camera theta
    
            beta = GetAngle.getBeta(leftMeasurements[0][0:2], leftMeasurements[1][0:2], rightMeasurements[0][0:2], rightMeasurements[1][0:2])

            if beta:
                x, y = TwoCameraMeasurementConsolidation.getXandY(finalTheta, finalDistance, beta) #distFinal, finalTheta, beta
                print(x,y)
            else:
                x, y = 0, 0
                print ("CAN'T FIND BETA")

            #finalTheta finalDistance is the final theta and distance from the center of the robot to the center of the tape.
            finalTheta, finalDistance = TwoCameraMeasurementConsolidation.finalDistanceTheta(leftMeasurements[0][3], rightMeasurements[1][3], leftMeasurements[0][2], rightMeasurements[1][2]) 
            print("FINAL THETA \t", finalTheta)
            print("FINAL DISTANCE \t", finalDistance)
    else:
        # Taking an image from folder of TestImages
        img = cv2.imread("./TestImages/TEST149.jpg")
        ImageAnalysis.imageAnalysis(img)
            