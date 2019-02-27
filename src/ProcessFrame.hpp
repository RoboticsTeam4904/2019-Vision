#ifndef PROCESSFRAME_H
#define PROCESSFRAME_H

#include <optional>
#include <opencv2/opencv.hpp>
#include "Config.hpp"
#include "GripPipeline.h"

namespace ProcessFrame {
struct TapeResult {
    double distanceWall;
    double distanceTape;
    double theta;
};

struct Result {
    TapeResult left;
    TapeResult right;
};

std::optional<Result> process(grip::GripPipeline &pipeline, cv::Mat &frame);
TapeResult processTape(Box &tapeBox);
}
#endif
