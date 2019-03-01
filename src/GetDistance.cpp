#include <cmath>
#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.hpp"
#include "GetDistance.hpp"

// gamma should be in radians
double GetDistance::getDistanceToWall(Box &box, double gamma) {
    cv::Point top = box[3];
    cv::Point bottom = box[2];
    double heightPixels = top.y - bottom.y;
    double distanceConstant = cos(gamma) * Config::DISTANCE_CONSTANT;
    return distanceConstant / heightPixels * 0.03937;  // 0.03937 is the conversion from millimeters to inches
}

double GetDistance::getDistanceToTape(Box &box, double theta, double gamma) {
    cv::Point top = box[3];
    cv::Point bottom = box[2];
    double heightPixels = top.y - bottom.y;
    double distanceConstant = cos(gamma) * Config::DISTANCE_CONSTANT;
    return (distanceConstant / heightPixels * 0.03937) / cos(theta);  // 0.03937 is the conversion from millimeters to inches
}

double GetDistance::getDistanceToTapePair(cv::Point averageDistance) {
    return sqrt(pow(averageDistance.x, 2) + pow(averageDistance.y, 2));
}

std::optional<cv::Point> GetDistance::getAverageDistance(double leftCamLeftTapeTheta, double rightCamRightTapeTheta,
                                            double leftCamLeftTapeDistance, double rightCamRightTapeDistance) {
    if (!(leftCamLeftTapeDistance || rightCamRightTapeDistance))
        return std::nullopt;
    double distRatio = leftCamLeftTapeDistance / rightCamRightTapeDistance;
    return std::optional<cv::Point>(cv::Point(
        sin(leftCamLeftTapeTheta) / sin(rightCamRightTapeTheta) * distRatio,
        cos(leftCamLeftTapeTheta) / cos(rightCamRightTapeTheta) * distRatio));
}
