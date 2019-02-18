import cv2
import numpy as np

# Image Capture Settings
NUM_CAMERAS = 2
LiveImage = True

# Contour Finding Settings
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
MIN_EXPOSURE = 1
MAX_EXPOSURE = 100


WEIGHTS = {
    "hw_ratio": 5,
    "area": 1,
    "contour_area_values": 10,
    "rotation_angle_infunc": 1,
    "rotation_angle_outfunc": 1,
}

MIN_THRESHOLD = 13

debug = True
extra_debug = False  # step through each contour in the webcam by turning on extra_debug
save = False
display = True
sockets = False
