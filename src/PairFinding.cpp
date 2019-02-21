#define _USE_MATH_DEFINES

#include <cmath>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.hpp"
#include "GetBoxes.hpp"

std::vector<std::optional<std::vector<cv::Point>>> pairFinding(std::vector<std::vector<cv::Point>> boxes)
{
    std::optional<std::vector<cv::Point>> max_box = checkLargestTape(boxes);
    std::optional<std::vector<cv::Point>> pair_box;
    std::vector<std::optional<cv::Point>> boxes;
    std::string direction;
    int check_height;
    std::optional<std::vector<cv::Point>> check_box;
    int diff_x;
    double max_height = max_box[3].y - max_box[2].y;
    double min_distance = 100000;
    bool pairObtained = false;
    if (max_box[0].y > max_box[1].y)
        cv::Point angle_point = max_box[0];

    else
    {
        cv::Point angle_point = max_box[1];
    }
    double max_angle = getBoxes::angle(max_box[3], angle_point);
    max_angle = -((M_PI / 2 + max_angle) % M_PI - M_PI / 2);
    if (max_angle < 0)
        direction = "LEFT";
    else
    {
        direction = "RIGHT";
    }
    for (j = 0; j < boxes.size(); ++j)
    {
        check_box = boxes[j];
        check_height = check_box[3].y - check_box[2].y;
        if (check_box[0].y > check_box[1].y)
            angle_point = check_box[0];

        else
        {
            angle_point = check_box[1];
        }
        double check_angle = getBoxes::angle(check_box[3], angle_point);
        check_angle = -((M_PI / 2 + max_angle) % M_PI - M_PI / 2);
        if (check < 0)
            check_direction = "LEFT";
        else
        {
            check_direction = "RIGHT";
        }
        if (check_direction == direction)
            continue;
        else
        {
            if (abs(check_angle) - 14.5 < (Config::ANGLE_THRESHOLD / M_PI * 180))
            {
                diff_x = check_box[0].x - max_box[0].x;
                if (diff_x < min_distance)
                {
                    pair_box = check_box;
                    min_distance = diff_x;
                    pairObtained = true;
                }
            }
        }

        if (pairObtained && direction == "LEFT")
        {
            boxes.insert(max_box);
            boxes.insert(pair_box);
            return boxes;
        }

        else if (pairObtained && direction == "RIGHT")
        {
            boxes.insert(pair_box);
            boxes.insert(max_box);
            return boxes;
        }

        else if(direction=="RIGHT")
        {
            boxes.insert(std::nullopt)
            boxes.insert(max_box);
            return boxes;
        }

        else
        {
            boxes.insert(max_box);
            boxes.insert(std::nullopt);
            return boxes;
        }
    }
}
std::vector<cv::Point> checkLargestTape(std::vector<std::vector<cv::Point>> boxes)
{
    std::vector<cv::Point> max_box;
    int max_height = -1;
    for (k = 0; k < boxes.size(); ++k)
    {
        std::vector<cv::Point> box = boxes[k];
        int height = box[3].y - box[2].y;
        if (height > max_height)

        {
            max_height = height;
            max_box = box;
        }
    }
    return max_box;
}