#include <cmath>
#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.hpp"
#include "GetAngle.hpp"

// Function returns theta in radians
std::optional<double> GetAngle::getTheta(std::optional<std::vector<cv::Point>> &box)
{
    if (box)
    {
        std::vector<cv::Point> boxValue = box.value();
        cv::Point top = boxValue[0];    // The top point of the box
        cv::Point left = boxValue[1];   // The leftmost point of the box
        cv::Point bottom = boxValue[2]; // The botttom point of the box
        cv::Point right = boxValue[3];  // The rightmost point of the box
        double width = right.x - left.x;
        double height = top.y - bottom.y;
        double averageX = (left.x + right.x) / 2;
        double P2 = width / 2;
        double P1 = averageX - P2;
        double theta = atan(P1 * tan(Config::FOV / 2) / P2);
        return theta;
    }
    else
    {
        return std::nullopt;
    }
}

// Function returns beta in radians
std::optional<double> GetAngle::getBeta(std::optional<double> &lLeftTapeDistWall,
                                        std::optional<double> &lRightTapeDistWall, std::optional<double> &rLeftTapeDistWall,
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

    if (distanceRightTape == 0 && distanceLeftTape == 0)
    {
        return std::nullopt;
    }

    distanceRightTape /= counter;
    double beta = asin((distanceRightTape - distanceLeftTape) / Config::DISTANCE_TAPES);
    return beta;
}