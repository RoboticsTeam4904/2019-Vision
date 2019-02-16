import cv2
import sys
import WebCam
import ImageAnalysis
import config
import AutoCalibrate

if(__name__ == "__main__"):
    if config.LiveImage:
        frame_num = 0
<<<<<<< HEAD
        print("Camera 0: " + AutoCalibrate.calibrate(0, 1, 100, config.WEIGHTS))
        print("Camera 1: " + AutoCalibrate.calibrate(1, 1, 100, config.WEIGHTS))
=======
        print("Camera 0: " + AutoCalibrate.calibrate(0, config.MIN_EXPOSURE, config.MAX_EXPOSURE, config.WEIGHTS))
        print("Camera 1: " + AutoCalibrate.calibrate(1, config.MIN_EXPOSURE, config.MAX_EXPOSURE, config.WEIGHTS))
        # #WebCam.set(exposure=10)
        WebCam.set(port=1, exposure=sys.argv[1])
        WebCam.set(port=0, exposure=sys.argv[1])
>>>>>>> 4b1c74326d9d5a80ea08910292ee15fbca911604
        while True:
            frame_num += 1
            imgs = WebCam.getImages()
            ImageAnalysis.imageAnalysis(imgs, frame_num)

    else:
        # Taking an image from folder of TestImages
        imgs = [cv2.imread("./TestImages/TEST150.jpg"), cv2.imread("./TestImages/TEST149.jpg")]
        ImageAnalysis.imageAnalysis([imgs[0]])
