#define _USE_MATH_DEFINES

#include <opencv2/opencv.hpp>
#include <cmath>
#include <vector>
#include "GetBoxes.hpp"
#include "config.hpp"
#include <algorithm>
#include <cstdlib>
//This function takes in an image, finds all of the contours, and filters them with the scoringMetric evaluation.

std::vector<std::vector<cv::Point>> getBoxes::getBoxes(cv::Mat &img)
{
    pipeline.Process(img);
    std::vector<std::vector<cv::Point>> contours = *pipeline.GetFilterContoursOutput();
    if (!contours.size())
        return {};
    std::vector<std::vector<cv::Point>> boxes;
    for (i = 0; i < contours.size(); ++i)
    {
        std::optional<std::vector<cv::Point>> box = scoringMetric(contours[i]);
        if (box)
        {
            boxes.insert(box.value());
        }
    }
    return boxes
}

//This function calles all of the scoring evaluations, returning a final score for a given box of how likely it is to be a tape
std::optional<std::vector<cv::Point>> getBoxes::scoringMetric(std::vector<cv::Point> &contour,
                                                              int HW_RATIO = 5, int AREA_RATIO = 1, int FILLED_AREA = 10,
                                                              int ROTATION_ANGLE_INFUNC = 1,
                                                              int ROTATION_ANGLE_OUTFUNC = 1, int THRESHOLD = 13)
{
    double score = 0;
    cv::Point top;
    cv::Point bottom;
    cv::Point left;
    cv::Point right;
    for (j = 0; j < contour.size(); ++j)
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

    if (score > THRESHOLD)
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
    double target_ratio = 2.75; //Ratio of length and width of slanted bounding box of tape
    double score = std::max(1 / ((target_ratio - width / height) ^ 2 + 1),
                            1 / ((target_ratio - height / width) ^ 2 + 1));
    return score;
}

//This function gives a score based on the ratio of the area of the slanted and straight bounding box.
double getBoxes::scoring_area_ratio(double width, double height, std::vector<cv::Point> &points)
{
    target_ratio = 0.5698;
    if (width == 0 || height == 0)
        return 0;
    cv::Point left = points[0];
    cv::Point right = points[1];
    cv::Point bottom = points[2];
    cv::Point top = points[3];
    double area_slanted = width * height;                                 //The area of the slanted bounding box of the contour
    double area_straight = abs(top.y - bottom.y) * abs(right.x - left.x); //The area of the straight bounding box of the contour.
    if (area_straight == 0)
    {
        return 0;
    }
    double score = 1 / ((target_ratio - (area_slanted / area_straight)) ^ 2 + 1;
    return score;
}

//This function finds how rotated the contour is: optimally, 75.5 degrees or 14.5 degrees.
double getBoxes::scoring_rotation_angle(cv::Point &right, cv::Point &bottom, double weight)
{
    double rotationAngle = getBoxes::angle(right, bottom);
    rotationAngle = rotationAngle / M_PI * 180;
    float num = min(pow(14.5 - rotationAngle, 2), pow(75.5 - rotationAngle, 2));
    return -num / (num + weight) + 1
}
//This function finds how much of the contour is legitimately on the slanted bounding box that it was fit -- the optimal contour, like the tape, would have almost all of it's points on (or crossing) the box.
double getBoxes::scoring_filled_value(std::vector<cv::Point> contour, std::vector<cv::Point> box)
{
    int max_y = box[3].y;
    int min_y = box[2].y;
    int min_x = box[0].x;
    int max_x = box[1].x;
    for (k = 0; k < 4; ++k)
    {
        box[k].x -= min_x;
        box[k].y -= min.y;
    }

    for (c = 0; c < contour.size(); ++k)
    {
        contour[c].x -= min_x;
        contour[c].y -= min.y;
    }
    std::vector<std::vector<cv::Point>> contours;
    std::vector<std::vector<cv::Point>> boxes;
    boxes.insert(box);
    contours.insert(contour)
    cv::Mat dst = cv::Mat::zeros(max_y-min_y, max_x-min_x, CV_8UC1);
    cv::drawContours(dst, contours, -1, 128, thickness=-1);
    cv::drawContours(dst, boxes, -1, 255, thickness=-1);
    
}



def filled_value(contour, box):
    # This is to remove the RGB axis

    z_img = np.zeros(shape=Constants.resolution)
    box[3], box[2] = box[2], box[3]
    box = box[::-1]
    box = np.array(box)
    max_y = max(contour, key=lambda x: x[0][1])[0][1]
    min_y = min(contour, key=lambda x: x[0][1])[0][1]
    max_x = max(contour, key=lambda x: x[0][0])[0][0]
    min_x = min(contour, key=lambda x: x[0][0])[0][0]
    cv2.drawContours(z_img, [box], 0, color=128, thickness=-1)
    cv2.drawContours(z_img, [contour], 0, color=255, thickness=-1)
    z_img = z_img[min_y:max_y, min_x:max_x]
    box_total = len(np.where(z_img == 128)[0])
    contour_total = len(np.where(z_img == 255)[0])

    return float(contour_total)/float(contour_total+box_total+.0001)


//This function gets the distance between two given points
double getBoxes::distance(std::vector<cv::Point> &point1, std::vector<cv::Point> &point2)
{
    return sqrt(pow(point1.x - point2.x, 2) + pow(point1.y - point2.y, 2));
}

//This function finds the angle given two points
double getBoxes::angle(cv::Point point1, cv::Point point2)
{
    double dy = point2.y - point1.y double dx = point2.x - point1.x return atan(dy / dx);
}