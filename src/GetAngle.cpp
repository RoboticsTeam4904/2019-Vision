#include <cmath>
#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.hpp"
#include "GetAngle.hpp"

// Function returns theta in radians
std::optional<double> GetAngle::getTheta(std::optional<Config::Box> &tapeBox)
{
    if (!tapeBox)
        return std::nullopt;
    Config::Box tapeBox = tapeBox.value();
    cv::Point top = tapeBox[0];    // The top point of the box
    cv::Point left = tapeBox[1];   // The leftmost point of the box
    cv::Point bottom = tapeBox[2]; // The botttom point of the box
    cv::Point right = tapeBox[3];  // The rightmost point of the box
    double width = right.x - left.x;
    double height = top.y - bottom.y;
    double averageX = (left.x + right.x) / 2;
    double P2 = width / 2;
    double P1 = averageX - P2;
    return atan(P1 * tan(Config::FOV / 2) / P2);
}

// Function returns beta in radians
std::optional<double> GetAngle::getBeta(std::optional<double> &lLeftTapeDistWall,
                                        std::optional<double> &lRightTapeDistWall, 
                                        std::optional<double> &rLeftTapeDistWall,
                                        std::optional<double> &rRightTapeDistWall)
{
    double distanceLeftTape = 0;
    double distanceRightTape = 0;

    int counter = 0;
    if (lLeftTapeDistWall)
    {
        distanceLeftTape += lLeftTapeDistWall.value();
        ++counter;
    }
    if (rLeftTapeDistWall)
    {
        distanceLeftTape += rLeftTapeDistWall.value();
        ++counter;
    }
    if (!counter)
        return std::nullopt;
    distanceLeftTape /= counter;

    counter = 0;
    if (lRightTapeDistWall)
    {
        distanceRightTape += lRightTapeDistWall.value();
        ++counter;
    }
    if (rRightTapeDistWall)
    {
        distanceRightTape += rRightTapeDistWall.value();
        ++counter;
    }
    if (!counter)
        return std::nullopt;
    distanceRightTape /= counter;

    return asin((distanceRightTape - distanceLeftTape) / Config::DISTANCE_TAPES);
}