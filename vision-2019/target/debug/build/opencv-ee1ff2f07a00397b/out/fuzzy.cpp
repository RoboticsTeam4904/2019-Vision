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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/fuzzy.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/fuzzy/fuzzy_F0_math.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/fuzzy/fuzzy_F1_math.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/fuzzy/fuzzy_image.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/fuzzy/types.hpp"

extern "C" {

// parsed: cv::ft::FT02D_FL_process
// as:     cv::ft::FT02D_FL_process (function)
// Arg ARG cv::_InputArray (boxed) matrix= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) radius= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) output= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_ft_FT02D_FL_process__InputArray_int__OutputArray(void* matrix, int radius, void* output) {
    try {
        cv::ft::FT02D_FL_process(*reinterpret_cast<const cv::_InputArray*>(matrix), radius, *reinterpret_cast<cv::_OutputArray*>(output));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ft::FT02D_FL_process_float
// as:     cv::ft::FT02D_FL_process_float (function)
// Arg ARG cv::_InputArray (boxed) matrix= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) radius= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) output= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_ft_FT02D_FL_process_float__InputArray_int__OutputArray(void* matrix, int radius, void* output) {
    try {
        cv::ft::FT02D_FL_process_float(*reinterpret_cast<const cv::_InputArray*>(matrix), radius, *reinterpret_cast<cv::_OutputArray*>(output));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ft::FT02D_components
// as:     cv::ft::FT02D_components (function)
// Arg ARG cv::_InputArray (boxed) matrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) kernel= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) components= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_ft_FT02D_components__InputArray__InputArray__OutputArray__InputArray(void* matrix, void* kernel, void* components, void* mask) {
    try {
        cv::ft::FT02D_components(*reinterpret_cast<const cv::_InputArray*>(matrix), *reinterpret_cast<const cv::_InputArray*>(kernel), *reinterpret_cast<cv::_OutputArray*>(components), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ft::FT02D_inverseFT
// as:     cv::ft::FT02D_inverseFT (function)
// Arg ARG cv::_InputArray (boxed) components= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) kernel= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) output= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) width= Primitive(int) = 
// Arg ARG Primitive(int) height= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ft_FT02D_inverseFT__InputArray__InputArray__OutputArray_int_int(void* components, void* kernel, void* output, int width, int height) {
    try {
        cv::ft::FT02D_inverseFT(*reinterpret_cast<const cv::_InputArray*>(components), *reinterpret_cast<const cv::_InputArray*>(kernel), *reinterpret_cast<cv::_OutputArray*>(output), width, height);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ft::FT02D_iteration
// as:     cv::ft::FT02D_iteration (function)
// Arg ARG cv::_InputArray (boxed) matrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) kernel= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) output= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) maskOutput= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(bool) firstStop= Primitive(bool) = 
// Return value: Primitive(int)
cv_return_value_int cv_ft_FT02D_iteration__InputArray__InputArray__OutputArray__InputArray__OutputArray_bool(void* matrix, void* kernel, void* output, void* mask, void* maskOutput, bool firstStop) {
    try {
        int ret = cv::ft::FT02D_iteration(*reinterpret_cast<const cv::_InputArray*>(matrix), *reinterpret_cast<const cv::_InputArray*>(kernel), *reinterpret_cast<cv::_OutputArray*>(output), *reinterpret_cast<const cv::_InputArray*>(mask), *reinterpret_cast<cv::_OutputArray*>(maskOutput), firstStop);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ft::FT02D_process
// as:     cv::ft::FT02D_process (function)
// Arg ARG cv::_InputArray (boxed) matrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) kernel= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) output= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_ft_FT02D_process__InputArray__InputArray__OutputArray__InputArray(void* matrix, void* kernel, void* output, void* mask) {
    try {
        cv::ft::FT02D_process(*reinterpret_cast<const cv::_InputArray*>(matrix), *reinterpret_cast<const cv::_InputArray*>(kernel), *reinterpret_cast<cv::_OutputArray*>(output), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ft::FT12D_components
// as:     cv::ft::FT12D_components (function)
// Arg ARG cv::_InputArray (boxed) matrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) kernel= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) components= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_ft_FT12D_components__InputArray__InputArray__OutputArray(void* matrix, void* kernel, void* components) {
    try {
        cv::ft::FT12D_components(*reinterpret_cast<const cv::_InputArray*>(matrix), *reinterpret_cast<const cv::_InputArray*>(kernel), *reinterpret_cast<cv::_OutputArray*>(components));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ft::FT12D_createPolynomMatrixHorizontal
// as:     cv::ft::FT12D_createPolynomMatrixHorizontal (function)
// Arg ARG Primitive(int) radius= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) matrix= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) chn= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ft_FT12D_createPolynomMatrixHorizontal_int__OutputArray_int(int radius, void* matrix, int chn) {
    try {
        cv::ft::FT12D_createPolynomMatrixHorizontal(radius, *reinterpret_cast<cv::_OutputArray*>(matrix), chn);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ft::FT12D_createPolynomMatrixVertical
// as:     cv::ft::FT12D_createPolynomMatrixVertical (function)
// Arg ARG Primitive(int) radius= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) matrix= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) chn= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ft_FT12D_createPolynomMatrixVertical_int__OutputArray_int(int radius, void* matrix, int chn) {
    try {
        cv::ft::FT12D_createPolynomMatrixVertical(radius, *reinterpret_cast<cv::_OutputArray*>(matrix), chn);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ft::FT12D_inverseFT
// as:     cv::ft::FT12D_inverseFT (function)
// Arg ARG cv::_InputArray (boxed) components= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) kernel= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) output= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) width= Primitive(int) = 
// Arg ARG Primitive(int) height= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ft_FT12D_inverseFT__InputArray__InputArray__OutputArray_int_int(void* components, void* kernel, void* output, int width, int height) {
    try {
        cv::ft::FT12D_inverseFT(*reinterpret_cast<const cv::_InputArray*>(components), *reinterpret_cast<const cv::_InputArray*>(kernel), *reinterpret_cast<cv::_OutputArray*>(output), width, height);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ft::FT12D_polynomial
// as:     cv::ft::FT12D_polynomial (function)
// Arg ARG cv::_InputArray (boxed) matrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) kernel= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) c00= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) c10= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) c01= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) components= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_ft_FT12D_polynomial__InputArray__InputArray__OutputArray__OutputArray__OutputArray__OutputArray__InputArray(void* matrix, void* kernel, void* c00, void* c10, void* c01, void* components, void* mask) {
    try {
        cv::ft::FT12D_polynomial(*reinterpret_cast<const cv::_InputArray*>(matrix), *reinterpret_cast<const cv::_InputArray*>(kernel), *reinterpret_cast<cv::_OutputArray*>(c00), *reinterpret_cast<cv::_OutputArray*>(c10), *reinterpret_cast<cv::_OutputArray*>(c01), *reinterpret_cast<cv::_OutputArray*>(components), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ft::FT12D_process
// as:     cv::ft::FT12D_process (function)
// Arg ARG cv::_InputArray (boxed) matrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) kernel= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) output= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_ft_FT12D_process__InputArray__InputArray__OutputArray__InputArray(void* matrix, void* kernel, void* output, void* mask) {
    try {
        cv::ft::FT12D_process(*reinterpret_cast<const cv::_InputArray*>(matrix), *reinterpret_cast<const cv::_InputArray*>(kernel), *reinterpret_cast<cv::_OutputArray*>(output), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ft::createKernel
// as:     cv::ft::createKernel (function)
// Arg ARG cv::_InputArray (boxed) A= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) B= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) kernel= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) chn= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ft_createKernel__InputArray__InputArray__OutputArray_int(void* A, void* B, void* kernel, int chn) {
    try {
        cv::ft::createKernel(*reinterpret_cast<const cv::_InputArray*>(A), *reinterpret_cast<const cv::_InputArray*>(B), *reinterpret_cast<cv::_OutputArray*>(kernel), chn);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ft::createKernel
// as:     cv::ft::createKernel (function)
// Arg ARG Primitive(int) function= Primitive(int) = 
// Arg ARG Primitive(int) radius= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) kernel= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) chn= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ft_createKernel_int_int__OutputArray_int(int function, int radius, void* kernel, int chn) {
    try {
        cv::ft::createKernel(function, radius, *reinterpret_cast<cv::_OutputArray*>(kernel), chn);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ft::filter
// as:     cv::ft::filter (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) kernel= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) output= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_ft_filter__InputArray__InputArray__OutputArray(void* image, void* kernel, void* output) {
    try {
        cv::ft::filter(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<const cv::_InputArray*>(kernel), *reinterpret_cast<cv::_OutputArray*>(output));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ft::inpaint
// as:     cv::ft::inpaint (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) output= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) radius= Primitive(int) = 
// Arg ARG Primitive(int) function= Primitive(int) = 
// Arg ARG Primitive(int) algorithm= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ft_inpaint__InputArray__InputArray__OutputArray_int_int_int(void* image, void* mask, void* output, int radius, int function, int algorithm) {
    try {
        cv::ft::inpaint(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<const cv::_InputArray*>(mask), *reinterpret_cast<cv::_OutputArray*>(output), radius, function, algorithm);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}



} // extern "C"

