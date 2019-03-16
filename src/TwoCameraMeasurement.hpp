#ifndef GET_ANGLE_H
#define GET_ANGLE_H

#include <optional>
#include <vector>
#include "Config.hpp"
#include "ProcessFrame.hpp"

namespace TwoCameraMeasurement
{
// ThetaLeftCamLeftTape, ThetaRightCamRightTape, DistLeftCamLeftTape, DistRightCamRightTape
double finalDistanceTheta(double thetaLeftCamLeftTape,
                double thetaRightCamRightTape,
                double distLeftCamLeftTape,
                double distRightCamRightTape);
double getXandY(finalTheta, distFinal, beta);
}
#endif