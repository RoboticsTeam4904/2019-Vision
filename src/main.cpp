#define _USE_MATH_DEFINES

#include <chrono>
#include <cmath>
#include <iostream>
#include <utility>
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
    std::vector<Box> leftBoxes, rightBoxes;
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
            if (leftBoxesPair.first)
            {
                lLeftDistanceWall = GetDistance::getDistanceToWall(leftBoxesPair.first.value());
                lLeftTheta = GetAngle::getTheta(leftBoxesPair.first.value());
                lLeftDistanceTape = GetDistance::getDistanceToTape(leftBoxesPair.first.value(), lLeftTheta);
            }

            if (leftBoxesPair.second)
            {
                lRightDistanceWall = GetDistance::getDistanceToWall(leftBoxesPair.second.value());
                lRightTheta = GetAngle::getTheta(leftBoxesPair.second.value());
                lRightDistanceTape = GetDistance::getDistanceToTape(leftBoxesPair.second.value(), lRightTheta);
            }
        }
        else
            std::cout << "Unable to get image from camera with port " << Config::LEFT_CAMERA_PORT << std::endl;

        if (rightCamera.read(rightImg))
        {
            rightBoxes = GetBoxes::getTapeBoxes(rightImg, pipeline);
            if (!rightBoxes.size())
            {
                std::cout << "No images found after filtering for right camera" << std::endl;
                continue;
            }
            rightBoxesPair = PairFinding::pairFinding(rightBoxes);
            if (rightBoxesPair.first)
            {
                rLeftDistanceWall = GetDistance::getDistanceToWall(rightBoxesPair.first.value());
                rLeftTheta = GetAngle::getTheta(rightBoxesPair.first.value());
                rLeftDistanceTape = GetDistance::getDistanceToTape(rightBoxesPair.first.value(), rLeftTheta);
            }

            if (rightBoxesPair.second)
            {
                rRightDistanceWall = GetDistance::getDistanceToWall(rightBoxesPair.second.value());
                rRightTheta = GetAngle::getTheta(rightBoxesPair.second.value());
                rRightDistanceTape = GetDistance::getDistanceToTape(rightBoxesPair.second.value(), rRightTheta);
            }
        }
        else
            std::cout << "Unable to get image from camera with port " << Config::RIGHT_CAMERA_PORT << std::endl;

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