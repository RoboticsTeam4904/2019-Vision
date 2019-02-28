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
#include "ProcessFrame.hpp"

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
    nt::NetworkTableEntry ntBetaEntry, ntThetaEntry, ntDistanceEntry;
    if (Config::USE_NETWORKTABLES) {
        inst = nt::NetworkTableInstance::GetDefault();
        inst.StartClientTeam(Config::TEAM_NUMBER, Config::NETWORKTABLES_PORT);
        ntBetaEntry = inst.GetEntry("Vision/rfTape/beta");
        ntThetaEntry = inst.GetEntry("Vision/rfTape/theta");
        ntDistanceEntry = inst.GetEntry("Vision/rfTape/distance");
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
        beta = 0,
        theta = 0,
        distance = 0;
    while (true)
    {
        if (Config::DEBUG)
            timeStart = std::chrono::duration_cast<std::chrono::milliseconds>(
                            std::chrono::system_clock::now().time_since_epoch())
                            .count();

        // Read frames from either camera. If at least one of the cameras cannot be read from, continue
        bool leftFrameRead = leftCamera.read(leftImg);
        bool rightFrameRead = rightCamera.read(rightImg);
        if (!leftFrameRead)
            std::cout << "Unable to get left image from camera with port " << Config::LEFT_CAMERA_PORT << std::endl;
        if (!rightFrameRead) 
            std::cout << "Unable to get right image from camera with port " << Config::RIGHT_CAMERA_PORT << std::endl;
        if (!(leftFrameRead || rightFrameRead)) continue;

        std::optional<ProcessFrame::Result> leftFrameResult = ProcessFrame::process(pipeline, leftImg);
        if (!leftFrameResult) continue;
        ProcessFrame::Result leftFrameData = leftFrameResult.value();
 
        std::optional<ProcessFrame::Result> rightFrameResult = ProcessFrame::process(pipeline, rightImg);
        if (!rightFrameResult) continue;
        ProcessFrame::Result rightFrameData = rightFrameResult.value();

        // Use data from both cameras to calculate angle relative to the wall
        beta = GetAngle::getBeta(
            leftFrameData.left.distanceWall,
            leftFrameData.right.distanceWall,
            rightFrameData.left.distanceWall,
            rightFrameData.right.distanceWall);

        std::optional<cv::Point> averageDistanceOpt = 
            GetDistance::getAverageDistance(
                leftFrameData.left.theta, rightFrameData.right.theta,
                leftFrameData.left.distance, rightFrameData.right.distance);
        if (averageDistanceOpt) {
            cv::Point averageDistance = averageDistanceOpt.value();
            theta = GetAngle::getAngleToTapePair(averageDistance);
            distance = GetDistance::getDistanceToTapePair(averageDistance);
        }

        // Communicate output
        if (Config::USE_NETWORKTABLES) {
            ntBetaEntry.SetDouble(beta);
            ntThetaEntry.SetDouble(theta);
            ntDistanceEntry.SetDouble(distance);
        }
        std::cout << "BETA (In degrees): " << beta / M_PI * 180 << std::endl;

        if (Config::DEBUG) 
            std::cout << "Time per frame: "
                      << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch())
                                 .count() -
                             timeStart
                      << std::endl;
    }
}
