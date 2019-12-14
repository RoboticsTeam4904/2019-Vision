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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/superres.hpp"

extern "C" {

// parsed: cv::superres::createFrameSource_Camera
// as:     cv::superres::createFrameSource_Camera (function)
// Arg ARG Primitive(int) deviceId= Primitive(int) = 0
// Return value: SmartPtr[cv::superres::FrameSource (boxed)]
cv_return_value_void_X cv_superres_createFrameSource_Camera_int(int deviceId) {
    try {
        Ptr<cv::superres::FrameSource> ret = cv::superres::createFrameSource_Camera(deviceId);
        return { Error::Code::StsOk, NULL, new Ptr<cv::superres::FrameSource>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::superres::createFrameSource_Empty
// as:     cv::superres::createFrameSource_Empty (function)
// Return value: SmartPtr[cv::superres::FrameSource (boxed)]
cv_return_value_void_X cv_superres_createFrameSource_Empty() {
    try {
        Ptr<cv::superres::FrameSource> ret = cv::superres::createFrameSource_Empty();
        return { Error::Code::StsOk, NULL, new Ptr<cv::superres::FrameSource>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::superres::createFrameSource_Video_CUDA
// as:     cv::superres::createFrameSource_Video_CUDA (function)
// Arg ARG string fileName= string = 
// Return value: SmartPtr[cv::superres::FrameSource (boxed)]
cv_return_value_void_X cv_superres_createFrameSource_Video_CUDA_String(const char* fileName) {
    try {
        Ptr<cv::superres::FrameSource> ret = cv::superres::createFrameSource_Video_CUDA(String(fileName));
        return { Error::Code::StsOk, NULL, new Ptr<cv::superres::FrameSource>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::superres::createFrameSource_Video
// as:     cv::superres::createFrameSource_Video (function)
// Arg ARG string fileName= string = 
// Return value: SmartPtr[cv::superres::FrameSource (boxed)]
cv_return_value_void_X cv_superres_createFrameSource_Video_String(const char* fileName) {
    try {
        Ptr<cv::superres::FrameSource> ret = cv::superres::createFrameSource_Video(String(fileName));
        return { Error::Code::StsOk, NULL, new Ptr<cv::superres::FrameSource>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::superres::createSuperResolution_BTVL1
// as:     cv::superres::createSuperResolution_BTVL1 (function)
// Return value: SmartPtr[cv::superres::SuperResolution (boxed)]
cv_return_value_void_X cv_superres_createSuperResolution_BTVL1() {
    try {
        Ptr<cv::superres::SuperResolution> ret = cv::superres::createSuperResolution_BTVL1();
        return { Error::Code::StsOk, NULL, new Ptr<cv::superres::SuperResolution>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::superres::createSuperResolution_BTVL1_CUDA
// as:     cv::superres::createSuperResolution_BTVL1_CUDA (function)
// Return value: SmartPtr[cv::superres::SuperResolution (boxed)]
cv_return_value_void_X cv_superres_createSuperResolution_BTVL1_CUDA() {
    try {
        Ptr<cv::superres::SuperResolution> ret = cv::superres::createSuperResolution_BTVL1_CUDA();
        return { Error::Code::StsOk, NULL, new Ptr<cv::superres::SuperResolution>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::superres::FrameSource::nextFrame
// as:     cv::superres::FrameSource::nextFrame (method) cv::superres::FrameSource (trait) . nextFrame
// Arg ARG cv::_OutputArray (boxed) frame= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_superres_FrameSource_nextFrame__OutputArray(void* instance, void* frame) {
    try {
        reinterpret_cast<cv::superres::FrameSource*>(instance)->nextFrame(*reinterpret_cast<cv::_OutputArray*>(frame));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::superres::FrameSource::reset
// as:     cv::superres::FrameSource::reset (method) cv::superres::FrameSource (trait) . reset
// Return value: Primitive(void)
cv_return_value_void cv_superres_FrameSource_reset(void* instance) {
    try {
        reinterpret_cast<cv::superres::FrameSource*>(instance)->reset();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::superres::SuperResolution::setInput
// as:     cv::superres::SuperResolution::setInput (method) cv::superres::SuperResolution (trait) . setInput
// Arg ARG SmartPtr[cv::superres::FrameSource (boxed)] frameSource= SmartPtr[cv::superres::FrameSource (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_superres_SuperResolution_setInput_PtrOfFrameSource(void* instance, void* frameSource) {
    try {
        reinterpret_cast<cv::superres::SuperResolution*>(instance)->setInput(*reinterpret_cast<const Ptr<cv::superres::FrameSource>*>(frameSource));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::superres::SuperResolution::nextFrame
// as:     cv::superres::SuperResolution::nextFrame (method) cv::superres::SuperResolution (trait) . nextFrame
// Arg ARG cv::_OutputArray (boxed) frame= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_superres_SuperResolution_nextFrame__OutputArray(void* instance, void* frame) {
    try {
        reinterpret_cast<cv::superres::SuperResolution*>(instance)->nextFrame(*reinterpret_cast<cv::_OutputArray*>(frame));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::superres::SuperResolution::reset
// as:     cv::superres::SuperResolution::reset (method) cv::superres::SuperResolution (trait) . reset
// Return value: Primitive(void)
cv_return_value_void cv_superres_SuperResolution_reset(void* instance) {
    try {
        reinterpret_cast<cv::superres::SuperResolution*>(instance)->reset();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::superres::SuperResolution::collectGarbage
// as:     cv::superres::SuperResolution::collectGarbage (method) cv::superres::SuperResolution (trait) . collectGarbage
// Return value: Primitive(void)
cv_return_value_void cv_superres_SuperResolution_collectGarbage(void* instance) {
    try {
        reinterpret_cast<cv::superres::SuperResolution*>(instance)->collectGarbage();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::superres::SuperResolution::getScale
// as:     cv::superres::SuperResolution::getScale (method) cv::superres::SuperResolution (trait) . getScale
// Return value: Primitive(int)
cv_return_value_int cv_superres_SuperResolution_getScale_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::superres::SuperResolution*>(instance)->getScale();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::superres::SuperResolution::setScale
// as:     cv::superres::SuperResolution::setScale (method) cv::superres::SuperResolution (trait) . setScale
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_superres_SuperResolution_setScale_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::superres::SuperResolution*>(instance)->setScale(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::superres::SuperResolution::getIterations
// as:     cv::superres::SuperResolution::getIterations (method) cv::superres::SuperResolution (trait) . getIterations
// Return value: Primitive(int)
cv_return_value_int cv_superres_SuperResolution_getIterations_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::superres::SuperResolution*>(instance)->getIterations();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::superres::SuperResolution::setIterations
// as:     cv::superres::SuperResolution::setIterations (method) cv::superres::SuperResolution (trait) . setIterations
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_superres_SuperResolution_setIterations_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::superres::SuperResolution*>(instance)->setIterations(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::superres::SuperResolution::getTau
// as:     cv::superres::SuperResolution::getTau (method) cv::superres::SuperResolution (trait) . getTau
// Return value: Primitive(double)
cv_return_value_double cv_superres_SuperResolution_getTau_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::superres::SuperResolution*>(instance)->getTau();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::superres::SuperResolution::setTau
// as:     cv::superres::SuperResolution::setTau (method) cv::superres::SuperResolution (trait) . setTau
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_superres_SuperResolution_setTau_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::superres::SuperResolution*>(instance)->setTau(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::superres::SuperResolution::getLambda
// as:     cv::superres::SuperResolution::getLambda (method) cv::superres::SuperResolution (trait) . getLambda
// Return value: Primitive(double)
cv_return_value_double cv_superres_SuperResolution_getLambda_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::superres::SuperResolution*>(instance)->getLambda();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::superres::SuperResolution::setLambda
// as:     cv::superres::SuperResolution::setLambda (method) cv::superres::SuperResolution (trait) . setLambda
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_superres_SuperResolution_setLambda_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::superres::SuperResolution*>(instance)->setLambda(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::superres::SuperResolution::getAlpha
// as:     cv::superres::SuperResolution::getAlpha (method) cv::superres::SuperResolution (trait) . getAlpha
// Return value: Primitive(double)
cv_return_value_double cv_superres_SuperResolution_getAlpha_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::superres::SuperResolution*>(instance)->getAlpha();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::superres::SuperResolution::setAlpha
// as:     cv::superres::SuperResolution::setAlpha (method) cv::superres::SuperResolution (trait) . setAlpha
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_superres_SuperResolution_setAlpha_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::superres::SuperResolution*>(instance)->setAlpha(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::superres::SuperResolution::getKernelSize
// as:     cv::superres::SuperResolution::getKernelSize (method) cv::superres::SuperResolution (trait) . getKernelSize
// Return value: Primitive(int)
cv_return_value_int cv_superres_SuperResolution_getKernelSize_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::superres::SuperResolution*>(instance)->getKernelSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::superres::SuperResolution::setKernelSize
// as:     cv::superres::SuperResolution::setKernelSize (method) cv::superres::SuperResolution (trait) . setKernelSize
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_superres_SuperResolution_setKernelSize_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::superres::SuperResolution*>(instance)->setKernelSize(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::superres::SuperResolution::getBlurKernelSize
// as:     cv::superres::SuperResolution::getBlurKernelSize (method) cv::superres::SuperResolution (trait) . getBlurKernelSize
// Return value: Primitive(int)
cv_return_value_int cv_superres_SuperResolution_getBlurKernelSize_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::superres::SuperResolution*>(instance)->getBlurKernelSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::superres::SuperResolution::setBlurKernelSize
// as:     cv::superres::SuperResolution::setBlurKernelSize (method) cv::superres::SuperResolution (trait) . setBlurKernelSize
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_superres_SuperResolution_setBlurKernelSize_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::superres::SuperResolution*>(instance)->setBlurKernelSize(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::superres::SuperResolution::getBlurSigma
// as:     cv::superres::SuperResolution::getBlurSigma (method) cv::superres::SuperResolution (trait) . getBlurSigma
// Return value: Primitive(double)
cv_return_value_double cv_superres_SuperResolution_getBlurSigma_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::superres::SuperResolution*>(instance)->getBlurSigma();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::superres::SuperResolution::setBlurSigma
// as:     cv::superres::SuperResolution::setBlurSigma (method) cv::superres::SuperResolution (trait) . setBlurSigma
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_superres_SuperResolution_setBlurSigma_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::superres::SuperResolution*>(instance)->setBlurSigma(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::superres::SuperResolution::getTemporalAreaRadius
// as:     cv::superres::SuperResolution::getTemporalAreaRadius (method) cv::superres::SuperResolution (trait) . getTemporalAreaRadius
// Return value: Primitive(int)
cv_return_value_int cv_superres_SuperResolution_getTemporalAreaRadius_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::superres::SuperResolution*>(instance)->getTemporalAreaRadius();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::superres::SuperResolution::setTemporalAreaRadius
// as:     cv::superres::SuperResolution::setTemporalAreaRadius (method) cv::superres::SuperResolution (trait) . setTemporalAreaRadius
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_superres_SuperResolution_setTemporalAreaRadius_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::superres::SuperResolution*>(instance)->setTemporalAreaRadius(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}



} // extern "C"

