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
frame_num = 0
# import CANInterface as caninterface
# import NetworkTablesInterface as ntinterface


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
        frame_num = 0
        #print(AutoCalibrate.calibrate(1, 50, WEIGHTS))
        # #WebCam.set(exposure=10)
        WebCam.set(exposure=sys.argv[1])
        while True:
            frame_num += 1
            img = WebCam.getImage()
            cv2.imwrite("a.jpg", img)
            ImageAnalysis.imageAnalysis(img, frame_num)
        
    else:
        img = cv2.imread("./TestImages/TEST150.jpg") #Taking an image from folder of TestImages
        ImageAnalysis.imageAnalysis(img)
        
