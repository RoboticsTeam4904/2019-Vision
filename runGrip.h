#include <vector>
#include <opencv2/opencv.hpp>

namespace RunGrip {
    std::vector<std::vector<cv::Point>> getContours(cv::Mat &mat);
    std::vector<cv::Point> filterContours(std::vector<std::vector<cv::Point>> &contours);
    cv::Point centroid(std::vector<cv::Point> &contour);
    double rectangle(cv::Mat &mat, std::vector<cv::Point> &contour, cv::Point &centroid);
}  // namespace RunGrip