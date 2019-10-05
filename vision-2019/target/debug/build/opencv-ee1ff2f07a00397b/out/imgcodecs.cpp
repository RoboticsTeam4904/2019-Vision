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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/imgcodecs.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/imgcodecs/imgcodecs.hpp"

extern "C" {

// parsed: cv::haveImageReader
// as:     cv::haveImageReader (function)
// Arg ARG string filename= string = 
// Return value: Primitive(bool)
cv_return_value_bool cv_haveImageReader_String(const char* filename) {
    try {
        bool ret = cv::haveImageReader(String(filename));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::haveImageWriter
// as:     cv::haveImageWriter (function)
// Arg ARG string filename= string = 
// Return value: Primitive(bool)
cv_return_value_bool cv_haveImageWriter_String(const char* filename) {
    try {
        bool ret = cv::haveImageWriter(String(filename));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::imdecode
// as:     cv::imdecode (function)
// Arg ARG cv::_InputArray (boxed) buf= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_imdecode__InputArray_int(void* buf, int flags) {
    try {
        cv::Mat ret = cv::imdecode(*reinterpret_cast<const cv::_InputArray*>(buf), flags);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::imdecode
// as:     cv::imdecode (function)
// Arg ARG cv::_InputArray (boxed) buf= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG RawPtr[cv::Mat (boxed)] * dst= (ptr) RawPtr[cv::Mat (boxed)] = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_imdecode__InputArray_int_Mat(void* buf, int flags, void* dst) {
    try {
        cv::Mat ret = cv::imdecode(*reinterpret_cast<const cv::_InputArray*>(buf), flags, reinterpret_cast<cv::Mat*>(dst));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::imencode
// as:     cv::imencode (function)
// Arg ARG string ext= string = 
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG Vector[Primitive(uchar)] buf= Vector[Primitive(uchar)] = 
// Arg ARG Vector[Primitive(int)] params= Vector[Primitive(int)] = std::vector<int>()
// Return value: Primitive(bool)
cv_return_value_bool cv_imencode_String__InputArray_VectorOfuchar_VectorOfint(const char* ext, void* img, void* buf, void* params) {
    try {
        bool ret = cv::imencode(String(ext), *reinterpret_cast<const cv::_InputArray*>(img), *reinterpret_cast<std::vector<uchar>*>(buf), *reinterpret_cast<const std::vector<int>*>(params));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::imread
// as:     cv::imread (function)
// Arg ARG string filename= string = 
// Arg ARG Primitive(int) flags= Primitive(int) = IMREAD_COLOR
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_imread_String_int(const char* filename, int flags) {
    try {
        cv::Mat ret = cv::imread(String(filename), flags);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::imreadmulti
// as:     cv::imreadmulti (function)
// Arg ARG string filename= string = 
// Arg ARG Vector[cv::Mat (boxed)] mats= Vector[cv::Mat (boxed)] = 
// Arg ARG Primitive(int) flags= Primitive(int) = IMREAD_ANYCOLOR
// Return value: Primitive(bool)
cv_return_value_bool cv_imreadmulti_String_VectorOfMat_int(const char* filename, void* mats, int flags) {
    try {
        bool ret = cv::imreadmulti(String(filename), *reinterpret_cast<std::vector<cv::Mat>*>(mats), flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::imwrite
// as:     cv::imwrite (function)
// Arg ARG string filename= string = 
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG Vector[Primitive(int)] params= Vector[Primitive(int)] = std::vector<int>()
// Return value: Primitive(bool)
cv_return_value_bool cv_imwrite_String__InputArray_VectorOfint(const char* filename, void* img, void* params) {
    try {
        bool ret = cv::imwrite(String(filename), *reinterpret_cast<const cv::_InputArray*>(img), *reinterpret_cast<const std::vector<int>*>(params));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}



} // extern "C"

