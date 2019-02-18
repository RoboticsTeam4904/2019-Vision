import cv2
import numpy as np

LEFT_CAMERA_PORT = 0
RIGHT_CAMERA_PORT = 1

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

#WEIGHTS are mutiplied against the scoring_metric. The higher weight value the more we value the metric when finding contours
WEIGHTS = {
    "hw_ratio": 5,
    "area": 1,
    "contour_area_values": 10,
    "rotation_angle_infunc": 1,
    "rotation_angle_outfunc": 1,
}

#When filtering the image, the image should only choose "scores" above the threshold 
MIN_THRESHOLD = 13

# Camera settings
# --------------
exposure = 15
# Vertical feet from camera to bottom of vision target + Height of target in feet
displacement = (6.5 + 5)/12.0
cameraTilt = 0
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
withOpenCV3 = int(cv2.__version__[0]) == 3
edited = False
sampleImage = "TestImages/GearTest.png"
# number of frames to wait until reinitializing sockets. If 0, never close the socket
socket_reconnect_rate = 1
port = 5802
