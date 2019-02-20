#include <cmath>∏
#include <vector>
#include <opencv2/opencv.hpp>
#include "GetAngle.hpp"
#include "config.hpp"

//Function returns theta in radians
void getAngle::getTheta(s&box) 
{
    cv::Point top = &box[0];    // The top point of the box
    cv::Point left = &box[1];   // The leftmost point of the box
    cv::Point bottom = &box[2]; // The botttom point of the box
    cv::Point right = &box[3];  // The rightmost point of the box
    double width = right.x - left.x;
    double height = top.y - bottom.y;
    double averageX = (left.x + right.x) / 2;
    double P2 = imageWidth / 2;
    double P1 = averageX - P2;
    double theta = atan(P1 * tan(FOV / 2) / P2);
    return theta;
}

//Function returns beta in radians
double getAngle::getBeta(&lLeftTapeDistWall, &lRightTapeDistWall, &rLeftTapeDistWall,
                         &rRightTapeDistWall, distanceTapes = 279.4)
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

    distanceLeftTape /= counter

        counter = 0

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

    distanceRightTape /= counter
    double beta = asin((distanceRightTape - distanceLeftTape) / distanceTapes);
    return beta;
}