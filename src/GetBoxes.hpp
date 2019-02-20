#pragma once
#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
namespace getBoxes
{
std::optional<std::vector<cv::Point>> scoringMetric(std::vector<cv::Point> contour,
                    int HW_RATIO = 5, int AREA = 1, int CONTOUR_AREA_VALUES = 10,
                    int ROTATION_ANGLE_INFUNC = 1,
                    int ROTATION_ANGLE_OUTFUNC = 1, int THRESHOLD=13);
std::vector<std::vector<cv::Point>> getBoxes(cv::Mat &img);
double scoring_side_ratio(double width, double height);
double scoring_area_ratio(double width, double height, std::vector<cv::Point> &points);
double scoring_rotation_angle(cv::Point &right, cv::Point &bottom, double weight);
double scoring_filled_value(std::vector<cv::Point> contour, std::vector<cv::Point> box);
double distance(std::vector<cv::Point> &point1, std::vector<cv::Point> &point2);
double angle(cv::Point point1, cv::Point point2);
} // namespace getBoxes