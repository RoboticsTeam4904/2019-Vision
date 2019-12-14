//
// This file is auto-generated, please don't edit!
//

#include "stdint.h"
#include "common.h"
#include <string>
#include "common_opencv.h"
using namespace cv;
#include "types.h"
#include "return_types.h"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/imgproc.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/imgproc/hal/interface.h"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/imgproc/imgproc.hpp"

extern "C" {

// parsed: cv::Canny
// as:     cv::Canny (function)
// Arg ARG cv::_InputArray (boxed) dx= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) dy= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) edges= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) threshold1= Primitive(double) = 
// Arg ARG Primitive(double) threshold2= Primitive(double) = 
// Arg ARG Primitive(bool) L2gradient= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_Canny__InputArray__InputArray__OutputArray_double_double_bool(void* dx, void* dy, void* edges, double threshold1, double threshold2, bool L2gradient) {
    try {
        cv::Canny(*reinterpret_cast<const cv::_InputArray*>(dx), *reinterpret_cast<const cv::_InputArray*>(dy), *reinterpret_cast<cv::_OutputArray*>(edges), threshold1, threshold2, L2gradient);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Canny
// as:     cv::Canny (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) edges= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) threshold1= Primitive(double) = 
// Arg ARG Primitive(double) threshold2= Primitive(double) = 
// Arg ARG Primitive(int) apertureSize= Primitive(int) = 3
// Arg ARG Primitive(bool) L2gradient= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_Canny__InputArray__OutputArray_double_double_int_bool(void* image, void* edges, double threshold1, double threshold2, int apertureSize, bool L2gradient) {
    try {
        cv::Canny(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(edges), threshold1, threshold2, apertureSize, L2gradient);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::EMD
// as:     cv::EMD (function)
// Arg ARG cv::_InputArray (boxed) signature1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) signature2= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) distType= Primitive(int) = 
// Arg ARG cv::_InputArray (boxed) cost= cv::_InputArray (boxed) = noArray()
// Arg ARG RawPtr[Primitive(float)] * lowerBound= (ptr) RawPtr[Primitive(float)] = 0
// Arg ARG cv::_OutputArray (boxed) flow= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(float)
cv_return_value_float cv_EMD__InputArray__InputArray_int__InputArray_float_X__OutputArray(void* signature1, void* signature2, int distType, void* cost, float* lowerBound, void* flow) {
    try {
        float ret = cv::EMD(*reinterpret_cast<const cv::_InputArray*>(signature1), *reinterpret_cast<const cv::_InputArray*>(signature2), distType, *reinterpret_cast<const cv::_InputArray*>(cost), lowerBound, *reinterpret_cast<cv::_OutputArray*>(flow));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::GaussianBlur
// as:     cv::GaussianBlur (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::Size (simple) ksize= cv::Size (simple) = 
// Arg ARG Primitive(double) sigmaX= Primitive(double) = 
// Arg ARG Primitive(double) sigmaY= Primitive(double) = 0
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_GaussianBlur__InputArray__OutputArray_Size_double_double_int(void* src, void* dst, SizeWrapper ksize, double sigmaX, double sigmaY, int borderType) {
    try {
        cv::GaussianBlur(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<cv::Size*>(&ksize), sigmaX, sigmaY, borderType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HoughCircles
// as:     cv::HoughCircles (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) circles= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) method= Primitive(int) = 
// Arg ARG Primitive(double) dp= Primitive(double) = 
// Arg ARG Primitive(double) minDist= Primitive(double) = 
// Arg ARG Primitive(double) param1= Primitive(double) = 100
// Arg ARG Primitive(double) param2= Primitive(double) = 100
// Arg ARG Primitive(int) minRadius= Primitive(int) = 0
// Arg ARG Primitive(int) maxRadius= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_HoughCircles__InputArray__OutputArray_int_double_double_double_double_int_int(void* image, void* circles, int method, double dp, double minDist, double param1, double param2, int minRadius, int maxRadius) {
    try {
        cv::HoughCircles(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(circles), method, dp, minDist, param1, param2, minRadius, maxRadius);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HoughLinesP
// as:     cv::HoughLinesP (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) lines= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) rho= Primitive(double) = 
// Arg ARG Primitive(double) theta= Primitive(double) = 
// Arg ARG Primitive(int) threshold= Primitive(int) = 
// Arg ARG Primitive(double) minLineLength= Primitive(double) = 0
// Arg ARG Primitive(double) maxLineGap= Primitive(double) = 0
// Return value: Primitive(void)
cv_return_value_void cv_HoughLinesP__InputArray__OutputArray_double_double_int_double_double(void* image, void* lines, double rho, double theta, int threshold, double minLineLength, double maxLineGap) {
    try {
        cv::HoughLinesP(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(lines), rho, theta, threshold, minLineLength, maxLineGap);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HoughLinesPointSet
// as:     cv::HoughLinesPointSet (function)
// Arg ARG cv::_InputArray (boxed) _point= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) _lines= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) lines_max= Primitive(int) = 
// Arg ARG Primitive(int) threshold= Primitive(int) = 
// Arg ARG Primitive(double) min_rho= Primitive(double) = 
// Arg ARG Primitive(double) max_rho= Primitive(double) = 
// Arg ARG Primitive(double) rho_step= Primitive(double) = 
// Arg ARG Primitive(double) min_theta= Primitive(double) = 
// Arg ARG Primitive(double) max_theta= Primitive(double) = 
// Arg ARG Primitive(double) theta_step= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_HoughLinesPointSet__InputArray__OutputArray_int_int_double_double_double_double_double_double(void* _point, void* _lines, int lines_max, int threshold, double min_rho, double max_rho, double rho_step, double min_theta, double max_theta, double theta_step) {
    try {
        cv::HoughLinesPointSet(*reinterpret_cast<const cv::_InputArray*>(_point), *reinterpret_cast<cv::_OutputArray*>(_lines), lines_max, threshold, min_rho, max_rho, rho_step, min_theta, max_theta, theta_step);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HoughLines
// as:     cv::HoughLines (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) lines= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) rho= Primitive(double) = 
// Arg ARG Primitive(double) theta= Primitive(double) = 
// Arg ARG Primitive(int) threshold= Primitive(int) = 
// Arg ARG Primitive(double) srn= Primitive(double) = 0
// Arg ARG Primitive(double) stn= Primitive(double) = 0
// Arg ARG Primitive(double) min_theta= Primitive(double) = 0
// Arg ARG Primitive(double) max_theta= Primitive(double) = CV_PI
// Return value: Primitive(void)
cv_return_value_void cv_HoughLines__InputArray__OutputArray_double_double_int_double_double_double_double(void* image, void* lines, double rho, double theta, int threshold, double srn, double stn, double min_theta, double max_theta) {
    try {
        cv::HoughLines(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(lines), rho, theta, threshold, srn, stn, min_theta, max_theta);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Laplacian
// as:     cv::Laplacian (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) ddepth= Primitive(int) = 
// Arg ARG Primitive(int) ksize= Primitive(int) = 1
// Arg ARG Primitive(double) scale= Primitive(double) = 1
// Arg ARG Primitive(double) delta= Primitive(double) = 0
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_Laplacian__InputArray__OutputArray_int_int_double_double_int(void* src, void* dst, int ddepth, int ksize, double scale, double delta, int borderType) {
    try {
        cv::Laplacian(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), ddepth, ksize, scale, delta, borderType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Scharr
// as:     cv::Scharr (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) ddepth= Primitive(int) = 
// Arg ARG Primitive(int) dx= Primitive(int) = 
// Arg ARG Primitive(int) dy= Primitive(int) = 
// Arg ARG Primitive(double) scale= Primitive(double) = 1
// Arg ARG Primitive(double) delta= Primitive(double) = 0
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_Scharr__InputArray__OutputArray_int_int_int_double_double_int(void* src, void* dst, int ddepth, int dx, int dy, double scale, double delta, int borderType) {
    try {
        cv::Scharr(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), ddepth, dx, dy, scale, delta, borderType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Sobel
// as:     cv::Sobel (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) ddepth= Primitive(int) = 
// Arg ARG Primitive(int) dx= Primitive(int) = 
// Arg ARG Primitive(int) dy= Primitive(int) = 
// Arg ARG Primitive(int) ksize= Primitive(int) = 3
// Arg ARG Primitive(double) scale= Primitive(double) = 1
// Arg ARG Primitive(double) delta= Primitive(double) = 0
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_Sobel__InputArray__OutputArray_int_int_int_int_double_double_int(void* src, void* dst, int ddepth, int dx, int dy, int ksize, double scale, double delta, int borderType) {
    try {
        cv::Sobel(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), ddepth, dx, dy, ksize, scale, delta, borderType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::accumulateProduct
// as:     cv::accumulateProduct (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) dst= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_accumulateProduct__InputArray__InputArray__InputOutputArray__InputArray(void* src1, void* src2, void* dst, void* mask) {
    try {
        cv::accumulateProduct(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<cv::_InputOutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::accumulateSquare
// as:     cv::accumulateSquare (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) dst= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_accumulateSquare__InputArray__InputOutputArray__InputArray(void* src, void* dst, void* mask) {
    try {
        cv::accumulateSquare(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_InputOutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::accumulateWeighted
// as:     cv::accumulateWeighted (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) dst= cv::_InputOutputArray (boxed) = 
// Arg ARG Primitive(double) alpha= Primitive(double) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_accumulateWeighted__InputArray__InputOutputArray_double__InputArray(void* src, void* dst, double alpha, void* mask) {
    try {
        cv::accumulateWeighted(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_InputOutputArray*>(dst), alpha, *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::accumulate
// as:     cv::accumulate (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) dst= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_accumulate__InputArray__InputOutputArray__InputArray(void* src, void* dst, void* mask) {
    try {
        cv::accumulate(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_InputOutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::adaptiveThreshold
// as:     cv::adaptiveThreshold (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) maxValue= Primitive(double) = 
// Arg ARG Primitive(int) adaptiveMethod= Primitive(int) = 
// Arg ARG Primitive(int) thresholdType= Primitive(int) = 
// Arg ARG Primitive(int) blockSize= Primitive(int) = 
// Arg ARG Primitive(double) C= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_adaptiveThreshold__InputArray__OutputArray_double_int_int_int_double(void* src, void* dst, double maxValue, int adaptiveMethod, int thresholdType, int blockSize, double C) {
    try {
        cv::adaptiveThreshold(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), maxValue, adaptiveMethod, thresholdType, blockSize, C);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::applyColorMap
// as:     cv::applyColorMap (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) userColor= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_applyColorMap__InputArray__OutputArray__InputArray(void* src, void* dst, void* userColor) {
    try {
        cv::applyColorMap(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(userColor));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::applyColorMap
// as:     cv::applyColorMap (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) colormap= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_applyColorMap__InputArray__OutputArray_int(void* src, void* dst, int colormap) {
    try {
        cv::applyColorMap(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), colormap);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::approxPolyDP
// as:     cv::approxPolyDP (function)
// Arg ARG cv::_InputArray (boxed) curve= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) approxCurve= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) epsilon= Primitive(double) = 
// Arg ARG Primitive(bool) closed= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_approxPolyDP__InputArray__OutputArray_double_bool(void* curve, void* approxCurve, double epsilon, bool closed) {
    try {
        cv::approxPolyDP(*reinterpret_cast<const cv::_InputArray*>(curve), *reinterpret_cast<cv::_OutputArray*>(approxCurve), epsilon, closed);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::arcLength
// as:     cv::arcLength (function)
// Arg ARG cv::_InputArray (boxed) curve= cv::_InputArray (boxed) = 
// Arg ARG Primitive(bool) closed= Primitive(bool) = 
// Return value: Primitive(double)
cv_return_value_double cv_arcLength__InputArray_bool(void* curve, bool closed) {
    try {
        double ret = cv::arcLength(*reinterpret_cast<const cv::_InputArray*>(curve), closed);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::arrowedLine
// as:     cv::arrowedLine (function)
// Arg ARG cv::_InputOutputArray (boxed) img= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Point (simple) pt1= cv::Point (simple) = 
// Arg ARG cv::Point (simple) pt2= cv::Point (simple) = 
// Arg ARG cv::Scalar (simple) color= cv::Scalar (simple) = 
// Arg ARG Primitive(int) thickness= Primitive(int) = 1
// Arg ARG Primitive(int) line_type= Primitive(int) = 8
// Arg ARG Primitive(int) shift= Primitive(int) = 0
// Arg ARG Primitive(double) tipLength= Primitive(double) = 0.1
// Return value: Primitive(void)
cv_return_value_void cv_arrowedLine__InputOutputArray_Point_Point_Scalar_int_int_int_double(void* img, PointWrapper pt1, PointWrapper pt2, ScalarWrapper color, int thickness, int line_type, int shift, double tipLength) {
    try {
        cv::arrowedLine(*reinterpret_cast<cv::_InputOutputArray*>(img), *reinterpret_cast<cv::Point*>(&pt1), *reinterpret_cast<cv::Point*>(&pt2), *reinterpret_cast<const cv::Scalar*>(&color), thickness, line_type, shift, tipLength);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bilateralFilter
// as:     cv::bilateralFilter (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) d= Primitive(int) = 
// Arg ARG Primitive(double) sigmaColor= Primitive(double) = 
// Arg ARG Primitive(double) sigmaSpace= Primitive(double) = 
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_bilateralFilter__InputArray__OutputArray_int_double_double_int(void* src, void* dst, int d, double sigmaColor, double sigmaSpace, int borderType) {
    try {
        cv::bilateralFilter(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), d, sigmaColor, sigmaSpace, borderType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::blendLinear
// as:     cv::blendLinear (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) weights1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) weights2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_blendLinear__InputArray__InputArray__InputArray__InputArray__OutputArray(void* src1, void* src2, void* weights1, void* weights2, void* dst) {
    try {
        cv::blendLinear(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<const cv::_InputArray*>(weights1), *reinterpret_cast<const cv::_InputArray*>(weights2), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::blur
// as:     cv::blur (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::Size (simple) ksize= cv::Size (simple) = 
// Arg ARG cv::Point (simple) anchor= cv::Point (simple) = Point(-1,-1)
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_blur__InputArray__OutputArray_Size_Point_int(void* src, void* dst, SizeWrapper ksize, PointWrapper anchor, int borderType) {
    try {
        cv::blur(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<cv::Size*>(&ksize), *reinterpret_cast<cv::Point*>(&anchor), borderType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::boundingRect
// as:     cv::boundingRect (function)
// Arg ARG cv::_InputArray (boxed) array= cv::_InputArray (boxed) = 
// Return value: cv::Rect (simple)
cv_return_value_RectWrapper cv_boundingRect__InputArray(void* array) {
    try {
        cv::Rect ret = cv::boundingRect(*reinterpret_cast<const cv::_InputArray*>(array));
        return { Error::Code::StsOk, NULL, *reinterpret_cast<RectWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_RectWrapper)
}

// parsed: cv::boxFilter
// as:     cv::boxFilter (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) ddepth= Primitive(int) = 
// Arg ARG cv::Size (simple) ksize= cv::Size (simple) = 
// Arg ARG cv::Point (simple) anchor= cv::Point (simple) = Point(-1,-1)
// Arg ARG Primitive(bool) normalize= Primitive(bool) = true
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_boxFilter__InputArray__OutputArray_int_Size_Point_bool_int(void* src, void* dst, int ddepth, SizeWrapper ksize, PointWrapper anchor, bool normalize, int borderType) {
    try {
        cv::boxFilter(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), ddepth, *reinterpret_cast<cv::Size*>(&ksize), *reinterpret_cast<cv::Point*>(&anchor), normalize, borderType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::boxPoints
// as:     cv::boxPoints (function)
// Arg ARG cv::RotatedRect (boxed) box= cv::RotatedRect (boxed) = 
// Arg ARG cv::_OutputArray (boxed) points= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_boxPoints_RotatedRect__OutputArray(void* box, void* points) {
    try {
        cv::boxPoints(*reinterpret_cast<cv::RotatedRect*>(box), *reinterpret_cast<cv::_OutputArray*>(points));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::buildPyramid
// as:     cv::buildPyramid (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) maxlevel= Primitive(int) = 
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_buildPyramid__InputArray__OutputArray_int_int(void* src, void* dst, int maxlevel, int borderType) {
    try {
        cv::buildPyramid(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), maxlevel, borderType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::calcBackProject
// as:     cv::calcBackProject (function)
// Arg ARG cv::_InputArray (boxed) images= cv::_InputArray (boxed) = 
// Arg ARG Vector[Primitive(int)] channels= Vector[Primitive(int)] = 
// Arg ARG cv::_InputArray (boxed) hist= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Vector[Primitive(float)] ranges= Vector[Primitive(float)] = 
// Arg ARG Primitive(double) scale= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_calcBackProject__InputArray_VectorOfint__InputArray__OutputArray_VectorOffloat_double(void* images, void* channels, void* hist, void* dst, void* ranges, double scale) {
    try {
        cv::calcBackProject(*reinterpret_cast<const cv::_InputArray*>(images), *reinterpret_cast<const std::vector<int>*>(channels), *reinterpret_cast<const cv::_InputArray*>(hist), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const std::vector<float>*>(ranges), scale);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::calcHist
// as:     cv::calcHist (function)
// Arg ARG cv::_InputArray (boxed) images= cv::_InputArray (boxed) = 
// Arg ARG Vector[Primitive(int)] channels= Vector[Primitive(int)] = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) hist= cv::_OutputArray (boxed) = 
// Arg ARG Vector[Primitive(int)] histSize= Vector[Primitive(int)] = 
// Arg ARG Vector[Primitive(float)] ranges= Vector[Primitive(float)] = 
// Arg ARG Primitive(bool) accumulate= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_calcHist__InputArray_VectorOfint__InputArray__OutputArray_VectorOfint_VectorOffloat_bool(void* images, void* channels, void* mask, void* hist, void* histSize, void* ranges, bool accumulate) {
    try {
        cv::calcHist(*reinterpret_cast<const cv::_InputArray*>(images), *reinterpret_cast<const std::vector<int>*>(channels), *reinterpret_cast<const cv::_InputArray*>(mask), *reinterpret_cast<cv::_OutputArray*>(hist), *reinterpret_cast<const std::vector<int>*>(histSize), *reinterpret_cast<const std::vector<float>*>(ranges), accumulate);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::circle
// as:     cv::circle (function)
// Arg ARG cv::_InputOutputArray (boxed) img= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Point (simple) center= cv::Point (simple) = 
// Arg ARG Primitive(int) radius= Primitive(int) = 
// Arg ARG cv::Scalar (simple) color= cv::Scalar (simple) = 
// Arg ARG Primitive(int) thickness= Primitive(int) = 1
// Arg ARG Primitive(int) lineType= Primitive(int) = LINE_8
// Arg ARG Primitive(int) shift= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_circle__InputOutputArray_Point_int_Scalar_int_int_int(void* img, PointWrapper center, int radius, ScalarWrapper color, int thickness, int lineType, int shift) {
    try {
        cv::circle(*reinterpret_cast<cv::_InputOutputArray*>(img), *reinterpret_cast<cv::Point*>(&center), radius, *reinterpret_cast<const cv::Scalar*>(&color), thickness, lineType, shift);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::clipLine
// as:     cv::clipLine (function)
// Arg ARG cv::Rect (simple) imgRect= cv::Rect (simple) = 
// Arg ARG cv::Point (simple) pt1= cv::Point (simple) = 
// Arg ARG cv::Point (simple) pt2= cv::Point (simple) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_clipLine_Rect_Point_Point(RectWrapper imgRect, PointWrapper& pt1, PointWrapper& pt2) {
    try {
        bool ret = cv::clipLine(*reinterpret_cast<cv::Rect*>(&imgRect), *reinterpret_cast<cv::Point*>(&pt1), *reinterpret_cast<cv::Point*>(&pt2));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::clipLine
// as:     cv::clipLine (function)
// Arg ARG cv::Size2l (simple) imgSize= cv::Size2l (simple) = 
// Arg ARG cv::Point2l (simple) pt1= cv::Point2l (simple) = 
// Arg ARG cv::Point2l (simple) pt2= cv::Point2l (simple) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_clipLine_Size2l_Point2l_Point2l(Size2lWrapper imgSize, Point2lWrapper& pt1, Point2lWrapper& pt2) {
    try {
        bool ret = cv::clipLine(*reinterpret_cast<cv::Size2l*>(&imgSize), *reinterpret_cast<cv::Point2l*>(&pt1), *reinterpret_cast<cv::Point2l*>(&pt2));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::clipLine
// as:     cv::clipLine (function)
// Arg ARG cv::Size (simple) imgSize= cv::Size (simple) = 
// Arg ARG cv::Point (simple) pt1= cv::Point (simple) = 
// Arg ARG cv::Point (simple) pt2= cv::Point (simple) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_clipLine_Size_Point_Point(SizeWrapper imgSize, PointWrapper& pt1, PointWrapper& pt2) {
    try {
        bool ret = cv::clipLine(*reinterpret_cast<cv::Size*>(&imgSize), *reinterpret_cast<cv::Point*>(&pt1), *reinterpret_cast<cv::Point*>(&pt2));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::compareHist
// as:     cv::compareHist (function)
// Arg ARG cv::_InputArray (boxed) H1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) H2= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) method= Primitive(int) = 
// Return value: Primitive(double)
cv_return_value_double cv_compareHist__InputArray__InputArray_int(void* H1, void* H2, int method) {
    try {
        double ret = cv::compareHist(*reinterpret_cast<const cv::_InputArray*>(H1), *reinterpret_cast<const cv::_InputArray*>(H2), method);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::connectedComponentsWithStats
// as:     cv::connectedComponentsWithStats (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) labels= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) stats= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) centroids= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) connectivity= Primitive(int) = 8
// Arg ARG Primitive(int) ltype= Primitive(int) = CV_32S
// Return value: Primitive(int)
cv_return_value_int cv_connectedComponentsWithStats__InputArray__OutputArray__OutputArray__OutputArray_int_int(void* image, void* labels, void* stats, void* centroids, int connectivity, int ltype) {
    try {
        int ret = cv::connectedComponentsWithStats(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(labels), *reinterpret_cast<cv::_OutputArray*>(stats), *reinterpret_cast<cv::_OutputArray*>(centroids), connectivity, ltype);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::connectedComponentsWithStats
// as:     cv::connectedComponentsWithStats (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) labels= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) stats= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) centroids= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) connectivity= Primitive(int) = 
// Arg ARG Primitive(int) ltype= Primitive(int) = 
// Arg ARG Primitive(int) ccltype= Primitive(int) = 
// Return value: Primitive(int)
cv_return_value_int cv_connectedComponentsWithStats__InputArray__OutputArray__OutputArray__OutputArray_int_int_int(void* image, void* labels, void* stats, void* centroids, int connectivity, int ltype, int ccltype) {
    try {
        int ret = cv::connectedComponentsWithStats(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(labels), *reinterpret_cast<cv::_OutputArray*>(stats), *reinterpret_cast<cv::_OutputArray*>(centroids), connectivity, ltype, ccltype);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::connectedComponents
// as:     cv::connectedComponents (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) labels= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) connectivity= Primitive(int) = 8
// Arg ARG Primitive(int) ltype= Primitive(int) = CV_32S
// Return value: Primitive(int)
cv_return_value_int cv_connectedComponents__InputArray__OutputArray_int_int(void* image, void* labels, int connectivity, int ltype) {
    try {
        int ret = cv::connectedComponents(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(labels), connectivity, ltype);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::connectedComponents
// as:     cv::connectedComponents (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) labels= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) connectivity= Primitive(int) = 
// Arg ARG Primitive(int) ltype= Primitive(int) = 
// Arg ARG Primitive(int) ccltype= Primitive(int) = 
// Return value: Primitive(int)
cv_return_value_int cv_connectedComponents__InputArray__OutputArray_int_int_int(void* image, void* labels, int connectivity, int ltype, int ccltype) {
    try {
        int ret = cv::connectedComponents(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(labels), connectivity, ltype, ccltype);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::contourArea
// as:     cv::contourArea (function)
// Arg ARG cv::_InputArray (boxed) contour= cv::_InputArray (boxed) = 
// Arg ARG Primitive(bool) oriented= Primitive(bool) = false
// Return value: Primitive(double)
cv_return_value_double cv_contourArea__InputArray_bool(void* contour, bool oriented) {
    try {
        double ret = cv::contourArea(*reinterpret_cast<const cv::_InputArray*>(contour), oriented);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::convertMaps
// as:     cv::convertMaps (function)
// Arg ARG cv::_InputArray (boxed) map1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) map2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dstmap1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dstmap2= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) dstmap1type= Primitive(int) = 
// Arg ARG Primitive(bool) nninterpolation= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_convertMaps__InputArray__InputArray__OutputArray__OutputArray_int_bool(void* map1, void* map2, void* dstmap1, void* dstmap2, int dstmap1type, bool nninterpolation) {
    try {
        cv::convertMaps(*reinterpret_cast<const cv::_InputArray*>(map1), *reinterpret_cast<const cv::_InputArray*>(map2), *reinterpret_cast<cv::_OutputArray*>(dstmap1), *reinterpret_cast<cv::_OutputArray*>(dstmap2), dstmap1type, nninterpolation);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::convexHull
// as:     cv::convexHull (function)
// Arg ARG cv::_InputArray (boxed) points= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) hull= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(bool) clockwise= Primitive(bool) = false
// Arg ARG Primitive(bool) returnPoints= Primitive(bool) = true
// Return value: Primitive(void)
cv_return_value_void cv_convexHull__InputArray__OutputArray_bool_bool(void* points, void* hull, bool clockwise, bool returnPoints) {
    try {
        cv::convexHull(*reinterpret_cast<const cv::_InputArray*>(points), *reinterpret_cast<cv::_OutputArray*>(hull), clockwise, returnPoints);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::convexityDefects
// as:     cv::convexityDefects (function)
// Arg ARG cv::_InputArray (boxed) contour= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) convexhull= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) convexityDefects= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_convexityDefects__InputArray__InputArray__OutputArray(void* contour, void* convexhull, void* convexityDefects) {
    try {
        cv::convexityDefects(*reinterpret_cast<const cv::_InputArray*>(contour), *reinterpret_cast<const cv::_InputArray*>(convexhull), *reinterpret_cast<cv::_OutputArray*>(convexityDefects));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::cornerEigenValsAndVecs
// as:     cv::cornerEigenValsAndVecs (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) blockSize= Primitive(int) = 
// Arg ARG Primitive(int) ksize= Primitive(int) = 
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_cornerEigenValsAndVecs__InputArray__OutputArray_int_int_int(void* src, void* dst, int blockSize, int ksize, int borderType) {
    try {
        cv::cornerEigenValsAndVecs(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), blockSize, ksize, borderType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::cornerHarris
// as:     cv::cornerHarris (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) blockSize= Primitive(int) = 
// Arg ARG Primitive(int) ksize= Primitive(int) = 
// Arg ARG Primitive(double) k= Primitive(double) = 
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_cornerHarris__InputArray__OutputArray_int_int_double_int(void* src, void* dst, int blockSize, int ksize, double k, int borderType) {
    try {
        cv::cornerHarris(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), blockSize, ksize, k, borderType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::cornerMinEigenVal
// as:     cv::cornerMinEigenVal (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) blockSize= Primitive(int) = 
// Arg ARG Primitive(int) ksize= Primitive(int) = 3
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_cornerMinEigenVal__InputArray__OutputArray_int_int_int(void* src, void* dst, int blockSize, int ksize, int borderType) {
    try {
        cv::cornerMinEigenVal(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), blockSize, ksize, borderType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::cornerSubPix
// as:     cv::cornerSubPix (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) corners= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Size (simple) winSize= cv::Size (simple) = 
// Arg ARG cv::Size (simple) zeroZone= cv::Size (simple) = 
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_cornerSubPix__InputArray__InputOutputArray_Size_Size_TermCriteria(void* image, void* corners, SizeWrapper winSize, SizeWrapper zeroZone, void* criteria) {
    try {
        cv::cornerSubPix(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_InputOutputArray*>(corners), *reinterpret_cast<cv::Size*>(&winSize), *reinterpret_cast<cv::Size*>(&zeroZone), *reinterpret_cast<cv::TermCriteria*>(criteria));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::createCLAHE
// as:     cv::createCLAHE (function)
// Arg ARG Primitive(double) clipLimit= Primitive(double) = 40.0
// Arg ARG cv::Size (simple) tileGridSize= cv::Size (simple) = Size(8, 8)
// Return value: SmartPtr[cv::CLAHE (boxed)]
cv_return_value_void_X cv_createCLAHE_double_Size(double clipLimit, SizeWrapper tileGridSize) {
    try {
        Ptr<cv::CLAHE> ret = cv::createCLAHE(clipLimit, *reinterpret_cast<cv::Size*>(&tileGridSize));
        return { Error::Code::StsOk, NULL, new Ptr<cv::CLAHE>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::createGeneralizedHoughBallard
// as:     cv::createGeneralizedHoughBallard (function)
// Return value: SmartPtr[cv::GeneralizedHoughBallard (boxed)]
cv_return_value_void_X cv_createGeneralizedHoughBallard() {
    try {
        Ptr<cv::GeneralizedHoughBallard> ret = cv::createGeneralizedHoughBallard();
        return { Error::Code::StsOk, NULL, new Ptr<cv::GeneralizedHoughBallard>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::createGeneralizedHoughGuil
// as:     cv::createGeneralizedHoughGuil (function)
// Return value: SmartPtr[cv::GeneralizedHoughGuil (boxed)]
cv_return_value_void_X cv_createGeneralizedHoughGuil() {
    try {
        Ptr<cv::GeneralizedHoughGuil> ret = cv::createGeneralizedHoughGuil();
        return { Error::Code::StsOk, NULL, new Ptr<cv::GeneralizedHoughGuil>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::createHanningWindow
// as:     cv::createHanningWindow (function)
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::Size (simple) winSize= cv::Size (simple) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_createHanningWindow__OutputArray_Size_int(void* dst, SizeWrapper winSize, int type) {
    try {
        cv::createHanningWindow(*reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<cv::Size*>(&winSize), type);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::createLineSegmentDetector
// as:     cv::createLineSegmentDetector (function)
// Arg ARG Primitive(int) _refine= Primitive(int) = LSD_REFINE_STD
// Arg ARG Primitive(double) _scale= Primitive(double) = 0.8
// Arg ARG Primitive(double) _sigma_scale= Primitive(double) = 0.6
// Arg ARG Primitive(double) _quant= Primitive(double) = 2.0
// Arg ARG Primitive(double) _ang_th= Primitive(double) = 22.5
// Arg ARG Primitive(double) _log_eps= Primitive(double) = 0
// Arg ARG Primitive(double) _density_th= Primitive(double) = 0.7
// Arg ARG Primitive(int) _n_bins= Primitive(int) = 1024
// Return value: SmartPtr[cv::LineSegmentDetector (boxed)]
cv_return_value_void_X cv_createLineSegmentDetector_int_double_double_double_double_double_double_int(int _refine, double _scale, double _sigma_scale, double _quant, double _ang_th, double _log_eps, double _density_th, int _n_bins) {
    try {
        Ptr<cv::LineSegmentDetector> ret = cv::createLineSegmentDetector(_refine, _scale, _sigma_scale, _quant, _ang_th, _log_eps, _density_th, _n_bins);
        return { Error::Code::StsOk, NULL, new Ptr<cv::LineSegmentDetector>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::cvtColorTwoPlane
// as:     cv::cvtColorTwoPlane (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) code= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_cvtColorTwoPlane__InputArray__InputArray__OutputArray_int(void* src1, void* src2, void* dst, int code) {
    try {
        cv::cvtColorTwoPlane(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<cv::_OutputArray*>(dst), code);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::cvtColor
// as:     cv::cvtColor (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) code= Primitive(int) = 
// Arg ARG Primitive(int) dstCn= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_cvtColor__InputArray__OutputArray_int_int(void* src, void* dst, int code, int dstCn) {
    try {
        cv::cvtColor(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), code, dstCn);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::demosaicing
// as:     cv::demosaicing (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) code= Primitive(int) = 
// Arg ARG Primitive(int) dstCn= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_demosaicing__InputArray__OutputArray_int_int(void* src, void* dst, int code, int dstCn) {
    try {
        cv::demosaicing(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), code, dstCn);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dilate
// as:     cv::dilate (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) kernel= cv::_InputArray (boxed) = 
// Arg ARG cv::Point (simple) anchor= cv::Point (simple) = Point(-1,-1)
// Arg ARG Primitive(int) iterations= Primitive(int) = 1
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_CONSTANT
// Arg ARG cv::Scalar (simple) borderValue= cv::Scalar (simple) = morphologyDefaultBorderValue()
// Return value: Primitive(void)
cv_return_value_void cv_dilate__InputArray__OutputArray__InputArray_Point_int_int_Scalar(void* src, void* dst, void* kernel, PointWrapper anchor, int iterations, int borderType, ScalarWrapper borderValue) {
    try {
        cv::dilate(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(kernel), *reinterpret_cast<cv::Point*>(&anchor), iterations, borderType, *reinterpret_cast<const cv::Scalar*>(&borderValue));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::distanceTransform
// as:     cv::distanceTransform (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) labels= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) distanceType= Primitive(int) = 
// Arg ARG Primitive(int) maskSize= Primitive(int) = 
// Arg ARG Primitive(int) labelType= Primitive(int) = DIST_LABEL_CCOMP
// Return value: Primitive(void)
cv_return_value_void cv_distanceTransform__InputArray__OutputArray__OutputArray_int_int_int(void* src, void* dst, void* labels, int distanceType, int maskSize, int labelType) {
    try {
        cv::distanceTransform(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<cv::_OutputArray*>(labels), distanceType, maskSize, labelType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::distanceTransform
// as:     cv::distanceTransform (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) distanceType= Primitive(int) = 
// Arg ARG Primitive(int) maskSize= Primitive(int) = 
// Arg ARG Primitive(int) dstType= Primitive(int) = CV_32F
// Return value: Primitive(void)
cv_return_value_void cv_distanceTransform__InputArray__OutputArray_int_int_int(void* src, void* dst, int distanceType, int maskSize, int dstType) {
    try {
        cv::distanceTransform(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), distanceType, maskSize, dstType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::drawContours
// as:     cv::drawContours (function)
// Arg ARG cv::_InputOutputArray (boxed) image= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) contours= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) contourIdx= Primitive(int) = 
// Arg ARG cv::Scalar (simple) color= cv::Scalar (simple) = 
// Arg ARG Primitive(int) thickness= Primitive(int) = 1
// Arg ARG Primitive(int) lineType= Primitive(int) = LINE_8
// Arg ARG cv::_InputArray (boxed) hierarchy= cv::_InputArray (boxed) = noArray()
// Arg ARG Primitive(int) maxLevel= Primitive(int) = INT_MAX
// Arg ARG cv::Point (simple) offset= cv::Point (simple) = Point()
// Return value: Primitive(void)
cv_return_value_void cv_drawContours__InputOutputArray__InputArray_int_Scalar_int_int__InputArray_int_Point(void* image, void* contours, int contourIdx, ScalarWrapper color, int thickness, int lineType, void* hierarchy, int maxLevel, PointWrapper offset) {
    try {
        cv::drawContours(*reinterpret_cast<cv::_InputOutputArray*>(image), *reinterpret_cast<const cv::_InputArray*>(contours), contourIdx, *reinterpret_cast<const cv::Scalar*>(&color), thickness, lineType, *reinterpret_cast<const cv::_InputArray*>(hierarchy), maxLevel, *reinterpret_cast<cv::Point*>(&offset));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::drawMarker
// as:     cv::drawMarker (function)
// Arg ARG cv::_InputOutputArray (boxed) img= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Point (simple) position= cv::Point (simple) = 
// Arg ARG cv::Scalar (simple) color= cv::Scalar (simple) = 
// Arg ARG Primitive(int) markerType= Primitive(int) = MARKER_CROSS
// Arg ARG Primitive(int) markerSize= Primitive(int) = 20
// Arg ARG Primitive(int) thickness= Primitive(int) = 1
// Arg ARG Primitive(int) line_type= Primitive(int) = 8
// Return value: Primitive(void)
cv_return_value_void cv_drawMarker__InputOutputArray_Point_Scalar_int_int_int_int(void* img, PointWrapper position, ScalarWrapper color, int markerType, int markerSize, int thickness, int line_type) {
    try {
        cv::drawMarker(*reinterpret_cast<cv::_InputOutputArray*>(img), *reinterpret_cast<cv::Point*>(&position), *reinterpret_cast<const cv::Scalar*>(&color), markerType, markerSize, thickness, line_type);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ellipse2Poly
// as:     cv::ellipse2Poly (function)
// Arg ARG cv::Point2d (simple) center= cv::Point2d (simple) = 
// Arg ARG cv::Size2d (simple) axes= cv::Size2d (simple) = 
// Arg ARG Primitive(int) angle= Primitive(int) = 
// Arg ARG Primitive(int) arcStart= Primitive(int) = 
// Arg ARG Primitive(int) arcEnd= Primitive(int) = 
// Arg ARG Primitive(int) delta= Primitive(int) = 
// Arg ARG Vector[cv::Point2d (simple)] pts= Vector[cv::Point2d (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_ellipse2Poly_Point2d_Size2d_int_int_int_int_VectorOfPoint2d(Point2dWrapper center, Size2dWrapper axes, int angle, int arcStart, int arcEnd, int delta, void* pts) {
    try {
        cv::ellipse2Poly(*reinterpret_cast<cv::Point2d*>(&center), *reinterpret_cast<cv::Size2d*>(&axes), angle, arcStart, arcEnd, delta, *reinterpret_cast<std::vector<cv::Point2d>*>(pts));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ellipse2Poly
// as:     cv::ellipse2Poly (function)
// Arg ARG cv::Point (simple) center= cv::Point (simple) = 
// Arg ARG cv::Size (simple) axes= cv::Size (simple) = 
// Arg ARG Primitive(int) angle= Primitive(int) = 
// Arg ARG Primitive(int) arcStart= Primitive(int) = 
// Arg ARG Primitive(int) arcEnd= Primitive(int) = 
// Arg ARG Primitive(int) delta= Primitive(int) = 
// Arg ARG Vector[cv::Point (simple)] pts= Vector[cv::Point (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_ellipse2Poly_Point_Size_int_int_int_int_VectorOfPoint(PointWrapper center, SizeWrapper axes, int angle, int arcStart, int arcEnd, int delta, void* pts) {
    try {
        cv::ellipse2Poly(*reinterpret_cast<cv::Point*>(&center), *reinterpret_cast<cv::Size*>(&axes), angle, arcStart, arcEnd, delta, *reinterpret_cast<std::vector<cv::Point>*>(pts));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ellipse
// as:     cv::ellipse (function)
// Arg ARG cv::_InputOutputArray (boxed) img= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Point (simple) center= cv::Point (simple) = 
// Arg ARG cv::Size (simple) axes= cv::Size (simple) = 
// Arg ARG Primitive(double) angle= Primitive(double) = 
// Arg ARG Primitive(double) startAngle= Primitive(double) = 
// Arg ARG Primitive(double) endAngle= Primitive(double) = 
// Arg ARG cv::Scalar (simple) color= cv::Scalar (simple) = 
// Arg ARG Primitive(int) thickness= Primitive(int) = 1
// Arg ARG Primitive(int) lineType= Primitive(int) = LINE_8
// Arg ARG Primitive(int) shift= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_ellipse__InputOutputArray_Point_Size_double_double_double_Scalar_int_int_int(void* img, PointWrapper center, SizeWrapper axes, double angle, double startAngle, double endAngle, ScalarWrapper color, int thickness, int lineType, int shift) {
    try {
        cv::ellipse(*reinterpret_cast<cv::_InputOutputArray*>(img), *reinterpret_cast<cv::Point*>(&center), *reinterpret_cast<cv::Size*>(&axes), angle, startAngle, endAngle, *reinterpret_cast<const cv::Scalar*>(&color), thickness, lineType, shift);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ellipse
// as:     cv::ellipse (function)
// Arg ARG cv::_InputOutputArray (boxed) img= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::RotatedRect (boxed) box= cv::RotatedRect (boxed) = 
// Arg ARG cv::Scalar (simple) color= cv::Scalar (simple) = 
// Arg ARG Primitive(int) thickness= Primitive(int) = 1
// Arg ARG Primitive(int) lineType= Primitive(int) = LINE_8
// Return value: Primitive(void)
cv_return_value_void cv_ellipse__InputOutputArray_RotatedRect_Scalar_int_int(void* img, void* box, ScalarWrapper color, int thickness, int lineType) {
    try {
        cv::ellipse(*reinterpret_cast<cv::_InputOutputArray*>(img), *reinterpret_cast<const cv::RotatedRect*>(box), *reinterpret_cast<const cv::Scalar*>(&color), thickness, lineType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::equalizeHist
// as:     cv::equalizeHist (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_equalizeHist__InputArray__OutputArray(void* src, void* dst) {
    try {
        cv::equalizeHist(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::erode
// as:     cv::erode (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) kernel= cv::_InputArray (boxed) = 
// Arg ARG cv::Point (simple) anchor= cv::Point (simple) = Point(-1,-1)
// Arg ARG Primitive(int) iterations= Primitive(int) = 1
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_CONSTANT
// Arg ARG cv::Scalar (simple) borderValue= cv::Scalar (simple) = morphologyDefaultBorderValue()
// Return value: Primitive(void)
cv_return_value_void cv_erode__InputArray__OutputArray__InputArray_Point_int_int_Scalar(void* src, void* dst, void* kernel, PointWrapper anchor, int iterations, int borderType, ScalarWrapper borderValue) {
    try {
        cv::erode(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(kernel), *reinterpret_cast<cv::Point*>(&anchor), iterations, borderType, *reinterpret_cast<const cv::Scalar*>(&borderValue));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::fillConvexPoly
// as:     cv::fillConvexPoly (function)
// Arg ARG cv::_InputOutputArray (boxed) img= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points= cv::_InputArray (boxed) = 
// Arg ARG cv::Scalar (simple) color= cv::Scalar (simple) = 
// Arg ARG Primitive(int) lineType= Primitive(int) = LINE_8
// Arg ARG Primitive(int) shift= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_fillConvexPoly__InputOutputArray__InputArray_Scalar_int_int(void* img, void* points, ScalarWrapper color, int lineType, int shift) {
    try {
        cv::fillConvexPoly(*reinterpret_cast<cv::_InputOutputArray*>(img), *reinterpret_cast<const cv::_InputArray*>(points), *reinterpret_cast<const cv::Scalar*>(&color), lineType, shift);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::fillPoly
// as:     cv::fillPoly (function)
// Arg ARG cv::_InputOutputArray (boxed) img= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) pts= cv::_InputArray (boxed) = 
// Arg ARG cv::Scalar (simple) color= cv::Scalar (simple) = 
// Arg ARG Primitive(int) lineType= Primitive(int) = LINE_8
// Arg ARG Primitive(int) shift= Primitive(int) = 0
// Arg ARG cv::Point (simple) offset= cv::Point (simple) = Point()
// Return value: Primitive(void)
cv_return_value_void cv_fillPoly__InputOutputArray__InputArray_Scalar_int_int_Point(void* img, void* pts, ScalarWrapper color, int lineType, int shift, PointWrapper offset) {
    try {
        cv::fillPoly(*reinterpret_cast<cv::_InputOutputArray*>(img), *reinterpret_cast<const cv::_InputArray*>(pts), *reinterpret_cast<const cv::Scalar*>(&color), lineType, shift, *reinterpret_cast<cv::Point*>(&offset));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::filter2D
// as:     cv::filter2D (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) ddepth= Primitive(int) = 
// Arg ARG cv::_InputArray (boxed) kernel= cv::_InputArray (boxed) = 
// Arg ARG cv::Point (simple) anchor= cv::Point (simple) = Point(-1,-1)
// Arg ARG Primitive(double) delta= Primitive(double) = 0
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_filter2D__InputArray__OutputArray_int__InputArray_Point_double_int(void* src, void* dst, int ddepth, void* kernel, PointWrapper anchor, double delta, int borderType) {
    try {
        cv::filter2D(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), ddepth, *reinterpret_cast<const cv::_InputArray*>(kernel), *reinterpret_cast<cv::Point*>(&anchor), delta, borderType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::findContours
// as:     cv::findContours (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) contours= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) hierarchy= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) mode= Primitive(int) = 
// Arg ARG Primitive(int) method= Primitive(int) = 
// Arg ARG cv::Point (simple) offset= cv::Point (simple) = Point()
// Return value: Primitive(void)
cv_return_value_void cv_findContours__InputArray__OutputArray__OutputArray_int_int_Point(void* image, void* contours, void* hierarchy, int mode, int method, PointWrapper offset) {
    try {
        cv::findContours(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(contours), *reinterpret_cast<cv::_OutputArray*>(hierarchy), mode, method, *reinterpret_cast<cv::Point*>(&offset));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::findContours
// as:     cv::findContours (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) contours= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) mode= Primitive(int) = 
// Arg ARG Primitive(int) method= Primitive(int) = 
// Arg ARG cv::Point (simple) offset= cv::Point (simple) = Point()
// Return value: Primitive(void)
cv_return_value_void cv_findContours__InputArray__OutputArray_int_int_Point(void* image, void* contours, int mode, int method, PointWrapper offset) {
    try {
        cv::findContours(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(contours), mode, method, *reinterpret_cast<cv::Point*>(&offset));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::fitEllipseAMS
// as:     cv::fitEllipseAMS (function)
// Arg ARG cv::_InputArray (boxed) points= cv::_InputArray (boxed) = 
// Return value: cv::RotatedRect (boxed)
cv_return_value_void_X cv_fitEllipseAMS__InputArray(void* points) {
    try {
        cv::RotatedRect ret = cv::fitEllipseAMS(*reinterpret_cast<const cv::_InputArray*>(points));
        return { Error::Code::StsOk, NULL, new cv::RotatedRect(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::fitEllipseDirect
// as:     cv::fitEllipseDirect (function)
// Arg ARG cv::_InputArray (boxed) points= cv::_InputArray (boxed) = 
// Return value: cv::RotatedRect (boxed)
cv_return_value_void_X cv_fitEllipseDirect__InputArray(void* points) {
    try {
        cv::RotatedRect ret = cv::fitEllipseDirect(*reinterpret_cast<const cv::_InputArray*>(points));
        return { Error::Code::StsOk, NULL, new cv::RotatedRect(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::fitEllipse
// as:     cv::fitEllipse (function)
// Arg ARG cv::_InputArray (boxed) points= cv::_InputArray (boxed) = 
// Return value: cv::RotatedRect (boxed)
cv_return_value_void_X cv_fitEllipse__InputArray(void* points) {
    try {
        cv::RotatedRect ret = cv::fitEllipse(*reinterpret_cast<const cv::_InputArray*>(points));
        return { Error::Code::StsOk, NULL, new cv::RotatedRect(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::fitLine
// as:     cv::fitLine (function)
// Arg ARG cv::_InputArray (boxed) points= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) line= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) distType= Primitive(int) = 
// Arg ARG Primitive(double) param= Primitive(double) = 
// Arg ARG Primitive(double) reps= Primitive(double) = 
// Arg ARG Primitive(double) aeps= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_fitLine__InputArray__OutputArray_int_double_double_double(void* points, void* line, int distType, double param, double reps, double aeps) {
    try {
        cv::fitLine(*reinterpret_cast<const cv::_InputArray*>(points), *reinterpret_cast<cv::_OutputArray*>(line), distType, param, reps, aeps);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::floodFill
// as:     cv::floodFill (function)
// Arg ARG cv::_InputOutputArray (boxed) image= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Point (simple) seedPoint= cv::Point (simple) = 
// Arg ARG cv::Scalar (simple) newVal= cv::Scalar (simple) = 
// Arg ARG RawPtr[cv::Rect (simple)] * rect= (ptr) RawPtr[cv::Rect (simple)] = 0
// Arg ARG cv::Scalar (simple) loDiff= cv::Scalar (simple) = Scalar()
// Arg ARG cv::Scalar (simple) upDiff= cv::Scalar (simple) = Scalar()
// Arg ARG Primitive(int) flags= Primitive(int) = 4
// Return value: Primitive(int)
cv_return_value_int cv_floodFill__InputOutputArray_Point_Scalar_Rect_X_Scalar_Scalar_int(void* image, PointWrapper seedPoint, ScalarWrapper newVal, cv::Rect* rect, ScalarWrapper loDiff, ScalarWrapper upDiff, int flags) {
    try {
        int ret = cv::floodFill(*reinterpret_cast<cv::_InputOutputArray*>(image), *reinterpret_cast<cv::Point*>(&seedPoint), *reinterpret_cast<cv::Scalar*>(&newVal), reinterpret_cast<cv::Rect*>(rect), *reinterpret_cast<cv::Scalar*>(&loDiff), *reinterpret_cast<cv::Scalar*>(&upDiff), flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::floodFill
// as:     cv::floodFill (function)
// Arg ARG cv::_InputOutputArray (boxed) image= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) mask= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Point (simple) seedPoint= cv::Point (simple) = 
// Arg ARG cv::Scalar (simple) newVal= cv::Scalar (simple) = 
// Arg ARG RawPtr[cv::Rect (simple)] * rect= (ptr) RawPtr[cv::Rect (simple)] = 0
// Arg ARG cv::Scalar (simple) loDiff= cv::Scalar (simple) = Scalar()
// Arg ARG cv::Scalar (simple) upDiff= cv::Scalar (simple) = Scalar()
// Arg ARG Primitive(int) flags= Primitive(int) = 4
// Return value: Primitive(int)
cv_return_value_int cv_floodFill__InputOutputArray__InputOutputArray_Point_Scalar_Rect_X_Scalar_Scalar_int(void* image, void* mask, PointWrapper seedPoint, ScalarWrapper newVal, cv::Rect* rect, ScalarWrapper loDiff, ScalarWrapper upDiff, int flags) {
    try {
        int ret = cv::floodFill(*reinterpret_cast<cv::_InputOutputArray*>(image), *reinterpret_cast<cv::_InputOutputArray*>(mask), *reinterpret_cast<cv::Point*>(&seedPoint), *reinterpret_cast<cv::Scalar*>(&newVal), reinterpret_cast<cv::Rect*>(rect), *reinterpret_cast<cv::Scalar*>(&loDiff), *reinterpret_cast<cv::Scalar*>(&upDiff), flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::getAffineTransform
// as:     cv::getAffineTransform (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) dst= cv::_InputArray (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_getAffineTransform__InputArray__InputArray(void* src, void* dst) {
    try {
        cv::Mat ret = cv::getAffineTransform(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<const cv::_InputArray*>(dst));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::getAffineTransform
// as:     cv::getAffineTransform (function)
// Arg ARG RawPtr[cv::Point2f (simple)] * src= (ptr) RawPtr[cv::Point2f (simple)] = 
// Arg ARG RawPtr[cv::Point2f (simple)] * dst= (ptr) RawPtr[cv::Point2f (simple)] = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_getAffineTransform_const_Point2f_X_const_Point2f_X(const cv::Point2f* src, const cv::Point2f* dst) {
    try {
        cv::Mat ret = cv::getAffineTransform(reinterpret_cast<const cv::Point2f*>(src), reinterpret_cast<const cv::Point2f*>(dst));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::getDerivKernels
// as:     cv::getDerivKernels (function)
// Arg ARG cv::_OutputArray (boxed) kx= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) ky= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) dx= Primitive(int) = 
// Arg ARG Primitive(int) dy= Primitive(int) = 
// Arg ARG Primitive(int) ksize= Primitive(int) = 
// Arg ARG Primitive(bool) normalize= Primitive(bool) = false
// Arg ARG Primitive(int) ktype= Primitive(int) = CV_32F
// Return value: Primitive(void)
cv_return_value_void cv_getDerivKernels__OutputArray__OutputArray_int_int_int_bool_int(void* kx, void* ky, int dx, int dy, int ksize, bool normalize, int ktype) {
    try {
        cv::getDerivKernels(*reinterpret_cast<cv::_OutputArray*>(kx), *reinterpret_cast<cv::_OutputArray*>(ky), dx, dy, ksize, normalize, ktype);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::getFontScaleFromHeight
// as:     cv::getFontScaleFromHeight (function)
// Arg ARG Primitive(int) fontFace= Primitive(int) = 
// Arg ARG Primitive(int) pixelHeight= Primitive(int) = 
// Arg ARG Primitive(int) thickness= Primitive(int) = 1
// Return value: Primitive(double)
cv_return_value_double cv_getFontScaleFromHeight_int_int_int(int fontFace, int pixelHeight, int thickness) {
    try {
        double ret = cv::getFontScaleFromHeight(fontFace, pixelHeight, thickness);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::getGaborKernel
// as:     cv::getGaborKernel (function)
// Arg ARG cv::Size (simple) ksize= cv::Size (simple) = 
// Arg ARG Primitive(double) sigma= Primitive(double) = 
// Arg ARG Primitive(double) theta= Primitive(double) = 
// Arg ARG Primitive(double) lambd= Primitive(double) = 
// Arg ARG Primitive(double) gamma= Primitive(double) = 
// Arg ARG Primitive(double) psi= Primitive(double) = CV_PI*0.5
// Arg ARG Primitive(int) ktype= Primitive(int) = CV_64F
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_getGaborKernel_Size_double_double_double_double_double_int(SizeWrapper ksize, double sigma, double theta, double lambd, double gamma, double psi, int ktype) {
    try {
        cv::Mat ret = cv::getGaborKernel(*reinterpret_cast<cv::Size*>(&ksize), sigma, theta, lambd, gamma, psi, ktype);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::getGaussianKernel
// as:     cv::getGaussianKernel (function)
// Arg ARG Primitive(int) ksize= Primitive(int) = 
// Arg ARG Primitive(double) sigma= Primitive(double) = 
// Arg ARG Primitive(int) ktype= Primitive(int) = CV_64F
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_getGaussianKernel_int_double_int(int ksize, double sigma, int ktype) {
    try {
        cv::Mat ret = cv::getGaussianKernel(ksize, sigma, ktype);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::getPerspectiveTransform
// as:     cv::getPerspectiveTransform (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) dst= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) solveMethod= Primitive(int) = DECOMP_LU
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_getPerspectiveTransform__InputArray__InputArray_int(void* src, void* dst, int solveMethod) {
    try {
        cv::Mat ret = cv::getPerspectiveTransform(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<const cv::_InputArray*>(dst), solveMethod);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::getPerspectiveTransform
// as:     cv::getPerspectiveTransform (function)
// Arg ARG RawPtr[cv::Point2f (simple)] * src= (ptr) RawPtr[cv::Point2f (simple)] = 
// Arg ARG RawPtr[cv::Point2f (simple)] * dst= (ptr) RawPtr[cv::Point2f (simple)] = 
// Arg ARG Primitive(int) solveMethod= Primitive(int) = DECOMP_LU
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_getPerspectiveTransform_const_Point2f_X_const_Point2f_X_int(const cv::Point2f* src, const cv::Point2f* dst, int solveMethod) {
    try {
        cv::Mat ret = cv::getPerspectiveTransform(reinterpret_cast<const cv::Point2f*>(src), reinterpret_cast<const cv::Point2f*>(dst), solveMethod);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::getRectSubPix
// as:     cv::getRectSubPix (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) patchSize= cv::Size (simple) = 
// Arg ARG cv::Point2f (simple) center= cv::Point2f (simple) = 
// Arg ARG cv::_OutputArray (boxed) patch= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) patchType= Primitive(int) = -1
// Return value: Primitive(void)
cv_return_value_void cv_getRectSubPix__InputArray_Size_Point2f__OutputArray_int(void* image, SizeWrapper patchSize, Point2fWrapper center, void* patch, int patchType) {
    try {
        cv::getRectSubPix(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::Size*>(&patchSize), *reinterpret_cast<cv::Point2f*>(&center), *reinterpret_cast<cv::_OutputArray*>(patch), patchType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::getRotationMatrix2D
// as:     cv::getRotationMatrix2D (function)
// Arg ARG cv::Point2f (simple) center= cv::Point2f (simple) = 
// Arg ARG Primitive(double) angle= Primitive(double) = 
// Arg ARG Primitive(double) scale= Primitive(double) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_getRotationMatrix2D_Point2f_double_double(Point2fWrapper center, double angle, double scale) {
    try {
        cv::Mat ret = cv::getRotationMatrix2D(*reinterpret_cast<cv::Point2f*>(&center), angle, scale);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::getStructuringElement
// as:     cv::getStructuringElement (function)
// Arg ARG Primitive(int) shape= Primitive(int) = 
// Arg ARG cv::Size (simple) ksize= cv::Size (simple) = 
// Arg ARG cv::Point (simple) anchor= cv::Point (simple) = Point(-1,-1)
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_getStructuringElement_int_Size_Point(int shape, SizeWrapper ksize, PointWrapper anchor) {
    try {
        cv::Mat ret = cv::getStructuringElement(shape, *reinterpret_cast<cv::Size*>(&ksize), *reinterpret_cast<cv::Point*>(&anchor));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::getTextSize
// as:     cv::getTextSize (function)
// Arg ARG string text= string = 
// Arg ARG Primitive(int) fontFace= Primitive(int) = 
// Arg ARG Primitive(double) fontScale= Primitive(double) = 
// Arg ARG Primitive(int) thickness= Primitive(int) = 
// Arg ARG RawPtr[Primitive(int)] * baseLine= (ptr) RawPtr[Primitive(int)] = 
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_getTextSize_String_int_double_int_int_X(const char* text, int fontFace, double fontScale, int thickness, int* baseLine) {
    try {
        cv::Size ret = cv::getTextSize(String(text), fontFace, fontScale, thickness, baseLine);
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::goodFeaturesToTrack
// as:     cv::goodFeaturesToTrack (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) corners= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) maxCorners= Primitive(int) = 
// Arg ARG Primitive(double) qualityLevel= Primitive(double) = 
// Arg ARG Primitive(double) minDistance= Primitive(double) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Arg ARG Primitive(int) blockSize= Primitive(int) = 3
// Arg ARG Primitive(bool) useHarrisDetector= Primitive(bool) = false
// Arg ARG Primitive(double) k= Primitive(double) = 0.04
// Return value: Primitive(void)
cv_return_value_void cv_goodFeaturesToTrack__InputArray__OutputArray_int_double_double__InputArray_int_bool_double(void* image, void* corners, int maxCorners, double qualityLevel, double minDistance, void* mask, int blockSize, bool useHarrisDetector, double k) {
    try {
        cv::goodFeaturesToTrack(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(corners), maxCorners, qualityLevel, minDistance, *reinterpret_cast<const cv::_InputArray*>(mask), blockSize, useHarrisDetector, k);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::goodFeaturesToTrack
// as:     cv::goodFeaturesToTrack (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) corners= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) maxCorners= Primitive(int) = 
// Arg ARG Primitive(double) qualityLevel= Primitive(double) = 
// Arg ARG Primitive(double) minDistance= Primitive(double) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) blockSize= Primitive(int) = 
// Arg ARG Primitive(int) gradientSize= Primitive(int) = 
// Arg ARG Primitive(bool) useHarrisDetector= Primitive(bool) = false
// Arg ARG Primitive(double) k= Primitive(double) = 0.04
// Return value: Primitive(void)
cv_return_value_void cv_goodFeaturesToTrack__InputArray__OutputArray_int_double_double__InputArray_int_int_bool_double(void* image, void* corners, int maxCorners, double qualityLevel, double minDistance, void* mask, int blockSize, int gradientSize, bool useHarrisDetector, double k) {
    try {
        cv::goodFeaturesToTrack(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(corners), maxCorners, qualityLevel, minDistance, *reinterpret_cast<const cv::_InputArray*>(mask), blockSize, gradientSize, useHarrisDetector, k);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::grabCut
// as:     cv::grabCut (function)
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) mask= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Rect (simple) rect= cv::Rect (simple) = 
// Arg ARG cv::_InputOutputArray (boxed) bgdModel= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) fgdModel= cv::_InputOutputArray (boxed) = 
// Arg ARG Primitive(int) iterCount= Primitive(int) = 
// Arg ARG Primitive(int) mode= Primitive(int) = GC_EVAL
// Return value: Primitive(void)
cv_return_value_void cv_grabCut__InputArray__InputOutputArray_Rect__InputOutputArray__InputOutputArray_int_int(void* img, void* mask, RectWrapper rect, void* bgdModel, void* fgdModel, int iterCount, int mode) {
    try {
        cv::grabCut(*reinterpret_cast<const cv::_InputArray*>(img), *reinterpret_cast<cv::_InputOutputArray*>(mask), *reinterpret_cast<cv::Rect*>(&rect), *reinterpret_cast<cv::_InputOutputArray*>(bgdModel), *reinterpret_cast<cv::_InputOutputArray*>(fgdModel), iterCount, mode);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::integral
// as:     cv::integral (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) sum= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) sqsum= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tilted= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) sdepth= Primitive(int) = -1
// Arg ARG Primitive(int) sqdepth= Primitive(int) = -1
// Return value: Primitive(void)
cv_return_value_void cv_integral__InputArray__OutputArray__OutputArray__OutputArray_int_int(void* src, void* sum, void* sqsum, void* tilted, int sdepth, int sqdepth) {
    try {
        cv::integral(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(sum), *reinterpret_cast<cv::_OutputArray*>(sqsum), *reinterpret_cast<cv::_OutputArray*>(tilted), sdepth, sqdepth);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::integral
// as:     cv::integral (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) sum= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) sqsum= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) sdepth= Primitive(int) = -1
// Arg ARG Primitive(int) sqdepth= Primitive(int) = -1
// Return value: Primitive(void)
cv_return_value_void cv_integral__InputArray__OutputArray__OutputArray_int_int(void* src, void* sum, void* sqsum, int sdepth, int sqdepth) {
    try {
        cv::integral(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(sum), *reinterpret_cast<cv::_OutputArray*>(sqsum), sdepth, sqdepth);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::integral
// as:     cv::integral (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) sum= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) sdepth= Primitive(int) = -1
// Return value: Primitive(void)
cv_return_value_void cv_integral__InputArray__OutputArray_int(void* src, void* sum, int sdepth) {
    try {
        cv::integral(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(sum), sdepth);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::intersectConvexConvex
// as:     cv::intersectConvexConvex (function)
// Arg ARG cv::_InputArray (boxed) _p1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) _p2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) _p12= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(bool) handleNested= Primitive(bool) = true
// Return value: Primitive(float)
cv_return_value_float cv_intersectConvexConvex__InputArray__InputArray__OutputArray_bool(void* _p1, void* _p2, void* _p12, bool handleNested) {
    try {
        float ret = cv::intersectConvexConvex(*reinterpret_cast<const cv::_InputArray*>(_p1), *reinterpret_cast<const cv::_InputArray*>(_p2), *reinterpret_cast<cv::_OutputArray*>(_p12), handleNested);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::invertAffineTransform
// as:     cv::invertAffineTransform (function)
// Arg ARG cv::_InputArray (boxed) M= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) iM= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_invertAffineTransform__InputArray__OutputArray(void* M, void* iM) {
    try {
        cv::invertAffineTransform(*reinterpret_cast<const cv::_InputArray*>(M), *reinterpret_cast<cv::_OutputArray*>(iM));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::isContourConvex
// as:     cv::isContourConvex (function)
// Arg ARG cv::_InputArray (boxed) contour= cv::_InputArray (boxed) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_isContourConvex__InputArray(void* contour) {
    try {
        bool ret = cv::isContourConvex(*reinterpret_cast<const cv::_InputArray*>(contour));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::line
// as:     cv::line (function)
// Arg ARG cv::_InputOutputArray (boxed) img= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Point (simple) pt1= cv::Point (simple) = 
// Arg ARG cv::Point (simple) pt2= cv::Point (simple) = 
// Arg ARG cv::Scalar (simple) color= cv::Scalar (simple) = 
// Arg ARG Primitive(int) thickness= Primitive(int) = 1
// Arg ARG Primitive(int) lineType= Primitive(int) = LINE_8
// Arg ARG Primitive(int) shift= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_line__InputOutputArray_Point_Point_Scalar_int_int_int(void* img, PointWrapper pt1, PointWrapper pt2, ScalarWrapper color, int thickness, int lineType, int shift) {
    try {
        cv::line(*reinterpret_cast<cv::_InputOutputArray*>(img), *reinterpret_cast<cv::Point*>(&pt1), *reinterpret_cast<cv::Point*>(&pt2), *reinterpret_cast<const cv::Scalar*>(&color), thickness, lineType, shift);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::linearPolar
// as:     cv::linearPolar (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::Point2f (simple) center= cv::Point2f (simple) = 
// Arg ARG Primitive(double) maxRadius= Primitive(double) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_linearPolar__InputArray__OutputArray_Point2f_double_int(void* src, void* dst, Point2fWrapper center, double maxRadius, int flags) {
    try {
        cv::linearPolar(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<cv::Point2f*>(&center), maxRadius, flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::logPolar
// as:     cv::logPolar (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::Point2f (simple) center= cv::Point2f (simple) = 
// Arg ARG Primitive(double) M= Primitive(double) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_logPolar__InputArray__OutputArray_Point2f_double_int(void* src, void* dst, Point2fWrapper center, double M, int flags) {
    try {
        cv::logPolar(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<cv::Point2f*>(&center), M, flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::matchShapes
// as:     cv::matchShapes (function)
// Arg ARG cv::_InputArray (boxed) contour1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) contour2= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) method= Primitive(int) = 
// Arg ARG Primitive(double) parameter= Primitive(double) = 
// Return value: Primitive(double)
cv_return_value_double cv_matchShapes__InputArray__InputArray_int_double(void* contour1, void* contour2, int method, double parameter) {
    try {
        double ret = cv::matchShapes(*reinterpret_cast<const cv::_InputArray*>(contour1), *reinterpret_cast<const cv::_InputArray*>(contour2), method, parameter);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::matchTemplate
// as:     cv::matchTemplate (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) templ= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) result= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) method= Primitive(int) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_matchTemplate__InputArray__InputArray__OutputArray_int__InputArray(void* image, void* templ, void* result, int method, void* mask) {
    try {
        cv::matchTemplate(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<const cv::_InputArray*>(templ), *reinterpret_cast<cv::_OutputArray*>(result), method, *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::medianBlur
// as:     cv::medianBlur (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) ksize= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_medianBlur__InputArray__OutputArray_int(void* src, void* dst, int ksize) {
    try {
        cv::medianBlur(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), ksize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::minAreaRect
// as:     cv::minAreaRect (function)
// Arg ARG cv::_InputArray (boxed) points= cv::_InputArray (boxed) = 
// Return value: cv::RotatedRect (boxed)
cv_return_value_void_X cv_minAreaRect__InputArray(void* points) {
    try {
        cv::RotatedRect ret = cv::minAreaRect(*reinterpret_cast<const cv::_InputArray*>(points));
        return { Error::Code::StsOk, NULL, new cv::RotatedRect(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::minEnclosingCircle
// as:     cv::minEnclosingCircle (function)
// Arg ARG cv::_InputArray (boxed) points= cv::_InputArray (boxed) = 
// Arg ARG cv::Point2f (simple) center= cv::Point2f (simple) = 
// Arg ARG Primitive(float) radius= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_minEnclosingCircle__InputArray_Point2f_float(void* points, Point2fWrapper& center, float& radius) {
    try {
        cv::minEnclosingCircle(*reinterpret_cast<const cv::_InputArray*>(points), *reinterpret_cast<cv::Point2f*>(&center), radius);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::minEnclosingTriangle
// as:     cv::minEnclosingTriangle (function)
// Arg ARG cv::_InputArray (boxed) points= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) triangle= cv::_OutputArray (boxed) = 
// Return value: Primitive(double)
cv_return_value_double cv_minEnclosingTriangle__InputArray__OutputArray(void* points, void* triangle) {
    try {
        double ret = cv::minEnclosingTriangle(*reinterpret_cast<const cv::_InputArray*>(points), *reinterpret_cast<cv::_OutputArray*>(triangle));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::morphologyDefaultBorderValue
// as:     cv::morphologyDefaultBorderValue (function)
// Return value: cv::Scalar (simple)
cv_return_value_ScalarWrapper cv_morphologyDefaultBorderValue() {
    try {
        cv::Scalar ret = cv::morphologyDefaultBorderValue();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<ScalarWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_ScalarWrapper)
}

// parsed: cv::morphologyEx
// as:     cv::morphologyEx (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) op= Primitive(int) = 
// Arg ARG cv::_InputArray (boxed) kernel= cv::_InputArray (boxed) = 
// Arg ARG cv::Point (simple) anchor= cv::Point (simple) = Point(-1,-1)
// Arg ARG Primitive(int) iterations= Primitive(int) = 1
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_CONSTANT
// Arg ARG cv::Scalar (simple) borderValue= cv::Scalar (simple) = morphologyDefaultBorderValue()
// Return value: Primitive(void)
cv_return_value_void cv_morphologyEx__InputArray__OutputArray_int__InputArray_Point_int_int_Scalar(void* src, void* dst, int op, void* kernel, PointWrapper anchor, int iterations, int borderType, ScalarWrapper borderValue) {
    try {
        cv::morphologyEx(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), op, *reinterpret_cast<const cv::_InputArray*>(kernel), *reinterpret_cast<cv::Point*>(&anchor), iterations, borderType, *reinterpret_cast<const cv::Scalar*>(&borderValue));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::phaseCorrelate
// as:     cv::phaseCorrelate (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) window= cv::_InputArray (boxed) = noArray()
// Arg ARG RawPtr[Primitive(double)] * response= (ptr) RawPtr[Primitive(double)] = 0
// Return value: cv::Point2d (simple)
cv_return_value_Point2dWrapper cv_phaseCorrelate__InputArray__InputArray__InputArray_double_X(void* src1, void* src2, void* window, double* response) {
    try {
        cv::Point2d ret = cv::phaseCorrelate(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<const cv::_InputArray*>(window), response);
        return { Error::Code::StsOk, NULL, *reinterpret_cast<Point2dWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_Point2dWrapper)
}

// parsed: cv::pointPolygonTest
// as:     cv::pointPolygonTest (function)
// Arg ARG cv::_InputArray (boxed) contour= cv::_InputArray (boxed) = 
// Arg ARG cv::Point2f (simple) pt= cv::Point2f (simple) = 
// Arg ARG Primitive(bool) measureDist= Primitive(bool) = 
// Return value: Primitive(double)
cv_return_value_double cv_pointPolygonTest__InputArray_Point2f_bool(void* contour, Point2fWrapper pt, bool measureDist) {
    try {
        double ret = cv::pointPolygonTest(*reinterpret_cast<const cv::_InputArray*>(contour), *reinterpret_cast<cv::Point2f*>(&pt), measureDist);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::polylines
// as:     cv::polylines (function)
// Arg ARG cv::_InputOutputArray (boxed) img= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) pts= cv::_InputArray (boxed) = 
// Arg ARG Primitive(bool) isClosed= Primitive(bool) = 
// Arg ARG cv::Scalar (simple) color= cv::Scalar (simple) = 
// Arg ARG Primitive(int) thickness= Primitive(int) = 1
// Arg ARG Primitive(int) lineType= Primitive(int) = LINE_8
// Arg ARG Primitive(int) shift= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_polylines__InputOutputArray__InputArray_bool_Scalar_int_int_int(void* img, void* pts, bool isClosed, ScalarWrapper color, int thickness, int lineType, int shift) {
    try {
        cv::polylines(*reinterpret_cast<cv::_InputOutputArray*>(img), *reinterpret_cast<const cv::_InputArray*>(pts), isClosed, *reinterpret_cast<const cv::Scalar*>(&color), thickness, lineType, shift);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::preCornerDetect
// as:     cv::preCornerDetect (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) ksize= Primitive(int) = 
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_preCornerDetect__InputArray__OutputArray_int_int(void* src, void* dst, int ksize, int borderType) {
    try {
        cv::preCornerDetect(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), ksize, borderType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::putText
// as:     cv::putText (function)
// Arg ARG cv::_InputOutputArray (boxed) img= cv::_InputOutputArray (boxed) = 
// Arg ARG string text= string = 
// Arg ARG cv::Point (simple) org= cv::Point (simple) = 
// Arg ARG Primitive(int) fontFace= Primitive(int) = 
// Arg ARG Primitive(double) fontScale= Primitive(double) = 
// Arg ARG cv::Scalar (simple) color= cv::Scalar (simple) = 
// Arg ARG Primitive(int) thickness= Primitive(int) = 1
// Arg ARG Primitive(int) lineType= Primitive(int) = LINE_8
// Arg ARG Primitive(bool) bottomLeftOrigin= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_putText__InputOutputArray_String_Point_int_double_Scalar_int_int_bool(void* img, const char* text, PointWrapper org, int fontFace, double fontScale, ScalarWrapper color, int thickness, int lineType, bool bottomLeftOrigin) {
    try {
        cv::putText(*reinterpret_cast<cv::_InputOutputArray*>(img), String(text), *reinterpret_cast<cv::Point*>(&org), fontFace, fontScale, *reinterpret_cast<cv::Scalar*>(&color), thickness, lineType, bottomLeftOrigin);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::pyrDown
// as:     cv::pyrDown (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::Size (simple) dstsize= cv::Size (simple) = Size()
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_pyrDown__InputArray__OutputArray_Size_int(void* src, void* dst, SizeWrapper dstsize, int borderType) {
    try {
        cv::pyrDown(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::Size*>(&dstsize), borderType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::pyrMeanShiftFiltering
// as:     cv::pyrMeanShiftFiltering (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) sp= Primitive(double) = 
// Arg ARG Primitive(double) sr= Primitive(double) = 
// Arg ARG Primitive(int) maxLevel= Primitive(int) = 1
// Arg ARG cv::TermCriteria (boxed) termcrit= cv::TermCriteria (boxed) = TermCriteria(TermCriteria::MAX_ITER+TermCriteria::EPS,5,1)
// Return value: Primitive(void)
cv_return_value_void cv_pyrMeanShiftFiltering__InputArray__OutputArray_double_double_int_TermCriteria(void* src, void* dst, double sp, double sr, int maxLevel, void* termcrit) {
    try {
        cv::pyrMeanShiftFiltering(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), sp, sr, maxLevel, *reinterpret_cast<cv::TermCriteria*>(termcrit));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::pyrUp
// as:     cv::pyrUp (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::Size (simple) dstsize= cv::Size (simple) = Size()
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_pyrUp__InputArray__OutputArray_Size_int(void* src, void* dst, SizeWrapper dstsize, int borderType) {
    try {
        cv::pyrUp(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::Size*>(&dstsize), borderType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::rectangle
// as:     cv::rectangle (function)
// Arg ARG cv::_InputOutputArray (boxed) img= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Point (simple) pt1= cv::Point (simple) = 
// Arg ARG cv::Point (simple) pt2= cv::Point (simple) = 
// Arg ARG cv::Scalar (simple) color= cv::Scalar (simple) = 
// Arg ARG Primitive(int) thickness= Primitive(int) = 1
// Arg ARG Primitive(int) lineType= Primitive(int) = LINE_8
// Arg ARG Primitive(int) shift= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_rectangle__InputOutputArray_Point_Point_Scalar_int_int_int(void* img, PointWrapper pt1, PointWrapper pt2, ScalarWrapper color, int thickness, int lineType, int shift) {
    try {
        cv::rectangle(*reinterpret_cast<cv::_InputOutputArray*>(img), *reinterpret_cast<cv::Point*>(&pt1), *reinterpret_cast<cv::Point*>(&pt2), *reinterpret_cast<const cv::Scalar*>(&color), thickness, lineType, shift);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::rectangle
// as:     cv::rectangle (function)
// Arg ARG cv::_InputOutputArray (boxed) img= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Rect (simple) rec= cv::Rect (simple) = 
// Arg ARG cv::Scalar (simple) color= cv::Scalar (simple) = 
// Arg ARG Primitive(int) thickness= Primitive(int) = 1
// Arg ARG Primitive(int) lineType= Primitive(int) = LINE_8
// Arg ARG Primitive(int) shift= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_rectangle__InputOutputArray_Rect_Scalar_int_int_int(void* img, RectWrapper rec, ScalarWrapper color, int thickness, int lineType, int shift) {
    try {
        cv::rectangle(*reinterpret_cast<cv::_InputOutputArray*>(img), *reinterpret_cast<cv::Rect*>(&rec), *reinterpret_cast<const cv::Scalar*>(&color), thickness, lineType, shift);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::remap
// as:     cv::remap (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) map1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) map2= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) interpolation= Primitive(int) = 
// Arg ARG Primitive(int) borderMode= Primitive(int) = BORDER_CONSTANT
// Arg ARG cv::Scalar (simple) borderValue= cv::Scalar (simple) = Scalar()
// Return value: Primitive(void)
cv_return_value_void cv_remap__InputArray__OutputArray__InputArray__InputArray_int_int_Scalar(void* src, void* dst, void* map1, void* map2, int interpolation, int borderMode, ScalarWrapper borderValue) {
    try {
        cv::remap(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(map1), *reinterpret_cast<const cv::_InputArray*>(map2), interpolation, borderMode, *reinterpret_cast<const cv::Scalar*>(&borderValue));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::resize
// as:     cv::resize (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::Size (simple) dsize= cv::Size (simple) = 
// Arg ARG Primitive(double) fx= Primitive(double) = 0
// Arg ARG Primitive(double) fy= Primitive(double) = 0
// Arg ARG Primitive(int) interpolation= Primitive(int) = INTER_LINEAR
// Return value: Primitive(void)
cv_return_value_void cv_resize__InputArray__OutputArray_Size_double_double_int(void* src, void* dst, SizeWrapper dsize, double fx, double fy, int interpolation) {
    try {
        cv::resize(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<cv::Size*>(&dsize), fx, fy, interpolation);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::rotatedRectangleIntersection
// as:     cv::rotatedRectangleIntersection (function)
// Arg ARG cv::RotatedRect (boxed) rect1= cv::RotatedRect (boxed) = 
// Arg ARG cv::RotatedRect (boxed) rect2= cv::RotatedRect (boxed) = 
// Arg ARG cv::_OutputArray (boxed) intersectingRegion= cv::_OutputArray (boxed) = 
// Return value: Primitive(int)
cv_return_value_int cv_rotatedRectangleIntersection_RotatedRect_RotatedRect__OutputArray(void* rect1, void* rect2, void* intersectingRegion) {
    try {
        int ret = cv::rotatedRectangleIntersection(*reinterpret_cast<const cv::RotatedRect*>(rect1), *reinterpret_cast<const cv::RotatedRect*>(rect2), *reinterpret_cast<cv::_OutputArray*>(intersectingRegion));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::sepFilter2D
// as:     cv::sepFilter2D (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) ddepth= Primitive(int) = 
// Arg ARG cv::_InputArray (boxed) kernelX= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) kernelY= cv::_InputArray (boxed) = 
// Arg ARG cv::Point (simple) anchor= cv::Point (simple) = Point(-1,-1)
// Arg ARG Primitive(double) delta= Primitive(double) = 0
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_sepFilter2D__InputArray__OutputArray_int__InputArray__InputArray_Point_double_int(void* src, void* dst, int ddepth, void* kernelX, void* kernelY, PointWrapper anchor, double delta, int borderType) {
    try {
        cv::sepFilter2D(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), ddepth, *reinterpret_cast<const cv::_InputArray*>(kernelX), *reinterpret_cast<const cv::_InputArray*>(kernelY), *reinterpret_cast<cv::Point*>(&anchor), delta, borderType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::spatialGradient
// as:     cv::spatialGradient (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dx= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dy= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) ksize= Primitive(int) = 3
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_spatialGradient__InputArray__OutputArray__OutputArray_int_int(void* src, void* dx, void* dy, int ksize, int borderType) {
    try {
        cv::spatialGradient(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dx), *reinterpret_cast<cv::_OutputArray*>(dy), ksize, borderType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sqrBoxFilter
// as:     cv::sqrBoxFilter (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) ddepth= Primitive(int) = 
// Arg ARG cv::Size (simple) ksize= cv::Size (simple) = 
// Arg ARG cv::Point (simple) anchor= cv::Point (simple) = Point(-1, -1)
// Arg ARG Primitive(bool) normalize= Primitive(bool) = true
// Arg ARG Primitive(int) borderType= Primitive(int) = BORDER_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_sqrBoxFilter__InputArray__OutputArray_int_Size_Point_bool_int(void* src, void* dst, int ddepth, SizeWrapper ksize, PointWrapper anchor, bool normalize, int borderType) {
    try {
        cv::sqrBoxFilter(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), ddepth, *reinterpret_cast<cv::Size*>(&ksize), *reinterpret_cast<cv::Point*>(&anchor), normalize, borderType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::threshold
// as:     cv::threshold (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) thresh= Primitive(double) = 
// Arg ARG Primitive(double) maxval= Primitive(double) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: Primitive(double)
cv_return_value_double cv_threshold__InputArray__OutputArray_double_double_int(void* src, void* dst, double thresh, double maxval, int type) {
    try {
        double ret = cv::threshold(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), thresh, maxval, type);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::warpAffine
// as:     cv::warpAffine (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) M= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) dsize= cv::Size (simple) = 
// Arg ARG Primitive(int) flags= Primitive(int) = INTER_LINEAR
// Arg ARG Primitive(int) borderMode= Primitive(int) = BORDER_CONSTANT
// Arg ARG cv::Scalar (simple) borderValue= cv::Scalar (simple) = Scalar()
// Return value: Primitive(void)
cv_return_value_void cv_warpAffine__InputArray__OutputArray__InputArray_Size_int_int_Scalar(void* src, void* dst, void* M, SizeWrapper dsize, int flags, int borderMode, ScalarWrapper borderValue) {
    try {
        cv::warpAffine(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(M), *reinterpret_cast<cv::Size*>(&dsize), flags, borderMode, *reinterpret_cast<const cv::Scalar*>(&borderValue));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::warpPerspective
// as:     cv::warpPerspective (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) M= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) dsize= cv::Size (simple) = 
// Arg ARG Primitive(int) flags= Primitive(int) = INTER_LINEAR
// Arg ARG Primitive(int) borderMode= Primitive(int) = BORDER_CONSTANT
// Arg ARG cv::Scalar (simple) borderValue= cv::Scalar (simple) = Scalar()
// Return value: Primitive(void)
cv_return_value_void cv_warpPerspective__InputArray__OutputArray__InputArray_Size_int_int_Scalar(void* src, void* dst, void* M, SizeWrapper dsize, int flags, int borderMode, ScalarWrapper borderValue) {
    try {
        cv::warpPerspective(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(M), *reinterpret_cast<cv::Size*>(&dsize), flags, borderMode, *reinterpret_cast<const cv::Scalar*>(&borderValue));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::warpPolar
// as:     cv::warpPolar (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::Size (simple) dsize= cv::Size (simple) = 
// Arg ARG cv::Point2f (simple) center= cv::Point2f (simple) = 
// Arg ARG Primitive(double) maxRadius= Primitive(double) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_warpPolar__InputArray__OutputArray_Size_Point2f_double_int(void* src, void* dst, SizeWrapper dsize, Point2fWrapper center, double maxRadius, int flags) {
    try {
        cv::warpPolar(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<cv::Size*>(&dsize), *reinterpret_cast<cv::Point2f*>(&center), maxRadius, flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::watershed
// as:     cv::watershed (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) markers= cv::_InputOutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_watershed__InputArray__InputOutputArray(void* image, void* markers) {
    try {
        cv::watershed(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_InputOutputArray*>(markers));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::wrapperEMD
// as:     cv::wrapperEMD (function)
// Arg ARG cv::_InputArray (boxed) signature1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) signature2= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) distType= Primitive(int) = 
// Arg ARG cv::_InputArray (boxed) cost= cv::_InputArray (boxed) = noArray()
// Arg ARG SmartPtr[Primitive(float)] lowerBound= SmartPtr[Primitive(float)] = Ptr<float>()
// Arg ARG cv::_OutputArray (boxed) flow= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(float)
cv_return_value_float cv_wrapperEMD__InputArray__InputArray_int__InputArray_PtrOffloat__OutputArray(void* signature1, void* signature2, int distType, void* cost, void* lowerBound, void* flow) {
    try {
        float ret = cv::wrapperEMD(*reinterpret_cast<const cv::_InputArray*>(signature1), *reinterpret_cast<const cv::_InputArray*>(signature2), distType, *reinterpret_cast<const cv::_InputArray*>(cost), *reinterpret_cast<Ptr<float>*>(lowerBound), *reinterpret_cast<cv::_OutputArray*>(flow));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::CLAHE::apply
// as:     cv::CLAHE::apply (method) cv::CLAHE (trait) . apply
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_CLAHE_apply__InputArray__OutputArray(void* instance, void* src, void* dst) {
    try {
        reinterpret_cast<cv::CLAHE*>(instance)->apply(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::CLAHE::setClipLimit
// as:     cv::CLAHE::setClipLimit (method) cv::CLAHE (trait) . setClipLimit
// Arg ARG Primitive(double) clipLimit= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_CLAHE_setClipLimit_double(void* instance, double clipLimit) {
    try {
        reinterpret_cast<cv::CLAHE*>(instance)->setClipLimit(clipLimit);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::CLAHE::getClipLimit
// as:     cv::CLAHE::getClipLimit (method) cv::CLAHE (trait) . getClipLimit
// Return value: Primitive(double)
cv_return_value_double cv_CLAHE_getClipLimit_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::CLAHE*>(instance)->getClipLimit();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::CLAHE::setTilesGridSize
// as:     cv::CLAHE::setTilesGridSize (method) cv::CLAHE (trait) . setTilesGridSize
// Arg ARG cv::Size (simple) tileGridSize= cv::Size (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_CLAHE_setTilesGridSize_Size(void* instance, SizeWrapper tileGridSize) {
    try {
        reinterpret_cast<cv::CLAHE*>(instance)->setTilesGridSize(*reinterpret_cast<cv::Size*>(&tileGridSize));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::CLAHE::getTilesGridSize
// as:     cv::CLAHE::getTilesGridSize (method) cv::CLAHE (trait) . getTilesGridSize
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_CLAHE_getTilesGridSize_const(void* instance) {
    try {
        cv::Size ret = reinterpret_cast<cv::CLAHE*>(instance)->getTilesGridSize();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::CLAHE::collectGarbage
// as:     cv::CLAHE::collectGarbage (method) cv::CLAHE (trait) . collectGarbage
// Return value: Primitive(void)
cv_return_value_void cv_CLAHE_collectGarbage(void* instance) {
    try {
        reinterpret_cast<cv::CLAHE*>(instance)->collectGarbage();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHough::setTemplate
// as:     cv::GeneralizedHough::setTemplate (method) cv::GeneralizedHough (trait) . setTemplate
// Arg ARG cv::_InputArray (boxed) templ= cv::_InputArray (boxed) = 
// Arg ARG cv::Point (simple) templCenter= cv::Point (simple) = Point(-1, -1)
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHough_setTemplate__InputArray_Point(void* instance, void* templ, PointWrapper templCenter) {
    try {
        reinterpret_cast<cv::GeneralizedHough*>(instance)->setTemplate(*reinterpret_cast<const cv::_InputArray*>(templ), *reinterpret_cast<cv::Point*>(&templCenter));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHough::setTemplate
// as:     cv::GeneralizedHough::setTemplate (method) cv::GeneralizedHough (trait) . setTemplate
// Arg ARG cv::_InputArray (boxed) edges= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) dx= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) dy= cv::_InputArray (boxed) = 
// Arg ARG cv::Point (simple) templCenter= cv::Point (simple) = Point(-1, -1)
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHough_setTemplate__InputArray__InputArray__InputArray_Point(void* instance, void* edges, void* dx, void* dy, PointWrapper templCenter) {
    try {
        reinterpret_cast<cv::GeneralizedHough*>(instance)->setTemplate(*reinterpret_cast<const cv::_InputArray*>(edges), *reinterpret_cast<const cv::_InputArray*>(dx), *reinterpret_cast<const cv::_InputArray*>(dy), *reinterpret_cast<cv::Point*>(&templCenter));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHough::detect
// as:     cv::GeneralizedHough::detect (method) cv::GeneralizedHough (trait) . detect
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) positions= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) votes= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHough_detect__InputArray__OutputArray__OutputArray(void* instance, void* image, void* positions, void* votes) {
    try {
        reinterpret_cast<cv::GeneralizedHough*>(instance)->detect(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(positions), *reinterpret_cast<cv::_OutputArray*>(votes));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHough::detect
// as:     cv::GeneralizedHough::detect (method) cv::GeneralizedHough (trait) . detect
// Arg ARG cv::_InputArray (boxed) edges= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) dx= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) dy= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) positions= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) votes= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHough_detect__InputArray__InputArray__InputArray__OutputArray__OutputArray(void* instance, void* edges, void* dx, void* dy, void* positions, void* votes) {
    try {
        reinterpret_cast<cv::GeneralizedHough*>(instance)->detect(*reinterpret_cast<const cv::_InputArray*>(edges), *reinterpret_cast<const cv::_InputArray*>(dx), *reinterpret_cast<const cv::_InputArray*>(dy), *reinterpret_cast<cv::_OutputArray*>(positions), *reinterpret_cast<cv::_OutputArray*>(votes));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHough::setCannyLowThresh
// as:     cv::GeneralizedHough::setCannyLowThresh (method) cv::GeneralizedHough (trait) . setCannyLowThresh
// Arg ARG Primitive(int) cannyLowThresh= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHough_setCannyLowThresh_int(void* instance, int cannyLowThresh) {
    try {
        reinterpret_cast<cv::GeneralizedHough*>(instance)->setCannyLowThresh(cannyLowThresh);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHough::getCannyLowThresh
// as:     cv::GeneralizedHough::getCannyLowThresh (method) cv::GeneralizedHough (trait) . getCannyLowThresh
// Return value: Primitive(int)
cv_return_value_int cv_GeneralizedHough_getCannyLowThresh_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::GeneralizedHough*>(instance)->getCannyLowThresh();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::GeneralizedHough::setCannyHighThresh
// as:     cv::GeneralizedHough::setCannyHighThresh (method) cv::GeneralizedHough (trait) . setCannyHighThresh
// Arg ARG Primitive(int) cannyHighThresh= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHough_setCannyHighThresh_int(void* instance, int cannyHighThresh) {
    try {
        reinterpret_cast<cv::GeneralizedHough*>(instance)->setCannyHighThresh(cannyHighThresh);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHough::getCannyHighThresh
// as:     cv::GeneralizedHough::getCannyHighThresh (method) cv::GeneralizedHough (trait) . getCannyHighThresh
// Return value: Primitive(int)
cv_return_value_int cv_GeneralizedHough_getCannyHighThresh_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::GeneralizedHough*>(instance)->getCannyHighThresh();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::GeneralizedHough::setMinDist
// as:     cv::GeneralizedHough::setMinDist (method) cv::GeneralizedHough (trait) . setMinDist
// Arg ARG Primitive(double) minDist= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHough_setMinDist_double(void* instance, double minDist) {
    try {
        reinterpret_cast<cv::GeneralizedHough*>(instance)->setMinDist(minDist);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHough::getMinDist
// as:     cv::GeneralizedHough::getMinDist (method) cv::GeneralizedHough (trait) . getMinDist
// Return value: Primitive(double)
cv_return_value_double cv_GeneralizedHough_getMinDist_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::GeneralizedHough*>(instance)->getMinDist();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::GeneralizedHough::setDp
// as:     cv::GeneralizedHough::setDp (method) cv::GeneralizedHough (trait) . setDp
// Arg ARG Primitive(double) dp= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHough_setDp_double(void* instance, double dp) {
    try {
        reinterpret_cast<cv::GeneralizedHough*>(instance)->setDp(dp);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHough::getDp
// as:     cv::GeneralizedHough::getDp (method) cv::GeneralizedHough (trait) . getDp
// Return value: Primitive(double)
cv_return_value_double cv_GeneralizedHough_getDp_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::GeneralizedHough*>(instance)->getDp();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::GeneralizedHough::setMaxBufferSize
// as:     cv::GeneralizedHough::setMaxBufferSize (method) cv::GeneralizedHough (trait) . setMaxBufferSize
// Arg ARG Primitive(int) maxBufferSize= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHough_setMaxBufferSize_int(void* instance, int maxBufferSize) {
    try {
        reinterpret_cast<cv::GeneralizedHough*>(instance)->setMaxBufferSize(maxBufferSize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHough::getMaxBufferSize
// as:     cv::GeneralizedHough::getMaxBufferSize (method) cv::GeneralizedHough (trait) . getMaxBufferSize
// Return value: Primitive(int)
cv_return_value_int cv_GeneralizedHough_getMaxBufferSize_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::GeneralizedHough*>(instance)->getMaxBufferSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::GeneralizedHoughBallard::setLevels
// as:     cv::GeneralizedHoughBallard::setLevels (method) cv::GeneralizedHoughBallard (trait) . setLevels
// Arg ARG Primitive(int) levels= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHoughBallard_setLevels_int(void* instance, int levels) {
    try {
        reinterpret_cast<cv::GeneralizedHoughBallard*>(instance)->setLevels(levels);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHoughBallard::getLevels
// as:     cv::GeneralizedHoughBallard::getLevels (method) cv::GeneralizedHoughBallard (trait) . getLevels
// Return value: Primitive(int)
cv_return_value_int cv_GeneralizedHoughBallard_getLevels_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::GeneralizedHoughBallard*>(instance)->getLevels();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::GeneralizedHoughBallard::setVotesThreshold
// as:     cv::GeneralizedHoughBallard::setVotesThreshold (method) cv::GeneralizedHoughBallard (trait) . setVotesThreshold
// Arg ARG Primitive(int) votesThreshold= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHoughBallard_setVotesThreshold_int(void* instance, int votesThreshold) {
    try {
        reinterpret_cast<cv::GeneralizedHoughBallard*>(instance)->setVotesThreshold(votesThreshold);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHoughBallard::getVotesThreshold
// as:     cv::GeneralizedHoughBallard::getVotesThreshold (method) cv::GeneralizedHoughBallard (trait) . getVotesThreshold
// Return value: Primitive(int)
cv_return_value_int cv_GeneralizedHoughBallard_getVotesThreshold_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::GeneralizedHoughBallard*>(instance)->getVotesThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::GeneralizedHoughGuil::setXi
// as:     cv::GeneralizedHoughGuil::setXi (method) cv::GeneralizedHoughGuil (trait) . setXi
// Arg ARG Primitive(double) xi= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHoughGuil_setXi_double(void* instance, double xi) {
    try {
        reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->setXi(xi);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHoughGuil::getXi
// as:     cv::GeneralizedHoughGuil::getXi (method) cv::GeneralizedHoughGuil (trait) . getXi
// Return value: Primitive(double)
cv_return_value_double cv_GeneralizedHoughGuil_getXi_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->getXi();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::GeneralizedHoughGuil::setLevels
// as:     cv::GeneralizedHoughGuil::setLevels (method) cv::GeneralizedHoughGuil (trait) . setLevels
// Arg ARG Primitive(int) levels= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHoughGuil_setLevels_int(void* instance, int levels) {
    try {
        reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->setLevels(levels);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHoughGuil::getLevels
// as:     cv::GeneralizedHoughGuil::getLevels (method) cv::GeneralizedHoughGuil (trait) . getLevels
// Return value: Primitive(int)
cv_return_value_int cv_GeneralizedHoughGuil_getLevels_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->getLevels();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::GeneralizedHoughGuil::setAngleEpsilon
// as:     cv::GeneralizedHoughGuil::setAngleEpsilon (method) cv::GeneralizedHoughGuil (trait) . setAngleEpsilon
// Arg ARG Primitive(double) angleEpsilon= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHoughGuil_setAngleEpsilon_double(void* instance, double angleEpsilon) {
    try {
        reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->setAngleEpsilon(angleEpsilon);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHoughGuil::getAngleEpsilon
// as:     cv::GeneralizedHoughGuil::getAngleEpsilon (method) cv::GeneralizedHoughGuil (trait) . getAngleEpsilon
// Return value: Primitive(double)
cv_return_value_double cv_GeneralizedHoughGuil_getAngleEpsilon_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->getAngleEpsilon();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::GeneralizedHoughGuil::setMinAngle
// as:     cv::GeneralizedHoughGuil::setMinAngle (method) cv::GeneralizedHoughGuil (trait) . setMinAngle
// Arg ARG Primitive(double) minAngle= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHoughGuil_setMinAngle_double(void* instance, double minAngle) {
    try {
        reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->setMinAngle(minAngle);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHoughGuil::getMinAngle
// as:     cv::GeneralizedHoughGuil::getMinAngle (method) cv::GeneralizedHoughGuil (trait) . getMinAngle
// Return value: Primitive(double)
cv_return_value_double cv_GeneralizedHoughGuil_getMinAngle_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->getMinAngle();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::GeneralizedHoughGuil::setMaxAngle
// as:     cv::GeneralizedHoughGuil::setMaxAngle (method) cv::GeneralizedHoughGuil (trait) . setMaxAngle
// Arg ARG Primitive(double) maxAngle= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHoughGuil_setMaxAngle_double(void* instance, double maxAngle) {
    try {
        reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->setMaxAngle(maxAngle);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHoughGuil::getMaxAngle
// as:     cv::GeneralizedHoughGuil::getMaxAngle (method) cv::GeneralizedHoughGuil (trait) . getMaxAngle
// Return value: Primitive(double)
cv_return_value_double cv_GeneralizedHoughGuil_getMaxAngle_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->getMaxAngle();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::GeneralizedHoughGuil::setAngleStep
// as:     cv::GeneralizedHoughGuil::setAngleStep (method) cv::GeneralizedHoughGuil (trait) . setAngleStep
// Arg ARG Primitive(double) angleStep= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHoughGuil_setAngleStep_double(void* instance, double angleStep) {
    try {
        reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->setAngleStep(angleStep);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHoughGuil::getAngleStep
// as:     cv::GeneralizedHoughGuil::getAngleStep (method) cv::GeneralizedHoughGuil (trait) . getAngleStep
// Return value: Primitive(double)
cv_return_value_double cv_GeneralizedHoughGuil_getAngleStep_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->getAngleStep();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::GeneralizedHoughGuil::setAngleThresh
// as:     cv::GeneralizedHoughGuil::setAngleThresh (method) cv::GeneralizedHoughGuil (trait) . setAngleThresh
// Arg ARG Primitive(int) angleThresh= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHoughGuil_setAngleThresh_int(void* instance, int angleThresh) {
    try {
        reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->setAngleThresh(angleThresh);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHoughGuil::getAngleThresh
// as:     cv::GeneralizedHoughGuil::getAngleThresh (method) cv::GeneralizedHoughGuil (trait) . getAngleThresh
// Return value: Primitive(int)
cv_return_value_int cv_GeneralizedHoughGuil_getAngleThresh_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->getAngleThresh();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::GeneralizedHoughGuil::setMinScale
// as:     cv::GeneralizedHoughGuil::setMinScale (method) cv::GeneralizedHoughGuil (trait) . setMinScale
// Arg ARG Primitive(double) minScale= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHoughGuil_setMinScale_double(void* instance, double minScale) {
    try {
        reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->setMinScale(minScale);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHoughGuil::getMinScale
// as:     cv::GeneralizedHoughGuil::getMinScale (method) cv::GeneralizedHoughGuil (trait) . getMinScale
// Return value: Primitive(double)
cv_return_value_double cv_GeneralizedHoughGuil_getMinScale_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->getMinScale();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::GeneralizedHoughGuil::setMaxScale
// as:     cv::GeneralizedHoughGuil::setMaxScale (method) cv::GeneralizedHoughGuil (trait) . setMaxScale
// Arg ARG Primitive(double) maxScale= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHoughGuil_setMaxScale_double(void* instance, double maxScale) {
    try {
        reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->setMaxScale(maxScale);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHoughGuil::getMaxScale
// as:     cv::GeneralizedHoughGuil::getMaxScale (method) cv::GeneralizedHoughGuil (trait) . getMaxScale
// Return value: Primitive(double)
cv_return_value_double cv_GeneralizedHoughGuil_getMaxScale_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->getMaxScale();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::GeneralizedHoughGuil::setScaleStep
// as:     cv::GeneralizedHoughGuil::setScaleStep (method) cv::GeneralizedHoughGuil (trait) . setScaleStep
// Arg ARG Primitive(double) scaleStep= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHoughGuil_setScaleStep_double(void* instance, double scaleStep) {
    try {
        reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->setScaleStep(scaleStep);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHoughGuil::getScaleStep
// as:     cv::GeneralizedHoughGuil::getScaleStep (method) cv::GeneralizedHoughGuil (trait) . getScaleStep
// Return value: Primitive(double)
cv_return_value_double cv_GeneralizedHoughGuil_getScaleStep_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->getScaleStep();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::GeneralizedHoughGuil::setScaleThresh
// as:     cv::GeneralizedHoughGuil::setScaleThresh (method) cv::GeneralizedHoughGuil (trait) . setScaleThresh
// Arg ARG Primitive(int) scaleThresh= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHoughGuil_setScaleThresh_int(void* instance, int scaleThresh) {
    try {
        reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->setScaleThresh(scaleThresh);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHoughGuil::getScaleThresh
// as:     cv::GeneralizedHoughGuil::getScaleThresh (method) cv::GeneralizedHoughGuil (trait) . getScaleThresh
// Return value: Primitive(int)
cv_return_value_int cv_GeneralizedHoughGuil_getScaleThresh_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->getScaleThresh();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::GeneralizedHoughGuil::setPosThresh
// as:     cv::GeneralizedHoughGuil::setPosThresh (method) cv::GeneralizedHoughGuil (trait) . setPosThresh
// Arg ARG Primitive(int) posThresh= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_GeneralizedHoughGuil_setPosThresh_int(void* instance, int posThresh) {
    try {
        reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->setPosThresh(posThresh);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GeneralizedHoughGuil::getPosThresh
// as:     cv::GeneralizedHoughGuil::getPosThresh (method) cv::GeneralizedHoughGuil (trait) . getPosThresh
// Return value: Primitive(int)
cv_return_value_int cv_GeneralizedHoughGuil_getPosThresh_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::GeneralizedHoughGuil*>(instance)->getPosThresh();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// boxed class: cv::LineIterator
void cv_LineIterator_delete(void* instance) {
    delete reinterpret_cast<cv::LineIterator*>(instance);
}
// parsed: cv::LineIterator::LineIterator
// as:     cv::LineIterator::LineIterator (constructor) cv::LineIterator . new
// Arg ARG cv::Mat (boxed) img= cv::Mat (boxed) = 
// Arg ARG cv::Point (simple) pt1= cv::Point (simple) = 
// Arg ARG cv::Point (simple) pt2= cv::Point (simple) = 
// Arg ARG Primitive(int) connectivity= Primitive(int) = 8
// Arg ARG Primitive(bool) leftToRight= Primitive(bool) = false
// Return value: cv::LineIterator (boxed)
cv_return_value_void_X cv_LineIterator_LineIterator_Mat_Point_Point_int_bool(void* img, PointWrapper pt1, PointWrapper pt2, int connectivity, bool leftToRight) {
    try {
        cv::LineIterator* ret = new cv::LineIterator(*reinterpret_cast<const cv::Mat*>(img), *reinterpret_cast<cv::Point*>(&pt1), *reinterpret_cast<cv::Point*>(&pt2), connectivity, leftToRight);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::LineIterator::pos
// as:     cv::LineIterator::pos (method) cv::LineIterator . pos
// Return value: cv::Point (simple)
cv_return_value_PointWrapper cv_LineIterator_pos_const(void* instance) {
    try {
        cv::Point ret = reinterpret_cast<cv::LineIterator*>(instance)->pos();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<PointWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_PointWrapper)
}

// parsed: cv::LineSegmentDetector::detect
// as:     cv::LineSegmentDetector::detect (method) cv::LineSegmentDetector (trait) . detect
// Arg ARG cv::_InputArray (boxed) _image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) _lines= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) width= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) prec= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) nfa= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_LineSegmentDetector_detect__InputArray__OutputArray__OutputArray__OutputArray__OutputArray(void* instance, void* _image, void* _lines, void* width, void* prec, void* nfa) {
    try {
        reinterpret_cast<cv::LineSegmentDetector*>(instance)->detect(*reinterpret_cast<const cv::_InputArray*>(_image), *reinterpret_cast<cv::_OutputArray*>(_lines), *reinterpret_cast<cv::_OutputArray*>(width), *reinterpret_cast<cv::_OutputArray*>(prec), *reinterpret_cast<cv::_OutputArray*>(nfa));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::LineSegmentDetector::drawSegments
// as:     cv::LineSegmentDetector::drawSegments (method) cv::LineSegmentDetector (trait) . drawSegments
// Arg ARG cv::_InputOutputArray (boxed) _image= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) lines= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_LineSegmentDetector_drawSegments__InputOutputArray__InputArray(void* instance, void* _image, void* lines) {
    try {
        reinterpret_cast<cv::LineSegmentDetector*>(instance)->drawSegments(*reinterpret_cast<cv::_InputOutputArray*>(_image), *reinterpret_cast<const cv::_InputArray*>(lines));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::LineSegmentDetector::compareSegments
// as:     cv::LineSegmentDetector::compareSegments (method) cv::LineSegmentDetector (trait) . compareSegments
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG cv::_InputArray (boxed) lines1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) lines2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) _image= cv::_InputOutputArray (boxed) = noArray()
// Return value: Primitive(int)
cv_return_value_int cv_LineSegmentDetector_compareSegments_Size__InputArray__InputArray__InputOutputArray(void* instance, SizeWrapper size, void* lines1, void* lines2, void* _image) {
    try {
        int ret = reinterpret_cast<cv::LineSegmentDetector*>(instance)->compareSegments(*reinterpret_cast<const cv::Size*>(&size), *reinterpret_cast<const cv::_InputArray*>(lines1), *reinterpret_cast<const cv::_InputArray*>(lines2), *reinterpret_cast<cv::_InputOutputArray*>(_image));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// boxed class: cv::Subdiv2D
void cv_Subdiv2D_delete(void* instance) {
    delete reinterpret_cast<cv::Subdiv2D*>(instance);
}
// parsed: cv::Subdiv2D::Subdiv2D
// as:     cv::Subdiv2D::Subdiv2D (constructor) cv::Subdiv2D . default
// Return value: cv::Subdiv2D (boxed)
cv_return_value_void_X cv_Subdiv2D_Subdiv2D() {
    try {
        cv::Subdiv2D* ret = new cv::Subdiv2D();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Subdiv2D::Subdiv2D
// as:     cv::Subdiv2D::Subdiv2D (constructor) cv::Subdiv2D . new
// Arg ARG cv::Rect (simple) rect= cv::Rect (simple) = 
// Return value: cv::Subdiv2D (boxed)
cv_return_value_void_X cv_Subdiv2D_Subdiv2D_Rect(RectWrapper rect) {
    try {
        cv::Subdiv2D* ret = new cv::Subdiv2D(*reinterpret_cast<cv::Rect*>(&rect));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Subdiv2D::initDelaunay
// as:     cv::Subdiv2D::initDelaunay (method) cv::Subdiv2D . initDelaunay
// Arg ARG cv::Rect (simple) rect= cv::Rect (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_Subdiv2D_initDelaunay_Rect(void* instance, RectWrapper rect) {
    try {
        reinterpret_cast<cv::Subdiv2D*>(instance)->initDelaunay(*reinterpret_cast<cv::Rect*>(&rect));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Subdiv2D::insert
// as:     cv::Subdiv2D::insert (method) cv::Subdiv2D . insert
// Arg ARG cv::Point2f (simple) pt= cv::Point2f (simple) = 
// Return value: Primitive(int)
cv_return_value_int cv_Subdiv2D_insert_Point2f(void* instance, Point2fWrapper pt) {
    try {
        int ret = reinterpret_cast<cv::Subdiv2D*>(instance)->insert(*reinterpret_cast<cv::Point2f*>(&pt));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Subdiv2D::insert
// as:     cv::Subdiv2D::insert (method) cv::Subdiv2D . insert
// Arg ARG Vector[cv::Point2f (simple)] ptvec= Vector[cv::Point2f (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_Subdiv2D_insert_VectorOfPoint2f(void* instance, void* ptvec) {
    try {
        reinterpret_cast<cv::Subdiv2D*>(instance)->insert(*reinterpret_cast<const std::vector<cv::Point2f>*>(ptvec));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Subdiv2D::locate
// as:     cv::Subdiv2D::locate (method) cv::Subdiv2D . locate
// Arg ARG cv::Point2f (simple) pt= cv::Point2f (simple) = 
// Arg ARG Primitive(int) edge= Primitive(int) = 
// Arg ARG Primitive(int) vertex= Primitive(int) = 
// Return value: Primitive(int)
cv_return_value_int cv_Subdiv2D_locate_Point2f_int_int(void* instance, Point2fWrapper pt, int& edge, int& vertex) {
    try {
        int ret = reinterpret_cast<cv::Subdiv2D*>(instance)->locate(*reinterpret_cast<cv::Point2f*>(&pt), edge, vertex);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Subdiv2D::findNearest
// as:     cv::Subdiv2D::findNearest (method) cv::Subdiv2D . findNearest
// Arg ARG cv::Point2f (simple) pt= cv::Point2f (simple) = 
// Arg ARG RawPtr[cv::Point2f (simple)] * nearestPt= (ptr) RawPtr[cv::Point2f (simple)] = 0
// Return value: Primitive(int)
cv_return_value_int cv_Subdiv2D_findNearest_Point2f_Point2f_X(void* instance, Point2fWrapper pt, cv::Point2f* nearestPt) {
    try {
        int ret = reinterpret_cast<cv::Subdiv2D*>(instance)->findNearest(*reinterpret_cast<cv::Point2f*>(&pt), reinterpret_cast<cv::Point2f*>(nearestPt));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Subdiv2D::getEdgeList
// as:     cv::Subdiv2D::getEdgeList (method) cv::Subdiv2D . getEdgeList
// Arg ARG Vector[cv::Vec4f (simple)] edgeList= Vector[cv::Vec4f (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_Subdiv2D_getEdgeList_const_VectorOfVec4f(void* instance, void* edgeList) {
    try {
        reinterpret_cast<cv::Subdiv2D*>(instance)->getEdgeList(*reinterpret_cast<std::vector<cv::Vec4f>*>(edgeList));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Subdiv2D::getLeadingEdgeList
// as:     cv::Subdiv2D::getLeadingEdgeList (method) cv::Subdiv2D . getLeadingEdgeList
// Arg ARG Vector[Primitive(int)] leadingEdgeList= Vector[Primitive(int)] = 
// Return value: Primitive(void)
cv_return_value_void cv_Subdiv2D_getLeadingEdgeList_const_VectorOfint(void* instance, void* leadingEdgeList) {
    try {
        reinterpret_cast<cv::Subdiv2D*>(instance)->getLeadingEdgeList(*reinterpret_cast<std::vector<int>*>(leadingEdgeList));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Subdiv2D::getTriangleList
// as:     cv::Subdiv2D::getTriangleList (method) cv::Subdiv2D . getTriangleList
// Arg ARG Vector[cv::Vec6f (simple)] triangleList= Vector[cv::Vec6f (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_Subdiv2D_getTriangleList_const_VectorOfVec6f(void* instance, void* triangleList) {
    try {
        reinterpret_cast<cv::Subdiv2D*>(instance)->getTriangleList(*reinterpret_cast<std::vector<cv::Vec6f>*>(triangleList));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Subdiv2D::getVoronoiFacetList
// as:     cv::Subdiv2D::getVoronoiFacetList (method) cv::Subdiv2D . getVoronoiFacetList
// Arg ARG Vector[Primitive(int)] idx= Vector[Primitive(int)] = 
// Arg ARG Vector[Vector[cv::Point2f (simple)]] facetList= Vector[Vector[cv::Point2f (simple)]] = 
// Arg ARG Vector[cv::Point2f (simple)] facetCenters= Vector[cv::Point2f (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_Subdiv2D_getVoronoiFacetList_VectorOfint_VectorOfVectorOfPoint2f_VectorOfPoint2f(void* instance, void* idx, void* facetList, void* facetCenters) {
    try {
        reinterpret_cast<cv::Subdiv2D*>(instance)->getVoronoiFacetList(*reinterpret_cast<const std::vector<int>*>(idx), *reinterpret_cast<std::vector<std::vector<cv::Point2f>>*>(facetList), *reinterpret_cast<std::vector<cv::Point2f>*>(facetCenters));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Subdiv2D::getVertex
// as:     cv::Subdiv2D::getVertex (method) cv::Subdiv2D . getVertex
// Arg ARG Primitive(int) vertex= Primitive(int) = 
// Arg ARG RawPtr[Primitive(int)] * firstEdge= (ptr) RawPtr[Primitive(int)] = 0
// Return value: cv::Point2f (simple)
cv_return_value_Point2fWrapper cv_Subdiv2D_getVertex_const_int_int_X(void* instance, int vertex, int* firstEdge) {
    try {
        cv::Point2f ret = reinterpret_cast<cv::Subdiv2D*>(instance)->getVertex(vertex, firstEdge);
        return { Error::Code::StsOk, NULL, *reinterpret_cast<Point2fWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_Point2fWrapper)
}

// parsed: cv::Subdiv2D::getEdge
// as:     cv::Subdiv2D::getEdge (method) cv::Subdiv2D . getEdge
// Arg ARG Primitive(int) edge= Primitive(int) = 
// Arg ARG Primitive(int) nextEdgeType= Primitive(int) = 
// Return value: Primitive(int)
cv_return_value_int cv_Subdiv2D_getEdge_const_int_int(void* instance, int edge, int nextEdgeType) {
    try {
        int ret = reinterpret_cast<cv::Subdiv2D*>(instance)->getEdge(edge, nextEdgeType);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Subdiv2D::nextEdge
// as:     cv::Subdiv2D::nextEdge (method) cv::Subdiv2D . nextEdge
// Arg ARG Primitive(int) edge= Primitive(int) = 
// Return value: Primitive(int)
cv_return_value_int cv_Subdiv2D_nextEdge_const_int(void* instance, int edge) {
    try {
        int ret = reinterpret_cast<cv::Subdiv2D*>(instance)->nextEdge(edge);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Subdiv2D::rotateEdge
// as:     cv::Subdiv2D::rotateEdge (method) cv::Subdiv2D . rotateEdge
// Arg ARG Primitive(int) edge= Primitive(int) = 
// Arg ARG Primitive(int) rotate= Primitive(int) = 
// Return value: Primitive(int)
cv_return_value_int cv_Subdiv2D_rotateEdge_const_int_int(void* instance, int edge, int rotate) {
    try {
        int ret = reinterpret_cast<cv::Subdiv2D*>(instance)->rotateEdge(edge, rotate);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Subdiv2D::symEdge
// as:     cv::Subdiv2D::symEdge (method) cv::Subdiv2D . symEdge
// Arg ARG Primitive(int) edge= Primitive(int) = 
// Return value: Primitive(int)
cv_return_value_int cv_Subdiv2D_symEdge_const_int(void* instance, int edge) {
    try {
        int ret = reinterpret_cast<cv::Subdiv2D*>(instance)->symEdge(edge);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Subdiv2D::edgeOrg
// as:     cv::Subdiv2D::edgeOrg (method) cv::Subdiv2D . edgeOrg
// Arg ARG Primitive(int) edge= Primitive(int) = 
// Arg ARG RawPtr[cv::Point2f (simple)] * orgpt= (ptr) RawPtr[cv::Point2f (simple)] = 0
// Return value: Primitive(int)
cv_return_value_int cv_Subdiv2D_edgeOrg_const_int_Point2f_X(void* instance, int edge, cv::Point2f* orgpt) {
    try {
        int ret = reinterpret_cast<cv::Subdiv2D*>(instance)->edgeOrg(edge, reinterpret_cast<cv::Point2f*>(orgpt));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Subdiv2D::edgeDst
// as:     cv::Subdiv2D::edgeDst (method) cv::Subdiv2D . edgeDst
// Arg ARG Primitive(int) edge= Primitive(int) = 
// Arg ARG RawPtr[cv::Point2f (simple)] * dstpt= (ptr) RawPtr[cv::Point2f (simple)] = 0
// Return value: Primitive(int)
cv_return_value_int cv_Subdiv2D_edgeDst_const_int_Point2f_X(void* instance, int edge, cv::Point2f* dstpt) {
    try {
        int ret = reinterpret_cast<cv::Subdiv2D*>(instance)->edgeDst(edge, reinterpret_cast<cv::Point2f*>(dstpt));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}



} // extern "C"

