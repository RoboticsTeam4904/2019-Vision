#include <optional>
#include <vector>`
#include <opencv2/opencv.hpp>

namespace getAngle
{
    double getTheta(std::vector<cv::Point> &box, double FOV = 1.229, double imageWidth = 640.0);
    double getBeta(std::vector<cv::Point> &box, std::optional<double> &lLeftTapeDistWall,
                std::optional<double> &lRightTapeDistWall, std::optional<double> &rLeftTapeDistWall,
                std::optional<double> &rRightTapeDistWall, double distanceTapes = 279.4);
} // namespace getAngle