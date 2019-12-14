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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/video.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/video/background_segm.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/video/tracking.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/video/video.hpp"

extern "C" {

// parsed: cv::CamShift
// as:     cv::CamShift (function)
// Arg ARG cv::_InputArray (boxed) probImage= cv::_InputArray (boxed) = 
// Arg ARG cv::Rect (simple) window= cv::Rect (simple) = 
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = 
// Return value: cv::RotatedRect (boxed)
cv_return_value_void_X cv_CamShift__InputArray_Rect_TermCriteria(void* probImage, RectWrapper& window, void* criteria) {
    try {
        cv::RotatedRect ret = cv::CamShift(*reinterpret_cast<const cv::_InputArray*>(probImage), *reinterpret_cast<cv::Rect*>(&window), *reinterpret_cast<cv::TermCriteria*>(criteria));
        return { Error::Code::StsOk, NULL, new cv::RotatedRect(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::buildOpticalFlowPyramid
// as:     cv::buildOpticalFlowPyramid (function)
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) pyramid= cv::_OutputArray (boxed) = 
// Arg ARG cv::Size (simple) winSize= cv::Size (simple) = 
// Arg ARG Primitive(int) maxLevel= Primitive(int) = 
// Arg ARG Primitive(bool) withDerivatives= Primitive(bool) = true
// Arg ARG Primitive(int) pyrBorder= Primitive(int) = BORDER_REFLECT_101
// Arg ARG Primitive(int) derivBorder= Primitive(int) = BORDER_CONSTANT
// Arg ARG Primitive(bool) tryReuseInputImage= Primitive(bool) = true
// Return value: Primitive(int)
cv_return_value_int cv_buildOpticalFlowPyramid__InputArray__OutputArray_Size_int_bool_int_int_bool(void* img, void* pyramid, SizeWrapper winSize, int maxLevel, bool withDerivatives, int pyrBorder, int derivBorder, bool tryReuseInputImage) {
    try {
        int ret = cv::buildOpticalFlowPyramid(*reinterpret_cast<const cv::_InputArray*>(img), *reinterpret_cast<cv::_OutputArray*>(pyramid), *reinterpret_cast<cv::Size*>(&winSize), maxLevel, withDerivatives, pyrBorder, derivBorder, tryReuseInputImage);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::calcOpticalFlowFarneback
// as:     cv::calcOpticalFlowFarneback (function)
// Arg ARG cv::_InputArray (boxed) prev= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) next= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) flow= cv::_InputOutputArray (boxed) = 
// Arg ARG Primitive(double) pyr_scale= Primitive(double) = 
// Arg ARG Primitive(int) levels= Primitive(int) = 
// Arg ARG Primitive(int) winsize= Primitive(int) = 
// Arg ARG Primitive(int) iterations= Primitive(int) = 
// Arg ARG Primitive(int) poly_n= Primitive(int) = 
// Arg ARG Primitive(double) poly_sigma= Primitive(double) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_calcOpticalFlowFarneback__InputArray__InputArray__InputOutputArray_double_int_int_int_int_double_int(void* prev, void* next, void* flow, double pyr_scale, int levels, int winsize, int iterations, int poly_n, double poly_sigma, int flags) {
    try {
        cv::calcOpticalFlowFarneback(*reinterpret_cast<const cv::_InputArray*>(prev), *reinterpret_cast<const cv::_InputArray*>(next), *reinterpret_cast<cv::_InputOutputArray*>(flow), pyr_scale, levels, winsize, iterations, poly_n, poly_sigma, flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::calcOpticalFlowPyrLK
// as:     cv::calcOpticalFlowPyrLK (function)
// Arg ARG cv::_InputArray (boxed) prevImg= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) nextImg= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) prevPts= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) nextPts= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) status= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) err= cv::_OutputArray (boxed) = 
// Arg ARG cv::Size (simple) winSize= cv::Size (simple) = Size(21,21)
// Arg ARG Primitive(int) maxLevel= Primitive(int) = 3
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 0.01)
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Arg ARG Primitive(double) minEigThreshold= Primitive(double) = 1e-4
// Return value: Primitive(void)
cv_return_value_void cv_calcOpticalFlowPyrLK__InputArray__InputArray__InputArray__InputOutputArray__OutputArray__OutputArray_Size_int_TermCriteria_int_double(void* prevImg, void* nextImg, void* prevPts, void* nextPts, void* status, void* err, SizeWrapper winSize, int maxLevel, void* criteria, int flags, double minEigThreshold) {
    try {
        cv::calcOpticalFlowPyrLK(*reinterpret_cast<const cv::_InputArray*>(prevImg), *reinterpret_cast<const cv::_InputArray*>(nextImg), *reinterpret_cast<const cv::_InputArray*>(prevPts), *reinterpret_cast<cv::_InputOutputArray*>(nextPts), *reinterpret_cast<cv::_OutputArray*>(status), *reinterpret_cast<cv::_OutputArray*>(err), *reinterpret_cast<cv::Size*>(&winSize), maxLevel, *reinterpret_cast<cv::TermCriteria*>(criteria), flags, minEigThreshold);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::computeECC
// as:     cv::computeECC (function)
// Arg ARG cv::_InputArray (boxed) templateImage= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) inputImage= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) inputMask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(double)
cv_return_value_double cv_computeECC__InputArray__InputArray__InputArray(void* templateImage, void* inputImage, void* inputMask) {
    try {
        double ret = cv::computeECC(*reinterpret_cast<const cv::_InputArray*>(templateImage), *reinterpret_cast<const cv::_InputArray*>(inputImage), *reinterpret_cast<const cv::_InputArray*>(inputMask));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::createBackgroundSubtractorKNN
// as:     cv::createBackgroundSubtractorKNN (function)
// Arg ARG Primitive(int) history= Primitive(int) = 500
// Arg ARG Primitive(double) dist2Threshold= Primitive(double) = 400.0
// Arg ARG Primitive(bool) detectShadows= Primitive(bool) = true
// Return value: SmartPtr[cv::BackgroundSubtractorKNN (boxed)]
cv_return_value_void_X cv_createBackgroundSubtractorKNN_int_double_bool(int history, double dist2Threshold, bool detectShadows) {
    try {
        Ptr<cv::BackgroundSubtractorKNN> ret = cv::createBackgroundSubtractorKNN(history, dist2Threshold, detectShadows);
        return { Error::Code::StsOk, NULL, new Ptr<cv::BackgroundSubtractorKNN>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::createBackgroundSubtractorMOG2
// as:     cv::createBackgroundSubtractorMOG2 (function)
// Arg ARG Primitive(int) history= Primitive(int) = 500
// Arg ARG Primitive(double) varThreshold= Primitive(double) = 16
// Arg ARG Primitive(bool) detectShadows= Primitive(bool) = true
// Return value: SmartPtr[cv::BackgroundSubtractorMOG2 (boxed)]
cv_return_value_void_X cv_createBackgroundSubtractorMOG2_int_double_bool(int history, double varThreshold, bool detectShadows) {
    try {
        Ptr<cv::BackgroundSubtractorMOG2> ret = cv::createBackgroundSubtractorMOG2(history, varThreshold, detectShadows);
        return { Error::Code::StsOk, NULL, new Ptr<cv::BackgroundSubtractorMOG2>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::estimateRigidTransform
// as:     cv::estimateRigidTransform (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) dst= cv::_InputArray (boxed) = 
// Arg ARG Primitive(bool) fullAffine= Primitive(bool) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_estimateRigidTransform__InputArray__InputArray_bool(void* src, void* dst, bool fullAffine) {
    try {
        cv::Mat ret = cv::estimateRigidTransform(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<const cv::_InputArray*>(dst), fullAffine);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::findTransformECC
// as:     cv::findTransformECC (function)
// Arg ARG cv::_InputArray (boxed) templateImage= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) inputImage= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) warpMatrix= cv::_InputOutputArray (boxed) = 
// Arg ARG Primitive(int) motionType= Primitive(int) = MOTION_AFFINE
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 50, 0.001)
// Arg ARG cv::_InputArray (boxed) inputMask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(double)
cv_return_value_double cv_findTransformECC__InputArray__InputArray__InputOutputArray_int_TermCriteria__InputArray(void* templateImage, void* inputImage, void* warpMatrix, int motionType, void* criteria, void* inputMask) {
    try {
        double ret = cv::findTransformECC(*reinterpret_cast<const cv::_InputArray*>(templateImage), *reinterpret_cast<const cv::_InputArray*>(inputImage), *reinterpret_cast<cv::_InputOutputArray*>(warpMatrix), motionType, *reinterpret_cast<cv::TermCriteria*>(criteria), *reinterpret_cast<const cv::_InputArray*>(inputMask));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::findTransformECC
// as:     cv::findTransformECC (function)
// Arg ARG cv::_InputArray (boxed) templateImage= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) inputImage= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) warpMatrix= cv::_InputOutputArray (boxed) = 
// Arg ARG Primitive(int) motionType= Primitive(int) = 
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = 
// Arg ARG cv::_InputArray (boxed) inputMask= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) gaussFiltSize= Primitive(int) = 
// Return value: Primitive(double)
cv_return_value_double cv_findTransformECC__InputArray__InputArray__InputOutputArray_int_TermCriteria__InputArray_int(void* templateImage, void* inputImage, void* warpMatrix, int motionType, void* criteria, void* inputMask, int gaussFiltSize) {
    try {
        double ret = cv::findTransformECC(*reinterpret_cast<const cv::_InputArray*>(templateImage), *reinterpret_cast<const cv::_InputArray*>(inputImage), *reinterpret_cast<cv::_InputOutputArray*>(warpMatrix), motionType, *reinterpret_cast<cv::TermCriteria*>(criteria), *reinterpret_cast<const cv::_InputArray*>(inputMask), gaussFiltSize);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::meanShift
// as:     cv::meanShift (function)
// Arg ARG cv::_InputArray (boxed) probImage= cv::_InputArray (boxed) = 
// Arg ARG cv::Rect (simple) window= cv::Rect (simple) = 
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = 
// Return value: Primitive(int)
cv_return_value_int cv_meanShift__InputArray_Rect_TermCriteria(void* probImage, RectWrapper& window, void* criteria) {
    try {
        int ret = cv::meanShift(*reinterpret_cast<const cv::_InputArray*>(probImage), *reinterpret_cast<cv::Rect*>(&window), *reinterpret_cast<cv::TermCriteria*>(criteria));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::readOpticalFlow
// as:     cv::readOpticalFlow (function)
// Arg ARG string path= string = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_readOpticalFlow_String(const char* path) {
    try {
        cv::Mat ret = cv::readOpticalFlow(String(path));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::writeOpticalFlow
// as:     cv::writeOpticalFlow (function)
// Arg ARG string path= string = 
// Arg ARG cv::_InputArray (boxed) flow= cv::_InputArray (boxed) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_writeOpticalFlow_String__InputArray(const char* path, void* flow) {
    try {
        bool ret = cv::writeOpticalFlow(String(path), *reinterpret_cast<const cv::_InputArray*>(flow));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::BackgroundSubtractor::apply
// as:     cv::BackgroundSubtractor::apply (method) cv::BackgroundSubtractor (trait) . apply
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) fgmask= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) learningRate= Primitive(double) = -1
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractor_apply__InputArray__OutputArray_double(void* instance, void* image, void* fgmask, double learningRate) {
    try {
        reinterpret_cast<cv::BackgroundSubtractor*>(instance)->apply(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(fgmask), learningRate);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractor::getBackgroundImage
// as:     cv::BackgroundSubtractor::getBackgroundImage (method) cv::BackgroundSubtractor (trait) . getBackgroundImage
// Arg ARG cv::_OutputArray (boxed) backgroundImage= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractor_getBackgroundImage_const__OutputArray(void* instance, void* backgroundImage) {
    try {
        reinterpret_cast<cv::BackgroundSubtractor*>(instance)->getBackgroundImage(*reinterpret_cast<cv::_OutputArray*>(backgroundImage));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractorKNN::getHistory
// as:     cv::BackgroundSubtractorKNN::getHistory (method) cv::BackgroundSubtractorKNN (trait) . getHistory
// Return value: Primitive(int)
cv_return_value_int cv_BackgroundSubtractorKNN_getHistory_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::BackgroundSubtractorKNN*>(instance)->getHistory();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::BackgroundSubtractorKNN::setHistory
// as:     cv::BackgroundSubtractorKNN::setHistory (method) cv::BackgroundSubtractorKNN (trait) . setHistory
// Arg ARG Primitive(int) history= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractorKNN_setHistory_int(void* instance, int history) {
    try {
        reinterpret_cast<cv::BackgroundSubtractorKNN*>(instance)->setHistory(history);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractorKNN::getNSamples
// as:     cv::BackgroundSubtractorKNN::getNSamples (method) cv::BackgroundSubtractorKNN (trait) . getNSamples
// Return value: Primitive(int)
cv_return_value_int cv_BackgroundSubtractorKNN_getNSamples_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::BackgroundSubtractorKNN*>(instance)->getNSamples();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::BackgroundSubtractorKNN::setNSamples
// as:     cv::BackgroundSubtractorKNN::setNSamples (method) cv::BackgroundSubtractorKNN (trait) . setNSamples
// Arg ARG Primitive(int) _nN= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractorKNN_setNSamples_int(void* instance, int _nN) {
    try {
        reinterpret_cast<cv::BackgroundSubtractorKNN*>(instance)->setNSamples(_nN);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractorKNN::getDist2Threshold
// as:     cv::BackgroundSubtractorKNN::getDist2Threshold (method) cv::BackgroundSubtractorKNN (trait) . getDist2Threshold
// Return value: Primitive(double)
cv_return_value_double cv_BackgroundSubtractorKNN_getDist2Threshold_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::BackgroundSubtractorKNN*>(instance)->getDist2Threshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::BackgroundSubtractorKNN::setDist2Threshold
// as:     cv::BackgroundSubtractorKNN::setDist2Threshold (method) cv::BackgroundSubtractorKNN (trait) . setDist2Threshold
// Arg ARG Primitive(double) _dist2Threshold= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractorKNN_setDist2Threshold_double(void* instance, double _dist2Threshold) {
    try {
        reinterpret_cast<cv::BackgroundSubtractorKNN*>(instance)->setDist2Threshold(_dist2Threshold);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractorKNN::getkNNSamples
// as:     cv::BackgroundSubtractorKNN::getkNNSamples (method) cv::BackgroundSubtractorKNN (trait) . getkNNSamples
// Return value: Primitive(int)
cv_return_value_int cv_BackgroundSubtractorKNN_getkNNSamples_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::BackgroundSubtractorKNN*>(instance)->getkNNSamples();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::BackgroundSubtractorKNN::setkNNSamples
// as:     cv::BackgroundSubtractorKNN::setkNNSamples (method) cv::BackgroundSubtractorKNN (trait) . setkNNSamples
// Arg ARG Primitive(int) _nkNN= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractorKNN_setkNNSamples_int(void* instance, int _nkNN) {
    try {
        reinterpret_cast<cv::BackgroundSubtractorKNN*>(instance)->setkNNSamples(_nkNN);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractorKNN::getDetectShadows
// as:     cv::BackgroundSubtractorKNN::getDetectShadows (method) cv::BackgroundSubtractorKNN (trait) . getDetectShadows
// Return value: Primitive(bool)
cv_return_value_bool cv_BackgroundSubtractorKNN_getDetectShadows_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::BackgroundSubtractorKNN*>(instance)->getDetectShadows();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::BackgroundSubtractorKNN::setDetectShadows
// as:     cv::BackgroundSubtractorKNN::setDetectShadows (method) cv::BackgroundSubtractorKNN (trait) . setDetectShadows
// Arg ARG Primitive(bool) detectShadows= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractorKNN_setDetectShadows_bool(void* instance, bool detectShadows) {
    try {
        reinterpret_cast<cv::BackgroundSubtractorKNN*>(instance)->setDetectShadows(detectShadows);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractorKNN::getShadowValue
// as:     cv::BackgroundSubtractorKNN::getShadowValue (method) cv::BackgroundSubtractorKNN (trait) . getShadowValue
// Return value: Primitive(int)
cv_return_value_int cv_BackgroundSubtractorKNN_getShadowValue_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::BackgroundSubtractorKNN*>(instance)->getShadowValue();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::BackgroundSubtractorKNN::setShadowValue
// as:     cv::BackgroundSubtractorKNN::setShadowValue (method) cv::BackgroundSubtractorKNN (trait) . setShadowValue
// Arg ARG Primitive(int) value= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractorKNN_setShadowValue_int(void* instance, int value) {
    try {
        reinterpret_cast<cv::BackgroundSubtractorKNN*>(instance)->setShadowValue(value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractorKNN::getShadowThreshold
// as:     cv::BackgroundSubtractorKNN::getShadowThreshold (method) cv::BackgroundSubtractorKNN (trait) . getShadowThreshold
// Return value: Primitive(double)
cv_return_value_double cv_BackgroundSubtractorKNN_getShadowThreshold_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::BackgroundSubtractorKNN*>(instance)->getShadowThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::BackgroundSubtractorKNN::setShadowThreshold
// as:     cv::BackgroundSubtractorKNN::setShadowThreshold (method) cv::BackgroundSubtractorKNN (trait) . setShadowThreshold
// Arg ARG Primitive(double) threshold= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractorKNN_setShadowThreshold_double(void* instance, double threshold) {
    try {
        reinterpret_cast<cv::BackgroundSubtractorKNN*>(instance)->setShadowThreshold(threshold);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractorMOG2::getHistory
// as:     cv::BackgroundSubtractorMOG2::getHistory (method) cv::BackgroundSubtractorMOG2 (trait) . getHistory
// Return value: Primitive(int)
cv_return_value_int cv_BackgroundSubtractorMOG2_getHistory_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->getHistory();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::BackgroundSubtractorMOG2::setHistory
// as:     cv::BackgroundSubtractorMOG2::setHistory (method) cv::BackgroundSubtractorMOG2 (trait) . setHistory
// Arg ARG Primitive(int) history= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractorMOG2_setHistory_int(void* instance, int history) {
    try {
        reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->setHistory(history);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractorMOG2::getNMixtures
// as:     cv::BackgroundSubtractorMOG2::getNMixtures (method) cv::BackgroundSubtractorMOG2 (trait) . getNMixtures
// Return value: Primitive(int)
cv_return_value_int cv_BackgroundSubtractorMOG2_getNMixtures_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->getNMixtures();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::BackgroundSubtractorMOG2::setNMixtures
// as:     cv::BackgroundSubtractorMOG2::setNMixtures (method) cv::BackgroundSubtractorMOG2 (trait) . setNMixtures
// Arg ARG Primitive(int) nmixtures= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractorMOG2_setNMixtures_int(void* instance, int nmixtures) {
    try {
        reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->setNMixtures(nmixtures);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractorMOG2::getBackgroundRatio
// as:     cv::BackgroundSubtractorMOG2::getBackgroundRatio (method) cv::BackgroundSubtractorMOG2 (trait) . getBackgroundRatio
// Return value: Primitive(double)
cv_return_value_double cv_BackgroundSubtractorMOG2_getBackgroundRatio_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->getBackgroundRatio();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::BackgroundSubtractorMOG2::setBackgroundRatio
// as:     cv::BackgroundSubtractorMOG2::setBackgroundRatio (method) cv::BackgroundSubtractorMOG2 (trait) . setBackgroundRatio
// Arg ARG Primitive(double) ratio= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractorMOG2_setBackgroundRatio_double(void* instance, double ratio) {
    try {
        reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->setBackgroundRatio(ratio);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractorMOG2::getVarThreshold
// as:     cv::BackgroundSubtractorMOG2::getVarThreshold (method) cv::BackgroundSubtractorMOG2 (trait) . getVarThreshold
// Return value: Primitive(double)
cv_return_value_double cv_BackgroundSubtractorMOG2_getVarThreshold_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->getVarThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::BackgroundSubtractorMOG2::setVarThreshold
// as:     cv::BackgroundSubtractorMOG2::setVarThreshold (method) cv::BackgroundSubtractorMOG2 (trait) . setVarThreshold
// Arg ARG Primitive(double) varThreshold= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractorMOG2_setVarThreshold_double(void* instance, double varThreshold) {
    try {
        reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->setVarThreshold(varThreshold);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractorMOG2::getVarThresholdGen
// as:     cv::BackgroundSubtractorMOG2::getVarThresholdGen (method) cv::BackgroundSubtractorMOG2 (trait) . getVarThresholdGen
// Return value: Primitive(double)
cv_return_value_double cv_BackgroundSubtractorMOG2_getVarThresholdGen_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->getVarThresholdGen();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::BackgroundSubtractorMOG2::setVarThresholdGen
// as:     cv::BackgroundSubtractorMOG2::setVarThresholdGen (method) cv::BackgroundSubtractorMOG2 (trait) . setVarThresholdGen
// Arg ARG Primitive(double) varThresholdGen= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractorMOG2_setVarThresholdGen_double(void* instance, double varThresholdGen) {
    try {
        reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->setVarThresholdGen(varThresholdGen);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractorMOG2::getVarInit
// as:     cv::BackgroundSubtractorMOG2::getVarInit (method) cv::BackgroundSubtractorMOG2 (trait) . getVarInit
// Return value: Primitive(double)
cv_return_value_double cv_BackgroundSubtractorMOG2_getVarInit_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->getVarInit();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::BackgroundSubtractorMOG2::setVarInit
// as:     cv::BackgroundSubtractorMOG2::setVarInit (method) cv::BackgroundSubtractorMOG2 (trait) . setVarInit
// Arg ARG Primitive(double) varInit= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractorMOG2_setVarInit_double(void* instance, double varInit) {
    try {
        reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->setVarInit(varInit);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractorMOG2::getVarMin
// as:     cv::BackgroundSubtractorMOG2::getVarMin (method) cv::BackgroundSubtractorMOG2 (trait) . getVarMin
// Return value: Primitive(double)
cv_return_value_double cv_BackgroundSubtractorMOG2_getVarMin_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->getVarMin();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::BackgroundSubtractorMOG2::setVarMin
// as:     cv::BackgroundSubtractorMOG2::setVarMin (method) cv::BackgroundSubtractorMOG2 (trait) . setVarMin
// Arg ARG Primitive(double) varMin= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractorMOG2_setVarMin_double(void* instance, double varMin) {
    try {
        reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->setVarMin(varMin);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractorMOG2::getVarMax
// as:     cv::BackgroundSubtractorMOG2::getVarMax (method) cv::BackgroundSubtractorMOG2 (trait) . getVarMax
// Return value: Primitive(double)
cv_return_value_double cv_BackgroundSubtractorMOG2_getVarMax_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->getVarMax();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::BackgroundSubtractorMOG2::setVarMax
// as:     cv::BackgroundSubtractorMOG2::setVarMax (method) cv::BackgroundSubtractorMOG2 (trait) . setVarMax
// Arg ARG Primitive(double) varMax= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractorMOG2_setVarMax_double(void* instance, double varMax) {
    try {
        reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->setVarMax(varMax);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractorMOG2::getComplexityReductionThreshold
// as:     cv::BackgroundSubtractorMOG2::getComplexityReductionThreshold (method) cv::BackgroundSubtractorMOG2 (trait) . getComplexityReductionThreshold
// Return value: Primitive(double)
cv_return_value_double cv_BackgroundSubtractorMOG2_getComplexityReductionThreshold_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->getComplexityReductionThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::BackgroundSubtractorMOG2::setComplexityReductionThreshold
// as:     cv::BackgroundSubtractorMOG2::setComplexityReductionThreshold (method) cv::BackgroundSubtractorMOG2 (trait) . setComplexityReductionThreshold
// Arg ARG Primitive(double) ct= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractorMOG2_setComplexityReductionThreshold_double(void* instance, double ct) {
    try {
        reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->setComplexityReductionThreshold(ct);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractorMOG2::getDetectShadows
// as:     cv::BackgroundSubtractorMOG2::getDetectShadows (method) cv::BackgroundSubtractorMOG2 (trait) . getDetectShadows
// Return value: Primitive(bool)
cv_return_value_bool cv_BackgroundSubtractorMOG2_getDetectShadows_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->getDetectShadows();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::BackgroundSubtractorMOG2::setDetectShadows
// as:     cv::BackgroundSubtractorMOG2::setDetectShadows (method) cv::BackgroundSubtractorMOG2 (trait) . setDetectShadows
// Arg ARG Primitive(bool) detectShadows= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractorMOG2_setDetectShadows_bool(void* instance, bool detectShadows) {
    try {
        reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->setDetectShadows(detectShadows);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractorMOG2::getShadowValue
// as:     cv::BackgroundSubtractorMOG2::getShadowValue (method) cv::BackgroundSubtractorMOG2 (trait) . getShadowValue
// Return value: Primitive(int)
cv_return_value_int cv_BackgroundSubtractorMOG2_getShadowValue_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->getShadowValue();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::BackgroundSubtractorMOG2::setShadowValue
// as:     cv::BackgroundSubtractorMOG2::setShadowValue (method) cv::BackgroundSubtractorMOG2 (trait) . setShadowValue
// Arg ARG Primitive(int) value= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractorMOG2_setShadowValue_int(void* instance, int value) {
    try {
        reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->setShadowValue(value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractorMOG2::getShadowThreshold
// as:     cv::BackgroundSubtractorMOG2::getShadowThreshold (method) cv::BackgroundSubtractorMOG2 (trait) . getShadowThreshold
// Return value: Primitive(double)
cv_return_value_double cv_BackgroundSubtractorMOG2_getShadowThreshold_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->getShadowThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::BackgroundSubtractorMOG2::setShadowThreshold
// as:     cv::BackgroundSubtractorMOG2::setShadowThreshold (method) cv::BackgroundSubtractorMOG2 (trait) . setShadowThreshold
// Arg ARG Primitive(double) threshold= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractorMOG2_setShadowThreshold_double(void* instance, double threshold) {
    try {
        reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->setShadowThreshold(threshold);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BackgroundSubtractorMOG2::apply
// as:     cv::BackgroundSubtractorMOG2::apply (method) cv::BackgroundSubtractorMOG2 (trait) . apply
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) fgmask= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) learningRate= Primitive(double) = -1
// Return value: Primitive(void)
cv_return_value_void cv_BackgroundSubtractorMOG2_apply__InputArray__OutputArray_double(void* instance, void* image, void* fgmask, double learningRate) {
    try {
        reinterpret_cast<cv::BackgroundSubtractorMOG2*>(instance)->apply(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(fgmask), learningRate);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DISOpticalFlow::getFinestScale
// as:     cv::DISOpticalFlow::getFinestScale (method) cv::DISOpticalFlow (trait) . getFinestScale
// Return value: Primitive(int)
cv_return_value_int cv_DISOpticalFlow_getFinestScale_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::DISOpticalFlow*>(instance)->getFinestScale();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::DISOpticalFlow::setFinestScale
// as:     cv::DISOpticalFlow::setFinestScale (method) cv::DISOpticalFlow (trait) . setFinestScale
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_DISOpticalFlow_setFinestScale_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::DISOpticalFlow*>(instance)->setFinestScale(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DISOpticalFlow::getPatchSize
// as:     cv::DISOpticalFlow::getPatchSize (method) cv::DISOpticalFlow (trait) . getPatchSize
// Return value: Primitive(int)
cv_return_value_int cv_DISOpticalFlow_getPatchSize_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::DISOpticalFlow*>(instance)->getPatchSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::DISOpticalFlow::setPatchSize
// as:     cv::DISOpticalFlow::setPatchSize (method) cv::DISOpticalFlow (trait) . setPatchSize
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_DISOpticalFlow_setPatchSize_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::DISOpticalFlow*>(instance)->setPatchSize(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DISOpticalFlow::getPatchStride
// as:     cv::DISOpticalFlow::getPatchStride (method) cv::DISOpticalFlow (trait) . getPatchStride
// Return value: Primitive(int)
cv_return_value_int cv_DISOpticalFlow_getPatchStride_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::DISOpticalFlow*>(instance)->getPatchStride();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::DISOpticalFlow::setPatchStride
// as:     cv::DISOpticalFlow::setPatchStride (method) cv::DISOpticalFlow (trait) . setPatchStride
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_DISOpticalFlow_setPatchStride_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::DISOpticalFlow*>(instance)->setPatchStride(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DISOpticalFlow::getGradientDescentIterations
// as:     cv::DISOpticalFlow::getGradientDescentIterations (method) cv::DISOpticalFlow (trait) . getGradientDescentIterations
// Return value: Primitive(int)
cv_return_value_int cv_DISOpticalFlow_getGradientDescentIterations_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::DISOpticalFlow*>(instance)->getGradientDescentIterations();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::DISOpticalFlow::setGradientDescentIterations
// as:     cv::DISOpticalFlow::setGradientDescentIterations (method) cv::DISOpticalFlow (trait) . setGradientDescentIterations
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_DISOpticalFlow_setGradientDescentIterations_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::DISOpticalFlow*>(instance)->setGradientDescentIterations(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DISOpticalFlow::getVariationalRefinementIterations
// as:     cv::DISOpticalFlow::getVariationalRefinementIterations (method) cv::DISOpticalFlow (trait) . getVariationalRefinementIterations
// Return value: Primitive(int)
cv_return_value_int cv_DISOpticalFlow_getVariationalRefinementIterations_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::DISOpticalFlow*>(instance)->getVariationalRefinementIterations();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::DISOpticalFlow::setVariationalRefinementIterations
// as:     cv::DISOpticalFlow::setVariationalRefinementIterations (method) cv::DISOpticalFlow (trait) . setVariationalRefinementIterations
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_DISOpticalFlow_setVariationalRefinementIterations_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::DISOpticalFlow*>(instance)->setVariationalRefinementIterations(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DISOpticalFlow::getVariationalRefinementAlpha
// as:     cv::DISOpticalFlow::getVariationalRefinementAlpha (method) cv::DISOpticalFlow (trait) . getVariationalRefinementAlpha
// Return value: Primitive(float)
cv_return_value_float cv_DISOpticalFlow_getVariationalRefinementAlpha_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::DISOpticalFlow*>(instance)->getVariationalRefinementAlpha();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::DISOpticalFlow::setVariationalRefinementAlpha
// as:     cv::DISOpticalFlow::setVariationalRefinementAlpha (method) cv::DISOpticalFlow (trait) . setVariationalRefinementAlpha
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_DISOpticalFlow_setVariationalRefinementAlpha_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::DISOpticalFlow*>(instance)->setVariationalRefinementAlpha(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DISOpticalFlow::getVariationalRefinementDelta
// as:     cv::DISOpticalFlow::getVariationalRefinementDelta (method) cv::DISOpticalFlow (trait) . getVariationalRefinementDelta
// Return value: Primitive(float)
cv_return_value_float cv_DISOpticalFlow_getVariationalRefinementDelta_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::DISOpticalFlow*>(instance)->getVariationalRefinementDelta();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::DISOpticalFlow::setVariationalRefinementDelta
// as:     cv::DISOpticalFlow::setVariationalRefinementDelta (method) cv::DISOpticalFlow (trait) . setVariationalRefinementDelta
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_DISOpticalFlow_setVariationalRefinementDelta_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::DISOpticalFlow*>(instance)->setVariationalRefinementDelta(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DISOpticalFlow::getVariationalRefinementGamma
// as:     cv::DISOpticalFlow::getVariationalRefinementGamma (method) cv::DISOpticalFlow (trait) . getVariationalRefinementGamma
// Return value: Primitive(float)
cv_return_value_float cv_DISOpticalFlow_getVariationalRefinementGamma_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::DISOpticalFlow*>(instance)->getVariationalRefinementGamma();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::DISOpticalFlow::setVariationalRefinementGamma
// as:     cv::DISOpticalFlow::setVariationalRefinementGamma (method) cv::DISOpticalFlow (trait) . setVariationalRefinementGamma
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_DISOpticalFlow_setVariationalRefinementGamma_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::DISOpticalFlow*>(instance)->setVariationalRefinementGamma(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DISOpticalFlow::getUseMeanNormalization
// as:     cv::DISOpticalFlow::getUseMeanNormalization (method) cv::DISOpticalFlow (trait) . getUseMeanNormalization
// Return value: Primitive(bool)
cv_return_value_bool cv_DISOpticalFlow_getUseMeanNormalization_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::DISOpticalFlow*>(instance)->getUseMeanNormalization();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::DISOpticalFlow::setUseMeanNormalization
// as:     cv::DISOpticalFlow::setUseMeanNormalization (method) cv::DISOpticalFlow (trait) . setUseMeanNormalization
// Arg ARG Primitive(bool) val= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_DISOpticalFlow_setUseMeanNormalization_bool(void* instance, bool val) {
    try {
        reinterpret_cast<cv::DISOpticalFlow*>(instance)->setUseMeanNormalization(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DISOpticalFlow::getUseSpatialPropagation
// as:     cv::DISOpticalFlow::getUseSpatialPropagation (method) cv::DISOpticalFlow (trait) . getUseSpatialPropagation
// Return value: Primitive(bool)
cv_return_value_bool cv_DISOpticalFlow_getUseSpatialPropagation_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::DISOpticalFlow*>(instance)->getUseSpatialPropagation();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::DISOpticalFlow::setUseSpatialPropagation
// as:     cv::DISOpticalFlow::setUseSpatialPropagation (method) cv::DISOpticalFlow (trait) . setUseSpatialPropagation
// Arg ARG Primitive(bool) val= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_DISOpticalFlow_setUseSpatialPropagation_bool(void* instance, bool val) {
    try {
        reinterpret_cast<cv::DISOpticalFlow*>(instance)->setUseSpatialPropagation(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DISOpticalFlow::create
// as:     cv::DISOpticalFlow::create (method) cv::DISOpticalFlow (trait) . create
// Arg ARG Primitive(int) preset= Primitive(int) = DISOpticalFlow::PRESET_FAST
// Return value: SmartPtr[cv::DISOpticalFlow (boxed)]
cv_return_value_void_X cv_DISOpticalFlow_create_int(int preset) {
    try {
        Ptr<cv::DISOpticalFlow> ret = cv::DISOpticalFlow::create(preset);
        return { Error::Code::StsOk, NULL, new Ptr<cv::DISOpticalFlow>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::DenseOpticalFlow::calc
// as:     cv::DenseOpticalFlow::calc (method) cv::DenseOpticalFlow (trait) . calc
// Arg ARG cv::_InputArray (boxed) I0= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) I1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) flow= cv::_InputOutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_DenseOpticalFlow_calc__InputArray__InputArray__InputOutputArray(void* instance, void* I0, void* I1, void* flow) {
    try {
        reinterpret_cast<cv::DenseOpticalFlow*>(instance)->calc(*reinterpret_cast<const cv::_InputArray*>(I0), *reinterpret_cast<const cv::_InputArray*>(I1), *reinterpret_cast<cv::_InputOutputArray*>(flow));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DenseOpticalFlow::collectGarbage
// as:     cv::DenseOpticalFlow::collectGarbage (method) cv::DenseOpticalFlow (trait) . collectGarbage
// Return value: Primitive(void)
cv_return_value_void cv_DenseOpticalFlow_collectGarbage(void* instance) {
    try {
        reinterpret_cast<cv::DenseOpticalFlow*>(instance)->collectGarbage();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FarnebackOpticalFlow::getNumLevels
// as:     cv::FarnebackOpticalFlow::getNumLevels (method) cv::FarnebackOpticalFlow (trait) . getNumLevels
// Return value: Primitive(int)
cv_return_value_int cv_FarnebackOpticalFlow_getNumLevels_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::FarnebackOpticalFlow*>(instance)->getNumLevels();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::FarnebackOpticalFlow::setNumLevels
// as:     cv::FarnebackOpticalFlow::setNumLevels (method) cv::FarnebackOpticalFlow (trait) . setNumLevels
// Arg ARG Primitive(int) numLevels= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_FarnebackOpticalFlow_setNumLevels_int(void* instance, int numLevels) {
    try {
        reinterpret_cast<cv::FarnebackOpticalFlow*>(instance)->setNumLevels(numLevels);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FarnebackOpticalFlow::getPyrScale
// as:     cv::FarnebackOpticalFlow::getPyrScale (method) cv::FarnebackOpticalFlow (trait) . getPyrScale
// Return value: Primitive(double)
cv_return_value_double cv_FarnebackOpticalFlow_getPyrScale_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::FarnebackOpticalFlow*>(instance)->getPyrScale();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::FarnebackOpticalFlow::setPyrScale
// as:     cv::FarnebackOpticalFlow::setPyrScale (method) cv::FarnebackOpticalFlow (trait) . setPyrScale
// Arg ARG Primitive(double) pyrScale= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_FarnebackOpticalFlow_setPyrScale_double(void* instance, double pyrScale) {
    try {
        reinterpret_cast<cv::FarnebackOpticalFlow*>(instance)->setPyrScale(pyrScale);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FarnebackOpticalFlow::getFastPyramids
// as:     cv::FarnebackOpticalFlow::getFastPyramids (method) cv::FarnebackOpticalFlow (trait) . getFastPyramids
// Return value: Primitive(bool)
cv_return_value_bool cv_FarnebackOpticalFlow_getFastPyramids_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::FarnebackOpticalFlow*>(instance)->getFastPyramids();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::FarnebackOpticalFlow::setFastPyramids
// as:     cv::FarnebackOpticalFlow::setFastPyramids (method) cv::FarnebackOpticalFlow (trait) . setFastPyramids
// Arg ARG Primitive(bool) fastPyramids= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_FarnebackOpticalFlow_setFastPyramids_bool(void* instance, bool fastPyramids) {
    try {
        reinterpret_cast<cv::FarnebackOpticalFlow*>(instance)->setFastPyramids(fastPyramids);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FarnebackOpticalFlow::getWinSize
// as:     cv::FarnebackOpticalFlow::getWinSize (method) cv::FarnebackOpticalFlow (trait) . getWinSize
// Return value: Primitive(int)
cv_return_value_int cv_FarnebackOpticalFlow_getWinSize_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::FarnebackOpticalFlow*>(instance)->getWinSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::FarnebackOpticalFlow::setWinSize
// as:     cv::FarnebackOpticalFlow::setWinSize (method) cv::FarnebackOpticalFlow (trait) . setWinSize
// Arg ARG Primitive(int) winSize= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_FarnebackOpticalFlow_setWinSize_int(void* instance, int winSize) {
    try {
        reinterpret_cast<cv::FarnebackOpticalFlow*>(instance)->setWinSize(winSize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FarnebackOpticalFlow::getNumIters
// as:     cv::FarnebackOpticalFlow::getNumIters (method) cv::FarnebackOpticalFlow (trait) . getNumIters
// Return value: Primitive(int)
cv_return_value_int cv_FarnebackOpticalFlow_getNumIters_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::FarnebackOpticalFlow*>(instance)->getNumIters();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::FarnebackOpticalFlow::setNumIters
// as:     cv::FarnebackOpticalFlow::setNumIters (method) cv::FarnebackOpticalFlow (trait) . setNumIters
// Arg ARG Primitive(int) numIters= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_FarnebackOpticalFlow_setNumIters_int(void* instance, int numIters) {
    try {
        reinterpret_cast<cv::FarnebackOpticalFlow*>(instance)->setNumIters(numIters);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FarnebackOpticalFlow::getPolyN
// as:     cv::FarnebackOpticalFlow::getPolyN (method) cv::FarnebackOpticalFlow (trait) . getPolyN
// Return value: Primitive(int)
cv_return_value_int cv_FarnebackOpticalFlow_getPolyN_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::FarnebackOpticalFlow*>(instance)->getPolyN();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::FarnebackOpticalFlow::setPolyN
// as:     cv::FarnebackOpticalFlow::setPolyN (method) cv::FarnebackOpticalFlow (trait) . setPolyN
// Arg ARG Primitive(int) polyN= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_FarnebackOpticalFlow_setPolyN_int(void* instance, int polyN) {
    try {
        reinterpret_cast<cv::FarnebackOpticalFlow*>(instance)->setPolyN(polyN);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FarnebackOpticalFlow::getPolySigma
// as:     cv::FarnebackOpticalFlow::getPolySigma (method) cv::FarnebackOpticalFlow (trait) . getPolySigma
// Return value: Primitive(double)
cv_return_value_double cv_FarnebackOpticalFlow_getPolySigma_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::FarnebackOpticalFlow*>(instance)->getPolySigma();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::FarnebackOpticalFlow::setPolySigma
// as:     cv::FarnebackOpticalFlow::setPolySigma (method) cv::FarnebackOpticalFlow (trait) . setPolySigma
// Arg ARG Primitive(double) polySigma= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_FarnebackOpticalFlow_setPolySigma_double(void* instance, double polySigma) {
    try {
        reinterpret_cast<cv::FarnebackOpticalFlow*>(instance)->setPolySigma(polySigma);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FarnebackOpticalFlow::getFlags
// as:     cv::FarnebackOpticalFlow::getFlags (method) cv::FarnebackOpticalFlow (trait) . getFlags
// Return value: Primitive(int)
cv_return_value_int cv_FarnebackOpticalFlow_getFlags_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::FarnebackOpticalFlow*>(instance)->getFlags();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::FarnebackOpticalFlow::setFlags
// as:     cv::FarnebackOpticalFlow::setFlags (method) cv::FarnebackOpticalFlow (trait) . setFlags
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_FarnebackOpticalFlow_setFlags_int(void* instance, int flags) {
    try {
        reinterpret_cast<cv::FarnebackOpticalFlow*>(instance)->setFlags(flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FarnebackOpticalFlow::create
// as:     cv::FarnebackOpticalFlow::create (method) cv::FarnebackOpticalFlow (trait) . create
// Arg ARG Primitive(int) numLevels= Primitive(int) = 5
// Arg ARG Primitive(double) pyrScale= Primitive(double) = 0.5
// Arg ARG Primitive(bool) fastPyramids= Primitive(bool) = false
// Arg ARG Primitive(int) winSize= Primitive(int) = 13
// Arg ARG Primitive(int) numIters= Primitive(int) = 10
// Arg ARG Primitive(int) polyN= Primitive(int) = 5
// Arg ARG Primitive(double) polySigma= Primitive(double) = 1.1
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Return value: SmartPtr[cv::FarnebackOpticalFlow (boxed)]
cv_return_value_void_X cv_FarnebackOpticalFlow_create_int_double_bool_int_int_int_double_int(int numLevels, double pyrScale, bool fastPyramids, int winSize, int numIters, int polyN, double polySigma, int flags) {
    try {
        Ptr<cv::FarnebackOpticalFlow> ret = cv::FarnebackOpticalFlow::create(numLevels, pyrScale, fastPyramids, winSize, numIters, polyN, polySigma, flags);
        return { Error::Code::StsOk, NULL, new Ptr<cv::FarnebackOpticalFlow>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::KalmanFilter
void cv_KalmanFilter_delete(void* instance) {
    delete reinterpret_cast<cv::KalmanFilter*>(instance);
}
// parsed: cv::KalmanFilter::statePre
// as:     cv::KalmanFilter::statePre (method) cv::KalmanFilter . statePre
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_KalmanFilter_statePre(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::KalmanFilter*>(instance)->statePre;
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::KalmanFilter::set_statePre
// as:     cv::KalmanFilter::set_statePre (method) cv::KalmanFilter . set_statePre
// Arg ARG cv::Mat (boxed) val= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_KalmanFilter_set_statePre_Mat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::KalmanFilter*>(instance)->statePre = *reinterpret_cast<cv::Mat*>(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KalmanFilter::statePost
// as:     cv::KalmanFilter::statePost (method) cv::KalmanFilter . statePost
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_KalmanFilter_statePost(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::KalmanFilter*>(instance)->statePost;
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::KalmanFilter::set_statePost
// as:     cv::KalmanFilter::set_statePost (method) cv::KalmanFilter . set_statePost
// Arg ARG cv::Mat (boxed) val= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_KalmanFilter_set_statePost_Mat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::KalmanFilter*>(instance)->statePost = *reinterpret_cast<cv::Mat*>(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KalmanFilter::transitionMatrix
// as:     cv::KalmanFilter::transitionMatrix (method) cv::KalmanFilter . transitionMatrix
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_KalmanFilter_transitionMatrix(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::KalmanFilter*>(instance)->transitionMatrix;
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::KalmanFilter::set_transitionMatrix
// as:     cv::KalmanFilter::set_transitionMatrix (method) cv::KalmanFilter . set_transitionMatrix
// Arg ARG cv::Mat (boxed) val= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_KalmanFilter_set_transitionMatrix_Mat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::KalmanFilter*>(instance)->transitionMatrix = *reinterpret_cast<cv::Mat*>(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KalmanFilter::controlMatrix
// as:     cv::KalmanFilter::controlMatrix (method) cv::KalmanFilter . controlMatrix
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_KalmanFilter_controlMatrix(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::KalmanFilter*>(instance)->controlMatrix;
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::KalmanFilter::set_controlMatrix
// as:     cv::KalmanFilter::set_controlMatrix (method) cv::KalmanFilter . set_controlMatrix
// Arg ARG cv::Mat (boxed) val= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_KalmanFilter_set_controlMatrix_Mat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::KalmanFilter*>(instance)->controlMatrix = *reinterpret_cast<cv::Mat*>(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KalmanFilter::measurementMatrix
// as:     cv::KalmanFilter::measurementMatrix (method) cv::KalmanFilter . measurementMatrix
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_KalmanFilter_measurementMatrix(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::KalmanFilter*>(instance)->measurementMatrix;
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::KalmanFilter::set_measurementMatrix
// as:     cv::KalmanFilter::set_measurementMatrix (method) cv::KalmanFilter . set_measurementMatrix
// Arg ARG cv::Mat (boxed) val= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_KalmanFilter_set_measurementMatrix_Mat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::KalmanFilter*>(instance)->measurementMatrix = *reinterpret_cast<cv::Mat*>(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KalmanFilter::processNoiseCov
// as:     cv::KalmanFilter::processNoiseCov (method) cv::KalmanFilter . processNoiseCov
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_KalmanFilter_processNoiseCov(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::KalmanFilter*>(instance)->processNoiseCov;
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::KalmanFilter::set_processNoiseCov
// as:     cv::KalmanFilter::set_processNoiseCov (method) cv::KalmanFilter . set_processNoiseCov
// Arg ARG cv::Mat (boxed) val= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_KalmanFilter_set_processNoiseCov_Mat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::KalmanFilter*>(instance)->processNoiseCov = *reinterpret_cast<cv::Mat*>(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KalmanFilter::measurementNoiseCov
// as:     cv::KalmanFilter::measurementNoiseCov (method) cv::KalmanFilter . measurementNoiseCov
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_KalmanFilter_measurementNoiseCov(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::KalmanFilter*>(instance)->measurementNoiseCov;
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::KalmanFilter::set_measurementNoiseCov
// as:     cv::KalmanFilter::set_measurementNoiseCov (method) cv::KalmanFilter . set_measurementNoiseCov
// Arg ARG cv::Mat (boxed) val= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_KalmanFilter_set_measurementNoiseCov_Mat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::KalmanFilter*>(instance)->measurementNoiseCov = *reinterpret_cast<cv::Mat*>(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KalmanFilter::errorCovPre
// as:     cv::KalmanFilter::errorCovPre (method) cv::KalmanFilter . errorCovPre
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_KalmanFilter_errorCovPre(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::KalmanFilter*>(instance)->errorCovPre;
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::KalmanFilter::set_errorCovPre
// as:     cv::KalmanFilter::set_errorCovPre (method) cv::KalmanFilter . set_errorCovPre
// Arg ARG cv::Mat (boxed) val= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_KalmanFilter_set_errorCovPre_Mat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::KalmanFilter*>(instance)->errorCovPre = *reinterpret_cast<cv::Mat*>(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KalmanFilter::gain
// as:     cv::KalmanFilter::gain (method) cv::KalmanFilter . gain
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_KalmanFilter_gain(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::KalmanFilter*>(instance)->gain;
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::KalmanFilter::set_gain
// as:     cv::KalmanFilter::set_gain (method) cv::KalmanFilter . set_gain
// Arg ARG cv::Mat (boxed) val= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_KalmanFilter_set_gain_Mat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::KalmanFilter*>(instance)->gain = *reinterpret_cast<cv::Mat*>(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KalmanFilter::errorCovPost
// as:     cv::KalmanFilter::errorCovPost (method) cv::KalmanFilter . errorCovPost
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_KalmanFilter_errorCovPost(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::KalmanFilter*>(instance)->errorCovPost;
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::KalmanFilter::set_errorCovPost
// as:     cv::KalmanFilter::set_errorCovPost (method) cv::KalmanFilter . set_errorCovPost
// Arg ARG cv::Mat (boxed) val= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_KalmanFilter_set_errorCovPost_Mat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::KalmanFilter*>(instance)->errorCovPost = *reinterpret_cast<cv::Mat*>(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KalmanFilter::KalmanFilter
// as:     cv::KalmanFilter::KalmanFilter (constructor) cv::KalmanFilter . default
// Return value: cv::KalmanFilter (boxed)
cv_return_value_void_X cv_KalmanFilter_KalmanFilter() {
    try {
        cv::KalmanFilter* ret = new cv::KalmanFilter();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::KalmanFilter::KalmanFilter
// as:     cv::KalmanFilter::KalmanFilter (constructor) cv::KalmanFilter . new
// Arg ARG Primitive(int) dynamParams= Primitive(int) = 
// Arg ARG Primitive(int) measureParams= Primitive(int) = 
// Arg ARG Primitive(int) controlParams= Primitive(int) = 0
// Arg ARG Primitive(int) type= Primitive(int) = CV_32F
// Return value: cv::KalmanFilter (boxed)
cv_return_value_void_X cv_KalmanFilter_KalmanFilter_int_int_int_int(int dynamParams, int measureParams, int controlParams, int type) {
    try {
        cv::KalmanFilter* ret = new cv::KalmanFilter(dynamParams, measureParams, controlParams, type);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::KalmanFilter::init
// as:     cv::KalmanFilter::init (method) cv::KalmanFilter . init
// Arg ARG Primitive(int) dynamParams= Primitive(int) = 
// Arg ARG Primitive(int) measureParams= Primitive(int) = 
// Arg ARG Primitive(int) controlParams= Primitive(int) = 0
// Arg ARG Primitive(int) type= Primitive(int) = CV_32F
// Return value: Primitive(void)
cv_return_value_void cv_KalmanFilter_init_int_int_int_int(void* instance, int dynamParams, int measureParams, int controlParams, int type) {
    try {
        reinterpret_cast<cv::KalmanFilter*>(instance)->init(dynamParams, measureParams, controlParams, type);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KalmanFilter::predict
// as:     cv::KalmanFilter::predict (method) cv::KalmanFilter . predict
// Arg ARG cv::Mat (boxed) control= cv::Mat (boxed) = Mat()
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_KalmanFilter_predict_Mat(void* instance, void* control) {
    try {
        cv::Mat ret = reinterpret_cast<cv::KalmanFilter*>(instance)->predict(*reinterpret_cast<const cv::Mat*>(control));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::KalmanFilter::correct
// as:     cv::KalmanFilter::correct (method) cv::KalmanFilter . correct
// Arg ARG cv::Mat (boxed) measurement= cv::Mat (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_KalmanFilter_correct_Mat(void* instance, void* measurement) {
    try {
        cv::Mat ret = reinterpret_cast<cv::KalmanFilter*>(instance)->correct(*reinterpret_cast<const cv::Mat*>(measurement));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::SparseOpticalFlow::calc
// as:     cv::SparseOpticalFlow::calc (method) cv::SparseOpticalFlow (trait) . calc
// Arg ARG cv::_InputArray (boxed) prevImg= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) nextImg= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) prevPts= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) nextPts= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) status= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) err= cv::_OutputArray (boxed) = cv::noArray()
// Return value: Primitive(void)
cv_return_value_void cv_SparseOpticalFlow_calc__InputArray__InputArray__InputArray__InputOutputArray__OutputArray__OutputArray(void* instance, void* prevImg, void* nextImg, void* prevPts, void* nextPts, void* status, void* err) {
    try {
        reinterpret_cast<cv::SparseOpticalFlow*>(instance)->calc(*reinterpret_cast<const cv::_InputArray*>(prevImg), *reinterpret_cast<const cv::_InputArray*>(nextImg), *reinterpret_cast<const cv::_InputArray*>(prevPts), *reinterpret_cast<cv::_InputOutputArray*>(nextPts), *reinterpret_cast<cv::_OutputArray*>(status), *reinterpret_cast<cv::_OutputArray*>(err));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SparsePyrLKOpticalFlow::getWinSize
// as:     cv::SparsePyrLKOpticalFlow::getWinSize (method) cv::SparsePyrLKOpticalFlow (trait) . getWinSize
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_SparsePyrLKOpticalFlow_getWinSize_const(void* instance) {
    try {
        cv::Size ret = reinterpret_cast<cv::SparsePyrLKOpticalFlow*>(instance)->getWinSize();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::SparsePyrLKOpticalFlow::setWinSize
// as:     cv::SparsePyrLKOpticalFlow::setWinSize (method) cv::SparsePyrLKOpticalFlow (trait) . setWinSize
// Arg ARG cv::Size (simple) winSize= cv::Size (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_SparsePyrLKOpticalFlow_setWinSize_Size(void* instance, SizeWrapper winSize) {
    try {
        reinterpret_cast<cv::SparsePyrLKOpticalFlow*>(instance)->setWinSize(*reinterpret_cast<cv::Size*>(&winSize));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SparsePyrLKOpticalFlow::getMaxLevel
// as:     cv::SparsePyrLKOpticalFlow::getMaxLevel (method) cv::SparsePyrLKOpticalFlow (trait) . getMaxLevel
// Return value: Primitive(int)
cv_return_value_int cv_SparsePyrLKOpticalFlow_getMaxLevel_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::SparsePyrLKOpticalFlow*>(instance)->getMaxLevel();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::SparsePyrLKOpticalFlow::setMaxLevel
// as:     cv::SparsePyrLKOpticalFlow::setMaxLevel (method) cv::SparsePyrLKOpticalFlow (trait) . setMaxLevel
// Arg ARG Primitive(int) maxLevel= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_SparsePyrLKOpticalFlow_setMaxLevel_int(void* instance, int maxLevel) {
    try {
        reinterpret_cast<cv::SparsePyrLKOpticalFlow*>(instance)->setMaxLevel(maxLevel);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SparsePyrLKOpticalFlow::getTermCriteria
// as:     cv::SparsePyrLKOpticalFlow::getTermCriteria (method) cv::SparsePyrLKOpticalFlow (trait) . getTermCriteria
// Return value: cv::TermCriteria (boxed)
cv_return_value_void_X cv_SparsePyrLKOpticalFlow_getTermCriteria_const(void* instance) {
    try {
        cv::TermCriteria ret = reinterpret_cast<cv::SparsePyrLKOpticalFlow*>(instance)->getTermCriteria();
        return { Error::Code::StsOk, NULL, new cv::TermCriteria(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::SparsePyrLKOpticalFlow::setTermCriteria
// as:     cv::SparsePyrLKOpticalFlow::setTermCriteria (method) cv::SparsePyrLKOpticalFlow (trait) . setTermCriteria
// Arg ARG cv::TermCriteria (boxed) crit= cv::TermCriteria (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_SparsePyrLKOpticalFlow_setTermCriteria_TermCriteria(void* instance, void* crit) {
    try {
        reinterpret_cast<cv::SparsePyrLKOpticalFlow*>(instance)->setTermCriteria(*reinterpret_cast<cv::TermCriteria*>(crit));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SparsePyrLKOpticalFlow::getFlags
// as:     cv::SparsePyrLKOpticalFlow::getFlags (method) cv::SparsePyrLKOpticalFlow (trait) . getFlags
// Return value: Primitive(int)
cv_return_value_int cv_SparsePyrLKOpticalFlow_getFlags_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::SparsePyrLKOpticalFlow*>(instance)->getFlags();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::SparsePyrLKOpticalFlow::setFlags
// as:     cv::SparsePyrLKOpticalFlow::setFlags (method) cv::SparsePyrLKOpticalFlow (trait) . setFlags
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_SparsePyrLKOpticalFlow_setFlags_int(void* instance, int flags) {
    try {
        reinterpret_cast<cv::SparsePyrLKOpticalFlow*>(instance)->setFlags(flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SparsePyrLKOpticalFlow::getMinEigThreshold
// as:     cv::SparsePyrLKOpticalFlow::getMinEigThreshold (method) cv::SparsePyrLKOpticalFlow (trait) . getMinEigThreshold
// Return value: Primitive(double)
cv_return_value_double cv_SparsePyrLKOpticalFlow_getMinEigThreshold_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::SparsePyrLKOpticalFlow*>(instance)->getMinEigThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::SparsePyrLKOpticalFlow::setMinEigThreshold
// as:     cv::SparsePyrLKOpticalFlow::setMinEigThreshold (method) cv::SparsePyrLKOpticalFlow (trait) . setMinEigThreshold
// Arg ARG Primitive(double) minEigThreshold= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_SparsePyrLKOpticalFlow_setMinEigThreshold_double(void* instance, double minEigThreshold) {
    try {
        reinterpret_cast<cv::SparsePyrLKOpticalFlow*>(instance)->setMinEigThreshold(minEigThreshold);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SparsePyrLKOpticalFlow::create
// as:     cv::SparsePyrLKOpticalFlow::create (method) cv::SparsePyrLKOpticalFlow (trait) . create
// Arg ARG cv::Size (simple) winSize= cv::Size (simple) = Size(21, 21)
// Arg ARG Primitive(int) maxLevel= Primitive(int) = 3
// Arg ARG cv::TermCriteria (boxed) crit= cv::TermCriteria (boxed) = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 0.01)
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Arg ARG Primitive(double) minEigThreshold= Primitive(double) = 1e-4
// Return value: SmartPtr[cv::SparsePyrLKOpticalFlow (boxed)]
cv_return_value_void_X cv_SparsePyrLKOpticalFlow_create_Size_int_TermCriteria_int_double(SizeWrapper winSize, int maxLevel, void* crit, int flags, double minEigThreshold) {
    try {
        Ptr<cv::SparsePyrLKOpticalFlow> ret = cv::SparsePyrLKOpticalFlow::create(*reinterpret_cast<cv::Size*>(&winSize), maxLevel, *reinterpret_cast<cv::TermCriteria*>(crit), flags, minEigThreshold);
        return { Error::Code::StsOk, NULL, new Ptr<cv::SparsePyrLKOpticalFlow>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::VariationalRefinement::calcUV
// as:     cv::VariationalRefinement::calcUV (method) cv::VariationalRefinement (trait) . calcUV
// Arg ARG cv::_InputArray (boxed) I0= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) I1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) flow_u= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) flow_v= cv::_InputOutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_VariationalRefinement_calcUV__InputArray__InputArray__InputOutputArray__InputOutputArray(void* instance, void* I0, void* I1, void* flow_u, void* flow_v) {
    try {
        reinterpret_cast<cv::VariationalRefinement*>(instance)->calcUV(*reinterpret_cast<const cv::_InputArray*>(I0), *reinterpret_cast<const cv::_InputArray*>(I1), *reinterpret_cast<cv::_InputOutputArray*>(flow_u), *reinterpret_cast<cv::_InputOutputArray*>(flow_v));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::VariationalRefinement::getFixedPointIterations
// as:     cv::VariationalRefinement::getFixedPointIterations (method) cv::VariationalRefinement (trait) . getFixedPointIterations
// Return value: Primitive(int)
cv_return_value_int cv_VariationalRefinement_getFixedPointIterations_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::VariationalRefinement*>(instance)->getFixedPointIterations();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::VariationalRefinement::setFixedPointIterations
// as:     cv::VariationalRefinement::setFixedPointIterations (method) cv::VariationalRefinement (trait) . setFixedPointIterations
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_VariationalRefinement_setFixedPointIterations_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::VariationalRefinement*>(instance)->setFixedPointIterations(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::VariationalRefinement::getSorIterations
// as:     cv::VariationalRefinement::getSorIterations (method) cv::VariationalRefinement (trait) . getSorIterations
// Return value: Primitive(int)
cv_return_value_int cv_VariationalRefinement_getSorIterations_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::VariationalRefinement*>(instance)->getSorIterations();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::VariationalRefinement::setSorIterations
// as:     cv::VariationalRefinement::setSorIterations (method) cv::VariationalRefinement (trait) . setSorIterations
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_VariationalRefinement_setSorIterations_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::VariationalRefinement*>(instance)->setSorIterations(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::VariationalRefinement::getOmega
// as:     cv::VariationalRefinement::getOmega (method) cv::VariationalRefinement (trait) . getOmega
// Return value: Primitive(float)
cv_return_value_float cv_VariationalRefinement_getOmega_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::VariationalRefinement*>(instance)->getOmega();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::VariationalRefinement::setOmega
// as:     cv::VariationalRefinement::setOmega (method) cv::VariationalRefinement (trait) . setOmega
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_VariationalRefinement_setOmega_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::VariationalRefinement*>(instance)->setOmega(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::VariationalRefinement::getAlpha
// as:     cv::VariationalRefinement::getAlpha (method) cv::VariationalRefinement (trait) . getAlpha
// Return value: Primitive(float)
cv_return_value_float cv_VariationalRefinement_getAlpha_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::VariationalRefinement*>(instance)->getAlpha();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::VariationalRefinement::setAlpha
// as:     cv::VariationalRefinement::setAlpha (method) cv::VariationalRefinement (trait) . setAlpha
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_VariationalRefinement_setAlpha_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::VariationalRefinement*>(instance)->setAlpha(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::VariationalRefinement::getDelta
// as:     cv::VariationalRefinement::getDelta (method) cv::VariationalRefinement (trait) . getDelta
// Return value: Primitive(float)
cv_return_value_float cv_VariationalRefinement_getDelta_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::VariationalRefinement*>(instance)->getDelta();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::VariationalRefinement::setDelta
// as:     cv::VariationalRefinement::setDelta (method) cv::VariationalRefinement (trait) . setDelta
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_VariationalRefinement_setDelta_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::VariationalRefinement*>(instance)->setDelta(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::VariationalRefinement::getGamma
// as:     cv::VariationalRefinement::getGamma (method) cv::VariationalRefinement (trait) . getGamma
// Return value: Primitive(float)
cv_return_value_float cv_VariationalRefinement_getGamma_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::VariationalRefinement*>(instance)->getGamma();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::VariationalRefinement::setGamma
// as:     cv::VariationalRefinement::setGamma (method) cv::VariationalRefinement (trait) . setGamma
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_VariationalRefinement_setGamma_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::VariationalRefinement*>(instance)->setGamma(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::VariationalRefinement::create
// as:     cv::VariationalRefinement::create (method) cv::VariationalRefinement (trait) . create
// Return value: SmartPtr[cv::VariationalRefinement (boxed)]
cv_return_value_void_X cv_VariationalRefinement_create() {
    try {
        Ptr<cv::VariationalRefinement> ret = cv::VariationalRefinement::create();
        return { Error::Code::StsOk, NULL, new Ptr<cv::VariationalRefinement>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}



} // extern "C"

