import cv2
import sys
import WebCam
import ImageAnalysis
import config
import Constants

if(__name__ == "__main__"):
    if config.LiveImage:
        frame_num = 0
        WebCam.set(port=Constants.LEFT_CAMERA_PORT, exposure=sys.argv[1])
        WebCam.set(port=Constants.RIGHT_CAMERA_PORT, exposure=sys.argv[1])
        while True:
            frame_num += 1
            leftImage, rightImage = WebCam.getImages()
            leftMeasurements = ImageAnalysis.imageAnalysis(leftImage) #leftMesaurements is a tuple of isVisible, left camera distance, left camera theta
            rightMeasurements = ImageAnalysis.imageAnalysis(rightImage) #rightMesaurements is a tuple of isVisible boolean, right camera distance, right camera theta
            print(type(leftMeasurements, rightMeasurements))
    else:
        # Taking an image from folder of TestImages
        imgs = [cv2.imread("./TestImages/TEST149.jpg"), cv2.imread("./TestImages/TEST150.jpg")]
        ImageAnalysis.imageAnalysis([imgs[0]])
