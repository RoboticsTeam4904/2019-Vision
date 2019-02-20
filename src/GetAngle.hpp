#pragma once
#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>

namespace GetAngle
{
    double getTheta(std::vector<cv::Point> &box);
    double getBeta(std::optional<double> &lLeftTapeDistWall,
                std::optional<double> &lRightTapeDistWall, std::optional<double> &rLeftTapeDistWall,
                std::optional<double> &rRightTapeDistWall);
} // namespace getAngle