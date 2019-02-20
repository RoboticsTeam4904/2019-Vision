import cv2
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
    leftCamLeftTape, leftCamRightTape = ImageAnalysis.imageAnalysis(left_image) # leftMesaurements is a tuple of isVisible, left camera distance, left camera theta
    rightCamLeftTape, rightCamRightTape = ImageAnalysis.imageAnalysis(right_image) # rightMesaurements is a tuple of isVisible boolean, right camera distance, right camera theta
    if config.save: # Save images with objects drawn in
        Printing.savePair(left_image, right_image, drawn=True)

    beta = GetAngle.getBeta(leftCamLeftTape, leftCamRightTape, rightCamLeftTape, rightCamRightTape) # Gets beta
    print("\t BETA (In degrees): " +  str(beta))

    # Gets final theta and distance from center of the tape to center of the robot
    finalTheta, finalDistance = TwoCameraMeasurementConsolidation.finalDistanceTheta(leftCamLeftTape[3], 
            rightCamRightTape[3], leftCamLeftTape[2], rightCamRightTape[2]) 
    
    print("FINAL THETA (IN DEGREES): " +  str(finalTheta/math.pi * 180))
    print("FINAL DISTANCE: " + str(finalDistance))

    if beta:
        x, y = TwoCameraMeasurement.getXandY(finalTheta, finalDistance, beta) # returns x and y coordinate from center of tape to center of robot
        print("X COORDINATE", x)
        print("Y COORDINATE", y)
    else:
        x, y = 0, 0
        print("CAN'T PASS IN BETA OR FINAL DISTANCE AND THETA")
    # finalTheta finalDistance is the final theta and distance from the center of the robot to the center of the tape.

    if config.network_tables:
        NetworkTablesInterface.send_data(x, y, finalTheta, beta, finalDistance, frame_num)
    print("FINAL THETA: " +  str(finalTheta))
    print("FINAL DISTANCE: " + str(finalDistance))

if __name__ == "__main__":
    if config.live_image:
        frame_num = 0
        WebCam.set(port=Constants.LEFT_CAMERA_PORT, exposure=Constants.exposure)
        WebCam.set(port=Constants.RIGHT_CAMERA_PORT, exposure=Constants.exposure)
        for t in range(1):
            frame_num += 1
            left_image, right_image = WebCam.getImages()
            if config.save:
                Printing.savePair(left_image, right_image)
            twoCameras(left_image, right_image, frame_num)
    else:
        # Taking images from folder of TestImages
        left_image, right_image = cv2.imread("./TestImages/TEST149.jpg"), cv2.imread("./TestImages/TEST150.jpg")
        twoCameras(left_image, right_image, 0)
