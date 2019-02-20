#include <opencv2/opencv.hpp>
#include <vector>
#include "GetBoxes.hpp"
#include

std::vector<cv::Point> scoringMetric(std::vector<cv::Point> contour,
                                     int HW_RATIO = 5, int AREA = 1, int CONTOUR_AREA_VALUES = 10,
                                     int ROTATION_ANGLE_INFUNC = 1,
                                     int ROTATION_ANGLE_OUTFUNC = 1, int THRESHOLD = 13)
{
}

std::vector<std::vector<cv::Point>> getBoxes(cv::Mat &img)
{
    pipeline.Process(img);
    std::vector<std::vector<cv::Point>> contours = *pipeline.GetFilterContoursOutput();
    if (!contours.size())
        return {};
    std::vector<std::vector<cv::Point>> boxes;
    float score;
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