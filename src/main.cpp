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
    std::optional<double> 
        lLeftDistanceWall, lRightDistanceWall,
        rLeftDistanceWall, rRightDistanceWall, 
        lLeftTheta, lRightTheta,
        rLeftTheta, rRightTheta,
        lLeftDistanceTape, lRightDistanceTape, 
        rLeftDistanceTape, rRightDistanceTape,
        beta;
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
            leftBoxes = PairFinding::pairFinding(leftBoxes);
            lLeftDistanceWall = GetDistance::getDistanceToWall(leftBoxes[0]);
            lRightDistanceWall = GetDistance::getDistanceToWall(leftBoxes[1]);
            lLeftTheta = GetAngle::getTheta(leftBoxes[0]);
            lRightTheta = GetAngle::getTheta(leftBoxes[1]);
            lLeftDistanceTape = GetDistance::getDistanceToTape(leftBoxes[0], lLeftTheta);
            lRightDistanceTape = GetDistance::getDistanceToTape(leftBoxes[1], lRightTheta);
        }
        else
        {
            std::cout << "Unable to get image from camera with port " << Config::LEFT_CAMERA_PORT << std::endl;

            if (rightCamera.read(rightImg))
            {
                rightBoxes = GetBoxes::getTapeBoxes(rightImg, pipeline);
                if (!rightBoxes.size())
                {
                    std::cout << "No images found after filtering for right camera" << std::endl;
                    continue;
                }
                rightBoxes = PairFinding::pairFinding(rightBoxes);
                rLeftDistanceWall = GetDistance::getDistanceToWall(rightBoxes[0]);
                rRightDistanceWall = GetDistance::getDistanceToWall(rightBoxes[1]);
                rLeftTheta = GetAngle::getTheta(rightBoxes[0]);
                rRightTheta = GetAngle::getTheta(rightBoxes[1]);
                rLeftDistanceTape = GetDistance::getDistanceToTape(rightBoxes[0], rLeftTheta);
                rRightDistanceTape = GetDistance::getDistanceToTape(rightBoxes[1], rRightTheta);
            }
            else
            {
                std::cout << "Unable to get image from camera with port " << Config::RIGHT_CAMERA_PORT << std::endl;
            }
            beta = GetAngle::getBeta(lLeftDistanceWall, lRightDistanceWall, rLeftDistanceWall, rRightDistanceWall);
            std::cout << "BETA (In degrees): " << beta.value() / M_PI * 180 << std::endl;
            if (Config::DEBUG)
                std::cout << "Time per frame: "
                          << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch())
                                     .count() -
                                 timeStart
                          << std::endl;
        }
    }
}