#define _USE_MATH_DEFINES

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
#include "GetBoxes.hpp"
#include "Config.hpp"

/* *
    * Takes in an image, finds all of the contours, and filters them with the scoringMetric evaluation.
*/
std::vector<std::vector<cv::Point>> GetBoxes::getBoxes(cv::Mat &img)
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

/* *
    * calls all of the scoring evaluations, returning a final score for a given box of how likely it is to be a tape
*/
std::optional<std::vector<cv::Point>> GetBoxes::scoringMetric(std::vector<cv::Point> &contour)
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
    // obtain all of the scores from different metrics, and multiply them ny their respective weights
    score += scoringSideRatio(width, height) * HW_RATIO;
    score += scoringAreaRatio(width, height, points) * AREA_RATIO;
    score += scoringRotationAngle(right, bottom, ROTATION_ANGLE_INFUNC) * ROTATION_ANGLE_OUTFUNC;
    score += scoringFilledValue(contour, box) * FILLED_AREA;

    if (score > MIN_THRESHOLD)
    {
        // return a box if its score is above a certain threshold
        return box;
    }
    else{
        return std::nullopt;
    }
}

/* *
    * Scores a box based on how accurate the ratio of the length to the sides is
*/
double GetBoxes::scoringSideRatio(double width, double height)
{
    if (width == 0 || height == 0)
        return 0;
    double TARGET_RATIO = 2.75; //Ratio of length and width of slanted bounding box of tape
    double score = std::max(1 / (pow(TARGET_RATIO - width / height,2) + 1),
                            1 / (pow(TARGET_RATIO - height / width,2) + 1));
    return score;
}

/* *
    * Score based on the ratio of the area of the slanted and straight bounding box.
*/
double GetBoxes::scoringAreaRatio(double width, double height, std::vector<cv::Point> &points)
{
    const double TARGET_RATIO = 0.5698; // TODO: move to config?
    if (width == 0 || height == 0)
        return 0;
    cv::Point left = points[0];
    cv::Point right = points[1];
    cv::Point bottom = points[2];
    cv::Point top = points[3];
    double slantedArea = width * height;                                 // The area of the slanted bounding box of the contour
    double straightArea = abs(top.y - bottom.y) * abs(right.x - left.x); // The area of the straight bounding box of the contour.
    if (straightArea == 0)
    {
        return 0;
    }
    double score = 1 / (pow(TARGET_RATIO - (slantedArea / straightArea), 2) + 1);
    return score;
}

/* *
    * How rotated the contour is: optimally, 75.5 degrees or 14.5 degrees.
*/
double GetBoxes::scoringRotationAngle(cv::Point &right, cv::Point &bottom, double weight)
{
    double rotationAngle = GetBoxes::angle(right, bottom);
    rotationAngle = rotationAngle / M_PI * 180;
    float num = std::min(pow(14.5 - rotationAngle, 2), pow(75.5 - rotationAngle, 2));
    return -num / (num + weight) + 1;
}

/* *
    * How much of the contour is legitimately on the slanted bounding box that it was fit -- the optimal contour, like the tape, would have almost all of it's points on (or crossing) the box.
*/
double GetBoxes::scoringFilledValue(std::vector<cv::Point> contour, std::vector<cv::Point> box)
{
    int max_y = box[3].y;
    int min_y = box[2].y;
    int min_x = box[0].x;
    int max_x = box[1].x;
    for (int k = 0; k < 4; ++k)
    {
        box[k].x -= min_x;
        box[k].y -= min_y;
    }

    for (int c = 0; c < contour.size(); ++c)
    {
        contour[c].x -= min_x;
        contour[c].y -= min_y;
    }
    std::vector<std::vector<cv::Point>> contours;
    std::vector<std::vector<cv::Point>> boxes;
    boxes.push_back(box);
    contours.push_back(contour);
    cv::Mat dst = cv::Mat::zeros(cv::Size(max_y - min_y, max_x - min_x), CV_8UC1);
    cv::drawContours(dst, contours, -1, 128, cv::FILLED);
    cv::drawContours(dst, boxes, -1, 255, cv::FILLED);
}

/* *
    * Distance between two points
*/
double GetBoxes::distance(cv::Point &point1, cv::Point &point2)
{
    return sqrt(pow(point1.x - point2.x, 2) + pow(point1.y - point2.y, 2));
}

/* *
    * Angle given two points
*/
double GetBoxes::angle(cv::Point &point1, cv::Point &point2)
{
    double dy = point2.y - point1.y;
    double dx = point2.x - point1.x;
    return atan(dy / dx);
}