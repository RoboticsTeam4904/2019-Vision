#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.hpp"

namespace PairFinding
{
std::pair<std::optional<Config::Config::Box>, std::optional<Config::Box>> pairFinding(std::vector<Config::Box> &tapeConfig::Boxes);
Config::Box checkLargestTape(std::vector<Config::Box> &tapeConfig::Boxes);
}