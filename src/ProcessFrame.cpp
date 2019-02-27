#include <optional>
#include <utility>
#include <vector>
#include <opencv2/opencv.hpp>
#include "ProcessFrame.hpp"
#include "Config.hpp"
#include "GripPipeline.h"
#include "GetBoxes.hpp"
#include "PairFinding.hpp"

std::optional<ProcessFrame::Result>
    ProcessFrame::process(grip::GripPipeline &pipeline, cv::Mat &frame) {
    // TODO: for both right and left this value is set twice. Which is right?
    std::vector<Box> boxes = GetBoxes::getTapeBoxes(frame, pipeline);
    if (!boxes.size())
    {
        std::cout << "No images found after filtering for left camera" << std::endl;
        return std::nullopt;
    }
    std::pair<std::optional<Box>, std::optional<Box>> boxesPair = PairFinding::pairFinding(boxes);

    ProcessFrame::Result result {
        ProcessFrame::TapeResult {0, 0, 0},
        ProcessFrame::TapeResult {0, 0, 0},
    };

    if (boxesPair.first) {
        result.left = ProcessFrame::processTape(boxesPair.first.value());
    }
    if (boxesPair.second) {
        result.right = ProcessFrame::processTape(boxesPair.second.value());
    }

    return result;
}

std::optional<ProcessFrame::TapeResult> ProcessFrame::processTape(Box &box) {
    ProcessFrame::TapeResult result {0, 0, 0};

    result.theta = GetAngle::getTheta(tapeBox);
    result.distanceWall = GetDistance::getDistanceToWall(tapeBox);
    result.distanceTape = GetDistance::getDistanceToTape(tapeBox, result.theta);

    return result;
}
