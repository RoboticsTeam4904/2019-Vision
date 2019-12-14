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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/videoio.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/videoio/registry.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/videoio/videoio.hpp"

extern "C" {

// parsed: cv::videoio_registry::getBackendName
// as:     cv::videoio_registry::getBackendName (function)
// Arg ARG VideoCaptureAPIs (enum) api= VideoCaptureAPIs (enum) = 
// Return value: string
cv_return_value_char_X cv_videoio_registry_getBackendName_VideoCaptureAPIs(VideoCaptureAPIs api) {
    try {
        String ret = cv::videoio_registry::getBackendName(*reinterpret_cast<VideoCaptureAPIs*>(&api));
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::videoio_registry::getBackends
// as:     cv::videoio_registry::getBackends (function)
// Return value: Vector[VideoCaptureAPIs (enum)]
cv_return_value_void_X cv_videoio_registry_getBackends() {
    try {
        std::vector<VideoCaptureAPIs> ret = cv::videoio_registry::getBackends();
        return { Error::Code::StsOk, NULL, new std::vector<VideoCaptureAPIs>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videoio_registry::getCameraBackends
// as:     cv::videoio_registry::getCameraBackends (function)
// Return value: Vector[VideoCaptureAPIs (enum)]
cv_return_value_void_X cv_videoio_registry_getCameraBackends() {
    try {
        std::vector<VideoCaptureAPIs> ret = cv::videoio_registry::getCameraBackends();
        return { Error::Code::StsOk, NULL, new std::vector<VideoCaptureAPIs>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videoio_registry::getStreamBackends
// as:     cv::videoio_registry::getStreamBackends (function)
// Return value: Vector[VideoCaptureAPIs (enum)]
cv_return_value_void_X cv_videoio_registry_getStreamBackends() {
    try {
        std::vector<VideoCaptureAPIs> ret = cv::videoio_registry::getStreamBackends();
        return { Error::Code::StsOk, NULL, new std::vector<VideoCaptureAPIs>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videoio_registry::getWriterBackends
// as:     cv::videoio_registry::getWriterBackends (function)
// Return value: Vector[VideoCaptureAPIs (enum)]
cv_return_value_void_X cv_videoio_registry_getWriterBackends() {
    try {
        std::vector<VideoCaptureAPIs> ret = cv::videoio_registry::getWriterBackends();
        return { Error::Code::StsOk, NULL, new std::vector<VideoCaptureAPIs>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videoio_registry::hasBackend
// as:     cv::videoio_registry::hasBackend (function)
// Arg ARG VideoCaptureAPIs (enum) api= VideoCaptureAPIs (enum) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_videoio_registry_hasBackend_VideoCaptureAPIs(VideoCaptureAPIs api) {
    try {
        bool ret = cv::videoio_registry::hasBackend(*reinterpret_cast<VideoCaptureAPIs*>(&api));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// boxed class: cv::VideoCapture
void cv_VideoCapture_delete(void* instance) {
    delete reinterpret_cast<cv::VideoCapture*>(instance);
}
// parsed: cv::VideoCapture::VideoCapture
// as:     cv::VideoCapture::VideoCapture (constructor) cv::VideoCapture . default
// Return value: cv::VideoCapture (boxed)
cv_return_value_void_X cv_VideoCapture_VideoCapture() {
    try {
        cv::VideoCapture* ret = new cv::VideoCapture();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::VideoCapture::VideoCapture
// as:     cv::VideoCapture::VideoCapture (constructor) cv::VideoCapture . new
// Arg ARG string filename= string = 
// Arg ARG Primitive(int) apiPreference= Primitive(int) = CAP_ANY
// Return value: cv::VideoCapture (boxed)
cv_return_value_void_X cv_VideoCapture_VideoCapture_String_int(const char* filename, int apiPreference) {
    try {
        cv::VideoCapture* ret = new cv::VideoCapture(String(filename), apiPreference);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::VideoCapture::VideoCapture
// as:     cv::VideoCapture::VideoCapture (constructor) cv::VideoCapture . new
// Arg ARG Primitive(int) index= Primitive(int) = 
// Arg ARG Primitive(int) apiPreference= Primitive(int) = CAP_ANY
// Return value: cv::VideoCapture (boxed)
cv_return_value_void_X cv_VideoCapture_VideoCapture_int_int(int index, int apiPreference) {
    try {
        cv::VideoCapture* ret = new cv::VideoCapture(index, apiPreference);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::VideoCapture::open
// as:     cv::VideoCapture::open (method) cv::VideoCapture . open
// Arg ARG string filename= string = 
// Arg ARG Primitive(int) apiPreference= Primitive(int) = CAP_ANY
// Return value: Primitive(bool)
cv_return_value_bool cv_VideoCapture_open_String_int(void* instance, const char* filename, int apiPreference) {
    try {
        bool ret = reinterpret_cast<cv::VideoCapture*>(instance)->open(String(filename), apiPreference);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::VideoCapture::open
// as:     cv::VideoCapture::open (method) cv::VideoCapture . open
// Arg ARG Primitive(int) index= Primitive(int) = 
// Arg ARG Primitive(int) apiPreference= Primitive(int) = CAP_ANY
// Return value: Primitive(bool)
cv_return_value_bool cv_VideoCapture_open_int_int(void* instance, int index, int apiPreference) {
    try {
        bool ret = reinterpret_cast<cv::VideoCapture*>(instance)->open(index, apiPreference);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::VideoCapture::isOpened
// as:     cv::VideoCapture::isOpened (method) cv::VideoCapture . isOpened
// Return value: Primitive(bool)
cv_return_value_bool cv_VideoCapture_isOpened_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::VideoCapture*>(instance)->isOpened();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::VideoCapture::release
// as:     cv::VideoCapture::release (method) cv::VideoCapture . release
// Return value: Primitive(void)
cv_return_value_void cv_VideoCapture_release(void* instance) {
    try {
        reinterpret_cast<cv::VideoCapture*>(instance)->release();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::VideoCapture::grab
// as:     cv::VideoCapture::grab (method) cv::VideoCapture . grab
// Return value: Primitive(bool)
cv_return_value_bool cv_VideoCapture_grab(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::VideoCapture*>(instance)->grab();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::VideoCapture::retrieve
// as:     cv::VideoCapture::retrieve (method) cv::VideoCapture . retrieve
// Arg ARG cv::_OutputArray (boxed) image= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flag= Primitive(int) = 0
// Return value: Primitive(bool)
cv_return_value_bool cv_VideoCapture_retrieve__OutputArray_int(void* instance, void* image, int flag) {
    try {
        bool ret = reinterpret_cast<cv::VideoCapture*>(instance)->retrieve(*reinterpret_cast<cv::_OutputArray*>(image), flag);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::VideoCapture::read
// as:     cv::VideoCapture::read (method) cv::VideoCapture . read
// Arg ARG cv::_OutputArray (boxed) image= cv::_OutputArray (boxed) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_VideoCapture_read__OutputArray(void* instance, void* image) {
    try {
        bool ret = reinterpret_cast<cv::VideoCapture*>(instance)->read(*reinterpret_cast<cv::_OutputArray*>(image));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::VideoCapture::set
// as:     cv::VideoCapture::set (method) cv::VideoCapture . set
// Arg ARG Primitive(int) propId= Primitive(int) = 
// Arg ARG Primitive(double) value= Primitive(double) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_VideoCapture_set_int_double(void* instance, int propId, double value) {
    try {
        bool ret = reinterpret_cast<cv::VideoCapture*>(instance)->set(propId, value);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::VideoCapture::get
// as:     cv::VideoCapture::get (method) cv::VideoCapture . get
// Arg ARG Primitive(int) propId= Primitive(int) = 
// Return value: Primitive(double)
cv_return_value_double cv_VideoCapture_get_const_int(void* instance, int propId) {
    try {
        double ret = reinterpret_cast<cv::VideoCapture*>(instance)->get(propId);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::VideoCapture::getBackendName
// as:     cv::VideoCapture::getBackendName (method) cv::VideoCapture . getBackendName
// Return value: string
cv_return_value_char_X cv_VideoCapture_getBackendName_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::VideoCapture*>(instance)->getBackendName();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::VideoCapture::setExceptionMode
// as:     cv::VideoCapture::setExceptionMode (method) cv::VideoCapture . setExceptionMode
// Arg ARG Primitive(bool) enable= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_VideoCapture_setExceptionMode_bool(void* instance, bool enable) {
    try {
        reinterpret_cast<cv::VideoCapture*>(instance)->setExceptionMode(enable);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::VideoCapture::getExceptionMode
// as:     cv::VideoCapture::getExceptionMode (method) cv::VideoCapture . getExceptionMode
// Return value: Primitive(bool)
cv_return_value_bool cv_VideoCapture_getExceptionMode(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::VideoCapture*>(instance)->getExceptionMode();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// boxed class: cv::VideoWriter
void cv_VideoWriter_delete(void* instance) {
    delete reinterpret_cast<cv::VideoWriter*>(instance);
}
// parsed: cv::VideoWriter::VideoWriter
// as:     cv::VideoWriter::VideoWriter (constructor) cv::VideoWriter . default
// Return value: cv::VideoWriter (boxed)
cv_return_value_void_X cv_VideoWriter_VideoWriter() {
    try {
        cv::VideoWriter* ret = new cv::VideoWriter();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::VideoWriter::VideoWriter
// as:     cv::VideoWriter::VideoWriter (constructor) cv::VideoWriter . new
// Arg ARG string filename= string = 
// Arg ARG Primitive(int) fourcc= Primitive(int) = 
// Arg ARG Primitive(double) fps= Primitive(double) = 
// Arg ARG cv::Size (simple) frameSize= cv::Size (simple) = 
// Arg ARG Primitive(bool) isColor= Primitive(bool) = true
// Return value: cv::VideoWriter (boxed)
cv_return_value_void_X cv_VideoWriter_VideoWriter_String_int_double_Size_bool(const char* filename, int fourcc, double fps, SizeWrapper frameSize, bool isColor) {
    try {
        cv::VideoWriter* ret = new cv::VideoWriter(String(filename), fourcc, fps, *reinterpret_cast<cv::Size*>(&frameSize), isColor);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::VideoWriter::VideoWriter
// as:     cv::VideoWriter::VideoWriter (constructor) cv::VideoWriter . new
// Arg ARG string filename= string = 
// Arg ARG Primitive(int) apiPreference= Primitive(int) = 
// Arg ARG Primitive(int) fourcc= Primitive(int) = 
// Arg ARG Primitive(double) fps= Primitive(double) = 
// Arg ARG cv::Size (simple) frameSize= cv::Size (simple) = 
// Arg ARG Primitive(bool) isColor= Primitive(bool) = true
// Return value: cv::VideoWriter (boxed)
cv_return_value_void_X cv_VideoWriter_VideoWriter_String_int_int_double_Size_bool(const char* filename, int apiPreference, int fourcc, double fps, SizeWrapper frameSize, bool isColor) {
    try {
        cv::VideoWriter* ret = new cv::VideoWriter(String(filename), apiPreference, fourcc, fps, *reinterpret_cast<cv::Size*>(&frameSize), isColor);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::VideoWriter::open
// as:     cv::VideoWriter::open (method) cv::VideoWriter . open
// Arg ARG string filename= string = 
// Arg ARG Primitive(int) fourcc= Primitive(int) = 
// Arg ARG Primitive(double) fps= Primitive(double) = 
// Arg ARG cv::Size (simple) frameSize= cv::Size (simple) = 
// Arg ARG Primitive(bool) isColor= Primitive(bool) = true
// Return value: Primitive(bool)
cv_return_value_bool cv_VideoWriter_open_String_int_double_Size_bool(void* instance, const char* filename, int fourcc, double fps, SizeWrapper frameSize, bool isColor) {
    try {
        bool ret = reinterpret_cast<cv::VideoWriter*>(instance)->open(String(filename), fourcc, fps, *reinterpret_cast<cv::Size*>(&frameSize), isColor);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::VideoWriter::open
// as:     cv::VideoWriter::open (method) cv::VideoWriter . open
// Arg ARG string filename= string = 
// Arg ARG Primitive(int) apiPreference= Primitive(int) = 
// Arg ARG Primitive(int) fourcc= Primitive(int) = 
// Arg ARG Primitive(double) fps= Primitive(double) = 
// Arg ARG cv::Size (simple) frameSize= cv::Size (simple) = 
// Arg ARG Primitive(bool) isColor= Primitive(bool) = true
// Return value: Primitive(bool)
cv_return_value_bool cv_VideoWriter_open_String_int_int_double_Size_bool(void* instance, const char* filename, int apiPreference, int fourcc, double fps, SizeWrapper frameSize, bool isColor) {
    try {
        bool ret = reinterpret_cast<cv::VideoWriter*>(instance)->open(String(filename), apiPreference, fourcc, fps, *reinterpret_cast<cv::Size*>(&frameSize), isColor);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::VideoWriter::isOpened
// as:     cv::VideoWriter::isOpened (method) cv::VideoWriter . isOpened
// Return value: Primitive(bool)
cv_return_value_bool cv_VideoWriter_isOpened_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::VideoWriter*>(instance)->isOpened();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::VideoWriter::release
// as:     cv::VideoWriter::release (method) cv::VideoWriter . release
// Return value: Primitive(void)
cv_return_value_void cv_VideoWriter_release(void* instance) {
    try {
        reinterpret_cast<cv::VideoWriter*>(instance)->release();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::VideoWriter::write
// as:     cv::VideoWriter::write (method) cv::VideoWriter . write
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_VideoWriter_write__InputArray(void* instance, void* image) {
    try {
        reinterpret_cast<cv::VideoWriter*>(instance)->write(*reinterpret_cast<const cv::_InputArray*>(image));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::VideoWriter::set
// as:     cv::VideoWriter::set (method) cv::VideoWriter . set
// Arg ARG Primitive(int) propId= Primitive(int) = 
// Arg ARG Primitive(double) value= Primitive(double) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_VideoWriter_set_int_double(void* instance, int propId, double value) {
    try {
        bool ret = reinterpret_cast<cv::VideoWriter*>(instance)->set(propId, value);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::VideoWriter::get
// as:     cv::VideoWriter::get (method) cv::VideoWriter . get
// Arg ARG Primitive(int) propId= Primitive(int) = 
// Return value: Primitive(double)
cv_return_value_double cv_VideoWriter_get_const_int(void* instance, int propId) {
    try {
        double ret = reinterpret_cast<cv::VideoWriter*>(instance)->get(propId);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::VideoWriter::fourcc
// as:     cv::VideoWriter::fourcc (method) cv::VideoWriter . fourcc
// Arg ARG Primitive(char) c1= Primitive(char) = 
// Arg ARG Primitive(char) c2= Primitive(char) = 
// Arg ARG Primitive(char) c3= Primitive(char) = 
// Arg ARG Primitive(char) c4= Primitive(char) = 
// Return value: Primitive(int)
cv_return_value_int cv_VideoWriter_fourcc_char_char_char_char(char c1, char c2, char c3, char c4) {
    try {
        int ret = cv::VideoWriter::fourcc(c1, c2, c3, c4);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::VideoWriter::getBackendName
// as:     cv::VideoWriter::getBackendName (method) cv::VideoWriter . getBackendName
// Return value: string
cv_return_value_char_X cv_VideoWriter_getBackendName_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::VideoWriter*>(instance)->getBackendName();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}



} // extern "C"

