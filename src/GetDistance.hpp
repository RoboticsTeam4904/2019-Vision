#pragma once
#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>

namespace GetDistance
{
std::optional<double> getDistanceToWall(std::optional<std::vector<cv::Point>> &box, double gamma = 0);
std::optional<double> getDistanceToTape(std::optional<std::vector<cv::Point>> &box, double theta, double gamma = 0);

} // namespace getDistance