#pragma once
#include <opencv2/opencv.hpp>

/* *
    * Image Capture Settings
*/
#define LIVE_IMAGE false
#define TWO_CAMERAS true
#define LEFT_CAMERA_PORT 0
#define RIGHT_CAMERA_PORT 1

/* *
    * Logging/Debug Settings
*/
#define DISPLAY true
#define SAVE false
#define SAVE_IN_FOLDER true
#define DEBUG true
#define EXTRA_DEBUG false  // step through each contour in the webcam by turning on extra_debug

/* *
    * Network Output Settings
*/
#define USE_NETWORKTABLES true
#define CAN false
#define SOCKETS false

/* *
    * Contour Finding Settings
*/
#define HUE_RANGE {50, 90}
#define SAT_RANGE {80, 255}
#define VAL_RANGE {142, 218}

/* *
    * WEIGHTS are mutiplied against the scoring_metric. The higher weight value the more we value the metric when finding contours
*/

#define HW_RATIO 5
#define AREA_RATIO 1
#define FILLED_AREA 10
#define ROTATION_ANGLE_INFUNC 1
#define ROTATION_ANGLE_OUTFUNC 1

/* *
    * When filtering the image, the image should only choose "scores" above the threshold 
*/
#define MIN_THRESHOLD 13

/* *
    * Camera Settings
*/
#define exposure 10
#define FOV 1.229

/* *
    * Distance Finding Settings
*/
#define DISTANCE_CONSTANT  96185.4 // Constant to get distance
#define DISTANCE_TAPES 279.4 // millimeters

/* *
    * Vertical feet from camera to bottom of vision target + Height of target in feet
*/

#define DISPLACEMENT (6.5 + 5) / 12.0
#define CAMERA_TILT 0
#define RESOLUTION[2] {640, 480};

/* *
    * Misc
*/
#define IP "10.49.4.2"  // TODO: Fix Value
#define TEAM_NUMBER 4904
#define NETWORK_SPEED 0.02
#define EDITED false
#define SAMPLE_IMAGE "TestImages/GearTest.png"

/* *
    * Number of frames to wait until reinitializing sockets. If 0, never close the socket
*/

#define SOCKET_RECONNECT_RATE 1
#define NETWORKTABLES_PORT 5802