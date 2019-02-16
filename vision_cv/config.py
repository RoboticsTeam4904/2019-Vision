import cv2
import numpy as np

# Image Capture Settings
LiveImage = True 
NumCameras = 1

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


WEIGHTS = {
    "hw_ratio": 5,
    "area": 1,
    "contour_area_values": 10,
    "rotation_angle_infunc":1,
    "rotation_angle_outfunc":1,
}

MIN_THRESHOLD = 13

# Logging/debug settings
# --------------
debug = True
extra_debug = False #step through each contour in the webcam by turning on extra_debug
save = False
display = True
sockets = False

# Camera settings
# --------------
exposure = 15
gain = 10
contrast = 50
displacement = (6.5 + 5)/12.0 # Vertical feet from camera to bottom of vision target + Height of target in feet
cameraTilt = 0
width = 8.25/12 #from centers. targets are 2x5 inches and 6.25 inches apart
resolution = (640, 480)
nativeAngle  = (np.radians(64), np.radians(48)) #experimentally determined 10 pxl per deg at 640x480, going down by a v smol amount at the edge of the frame
degPerPxl = np.divide(nativeAngle, resolution)

# Misc
# -------------
ip = "10.49.4.2" #TODO: Fix Value 
team = 4904
networkSpeed = 0.02
withOpenCV3 = int(cv2.__version__[0]) == 3
edited = False
sampleImage = "TestImages/GearTest.png"
socket_reconnect_rate = 1  # number of frames to wait until reinitializing sockets. If 0, never close the socket
port = 5802
