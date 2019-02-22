#ifndef PAIRFINDING_H
#define PAIRFINDING_H

#include <optional>
#include <utility>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.hpp"

namespace PairFinding
{
std::pair<std::optional<Box>, std::optional<Box>> pairFinding(std::vector<Box> &tapeBoxes);
Box checkLargestTape(std::vector<Box> &tapeBoxes);
}
#endif