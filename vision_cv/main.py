import cv2
import sys
import WebCam
import ImageAnalysis
import config

if(__name__ == "__main__"):
    if config.LiveImage:
        frame_num = 0
        #print(AutoCalibrate.calibrate(1, 50, WEIGHTS))
        # #WebCam.set(exposure=10)
        WebCam.set(port=0, exposure=sys.argv[1])
        WebCam.set(port=1, exposure=sys.argv[1])
        while True:
            frame_num += 1
            imgs = WebCam.getImages()
            ImageAnalysis.imageAnalysis(imgs, frame_num)

    else:
        # Taking an image from folder of TestImages
        imgs = [cv2.imread("./TestImages/TEST150.jpg"), cv2.imread("./TestImages/TEST149.jpg")]
        ImageAnalysis.imageAnalysis([imgs[0]])
