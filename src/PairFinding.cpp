#define _USE_MATH_DEFINES

#include <cmath>
#include <optional>
#include <utility>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.hpp"
#include "GetBoxes.hpp"
#include "PairFinding.hpp"

std::pair<std::optional<Box>, std::optional<Box>> 
    PairFinding::pairFinding(std::vector<Box> &tapeBoxes) {
    Box maxBox = checkLargestTape(tapeBoxes);
    Box pairBox, checkBox;
    cv::Point anglePoint = maxBox[0].y > maxBox[1].y ? maxBox[0] : maxBox[1];
    double maxAngle = -(fmod(M_PI / 2 + GetBoxes::angle(maxBox[3], anglePoint),M_PI) - M_PI / 2); 
    double minDistance = 1000;
    bool tapeRight = maxAngle > 0;
    bool pairObtained = false;
    int diffX, checkHeight;
    for (Box &checkBox : tapeBoxes) {
        checkHeight = checkBox[3].y - checkBox[2].y;
        anglePoint = checkBox[0].y > checkBox[1].y ? checkBox[0] : checkBox[1];
        double checkAngle = -(fmod(M_PI / 2 + GetBoxes::angle(checkBox[3], anglePoint), M_PI) - M_PI / 2);

        if (checkAngle < 0 == tapeRight && abs(checkAngle) - 14.5 < (Config::ANGLE_THRESHOLD / M_PI * 180)) {
            diffX = checkBox[0].x - maxBox[0].x;
            if (diffX < minDistance) {
                pairBox = checkBox;
                minDistance = diffX;
                pairObtained = true;
            }
        }
    }

    std::optional<Box> matchA(maxBox);
    std::optional<Box> matchB = pairObtained ? std::optional<Box>(pairBox) : std::nullopt;
    return tapeRight ? std::pair(matchB, matchA) : std::pair(matchA, matchB);
}

Box checkLargestTape(std::vector<Box> &tapeBoxes) {
    Box maxBox;
    int maxHeight = -1;
    for (Box &tapeBox : tapeBoxes) {
        int height = tapeBox[3].y - tapeBox[2].y;
        if (height > maxHeight)
        {
            maxHeight = height;
            maxBox = tapeBox;
        }
    }
    return maxBox;
}
