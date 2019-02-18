import cv2
import sys
import WebCam
import ImageAnalysis
import config
import Constants
import AutoCalibrate
import GetAngle

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
            print(GetAngle.getBeta(leftMeasurements[0][0:2], leftMeasurements[1][0:2], rightMeasurements[0][0:2],
            rightMeasurements[1:2]))
            print(type(leftMeasurements, rightMeasurements))
    else:
        # Taking an image from folder of TestImages
        img = cv2.imread("./TestImages/TEST149.jpg")
        ImageAnalysis.imageAnalysis(img)
            print(type(leftMeasurements, rightMeasurements))