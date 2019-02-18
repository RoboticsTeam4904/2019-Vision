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
            leftMeasurements = ImageAnalysis.imageAnalysis(leftImage)
            rightMeasurements = ImageAnalysis.imageAnalysis(rightImage)
            print(type(leftMeasurements, rightMeasurements))

    else:
        # Taking an image from folder of TestImages
        imgs = [cv2.imread("./TestImages/TEST149.jpg"), cv2.imread("./TestImages/TEST150.jpg")]
        ImageAnalysis.imageAnalysis([imgs[0]])
