#pragma once
#include <opencv2/opencv.hpp>
#include "GripPipeline.hpp"

namespace AngleFinder {
    double tapeAngle(cv::Mat &mat, grip::GripPipeline);
}