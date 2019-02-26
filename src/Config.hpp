#ifndef CONFIG_H
#define CONFIG_H

#include <string>
#include <opencv2/opencv.hpp>

/* *
    * A box is a vector of 4 points: the left, right, bottom, and top of a contour. 
*/
typedef std::vector<cv::Point> Box;
typedef std::vector<cv::Point> Contour;
namespace Config
{
/* *
    * Image Capture Settings
*/
extern bool LIVE_IMAGE;
extern bool TWO_CAMERAS;
extern int LEFT_CAMERA_PORT;
extern int RIGHT_CAMERA_PORT;

/* *
    * Logging/Debug Settings
*/
extern bool DISPLAY;
extern bool SAVE;
extern bool SAVE_IN_FOLDER;
extern bool DEBUG;
extern bool EXTRA_DEBUG; // step through each contour in the webcam by turning on extra_debug

/* *
    * Network Output Settings
*/
extern bool USE_NETWORKTABLES;
extern bool CAN;
extern bool SOCKETS;

/* *
    * Contour Finding Settings
    * Because they are passed straight extern into opencv, these values cannot be  or 
*/
extern double HUE_RANGE[2];
extern double SAT_RANGE[2];
extern double VAL_RANGE[2];

/* *
    * WEIGHTS are mutiplied against the scoring_metric. The higher weight value the more we value the metric when finding contours
*/
extern int HW_RATIO;
extern int AREA_RATIO;
extern int FILLED_AREA;
extern int ROTATION_ANGLE_INFUNC;
extern int ROTATION_ANGLE_OUTFUNC;

/* *
    * When filtering the image, the image should only choose "scores" above the threshold 
*/
extern int MIN_THRESHOLD;

// Ideal ratio of length and width of slanted bounding box of tape
extern double TAPE_DIM_RATIO;
// Ideal ratio of different areas of tape contours
extern double TAPE_AREA_RATIO;

/* *
    * Camera Settings
*/
extern double EXPOSURE;
extern double FOV;

/* *
    * Distance and Anngle Finding Settings
*/
extern double DISTANCE_CONSTANT;   // ant to get distance
extern double DISTANCE_TAPES; // millimeters
extern double ANGLE_THRESHOLD;

/* *
    * Vertical feet from camera to bottom of vision target + Height of target in feet
*/
extern double DISPLACEMENT;
extern double CAMERA_TILT;
extern int RESOLUTION[2];
// experimentally determined 10 pxl per deg at 640x480, going down by a v smol amount at the edge of the frame

/* *
    * Misc
*/
extern std::string IP; // TODO: Fix Value
extern int TEAM_NUMBER;
extern double NETWORK_SPEED;
extern bool EDITED;
extern std::string SAMPLE_IMAGE;

/* *
    * Number of frames to wait until reinitializing sockets. If 0, never close the socket
*/
extern int SOCKET_RECONNECT_RATE;

// This is networktables stuff, figure it out
extern bool USE_NETWORKTABLES;
extern int NETWORKTABLES_PORT;
extern int TEAM_NUMBER;
} // namespace Config
#endif