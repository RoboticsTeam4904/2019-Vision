#include <cmath>
#include <optional>
#include <utility>
#include <vector>
#include <opencv2/opencv.hpp>
#include "TwoCameraMeasurement.hpp"

std::pair<double, double> TwoCameraMeasurement::finalDistanceTheta(double thetaLeftCamLeftTape,
                                                double thetaRightCamRightTape,
                                                double distLeftCamLeftTape,
                                                double distRightCamRightTape) 

{
    //X Coordinates
    double left_x = distLeftCamLeftTape * sin(thetaLeftCamLeftTape);
    double right_x = distLeftCamRightTape * sin(thetaLeftCamRightTape);
    //Y Coordinates
    double left_y = distLeftCamLeftTape * cos(thetaLeftCamLeftTape);
    double right_y = distLeftCamRightTape * cos(thetaLeftCamRightTape);
    double averageX = (left_x + right_x) / 2; 
    double averageY = (left_y + right_y) / 2;

    double finalTheta = atan(averageX / averageY);
    double distFinal = sqrt(pow(averageX, 2) + pow(averageY, 2));

    return std::pair<double, double>(finalTheta, distFinal);
}

cv::Point TwoCameraMeasurement::getRobotCoords(double finalTheta, double distFinal, double beta) {
    double x = distFinal * sin(finalTheta - beta);
    double y = distFinal * cos(finalTheta - beta);
    return cv::Point(x, y);
}