#define _USE_MATH_DEFINES

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
#include "GetBoxes.hpp"
#include "Config.hpp"
//This function takes in an image, finds all of the contours, and filters them with the scoringMetric evaluation.

std::vector<std::vector<cv::Point>> getBoxes::getBoxes(cv::Mat &img)
{
    pipeline.Process(img);
    std::vector<std::vector<cv::Point>> contours = *pipeline.GetFilterContoursOutput();
    if (!contours.size())
        return {};
    std::vector<std::vector<cv::Point>> boxes;
    for (int i = 0; i < contours.size(); ++i)
    {
        std::optional<std::vector<cv::Point>> box = scoringMetric(contours[i]);
        if (box) boxes.insert(box.value());
        
    }
    return boxes;
}

//This function calles all of the scoring evaluations, returning a final score for a given box of how likely it is to be a tape
std::optional<std::vector<cv::Point>> getBoxes::scoringMetric(std::vector<cv::Point> &contour)
{
    double score = 0;
    cv::Point top;
    cv::Point bottom;
    cv::Point left;
    cv::Point right;
    for (int j = 0; j < contour.size(); ++j)
    {
        cv::Point contourPoint = contour[j];
        if (contourPoint.x < left.x)
            left = contourPoint;
        if (contourPoint.x > right.x)
            right = contourPoint;
        if (contourPoint.y < bottom.y)
            bottom = contourPoint;
        if (contourPoint.y > bottom.y)
            top = contourPoint;
    }
    std::vector<cv::Point> points(4);
    points[0] = left;
    points[1] = right;
    points[2] = bottom;
    points[3] = top;
    float width = distance(top, left);
    float height = distance(top, right);
    std::vector<cv::Point> box = points;
    //We obtain all of the scores from different metrics, and multiply them ny their respective weights
    score += scoring_side_ratio(width, height) * HW_RATIO;
    score += scoring_area_ratio(width, height, points) * AREA_RATIO;
    score += scoring_rotation_angle(right, bottom, ROTATION_ANGLE_INFUNC) * ROTATION_ANGLE_OUTFUNC;
    score += scoring_filled_value(contour, box) * FILLED_AREA;

    if (score > MIN_THRESHOLD)
    {
        //We return a box if its score is above a certain threshold
        return box;
    }
    else{
        return std::nullopt;
    }
}

//This function gives a box a score based on how accurate the ratio of the length of the sides is
double getBoxes::scoring_side_ratio(double width, double height)
{
    if (width == 0 || height == 0)
        return 0;
    double TARGET_RATIO = 2.75; //Ratio of length and width of slanted bounding box of tape
    double score = std::max(1 / (pow(TARGET_RATIO - width / height,2) + 1),
                            1 / (pow(TARGET_RATIO - height / width,2) + 1));
    return score;
}

//This function gives a score based on the ratio of the area of the slanted and straight bounding box.
double getBoxes::scoring_area_ratio(double width, double height, std::vector<cv::Point> &points)
{
    const double TARGET_RATIO = 0.5698; // TODO: move to config?
    if (width == 0 || height == 0)
        return 0;
    cv::Point left = points[0];
    cv::Point right = points[1];
    cv::Point bottom = points[2];
    cv::Point top = points[3];
    double slantedArea = width * height;                                 //The area of the slanted bounding box of the contour
    double straightArea = abs(top.y - bottom.y) * abs(right.x - left.x); //The area of the straight bounding box of the contour.
    if (straightArea == 0)
    {
        return 0;
    }
    double score = 1 / (pow(TARGET_RATIO - (area_slanted / area_straight), 2) + 1;
    return score;
}

// This function finds how rotated the contour is: optimally, 75.5 degrees or 14.5 degrees.
double getBoxes::scoring_rotation_angle(cv::Point &right, cv::Point &bottom, double weight)
{
    double rotationAngle = getBoxes::angle(right, bottom);
    rotationAngle = rotationAngle / M_PI * 180;
    float num = std::min(pow(14.5 - rotationAngle, 2), pow(75.5 - rotationAngle, 2));
    return -num / (num + weight) + 1;
}
//This function finds how much of the contour is legitimately on the slanted bounding box that it was fit -- the optimal contour, like the tape, would have almost all of it's points on (or crossing) the box.
double getBoxes::scoring_filled_value(std::vector<cv::Point> &contour, std::vector<cv::Point> &box)
{
    std::vector<std::vector<cv::Point>> contour1 = contour;
    std::vector<std::vector<cv::Point>> box1 = box;
    int max_y = box1[3].y;
    int min_y = box1[2].y;
    int min_x = box1[0].x;
    int max_x = box1[1].x;
    for (k = 0; k < 4; ++k)
    {
        box1[k].x -= min_x;
        box1[k].y -= min.y;
    }

    for (c = 0; c < contour1.size(); ++k)
    {
        contour1[c].x -= min_x;
        contour1[c].y -= min.y;
    }
    std::vector<std::vector<cv::Point>> contours;
    std::vector<std::vector<cv::Point>> boxes;
    boxes.insert(box1);
    contours.insert(contour1)
    cv::Mat dst = cv::Mat::zeros(max_y-min_y, max_x-min_x, CV_8UC1);
    cv::drawContours(dst, contours, -1, 128, thickness=-1);
    cv::drawContours(dst, boxes, -1, 255, thickness=-1);

    
}

//This function gets the distance between two given points
double getBoxes::distance(cv::Point &point1, cv::Point &point2)
{
    return sqrt(pow(point1.x - point2.x, 2) + pow(point1.y - point2.y, 2));
}

// This function finds the angle given two points
double getBoxes::angle(cv::Point &point1, cv::Point &point2)
{
    double dy = point2.y - point1.y;
    double dx = point2.x - point1.x;
    return atan(dy / dx);
}