#include <optional>
#include <vector>`
#include <opencv2/opencv.hpp>
#include <cmath>
#include "GetDistance.hpp"

std::optional<double> getDistance::getDistanceToWall(std::vector<cv::Point> &box,
                                                     double distanceConstant = 96185.4, double gamma = 0) //gamma should be in radians
{
    cv::Point top = box[3];
    cv::Point bottom = box[2];
    double heightPixels = top.y - bottom.y;
    distanceConstant *= cos(gamma);
    double distanceToObject distanceConstant / heightPixels * 0.03937;
    return distanceToObject //Returning distance in inches
}

std::optional<double> getDistance::getDistanceToTape(std::vector<cv::Point> &box, double theta,
                                                     double distanceConstant = 96185.4, double gamma = 0)
{
    cv::Point top = box[3];
    cv::Point bottom = box[2];
    double heightPixels = top.y - bottom.y;
    distanceConstant *= cos(gamma);
    double distance = distanceConstant / heightPixels * 0.03937;
    distance /= cos(theta);
    return distance
}