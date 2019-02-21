#ifndef CONFIG_H
#define CONFIG_H

#include <string>

namespace Config {

/* *
    * Image Capture Settings
*/
    constexpr bool LIVE_IMAGE = false;
    constexpr bool TWO_CAMERAS = true;
    constexpr int LEFT_CAMERA_PORT = 0;
    constexpr int RIGHT_CAMERA_PORT = 1;

/* *
    * Logging/Debug Settings
*/
    constexpr bool DISPLAY = true;
    constexpr bool SAVE = false;
    constexpr bool SAVE_IN_FOLDER = true;
    constexpr bool DEBUG = true;
    constexpr bool EXTRA_DEBUG = false;  // step through each contour in the webcam by turning on extra_debug

/* *
    * Network Output Settings
*/
    constexpr bool USE_NETWORKTABLES = true;
    constexpr bool CAN = false;
    constexpr bool SOCKETS = false;

/* *
    * Contour Finding Settings
    * Because they are passed straight into opencv, these values cannot be const or constexpr
*/
    double HUE_RANGE[2] = {50, 90};
    double SAT_RANGE[2] = {80, 255};
    double VAL_RANGE[2] = {142, 218};

/* *
    * WEIGHTS are mutiplied against the scoring_metric. The higher weight value the more we value the metric when finding contours
*/
    constexpr int HW_RATIO = 5;
    constexpr int AREA_RATIO = 1;
    constexpr int FILLED_AREA = 10;
    constexpr int ROTATION_ANGLE_INFUNC = 1;
    constexpr int ROTATION_ANGLE_OUTFUNC = 1;

/* *
    * When filtering the image, the image should only choose "scores" above the threshold 
*/
    constexpr int MIN_THRESHOLD = 13;

    // Ideal ratio of length and width of slanted bounding box of tape
    constexpr double TAPE_DIM_RATIO = 2.75;
    // Ideal ratio of different areas of tape contours
    constexpr double TAPE_AREA_RATIO = 0.5698;

/* *
    * Camera Settings
*/
    constexpr double EXPOSURE = 10;
    constexpr double FOV = 1.229;

/* *
    * Distance and Anngle Finding Settings
*/
    constexpr double DISTANCE_CONSTANT = 96185.4; // Constant to get distance
    constexpr double DISTANCE_TAPES = 279.4; // millimeters
    constexpr double ANGLE_THRESHOLD = .3;

/* *
    * Vertical feet from camera to bottom of vision target + Height of target in feet
*/
    constexpr double DISPLACEMENT = (6.5 + 5) / 12.0;
    constexpr double CAMERA_TILT = 0.0;
    constexpr int RESOLUTION[2] = {640, 480};
// experimentally determined 10 pxl per deg at 640x480, going down by a v smol amount at the edge of the frame

/* *
    * Misc
*/
    const std::string IP = "10.49.4.2";  // TODO: Fix Value
    constexpr int TEAM_NUMBER = 4904;
    constexpr double NETWORK_SPEED = 0.02;
    constexpr bool EDITED = false;
    const std::string SAMPLE_IMAGE = "TestImages/GearTest.png";

/* *
    * Number of frames to wait until reinitializing sockets. If 0, never close the socket
*/
    constexpr int SOCKET_RECONNECT_RATE = 1;
    constexpr int NETWORKTABLES_PORT = 5802;
}

#endif