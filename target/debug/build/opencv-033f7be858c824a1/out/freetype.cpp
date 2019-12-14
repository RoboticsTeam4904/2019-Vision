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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/freetype.hpp"

extern "C" {

// parsed: cv::freetype::createFreeType2
// as:     cv::freetype::createFreeType2 (function)
// Return value: SmartPtr[cv::freetype::FreeType2 (boxed)]
cv_return_value_void_X cv_freetype_createFreeType2() {
    try {
        Ptr<cv::freetype::FreeType2> ret = cv::freetype::createFreeType2();
        return { Error::Code::StsOk, NULL, new Ptr<cv::freetype::FreeType2>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::freetype::FreeType2::loadFontData
// as:     cv::freetype::FreeType2::loadFontData (method) cv::freetype::FreeType2 (trait) . loadFontData
// Arg ARG string fontFileName= string = 
// Arg ARG Primitive(int) id= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_freetype_FreeType2_loadFontData_String_int(void* instance, const char* fontFileName, int id) {
    try {
        reinterpret_cast<cv::freetype::FreeType2*>(instance)->loadFontData(String(fontFileName), id);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::freetype::FreeType2::setSplitNumber
// as:     cv::freetype::FreeType2::setSplitNumber (method) cv::freetype::FreeType2 (trait) . setSplitNumber
// Arg ARG Primitive(int) num= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_freetype_FreeType2_setSplitNumber_int(void* instance, int num) {
    try {
        reinterpret_cast<cv::freetype::FreeType2*>(instance)->setSplitNumber(num);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::freetype::FreeType2::putText
// as:     cv::freetype::FreeType2::putText (method) cv::freetype::FreeType2 (trait) . putText
// Arg ARG cv::_InputOutputArray (boxed) img= cv::_InputOutputArray (boxed) = 
// Arg ARG string text= string = 
// Arg ARG cv::Point (simple) org= cv::Point (simple) = 
// Arg ARG Primitive(int) fontHeight= Primitive(int) = 
// Arg ARG cv::Scalar (simple) color= cv::Scalar (simple) = 
// Arg ARG Primitive(int) thickness= Primitive(int) = 
// Arg ARG Primitive(int) line_type= Primitive(int) = 
// Arg ARG Primitive(bool) bottomLeftOrigin= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_freetype_FreeType2_putText__InputOutputArray_String_Point_int_Scalar_int_int_bool(void* instance, void* img, const char* text, PointWrapper org, int fontHeight, ScalarWrapper color, int thickness, int line_type, bool bottomLeftOrigin) {
    try {
        reinterpret_cast<cv::freetype::FreeType2*>(instance)->putText(*reinterpret_cast<cv::_InputOutputArray*>(img), String(text), *reinterpret_cast<cv::Point*>(&org), fontHeight, *reinterpret_cast<cv::Scalar*>(&color), thickness, line_type, bottomLeftOrigin);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::freetype::FreeType2::getTextSize
// as:     cv::freetype::FreeType2::getTextSize (method) cv::freetype::FreeType2 (trait) . getTextSize
// Arg ARG string text= string = 
// Arg ARG Primitive(int) fontHeight= Primitive(int) = 
// Arg ARG Primitive(int) thickness= Primitive(int) = 
// Arg ARG RawPtr[Primitive(int)] * baseLine= (ptr) RawPtr[Primitive(int)] = 
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_freetype_FreeType2_getTextSize_String_int_int_int_X(void* instance, const char* text, int fontHeight, int thickness, int* baseLine) {
    try {
        cv::Size ret = reinterpret_cast<cv::freetype::FreeType2*>(instance)->getTextSize(String(text), fontHeight, thickness, baseLine);
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}



} // extern "C"

