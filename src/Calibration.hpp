#include <optional>
#include <opencv2/opencv.hpp>
#include "WebCam.hpp"
#include "GripPipeline.h"

namespace Calibration {
struct Result {
    double exposure;
    double score;
};

std::optional<Result>
    compute(grip::GripPipeline &pipeline, cv::VideoCapture &capture, int port);
}
