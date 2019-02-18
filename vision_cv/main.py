import cv2
import sys
import WebCam
import ImageAnalysis
import config
import Constants

if(__name__ == "__main__"):
    if config.LiveImage:
        frame_num = 0
<<<<<<< HEAD
        WebCam.set(port=Constants.LEFT_CAMERA_PORT, exposure=sys.argv[1])
        WebCam.set(port=Constants.RIGHT_CAMERA_PORT, exposure=sys.argv[1])
=======
        print("Camera 0: " + AutoCalibrate.calibrate(0, config.MIN_EXPOSURE, config.MAX_EXPOSURE, config.WEIGHTS))
        print("Camera 1: " + AutoCalibrate.calibrate(1, config.MIN_EXPOSURE, config.MAX_EXPOSURE, config.WEIGHTS))
>>>>>>> e8a96807cb27237fe484df5dbfd915e35fd7501b
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
