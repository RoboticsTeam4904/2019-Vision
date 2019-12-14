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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/cvv.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/cvv/call_meta_data.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/cvv/cvv.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/cvv/debug_mode.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/cvv/dmatch.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/cvv/filter.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/cvv/final_show.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/cvv/show_image.hpp"

extern "C" {

// parsed: cvv::debugMode
// as:     cvv::debugMode (function)
// Return value: Primitive(bool)
cv_return_value_bool cvv_debugMode() {
    try {
        bool ret = cvv::debugMode();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cvv::finalShow
// as:     cvv::finalShow (function)
// Return value: Primitive(void)
cv_return_value_void cvv_finalShow() {
    try {
        cvv::finalShow();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cvv::impl::finalShow
// as:     cvv::impl::finalShow (function)
// Return value: Primitive(void)
cv_return_value_void cvv_impl_finalShow() {
    try {
        cvv::impl::finalShow();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cvv::impl::getDebugFlag
// as:     cvv::impl::getDebugFlag (function)
// Return value: Primitive(bool)
cv_return_value_bool cvv_impl_getDebugFlag() {
    try {
        bool ret = cvv::impl::getDebugFlag();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cvv::setDebugFlag
// as:     cvv::setDebugFlag (function)
// Arg ARG Primitive(bool) active= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cvv_setDebugFlag_bool(bool active) {
    try {
        cvv::setDebugFlag(active);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cvv::FinalShowCaller
void cv_FinalShowCaller_delete(void* instance) {
    delete reinterpret_cast<cvv::FinalShowCaller*>(instance);
}
// boxed class: cvv::impl::CallMetaData
void cv_CallMetaData_delete(void* instance) {
    delete reinterpret_cast<cvv::impl::CallMetaData*>(instance);
}
// parsed: cvv::impl::CallMetaData::CallMetaData
// as:     cvv::impl::CallMetaData::CallMetaData (constructor) cvv::impl::CallMetaData . default
// Return value: cvv::impl::CallMetaData (boxed)
cv_return_value_void_X cvv_impl_CallMetaData_CallMetaData() {
    try {
        cvv::impl::CallMetaData* ret = new cvv::impl::CallMetaData();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cvv::impl::CallMetaData::CallMetaData
// as:     cvv::impl::CallMetaData::CallMetaData (constructor) cvv::impl::CallMetaData . new
// Arg ARG RawPtr[Primitive(char)] * file= (ptr) RawPtr[Primitive(char)] = 
// Arg ARG Primitive(size_t) line= Primitive(size_t) = 
// Arg ARG RawPtr[Primitive(char)] * function= (ptr) RawPtr[Primitive(char)] = 
// Return value: cvv::impl::CallMetaData (boxed)
cv_return_value_void_X cvv_impl_CallMetaData_CallMetaData_const_char_X_size_t_const_char_X(const char* file, std::size_t line, const char* function) {
    try {
        cvv::impl::CallMetaData* ret = new cvv::impl::CallMetaData(file, line, function);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cvv::impl::CallMetaData::operator bool
// as:     cvv::impl::CallMetaData::operator bool (convertor method) cvv::impl::CallMetaData . operator bool
// Return value: Primitive(bool)
cv_return_value_bool cvv_impl_CallMetaData_operator_bool(void* instance) {
    try {
        bool ret = reinterpret_cast<cvv::impl::CallMetaData*>(instance)->operator bool();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}



} // extern "C"

