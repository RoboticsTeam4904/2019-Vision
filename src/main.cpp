#include <chrono>
#include <iostream>
#include <vector>
#include <opencv2/opencv.hpp>
#include "config.hpp"
#include "GetBoxes.hpp"
#include "GripPipeline.h"

unsigned long timeStart = 0;

int main()
{
    std::cout
        << "Running with DEBUG=" << DEBUG
        << " USE_NETWORKTABLES=" << USE_NETWORKTABLES
        << " NETWORKTABLES_PORT=" << NETWORKTABLES_PORT
        << " TEAM_NUMBER=" << TEAM_NUMBER
        << std::endl;
    grip::GripPipeline pipeline = grip::GripPipeline();
    cv::VideoCapture leftCamera(LEFT_CAMERA_PORT);
    cv::VideoCapture rightCamera(RIGHT_CAMERA_PORT);
    cv::Mat leftImg;
    cv::Mat rightImg;
    while (true)
    {
        if (DEBUG)
            timeStart = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

        if (leftCamera.read(leftImg))
        {
            std::vector<std::vector<cv::Point>> leftBoxes = GetBoxes::getBoxes(leftImg, pipeline);
        }

        else
        {
            std::cout << "Unable to get image from camera with port " << LEFT_CAMERA_PORT << std::endl;
        }

        if (rightCamera.read(rightImg))
        {
            std::vector<std::vector<cv::Point>> rightBoxes = GetBoxes::getBoxes(rightImg, pipeline);
        }

        else
        {
            std::cout << "Unable to get image from camera with port " << RIGHT_CAMERA_PORT << std::endl;
        }
    }
}