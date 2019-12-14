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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/xobjdetect.hpp"

extern "C" {

// parsed: cv::xobjdetect::WBDetector::read
// as:     cv::xobjdetect::WBDetector::read (method) cv::xobjdetect::WBDetector (trait) . read
// Arg ARG cv::FileNode (boxed) node= cv::FileNode (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_xobjdetect_WBDetector_read_FileNode(void* instance, void* node) {
    try {
        reinterpret_cast<cv::xobjdetect::WBDetector*>(instance)->read(*reinterpret_cast<const cv::FileNode*>(node));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xobjdetect::WBDetector::write
// as:     cv::xobjdetect::WBDetector::write (method) cv::xobjdetect::WBDetector (trait) . write
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_xobjdetect_WBDetector_write_const_FileStorage(void* instance, void* fs) {
    try {
        reinterpret_cast<cv::xobjdetect::WBDetector*>(instance)->write(*reinterpret_cast<cv::FileStorage*>(fs));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xobjdetect::WBDetector::train
// as:     cv::xobjdetect::WBDetector::train (method) cv::xobjdetect::WBDetector (trait) . train
// Arg ARG string pos_samples= string = 
// Arg ARG string neg_imgs= string = 
// Return value: Primitive(void)
cv_return_value_void cv_xobjdetect_WBDetector_train_std_string_std_string(void* instance, const char* pos_samples, const char* neg_imgs) {
    try {
        reinterpret_cast<cv::xobjdetect::WBDetector*>(instance)->train(String(pos_samples), String(neg_imgs));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xobjdetect::WBDetector::detect
// as:     cv::xobjdetect::WBDetector::detect (method) cv::xobjdetect::WBDetector (trait) . detect
// Arg ARG cv::Mat (boxed) img= cv::Mat (boxed) = 
// Arg ARG Vector[cv::Rect (simple)] bboxes= Vector[cv::Rect (simple)] = 
// Arg ARG Vector[Primitive(double)] confidences= Vector[Primitive(double)] = 
// Return value: Primitive(void)
cv_return_value_void cv_xobjdetect_WBDetector_detect_Mat_VectorOfRect_VectorOfdouble(void* instance, void* img, void* bboxes, void* confidences) {
    try {
        reinterpret_cast<cv::xobjdetect::WBDetector*>(instance)->detect(*reinterpret_cast<const cv::Mat*>(img), *reinterpret_cast<std::vector<cv::Rect>*>(bboxes), *reinterpret_cast<std::vector<double>*>(confidences));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xobjdetect::WBDetector::create
// as:     cv::xobjdetect::WBDetector::create (method) cv::xobjdetect::WBDetector (trait) . create
// Return value: SmartPtr[cv::xobjdetect::WBDetector (boxed)]
cv_return_value_void_X cv_xobjdetect_WBDetector_create() {
    try {
        Ptr<cv::xobjdetect::WBDetector> ret = cv::xobjdetect::WBDetector::create();
        return { Error::Code::StsOk, NULL, new Ptr<cv::xobjdetect::WBDetector>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}



} // extern "C"

