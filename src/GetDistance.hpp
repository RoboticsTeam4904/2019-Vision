#ifndef GET_DISTANCE_H
#define GET_DISTANCE_H

#include <optional>
#include <vector>
#include "Config.hpp"

namespace GetDistance
{
std::optional<double> getDistanceToWall(std::optional<Config::Box> &box, double gamma = 0);
std::optional<double> getDistanceToTape(std::optional<Config::Box> &box, double theta, double gamma = 0);
} // namespace getDistance
#endif