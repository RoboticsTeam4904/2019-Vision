#include <cmath>
#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.hpp"
#include "GetDistance.hpp"

std::optional<double> GetDistance::getDistanceToWall(std::vector<cv::Point> &box, double gamma) //gamma should be in radians
{
    cv::Point top = box[3];
    cv::Point bottom = box[2];
    double heightPixels = top.y - bottom.y;
    double distanceConstant = cos(gamma) * DISTANCE_CONSTANT;
    double distanceToObject =  distanceConstant / heightPixels * 0.03937;
    return distanceToObject; //Return distance in inches
}

std::optional<double> GetDistance::getDistanceToTape(std::vector<cv::Point> &box, double theta, double gamma)
{
    cv::Point top = box[3];
    cv::Point bottom = box[2];
    double heightPixels = top.y - bottom.y;
    double distanceConstant = cos(gamma) * DISTANCE_CONSTANT;
    double distance = distanceConstant / heightPixels * 0.03937;
    distance /= cos(theta);
    return distance;
}