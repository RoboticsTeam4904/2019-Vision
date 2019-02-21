#include <string>
#include "Config.hpp"

/* *
    * Image Capture Settings
*/
bool Config::LIVE_IMAGE = false;
bool Config::TWO_CAMERAS = true;
int Config::LEFT_CAMERA_PORT = 0;
int Config::RIGHT_CAMERA_PORT = 1;

/* *
    * Logging/Debug Settings
*/
bool Config::DISPLAY = true;
bool Config::SAVE = false;
bool Config::SAVE_IN_FOLDER = true;
bool Config::DEBUG = true;
bool Config::EXTRA_DEBUG = false; // step through each contour in the webcam by turning on extra_debug

/* *
    * Network Output Settings
*/
bool Config::USE_NETWORKTABLES = true;
bool Config::CAN = false;
bool Config::SOCKETS = false;

/* *
    * Contour Finding Settings
    * Because they are passed straight into opencv, these values cannot be  or 
*/
double Config::HUE_RANGE[2] = {50, 90};
double Config::SAT_RANGE[2] = {80, 255};
double Config::VAL_RANGE[2] = {142, 218};

/* *
    * WEIGHTS are mutiplied against the scoring_metric. The higher weight value the more we value the metric when finding contours
*/
int Config::HW_RATIO = 5;
int Config::AREA_RATIO = 1;
int Config::FILLED_AREA = 10;
int Config::ROTATION_ANGLE_INFUNC = 1;
int Config::ROTATION_ANGLE_OUTFUNC = 1;

/* *
    * When filtering the image, the image should only choose "scores" above the threshold 
*/
int Config::MIN_THRESHOLD = 13;

// Ideal ratio of length and width of slanted bounding box of tape
double Config::TAPE_DIM_RATIO = 2.75;
// Ideal ratio of different areas of tape contours
double Config::TAPE_AREA_RATIO = 0.5698;

/* *
    * Camera Settings
*/
double Config::EXPOSURE = 10;
double Config::FOV = 1.229;

/* *
    * Distance Finding Settings
*/
double Config::DISTANCE_CONSTANT = 96185.4; // ant to get distance
double Config::DISTANCE_TAPES = 279.4; // millimeters
double ANGLE_THRESHOLD = .3;

/* *
    * Vertical feet from camera to bottom of vision target + Height of target in feet
*/
double Config::DISPLACEMENT = (6.5 + 5) / 12.0;
double Config::CAMERA_TILT = 0.0;
int Config::RESOLUTION[2] = {640, 480};
// experimentally determined 10 pxl per deg at 640x480, going down by a v smol amount at the edge of the frame

/* *
    * Misc
*/
std::string Config::IP = "10.49.4.2"; // TODO: Fix Value
int Config::TEAM_NUMBER = 4904;
double Config::NETWORK_SPEED = 0.02;
bool Config::EDITED = false;
std::string Config::SAMPLE_IMAGE = "TestImages/GearTest.png";

/* *
    * Number of frames to wait until reinitializing sockets. If 0, never close the socket
*/
int Config::SOCKET_RECONNECT_RATE = 1;
int Config::NETWORKTABLES_PORT = 5802;
