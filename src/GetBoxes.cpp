#define _USE_MATH_DEFINES

#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <optional>
#include <vector>
#include <opencv2/opencv.hpp>
#include "Config.hpp"
#include "GetBoxes.hpp"
#include "GripPipeline.h"

/* *
    * Takes in an image, finds all of the contours, and filters them with the scoringMetric evaluation.
*/
std::optional<std::vector<GetBoxes::ScoredBox>>
    GetBoxes::getScoredTapeBoxes(
        grip::GripPipeline &pipeline, cv::Mat &img, bool filtered) {
    pipeline.Process(img);
    std::vector<Contour> contours = *pipeline.GetFilterContoursOutput();
    if (!contours.size())
        return std::nullopt;
    
    std::vector<ScoredBox> scoredTapeBoxes;
    for (Contour &contour : contours)
    {
        GetBoxes::ScoredBox scoredBox = scoringMetric(contour);
        if (filtered && scoredBox.score < Config::BOX_SCORE_THRESHOLD)
            continue;
        
        scoredTapeBoxes.push_back(scoredBox);
    }
    return scoredTapeBoxes;
}

/* *
    * Calls all of the scoring evaluations, returning a final score for a given box of how likely it is to be a tape
*/
GetBoxes::ScoredBox GetBoxes::scoringMetric(Contour &contour)
{
    cv::Point top;
    cv::Point bottom;
    cv::Point left;
    cv::Point right;
    for (cv::Point &contourPoint : contour)
    {
        if (contourPoint.x < left.x)
            left = contourPoint;
        if (contourPoint.x > right.x)
            right = contourPoint;
        if (contourPoint.y < bottom.y)
            bottom = contourPoint;
        if (contourPoint.y > bottom.y)
            top = contourPoint;
    }
    Box points = {left, right, bottom, top};
    float width = distance(top, left);
    float height = distance(top, right);

    /* *
    * Obtain all of the scores from different metrics, and multiply them ny their respective weights
    */
    double filled_value = scoringFilledValue(contour, points);
    
    double score = scoringSideRatio(width, height) * Config::HW_RATIO 
        + scoringAreaRatio(width, height, points) * Config::AREA_RATIO
        + scoringRotationAngle(right, bottom, Config::ROTATION_ANGLE_INFUNC) * Config::ROTATION_ANGLE_OUTFUNC 
        + filled_value * Config::FILLED_AREA;
    std::cout << "Score: " << score << std::endl;

    return GetBoxes::ScoredBox { score, points };
}

/* *
    * Scores a box based on how accurate the ratio of the length to the sides is
*/
double GetBoxes::scoringSideRatio(double width, double height)
{
    return !(width && height) ? 0 : std::max(1 / (pow(Config::TAPE_DIM_RATIO - width / height, 2) + 1),
                                             1 / (pow(Config::TAPE_DIM_RATIO - height / width, 2) + 1));
}

/* *
    * Score based on the ratio of the area of the slanted and straight bounding box.
*/
double GetBoxes::scoringAreaRatio(double width, double height, Box &points)
{
    if (!(width && height)) return 0;
    cv::Point left = points[0];
    cv::Point right = points[1];
    cv::Point bottom = points[2];
    cv::Point top = points[3];
    double slantedArea = width * height;                                 // The area of the slanted bounding box of the contour
    double straightArea = abs((top.y - bottom.y) * (right.x - left.x)); // The area of the straight bounding box of the contour.
    return !straightArea ? 0 : 1 / (pow(Config::TAPE_AREA_RATIO - (slantedArea / straightArea), 2) + 1);
}

/* *
    * How rotated the contour is: optimally, 75.5 degrees or 14.5 degrees.
*/
double GetBoxes::scoringRotationAngle(cv::Point &right, cv::Point &bottom, double weight)
{
    double rotationAngle = GetBoxes::angle(right, bottom) / M_PI * 180;
    float num = pow((rotationAngle < 45 ? 14.5 : 75) - rotationAngle, 2);
    return -num / (num + weight) + 1;
}

/* *
    * How much of the contour is legitimately on the slanted bounding box that it was fit -- the optimal contour, like the tape, would have almost all of it's points on (or crossing) the box.
*/
double GetBoxes::scoringFilledValue(Contour contour, Box box)
{
    cv::Point max(box[1].x, box[3].y);
    cv::Point min(box[0].x, box[2].y);
    for (cv::Point &corner : box)
        corner -= min;

    for (cv::Point &contourPoint : contour)
        contourPoint -= min;

    cv::Mat contourMat = cv::Mat::zeros(cv::Size(max.y - min.y, max.x - min.x), CV_8UC1);
    cv::Mat boxMat = cv::Mat::zeros(cv::Size(max.y - min.y, max.x - min.x), CV_8UC1);
    cv::drawContours(contourMat, std::vector<Contour> {contour}, -1, 128, cv::FILLED);
    cv::drawContours(boxMat, std::vector<Box> {box}, -1, 128, cv::FILLED);
    int totalPixels = 0;
    int diffPixels;
    int boxPixel, contourPixel;

    for (int y = 0; y < max.y - min.y; ++y)
        for (int x = 0; x < max.x - min.x; ++x)
        {
            boxPixel = boxMat.at<unsigned char>(y, x);
            contourPixel = contourMat.at<unsigned char>(y, x);
            if (boxPixel != contourPixel)
                ++diffPixels;
            if (boxPixel+contourPixel != 0)
                ++totalPixels;
        };
    return diffPixels / totalPixels;
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
