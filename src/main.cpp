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
#include "networktables/NetworkTable.h"
#include "networktables/NetworkTableEntry.h"
#include "networktables/NetworkTableInstance.h"
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
    
    // Networktables stuff
    nt::NetworkTableInstance inst;
    nt::NetworkTableEntry ntBetaEntry;
    if (Config::USE_NETWORKTABLES) {
        inst = nt::NetworkTableInstance::GetDefault();
        inst.StartClientTeam(TEAM_NUMBER, NETWORKTABLES_PORT);
        ntBetaEntry = inst.GetEntry("Vision/rfTape/beta");
    }

    grip::GripPipeline pipeline = grip::GripPipeline();
    cv::VideoCapture leftCamera(Config::LEFT_CAMERA_PORT);
    cv::VideoCapture rightCamera(Config::RIGHT_CAMERA_PORT);
    cv::Mat leftImg, rightImg;
    std::vector<Box> leftBoxes, rightBoxes;
    std::pair<std::optional<Box>, std::optional<Box>> leftBoxesPair, rightBoxesPair;
    double
        lLeftDistanceWall = 0, lRightDistanceWall = 0,
        rLeftDistanceWall = 0, rRightDistanceWall = 0,
        lLeftDistanceTape = 0, lRightDistanceTape = 0,
        rLeftDistanceTape = 0, rRightDistanceTape = 0,
        lLeftTheta = 0, lRightTheta = 0,
        rLeftTheta = 0, rRightTheta = 0,
        beta = 0;
    while (true)
    {
        if (Config::DEBUG)
            timeStart = std::chrono::duration_cast<std::chrono::milliseconds>(
                            std::chrono::system_clock::now().time_since_epoch())
                            .count();

        // Read frames from either camera. If at least one of the cameras cannot be read from, continue
        bool leftFrameRead = leftCamera.read(leftImg);
        if (!leftFrameRead)
            std::cout << "Unable to get image from camera with port " << Config::LEFT_CAMERA_PORT << std::endl;
        if (!rightCamera.read(rightImg)) {
            std::cout << "Unable to get image from camera with port " << Config::RIGHT_CAMERA_PORT << std::endl;
            if (!leftFrameRead)
                continue;
        }

        // Process the left camera's frame
        leftBoxes = GetBoxes::getTapeBoxes(leftImg, pipeline); // TODO: for both right and left this value is set twice. Which is right?
        if (!leftBoxes.size())
        {
            std::cout << "No images found after filtering for left camera" << std::endl;
            continue;
        }
        leftBoxesPair = PairFinding::pairFinding(rightBoxes);
        if (leftBoxesPair.first)
        {
            Box pair = leftBoxesPair.first.value();
            lLeftDistanceWall = GetDistance::getDistanceToWall(pair);
            lLeftTheta = GetAngle::getTheta(pair);
            lLeftDistanceTape = GetDistance::getDistanceToTape(pair, lLeftTheta);
        }
        if (leftBoxesPair.second)
        {
            Box pair = leftBoxesPair.second.value();
            lRightDistanceWall = GetDistance::getDistanceToWall(pair);
            lRightTheta = GetAngle::getTheta(pair);
            lRightDistanceTape = GetDistance::getDistanceToTape(pair, lRightTheta);
        }

        // Process the right camera's frame
        rightBoxes = GetBoxes::getTapeBoxes(rightImg, pipeline);
        if (!rightBoxes.size())
        {
            std::cout << "No images found after filtering for right camera" << std::endl;
            continue;
        }
        rightBoxesPair = PairFinding::pairFinding(rightBoxes);
        if (rightBoxesPair.first)
        {
            Box pair = rightBoxesPair.first.value();
            rLeftDistanceWall = GetDistance::getDistanceToWall(pair);
            rLeftTheta = GetAngle::getTheta(pair);
            rLeftDistanceTape = GetDistance::getDistanceToTape(pair, rLeftTheta);
        }
        if (rightBoxesPair.second)
        {
            Box pair = rightBoxesPair.second.value();
            rRightDistanceWall = GetDistance::getDistanceToWall(pair);
            rRightTheta = GetAngle::getTheta(pair);
            rRightDistanceTape = GetDistance::getDistanceToTape(pair, rRightTheta);
        }

        // Use data from both cameras to calculate angle relative to the wall
        beta = GetAngle::getBeta(lLeftDistanceWall, lRightDistanceWall, rLeftDistanceWall, rRightDistanceWall);

        // Communicate output
        if (Config::USE_NETWORKTABLES)
            ntBetaEntry.SetDouble(beta);
        std::cout << "BETA (In degrees): " << beta / M_PI * 180 << std::endl;

        if (Config::DEBUG) 
            std::cout << "Time per frame: "
                      << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch())
                                 .count() -
                             timeStart
                      << std::endl;
    }
}