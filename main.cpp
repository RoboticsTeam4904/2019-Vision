#include <iostream>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.h"
#include "AngleFinder.h"

int main() {
    grip::GripPipeline pipeline = grip::GripPipeline();
    cv::VideoCapture camera(0);
    cv::Mat buf;
    double angle;
    while (true) {
        if (camera.read(buf)) {
            angle = AngleFinder::tapeAngle(buf, pipeline);
            std::cout << angle << std::endl;
        } else {
            std::cout << "Camera ded" << std::endl;
        }
    }
    return 0;
}