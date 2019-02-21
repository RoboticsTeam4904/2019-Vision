#include <vector>
#include <opencv2/opencv.hpp>

namespace pairFinding
{
std::vector<std::optional<std::vector<cv::Point>>> pairFinding(std::vector<std::vector<cv::Point>> boxes);
std::vector<cv::Point> checkLargestTape(std::vector<std::vector<cv::Point>> boxes);
}