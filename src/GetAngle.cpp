#include <cmath>
#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.hpp"
#include "GetAngle.hpp"

// Function returns theta in radians
double GetAngle::getTheta(Box &tapeBox)
{

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
double GetAngle::getBeta(double lLeftTapeDistWall,
                         double lRightTapeDistWall, 
                         double rLeftTapeDistWall,
                         double rRightTapeDistWall)
{
    double distanceLeftTape += lLeftTapeDistWall + rLeftTapeDistWall;
    if (!distanceLeftTape && lLeftTapeDistWall && rLeftTapeDistWall)
        distanceLeftTape /= 2;

    double distanceRightTape += lRightTapeDistWall + rRightTapeDistWall;
    if (!distanceRightTape && lRightTapeDistWall && rRightTapeDistWall)
        distanceRightTape /= 2;

    return asin((distanceRightTape - distanceLeftTape) / Config::DISTANCE_TAPES);
}