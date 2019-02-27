#ifndef PROCESSFRAME_H
#define PROCESSFRAME_H

#include <optional>
#include <opencv2/opencv.hpp>
#include "Config.hpp"
#include "GripPipeline.h"

namespace ProcessFrame {
struct Result {
    TapeResult left;
    TapeResult right;
};

struct TapeResult {
    double distanceWall;
    double distanceTape;
    double theta;
};

std::optional<Result> process(grip::GripPipeline &pipeline, cv::Mat &frame);
TapeResult processTape(Box &tapeBox);
}
#endif
