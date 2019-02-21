#include <cmath>
#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.hpp"
#include "GetDistance.hpp"

std::optional<double> GetDistance::getDistanceToWall(std::optional<std::vector<cv::Point>> &box, double gamma) //gamma should be in radians
{
    if(box){
        std::vector<cv::Point>boxValue = box.value();
    }
    else{
        return std::nullopt;
    }
    cv::Point top = boxValue[3];
    cv::Point bottom = boxValue[2];
    double heightPixels = top.y - bottom.y;
    double distanceConstant = cos(gamma) * Config::DISTANCE_CONSTANT;
    double distanceToObject =  distanceConstant / heightPixels * 0.03937;
    return distanceToObject; //Return distance in inches
}

std::optional<double> GetDistance::getDistanceToTape(std::optional<std::vector<cv::Point>> &box, double theta, double gamma)
{
    if(box){
        std::vector<cv::Point>boxValue = box.value();
    }

    else{
        return std::nullopt;
    }
    cv::Point top = boxValue[3];
    cv::Point bottom = boxValue[2];
    double heightPixels = top.y - bottom.y;
    double distanceConstant = cos(gamma) * Config::DISTANCE_CONSTANT;
    double distance = distanceConstant / heightPixels * 0.03937;
    distance /= cos(theta);
    return distance;
}