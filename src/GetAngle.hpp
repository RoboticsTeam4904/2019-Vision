#ifndef GET_ANGLE_H
#define GET_ANGLE_H

#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.hpp"
#include "ProcessFrame.hpp"

namespace GetAngle
{
double getAngleToTape(Box &tapeBox);
double getAngleToTapePair(cv::Point averageDistance);
double getBeta(double lLeftTapeDistWall,
               double lRightTapeDistWall,
               double rLeftTapeDistWall,
               double rRightTapeDistWall);
} // namespace GetAngle
#endif