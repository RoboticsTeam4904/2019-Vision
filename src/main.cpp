#define _USE_MATH_DEFINES

#include <chrono>
#include <cmath>
#include <iostream>
#include <vector>
#include "Config.hpp"
#include "GetAngle.hpp"
#include "GetBoxes.hpp"
#include "GetDistance.hpp"
#include "GripPipeline.h"
#include "PairFinding.hpp"

unsigned long timeStart = 0;

int main()
{
    std::cout
        << "Running with DEBUG=" << Config::DEBUG
        << " USE_NETWORKTABLES=" << Config::USE_NETWORKTABLES
        << " NETWORKTABLES_PORT=" << Config::NETWORKTABLES_PORT
        << " TEAM_NUMBER=" << Config::TEAM_NUMBER
        << std::endl;

    grip::GripPipeline pipeline = grip::GripPipeline();
    cv::VideoCapture leftCamera(Config::LEFT_CAMERA_PORT);
    cv::VideoCapture rightCamera(Config::RIGHT_CAMERA_PORT);
    cv::Mat leftImg, rightImg;
    std::vector<std::vector<cv::Point>> leftBoxes, rightBoxes;
    std::pair<std::optional<Box>, std::optional<Box>> leftBoxesPair, rightBoxesPair;
    double
        lLeftDistanceWall = 0,
        lRightDistanceWall = 0,
        rLeftDistanceWall = 0, rRightDistanceWall = 0,
        lLeftTheta = 0, lRightTheta = 0,
        rLeftTheta = 0, rRightTheta = 0,
        lLeftDistanceTape = 0, lRightDistanceTape = 0,
        rLeftDistanceTape = 0, rRightDistanceTape = 0,
        beta = 0;
    while (true)
    {
        if (Config::DEBUG)
            timeStart = std::chrono::duration_cast<std::chrono::milliseconds>(
                            std::chrono::system_clock::now().time_since_epoch())
                            .count();

        if (leftCamera.read(leftImg))
        {
            leftBoxes = GetBoxes::getTapeBoxes(leftImg, pipeline); // TODO: for both right and left this value is set twice. Which is right?
            if (!leftBoxes.size())
            {
                std::cout << "No images found after filtering for left camera" << std::endl;
                continue;
            }
            leftBoxesPair = PairFinding::pairFinding(rightBoxes);
            if (leftBoxesPair[0])
            {
                lLeftDistanceWall = GetDistance::getDistanceToWall(leftBoxesPair[0].value());
                lLeftTheta = GetAngle::getTheta(leftBoxesPair[0].value());
                lLeftDistanceTape = GetDistance::getDistanceToTape(leftBoxesPair[0].value(), lLeftTheta);
            }

            if (leftBoxesPair[1])
            {
                lRightDistanceWall = GetDistance::getDistanceToWall(leftBoxesPair[1].value());
                lRightTheta = GetAngle::getTheta(leftBoxesPair[1].value());
                lRightDistanceTape = GetDistance::getDistanceToTape(leftBoxesPair[1].value(), lRightTheta);
            }
        }
        else
        {
            std::cout << "Unable to get image from camera with port " << Config::LEFT_CAMERA_PORT << std::endl;
        }
        if (rightCamera.read(rightImg))
        {
            rightBoxes = GetBoxes::getTapeBoxes(rightImg, pipeline);
            if (!rightBoxes.size())
            {
                std::cout << "No images found after filtering for right camera" << std::endl;
                continue;
            }
            rightBoxesPair = PairFinding::pairFinding(rightBoxes);
            if (rightBoxesPair[0])
            {
                rLeftDistanceWall = GetDistance::getDistanceToWall(rightBoxesPair[0].value());
                rLeftTheta = GetAngle::getTheta(rightBoxesPair[0].value());
                rLeftDistanceTape = GetDistance::getDistanceToTape(rightBoxesPair[0].value(), rLeftTheta);
            }

            if (rightBoxesPair[1])
            {
                rRightDistanceWall = GetDistance::getDistanceToWall(rightBoxesPair[1].value());
                rRightTheta = GetAngle::getTheta(rightBoxesPair[1].value());
                rRightDistanceTape = GetDistance::getDistanceToTape(rightBoxesPair[1].value(), rRightTheta);
            }
        }
        else
        {
            std::cout << "Unable to get image from camera with port " << Config::RIGHT_CAMERA_PORT << std::endl;
        }
        beta = GetAngle::getBeta(lLeftDistanceWall, lRightDistanceWall, rLeftDistanceWall, rRightDistanceWall);
        std::cout << "BETA (In degrees): " << beta / M_PI * 180 << std::endl;
        if (Config::DEBUG)
            std::cout << "Time per frame: "
                      << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch())
                                 .count() -
                             timeStart
                      << std::endl;
    }
}
}