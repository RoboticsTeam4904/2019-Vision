#ifndef GET_BOXES_H
#define GET_BOXES_H

#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.hpp"
#include "GripPipeline.h"

namespace GetBoxes
{
std::vector<Conifg::box> getTapeBoxes(cv::Mat &img, grip::GripPipeline &pipeline);
std::optional<Config::Box> scoringMetric(Config::Contour &contour);
double scoringSideRatio(double width, double height);
double scoringAreaRatio(double width, double height, Config::Box &points);
double scoringRotationAngle(cv::Point &right, cv::Point &bottom, double weight);
double scoringFilledValue(Config::Contour contour, Config::Box box);
double distance(cv::Point &point1, cv::Point &point2);
double angle(cv::Point &point1, cv::Point &point2);
} // namespace GetBoxes
#endif
