#include <optional>
#include <opencv2/opencv.hpp>
#include "WebCam.hpp"

namespace Calibration {
struct Result {
    double exposure;
    double score;
};

std::optional<Result> compute(cv::VideoCapture &capture, int port);
}
