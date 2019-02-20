#include <vector>
#include <opencv2/opencv.hpp>
namespace getBoxes
{
std::vector<cv::Point> scoringMetric(std::vector<cv::Point> contour,
                    int HW_RATIO = 5, int AREA = 1, int CONTOUR_AREA_VALUES = 10,
                    int ROTATION_ANGLE_INFUNC = 1,
                    int ROTATION_ANGLE_OUTFUNC = 1, int THRESHOLD=13);
std::vector<std::vector<cv::Point>> getBoxes(cv::Mat &img);
} // namespace getBoxes