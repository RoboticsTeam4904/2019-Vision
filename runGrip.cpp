#include "runGrip.h"
#include <opencv2/opencv.hpp>
#include <vector>
#include "GripPipeline.h"
#include "config.h"

std::vector<std::vector<cv::Point>> RunGrip::getContours(cv::Mat &image) {
    grip::GripPipeline pipeline;
    pipeline.Process(image);
    return *pipeline.GetFilterContoursOutput();
}

std::vector<cv::Point> RunGrip::filterContours(std::vector<std::vector<cv::Point>> &contours) {
    double max_area = 0;
    std::vector<cv::Point> max_contour;
    for (std::vector<cv::Point> &c : contours) {
        double area = cv::contourArea(c);
        if (area > max_area) {
            max_area = area;
            max_contour = c;
        }
    }
    return max_contour;
}

cv::Point RunGrip::centroid(std::vector<cv::Point> &contour) {
    auto m = cv::moments(contour);
    return cv::Point(m.m10 / m.m00, m.m01 / m.m00);
}

double RunGrip::rectangle(std::vector<cv::Point> &contour, cv::Point &centroid) {
    cv::RotatedRect rect = cv::minAreaRect(contour);
    double width = rect.size.width;
    double length = rect.size.height;
    double angle = 90 - rect.angle;  // in degrees
    if (angle > 90) angle -= 180;
    if (length > width) angle += 90;
    return angle;
}