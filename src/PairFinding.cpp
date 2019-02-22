#define _USE_MATH_DEFINES

#include <cmath>
#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.hpp"
#include "GetBoxes.hpp"
#include "PairFinding.hpp"


std::pair<std::optional<Config::Box>, std::optional<Config::Box>> 
    PairFinding::pairFinding(std::vector<Config::Box> &tapeBoxes) {
    Config::Box maxBox = checkLargestTape(tapeBoxes);
    Config::Box pairBox, checkBox;
    cv::Point anglePoint = maxBox[0].y > maxBox[1].y ? maxBox[0] : maxBox[1];
    double maxAngle = -((M_PI / 2 + getTapeBoxexs::angle(maxBox[3], anglePoint)) % M_PI - M_PI / 2);
    double minDistance = 1000;
    bool tapeRight = maxAngle > 0;
    bool pairObtained = false;
    int diffX, checkHeight;
    for (Config::Box &checkBox : tapeBoxes) {
        checkHeight = checkBox[3].y - checkBox[2].y;
        anglePoint = checkBox[0].y > checkBox[1].y ? checkBox[0] : checkBox[1];
        double checkAngle = -((M_PI / 2 + GetBoxes::angle(checkBox[3], anglePoint)) % M_PI - M_PI / 2);

        if (checkAngle < 0 == tapeRight && abs(checkAngle) - 14.5 < (Config::ANGLE_THRESHOLD / M_PI * 180)) {
            diffX = checkBox[0].x - maxBox[0].x;
            if (diffX < minDistance) {
                pairBox = checkBox;
                minDistance = diffX;
                pairObtained = true;
            }
        }
    }

    std::pair<std::optional<Config::Box>, std::optional<Config::Box>> out;
    out.first = std::optional<Config::Box>(maxBox);
    out.second = std::optional<Config::Box>(pairObtained ? pairBox : std::nullopt);
    if (tapeRight)
        out.swap();
    return out
}

Config::Box checkLargestTape(std::vector<Config::Box> &tapeBoxes) {
    Config::Box maxBox;
    int maxHeight = -1;
    for (Config::Box &tapeBox : tapeBoxes) {
        int height = tapeBox[3].y - tapeBox[2].y;
        if (height > maxHeight)
        {
            maxHeight = height;
            maxBox = tapeBox;
        }
    }
    return maxBox;
}