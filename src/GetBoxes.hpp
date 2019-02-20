#pragma once
#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
namespace GetBoxes
{
std::optional<std::vector<cv::Point>> scoringMetric(std::vector<cv::Point> contour);
std::vector<std::vector<cv::Point>> getBoxes(cv::Mat &img);
double scoringSideRatio(double width, double height);
double scoringAreaRatio(double width, double height, std::vector<cv::Point> &points);
double scoringRotationAngle(cv::Point &right, cv::Point &bottom, double weight);
double scoringFilledValue(std::vector<cv::Point> contour, std::vector<cv::Point> box);
double distance(cv::Point &point1, cv::Point &point2);
double angle(cv::Point &point1, cv::Point &point2);
} // namespace GetBoxes