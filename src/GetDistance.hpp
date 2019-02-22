#ifndef GET_DISTANCE_H
#define GET_DISTANCE_H

#include <optional>
#include <vector>
#include "Config.hpp"

namespace GetDistance
{
double getDistanceToWall(Box &box, double gamma = 0);
double getDistanceToTape(Box &box, double theta, double gamma = 0);
} // namespace getDistance
#endif