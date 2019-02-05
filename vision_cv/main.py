import cv2
import numpy as np
from PIL import Image
import ScoringMetric
import sys
import math
import WebCam
import PairFinding
import random
import GetDistanceAngle
import HSVThreshold
import Printing
import GetContours
import AutoCalibrate
import ImageAnalysis
import config


MIN_AREA = 50
MIN_PERIMETER = 0.0
MIN_WIDTH = 0
MAX_WIDTH = 500
MIN_HEIGHT = 0
MAX_HEIGHT = 500
SOLIDITY = [0, 100.0]
MAX_VERTICES = 1000000.0
MIN_VERTICES = 0
MIN_RATIO = 0
MAX_RATIO = 30

WEIGHTS = {
    "hw_ratio": 5,
    "area": 1,
    "contour_area_values": 10,
    "rotation_angle_infunc":1,
    "rotation_angle_outfunc":1,
}

MIN_THRESHOLD = 13

if(__name__ == "__main__"):
    if config.LiveImage:
        print(AutoCalibrate.calibrate(1, 50, WEIGHTS))
        WebCam.set(exposure=sys.argv[1])
        while True:
            img = WebCam.getImage()
            ImageAnalysis.imageAnalysis(img)
        
    else:
        #img = cv2.imread("../../../vision_cv/TestImages/TEST0.jpg")
        img = cv2.imread("/Users/yasnara/Documents/Coding/FRC/2019-Vision/vision_cv/TestImages/TEST0.jpg")
        ImageAnalysis.imageAnalysis(img)
        
