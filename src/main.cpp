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

int main() {
    std::cout
            << "Running with DEBUG=" << Config::DEBUG
            << " USE_NETWORKTABLES=" << Config::USE_NETWORKTABLES
            << " NETWORKTABLES_PORT=" << Config::NETWORKTABLES_PORT
            << " TEAM_NUMBER=" << Config::TEAM_NUMBER
            << std::endl;

    grip::GripPipeline pipeline = grip::GripPipeline();
    cv::VideoCapture leftCamera(Config::LEFT_CAMERA_PORT);
    cv::VideoCapture rightCamera(Config::RIGHT_CAMERA_PORT);
    cv::Mat leftImg;
    cv::Mat rightImg;
    std::vector<std::vector<cv::Point>> leftBoxes;
    std::vector<std::vector<cv::Point>> rightBoxes;
    std::optional<double> lLeftDistanceWall;
    std::optional<double> lRightDistanceWall;
    std::optional<double> rLeftDistanceWall;
    std::optional<double> rRightDistanceWall;
    std::optional<double> lLeftTheta;
    std::optional<double> lRightTheta;
    std::optional<double> rLeftTheta;
    std::optional<double> rRightTheta;
    std::optional<double> lLeftDistanceTape;
    std::optional<double> lRightDistanceTape;
    std::optional<double> rLeftDistanceTape;
    std::optional<double> rRightDistanceTape;
    std::optional<double> beta;
    while (true) {
        if (Config::DEBUG)
            timeStart = std::chrono::duration_cast<std::chrono::milliseconds>(
                    std::chrono::system_clock::now().time_since_epoch()).count();

        if (leftCamera.read(leftImg)) {
            leftBoxes = getBoxes::getBoxes(leftImg, pipeline);
            if(!leftBoxes.size()){
                std::cout << "No images found after filtering for left camera" << std::endl;
                continue;
            }
            leftBoxes = pairFinding::pairFinding(leftBoxes);
            lLeftDistanceWall = GetDistance::getDistanceToWall(leftBoxes[0]);
            lRightDistanceWall = GetDistance::getDistanceToWall(leftBoxes[1]);
            lLeftTheta = GetAngle::getTheta(leftBoxes[0]);
            lRightTheta = GetAngle::getTheta(leftBoxes[1]);
            lLeftDistanceTape = GetDistance::getDistanceToTape(leftBoxes[0], lLeftTheta);
            lRightDistanceTape = GetDistance::getDistanceToTape(leftBoxes[1], lRightTheta);
            
        } else {
            std::cout << "Unable to get image from camera with port " << Config::LEFT_CAMERA_PORT << std::endl;

        if (rightCamera.read(rightImg)) {
            rightBoxes = getBoxes::getBoxes(rightImg, pipeline);
            if(!rightBoxes.size()){
                std::cout << "No images found after filtering for right camera" << std::endl;
                continue;
            }
            rightBoxes = pairFinding::pairFinding(rightBoxes);
            rLeftDistanceWall = GetDistance::getDistanceToWall(rightBoxes[0]);
            rRightDistanceWall = GetDistance::getDistanceToWall(rightBoxes[1]);
            rLeftTheta = GetAngle::getTheta(rightBoxes[0]);
            rRightTheta = GetAngle::getTheta(rightBoxes[1]);
            rLeftDistanceTape = GetDistance::getDistanceToTape(rightBoxes[0], rLeftTheta);
            rRightDistanceTape = GetDistance::getDistanceToTape(rightBoxes[1], rRightTheta);


        } else {
            std::cout << "Unable to get image from camera with port " << Config::RIGHT_CAMERA_PORT << std::endl;
        }
        beta = GetAngle::getBeta(lLeftDistanceWall, lRightDistanceWall, rLeftDistanceWall, rRightDistanceWall);
        std::cout<<"BETA (In degrees): " << beta/M_PI * 180<<std::endl;
        if (DEBUG)
            std::cout << "Time per frame: "
                      << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch())
                                 .count() -
                             timeStart
                      << std::endl;
    }
}