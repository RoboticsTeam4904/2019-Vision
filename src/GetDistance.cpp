#include <cmath>
#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.hpp"
#include "GetDistance.hpp"

double GetDistance::getDistanceToWall(Box &box, double gamma)  // gamma should be in radians
{

    cv::Point top = box[3];
    cv::Point bottom = box[2];
    double heightPixels = top.y - bottom.y;
    double distanceConstant = cos(gamma) * Config::DISTANCE_CONSTANT;
    return std::optional<double>(distanceConstant / heightPixels * 0.03937);  // 0.03937 is the conversion from millimeters to inches
}

double GetDistance::getDistanceToTape(Box &box, double theta, double gamma) {
    cv::Point top = box[3];
    cv::Point bottom = box[2];
    double heightPixels = top.y - bottom.y;
    double distanceConstant = cos(gamma) * Config::DISTANCE_CONSTANT;
    return std::optional<double>((distanceConstant / heightPixels * 0.03937) / cos(theta));  // 0.03937 is the conversion from millimeters to inches
}