#include <cmath>
#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.cpp"
#include "GetDistance.hpp"

std::optional<double> GetDistance::getDistanceToWall(std::vector<cv::Point> &box, double gamma) //gamma should be in radians
{
    if (box.size() < 4) return std::nullopt;
    cv::Point top = box[3];
    cv::Point bottom = box[2];
    double heightPixels = top.y - bottom.y;
    double distanceConstant = cos(gamma) * Config::DISTANCE_CONSTANT;
    return std::optional<double>(distanceConstant / heightPixels * 0.03937); // TODO: I have no clue what 0.03937 is but make it a constant
}

std::optional<double> GetDistance::getDistanceToTape(std::vector<cv::Point> &box, double theta, double gamma)
{
    if (box.size() < 4) return std::nullopt;
    cv::Point top = box[3];
    cv::Point bottom = box[2];
    double heightPixels = top.y - bottom.y;
    double distanceConstant = cos(gamma) * Config::DISTANCE_CONSTANT;
    return std::optional<double>((distanceConstant / heightPixels * 0.03937) / cos(theta)); // TODO: I have no clue what 0.03937 is but make it a constant
}