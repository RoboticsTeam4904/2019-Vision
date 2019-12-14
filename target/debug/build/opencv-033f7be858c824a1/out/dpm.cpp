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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/dpm.hpp"

extern "C" {

// parsed: cv::dpm::DPMDetector::isEmpty
// as:     cv::dpm::DPMDetector::isEmpty (method) cv::dpm::DPMDetector (trait) . isEmpty
// Return value: Primitive(bool)
cv_return_value_bool cv_dpm_DPMDetector_isEmpty_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::dpm::DPMDetector*>(instance)->isEmpty();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::dpm::DPMDetector::detect
// as:     cv::dpm::DPMDetector::detect (method) cv::dpm::DPMDetector (trait) . detect
// Arg ARG cv::Mat (boxed) image= cv::Mat (boxed) = 
// Arg ARG Vector[cv::dpm::DPMDetector::ObjectDetection (boxed)] objects= Vector[cv::dpm::DPMDetector::ObjectDetection (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_dpm_DPMDetector_detect_Mat_VectorOfObjectDetection(void* instance, void* image, void* objects) {
    try {
        reinterpret_cast<cv::dpm::DPMDetector*>(instance)->detect(*reinterpret_cast<cv::Mat*>(image), *reinterpret_cast<std::vector<cv::dpm::DPMDetector::ObjectDetection>*>(objects));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dpm::DPMDetector::getClassCount
// as:     cv::dpm::DPMDetector::getClassCount (method) cv::dpm::DPMDetector (trait) . getClassCount
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_dpm_DPMDetector_getClassCount_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::dpm::DPMDetector*>(instance)->getClassCount();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// boxed class: cv::dpm::DPMDetector::ObjectDetection
void cv_DPMDetector_ObjectDetection_delete(void* instance) {
    delete reinterpret_cast<cv::dpm::DPMDetector::ObjectDetection*>(instance);
}
// parsed: cv::dpm::DPMDetector::ObjectDetection::ObjectDetection
// as:     cv::dpm::DPMDetector::ObjectDetection::ObjectDetection (constructor) cv::dpm::DPMDetector::ObjectDetection . default
// Return value: cv::dpm::DPMDetector::ObjectDetection (boxed)
cv_return_value_void_X cv_dpm_DPMDetector_ObjectDetection_ObjectDetection() {
    try {
        cv::dpm::DPMDetector::ObjectDetection* ret = new cv::dpm::DPMDetector::ObjectDetection();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dpm::DPMDetector::ObjectDetection::ObjectDetection
// as:     cv::dpm::DPMDetector::ObjectDetection::ObjectDetection (constructor) cv::dpm::DPMDetector::ObjectDetection . new
// Arg ARG cv::Rect (simple) rect= cv::Rect (simple) = 
// Arg ARG Primitive(float) score= Primitive(float) = 
// Arg ARG Primitive(int) classID= Primitive(int) = -1
// Return value: cv::dpm::DPMDetector::ObjectDetection (boxed)
cv_return_value_void_X cv_dpm_DPMDetector_ObjectDetection_ObjectDetection_Rect_float_int(RectWrapper rect, float score, int classID) {
    try {
        cv::dpm::DPMDetector::ObjectDetection* ret = new cv::dpm::DPMDetector::ObjectDetection(*reinterpret_cast<const cv::Rect*>(&rect), score, classID);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}



} // extern "C"

