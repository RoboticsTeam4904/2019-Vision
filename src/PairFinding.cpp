#define _USE_MATH_DEFINES

#include <cmath>
#include <optional>
#include <string>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.hpp"
#include "GetBoxes.hpp"
#include "PairFinding.hpp"


std::vector<std::optional<std::vector<cv::Point>>> PairFinding::pairFinding(std::vector<std::vector<cv::Point>> boxes) {
    std::optional<std::vector<cv::Point>> maxBox = checkLargestTape(boxes);
    std::optional<std::vector<cv::Point>> pairBox;
    std::vector<std::optional<cv::Point>> boxes;
    std::string direction;
    int checkHeight;
    std::optional<std::vector<cv::Point>> checkBox;
    int diffX;
    double maxHeight = maxBox[3].y - maxBox[2].y;
    double minDistance = 100000;
    bool pairObtained = false;
    if (maxBox[0].y > maxBox[1].y)
        cv::Point anglePoint = maxBox[0];

    else {
        cv::Point anglePoint = maxBox[1];
    }
    double maxAngle = getBoxes::angle(maxBox[3], anglePoint);
    maxAngle = -((M_PI / 2 + maxAngle) % M_PI - M_PI / 2);
    if (maxAngle < 0)
        direction = "LEFT";
    else {
        direction = "RIGHT";
    }
    for (int j = 0; j < boxes.size(); ++j) {
        checkBox = boxes[j];
        checkHeight = checkBox[3].y - checkBox[2].y;
        if (checkBox[0].y > checkBox[1].y)
            anglePoint = checkBox[0];

        else {
            anglePoint = checkBox[1];
        }
        double checkAngle = GetBoxes::angle(checkBox[3], anglePoint);
        checkAngle = -((M_PI / 2 + maxAngle) % M_PI - M_PI / 2);
        if (check < 0) {
            checkDirection = "LEFT";
        } else {
            checkDirection = "RIGHT";
            }
        
        if(checkDirection != direction) {
            if (abs(checkAngle) - 14.5 < (Config::ANGLE_THRESHOLD / M_PI * 180)) {
                diffX = checkBox[0].x - maxBox[0].x;
                if (diffX < minDistance) {
                    pairBox = checkBox;
                    minDistance = diffX;
                    pairObtained = true;
                }
            }
        }

        if (pairObtained && direction == "LEFT") {
            boxes.insert(maxBox);
            boxes.insert(pairBox);
            return boxes;
        }

        else if (pairObtained && direction == "RIGHT") {
            boxes.insert(pairBox);
            boxes.insert(maxBox);
            return boxes;
        }

        else if (direction == "RIGHT") {
            boxes.insert(std::nullopt);
            boxes.insert(maxBox);
            return boxes;
        }

        else {
            boxes.insert(maxBox);
            boxes.insert(std::nullopt);
            return boxes;
        }
    }
}
std::vector<cv::Point> checkLargestTape(std::vector<std::vector<cv::Point>> boxes) {
    std::vector<cv::Point> maxBox;
    int maxHeight = -1;
    for (int k = 0; k < boxes.size(); ++k) {
        std::vector<cv::Point> box = boxes[k];
        int height = box[3].y - box[2].y;
        if (height > maxHeight)

        {
            maxHeight = height;
            maxBox = box;
        }
    }
    return maxBox;
}