#include <iostream>
#include <vector>
#include <opencv2/opencv.hpp>
#include "config.h"
#include "runGrip.h"

double process(cv::Mat &mat) {
    std::vector<std::vector<cv::Point>> contours = RunGrip::getContours(mat);
    if (contours.size()) {
        std::vector<cv::Point> contour = RunGrip::filterContours(contours);
        cv::Point centroid = RunGrip::centroid(contour);
        double rectAngle = RunGrip::rectangle(mat, contour, centroid);
        return rectAngle;
    }
    return -420;
}

int main() {
    cv::VideoCapture camera(0);
    cv::Mat buf;
    double angle;
    while (true) {
        if (camera.read(buf)) {
            angle = process(buf);
            std::cout << angle << std::endl;
        } else {
            std::cout << "no camera" << std::endl;
        }
    }
    return 0;
}