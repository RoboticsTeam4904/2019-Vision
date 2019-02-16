import cv2
import numpy as np
from PIL import Image
import ScoringMetric
import sys
import math
import WebCam
import PairFinding
import random
import GetDistance
import HSVThreshold
import Printing
import GetContours
import AutoCalibrate
import ImageAnalysis
import config
# import CANInterface as caninterface
# import NetworkTablesInterface as ntinterface

if(__name__ == "__main__"):
    if config.LiveImage:
        frame_num = 0
        #print(AutoCalibrate.calibrate(1, 50, WEIGHTS))
        # #WebCam.set(exposure=10)
        WebCam.set(exposure=sys.argv[1])
        while True:
            frame_num += 1
            imgs = WebCam.getImages()
            ImageAnalysis.imageAnalysis(imgs, frame_num)

    else:
        # Taking an image from folder of TestImages
        img = cv2.imread("./TestImages/TEST150.jpg")
        ImageAnalysis.imageAnalysis(img)
