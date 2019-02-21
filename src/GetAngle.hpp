#pragma once
#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>

namespace GetAngle
{
    std::optional<double> getTheta(std::optional<std::vector<cv::Point>> &box);
    std::optional<double> getBeta(std::optional<double> &lLeftTapeDistWall,
                std::optional<double> &lRightTapeDistWall, std::optional<double> &rLeftTapeDistWall,
                std::optional<double> &rRightTapeDistWall);
} // namespace getAngle