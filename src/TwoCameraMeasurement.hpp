#ifndef GET_ANGLE_H
#define GET_ANGLE_H

#include <optional>
#include <vector>
#include "Config.hpp"
#include "ProcessFrame.hpp"

namespace TwoCameraMeasurement
{
// ThetaLeftCamLeftTape, ThetaRightCamRightTape, DistLeftCamLeftTape, DistRightCamRightTape
std::pair<double, double> finalDistanceTheta(double thetaLeftCamLeftTape,
                                                double thetaRightCamRightTape,
                                                double distLeftCamLeftTape,
                                                double distRightCamRightTape);
cv::Point getRobotCoords(double finalTheta, double distFinal, double beta);
}
#endif
