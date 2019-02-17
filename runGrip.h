#include <opencv2/opencv.hpp>
#include <vector>

namespace RunGrip {
    std::vector<std::vector<cv::Point>> getContours(cv::Mat &image);
    std::vector<cv::Point> filterContours(std::vector<std::vector<cv::Point>> &contours);
    cv::Point centroid(std::vector<cv::Point> &contour);
    double rectangle(std::vector<cv::Point> &contour, cv::Point &centroid);
}  // namespace RunGrip