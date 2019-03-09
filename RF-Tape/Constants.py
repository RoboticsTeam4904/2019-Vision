# Settings that should be globally pushed when changed
import cv2
import numpy as np

LEFT_CAMERA_PORT = 1 
RIGHT_CAMERA_PORT = 0
ONE_CAMERA_PORT = 0

# Contour Finding Settings
HUE_RANGE = (50, 94)
SAT_RANGE = (103, 255)
VAL_RANGE = (150, 255)
FIND_CONTOURS_MODE = cv2.RETR_EXTERNAL  # find only outer contours
# FIND_CONTOURS_MODE = cv2.RETR_LIST    # also find contours within other contours

# Box Scoring Settings
AREA_RANGE =        (50, 10000)
PERIMETER_RANGE =   (0, 10000)
WIDTH_RANGE =       (10, 500)
HEIGHT_RANGE =      (10, 500)
SOLIDITY_RANGE =    (50, 100)
VERTICES_RANGE =    (0, 1000000)
RATIO_RANGE =       (0.2, 5)
WEIGHTS = { # Mutiplied against the scoring_metric. The higher weight value the more we value the metric when finding contours
    "hw_ratio": 5,
    "area": 1,
    "contour_area_values": 10,
    "rotation_angle_infunc": 1,
    "rotation_angle_outfunc": 1,
}
MIN_THRESHOLD = 13 # When filtering the image, the image should only choose "scores" above the threshold

# Camera Settings
exposure = 10
EXPOSURE_RANGE = (1, 50) # for autocalibration

# Vertical feet from camera to bottom of vision target + Height of target in feet
DIST_BETWEEN_CAMS = 10 # inches

#(6.5 + 5)/12.0
VERTICAL_CAMERA_TILT = 0 # degrees
width = 8.25/12  # from centers. targets are 2x5 inches and 6.25 inches apart
resolution = (640, 480)
# experimentally determined 10 pxl per deg at 640x480, going down by a v smol amount at the edge of the frame
nativeAngle = (np.radians(64), np.radians(48))
degPerPxl = np.divide(nativeAngle, resolution)

# Misc
# -------------
ip = "10.49.4.2"  # TODO: Fix Value
team = 4904
networkSpeed = 0.02
# number of frames to wait until reinitializing sockets. If 0, never close the socket
socket_reconnect_rate = 1
port = 5802
