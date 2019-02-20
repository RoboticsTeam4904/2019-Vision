#pragma once
#include <optional>
#include <vector>`
#include <opencv2/opencv.hpp>

namespace getDistance
{
std::optional<double> getDistanceToWall(std::vector<cv::Point> &box, double gamma = 0);
std::optional<double> getDistanceToTape(std::vector<cv::Point> &box, double theta, double gamma = 0);

} // namespace getDistance