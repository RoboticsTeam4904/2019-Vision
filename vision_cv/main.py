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
MIN_THRESHOLD = 13

WEIGHTS = {
    "hw_ratio": 10,
    "area": 1,
    "contour_area_values": 5,
    "rotation_angle_infunc":1,
    "rotation_angle_outfunc":1,
}

if(__name__ == "__main__"):
    if config.LiveImage:
        print(AutoCalibrate.calibrate(1, 50, WEIGHTS))
        while True:
            img = WebCam.getImage()
            ImageAnalysis.imageAnalysis(img)
        
    else:
        img = cv2.imread("../../../Desktop/TestImages/TEST0.jpg")
        ImageAnalysis.imageAnalysis(img)
        
