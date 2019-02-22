#include <cmath>
#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.hpp"
#include "GetDistance.hpp"

std::optional<double> GetDistance::getDistanceToWall(std::optional<Box> &box, double gamma = 0)  //gamma should be in radians
{
    if (!box) 
        return std::nullopt;
    Box boxValue = box.value();
    cv::Point top = boxValue[3];
    cv::Point bottom = boxValue[2];
    double heightPixels = top.y - bottom.y;
    double distanceConstant = cos(gamma) * Config::DISTANCE_CONSTANT;
    return std::optional<double>(distanceConstant / heightPixels * 0.03937);  // TODO: I have no clue what 0.03937 is but make it a constant
}

std::optional<double> GetDistance::getDistanceToTape(std::optional<Box> &box, double theta, double gamma = 0) {
    if (!box)
        return std::nullopt;
    std::vector<cv::Point> boxValue = box.value();
    cv::Point top = boxValue[3];
    cv::Point bottom = boxValue[2];
    double heightPixels = top.y - bottom.y;
    double distanceConstant = cos(gamma) * Config::DISTANCE_CONSTANT;
    return std::optional<double>((distanceConstant / heightPixels * 0.03937) / cos(theta));  // TODO: I have no clue what 0.03937 is but make it a constant
}