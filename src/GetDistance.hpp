#ifndef GET_DISTANCE_H
#define GET_DISTANCE_H

#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.hpp"

namespace GetDistance
{
double getDistanceToWall(Box &box, double gamma = 0);
double getDistanceToTape(Box &box, double theta, double gamma = 0);
double getDistanceToTapePair(cv::Point averageDistance);
std::optional<cv::Point> getAverageDistance(double leftCamLeftTapeTheta, double rightCamRightTapeTheta,
                                            double leftCamLeftTapeDistance, double rightCamRightTapeDistance);
} // namespace getDistance
#endif