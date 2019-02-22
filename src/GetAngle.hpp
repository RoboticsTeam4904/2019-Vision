#ifndef GET_ANGLE_H
#define GET_ANGLE_H

#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.hpp"

namespace GetAngle
{
    std::optional<double> getTheta(std::optional<Box> &tapeBox);
    std::optional<double> getBeta(std::optional<double> &lLeftTapeDistWall,
                                std::optional<double> &lRightTapeDistWall,
                                std::optional<double> &rLeftTapeDistWall,
                                std::optional<double> &rRightTapeDistWall);
} // namespace getAngle
#endif