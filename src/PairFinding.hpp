#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.hpp"

namespace PairFinding
{
std::pair<std::optional<Config::Box>, std::optional<Box>> pairFinding(std::vector<Box> &tapeBoxes);
Box checkLargestTape(std::vector<Box> &tapeBoxes);
}