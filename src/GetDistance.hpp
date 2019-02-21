#ifndef GET_DISTANCE_H
#define GET_DISTANCE_H

#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>

namespace GetDistance
{
std::optional<double> getDistanceToWall(std::vector<cv::Point> &box, double gamma = 0);
std::optional<double> getDistanceToTape(std::vector<cv::Point> &box, double theta, double gamma = 0);

} // namespace getDistance
#endif