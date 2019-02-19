import cv2
import sys
import WebCam
import ImageAnalysis
import config
import Constants

def twoCameras(left_image, right_image, frame_num):
    leftMeasurements = ImageAnalysis.imageAnalysis(leftImage) # leftMesaurements is a tuple of isVisible, left camera distance, left camera theta
    rightMeasurements = ImageAnalysis.imageAnalysis(rightImage) # rightMesaurements is a tuple of isVisible boolean, right camera distance, right camera theta
    if config.save: # save images with objects drawn in
        Printing.savePair(leftImage, rightImage, drawn=True)

if(__name__ == "__main__"):
    if config.live_image:
        frame_num = 0
        WebCam.set(port=Constants.LEFT_CAMERA_PORT, exposure=Constants.exposure)
        WebCam.set(port=Constants.RIGHT_CAMERA_PORT, exposure=Constants.exposure)
        while True:
            frame_num += 1
            left_image, right_image = WebCam.getImages()
            if config.save:
                Printing.savePair(left_image, right_image)
            twoCameras(left_image, right_image, frame_num)
    else:
        # Taking images from folder of TestImages
        left_image, right_image = cv2.imread("./TestImages/TEST149.jpg"), cv2.imread("./TestImages/TEST150.jpg")
        two_camera_main(left_image, right_image, 0)

