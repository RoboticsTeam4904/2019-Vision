#include <cmath>
#include <optional>
#include <opencv2/opencv.hpp>
#include "Calibration.hpp"
#include "Config.hpp"
#include "GetBoxes.hpp"
#include "GripPipeline.h"

std::optional<double>
    computeScore(grip::GripPipeline &pipeline, cv::VideoCapture &capture) {
    cv::Mat frame;

    bool success = capture.read(frame);

    if (!success) {
        return std::nullopt;
    }

    std::optional<std::vector<GetBoxes::ScoredBox>> scoredBoxesResult =
        GetBoxes::getScoredTapeBoxes(pipeline, frame, false);
    
    if (!scoredBoxesResult) {
        return std::nullopt;
    }

    std::vector<GetBoxes::ScoredBox> scoredBoxes = scoredBoxesResult.value();
    
    if (scoredBoxes.size() < 2) {
        return std::nullopt;
    }
    
    std::sort(scoredBoxes.begin(), scoredBoxes.end(),
        [](const GetBoxes::ScoredBox a, const GetBoxes::ScoredBox b) {
            return a.score > b.score;
        }
    );
    
    double finalScore = scoredBoxes[0].score + scoredBoxes[1].score;
    for (int i = 2; i < scoredBoxes.size(); i++) {
        finalScore -= scoredBoxes[i].score;
    }
    
    return finalScore;
}

std::optional<Calibration::Result>
    Calibration::compute(cv::VideoCapture &capture, int port) {
    
    grip::GripPipeline pipeline = grip::GripPipeline();
    
    double bestScore = 0;
    double bestExposureScore = 0;

    double lower = Config::EXPOSURE_RANGE[0];
    double upper = Config::EXPOSURE_RANGE[1];
    double increment = Config::EXPOSURE_TEST_INCREMENT;

    std::optional<Calibration::Result> bestExposure = std::nullopt;
    for (double exposure = lower; exposure <= upper; exposure += increment) {
        WebCam::set(port, exposure);

        std::optional<double> computeScoreResult = computeScore(pipeline, capture);

        if (!computeScoreResult) { continue; }

        double currentComputeScore = computeScoreResult.value();

        if (!bestExposure || currentComputeScore > bestExposure.value().score) {
            bestExposure = Calibration::Result { exposure, currentComputeScore };
        }
    }

    return bestExposure;
}

