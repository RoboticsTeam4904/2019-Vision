#include <chrono>
#include <iostream>
#include <vector>
#include <opencv2/opencv.hpp>
#include "AngleFinder.h"
#include "Config.h"

unsigned long timeStart = 0;

int main() {
    grip::GripPipeline pipeline = grip::GripPipeline();
    cv::VideoCapture camera(0);
    cv::Mat buf;
    double angle;
    while (true) {
        if (DEBUG)
            timeStart = std::chrono::duration_cast<std::chrono::milliseconds>
                (std::chrono::system_clock::now().time_since_epoch()).count();

        if (camera.read(buf)) {
            angle = AngleFinder::tapeAngle(buf, pipeline);
            std::cout << angle << std::endl;
        } else {
            std::cout << "Camera ded" << std::endl;
        }

        if (DEBUG)
            std::cout << "Time per frame: " 
                << std::chrono::duration_cast<std::chrono::milliseconds>
                    (std::chrono::system_clock::now().time_since_epoch())
                        .count() - timeStart
                << std::endl;
    }
    return 0;
}