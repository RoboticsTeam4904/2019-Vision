#include <opencv2/opencv.hpp>
#include <vector>
#include "AngleFinder.hpp"
#include "Config.hpp"
#include "GripPipeline.hpp"

/**
 * Takes in an image (mat) and pipeline
 * The pipeline should find contours of tapes in the image
 * returns the angle of a line of tape in the image
 * If there is no tape in the image, it returns -420.0
 */ 
double AngleFinder::tapeAngle(cv::Mat &mat, grip::GripPipeline pipeline) {
    // Find the contours in mat
    pipeline.Process(mat);
    std::vector<std::vector<cv::Point>> contours = *pipeline.GetFilterContoursOutput();

    // If no tape is spotted in mat, die
    if (!contours.size()) return -420.0;

    // Get the largest contour in contours
    double area;
    double max_area = 0;
    std::vector<cv::Point> contour;
    for (std::vector<cv::Point> &c : contours) {
        area = cv::contourArea(c);
        if (area > max_area) {
            max_area = area;
            contour = c;
        }
    }

    // Get the angle of the contour's rectangle IN DEGREES
    cv::RotatedRect rect = cv::minAreaRect(contour);
    double width = rect.size.width;
    double length = rect.size.height;
    double angle = 90 - rect.angle;  // IN DEGREES
    if (angle > 90) angle -= 180;
    if (length > width) angle += 90;

    return angle;
}
