#include <iostream>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.h"
#include "AngleFinder.h"

double process(cv::Mat &mat) {
    std::vector<std::vector<cv::Point>> contours = AngleFinder::getContours(mat);
    if (contours.size()) {
        std::vector<cv::Point> contour = AngleFinder::filterContours(contours);
        cv::Point centroid = AngleFinder::centroid(contour);
        double rectAngle = AngleFinder::rectangle(mat, contour, centroid);
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