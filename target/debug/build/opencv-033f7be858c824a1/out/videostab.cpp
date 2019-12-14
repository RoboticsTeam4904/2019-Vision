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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/videostab.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/videostab/deblurring.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/videostab/fast_marching.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/videostab/fast_marching_inl.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/videostab/frame_source.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/videostab/global_motion.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/videostab/inpainting.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/videostab/log.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/videostab/motion_core.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/videostab/motion_stabilizing.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/videostab/optical_flow.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/videostab/outlier_rejection.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/videostab/ring_buffer.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/videostab/stabilizer.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/videostab/wobble_suppression.hpp"

extern "C" {

// parsed: cv::videostab::calcBlurriness
// as:     cv::videostab::calcBlurriness (function)
// Arg ARG cv::Mat (boxed) frame= cv::Mat (boxed) = 
// Return value: Primitive(float)
cv_return_value_float cv_videostab_calcBlurriness_Mat(void* frame) {
    try {
        float ret = cv::videostab::calcBlurriness(*reinterpret_cast<const cv::Mat*>(frame));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::videostab::calcFlowMask
// as:     cv::videostab::calcFlowMask (function)
// Arg ARG cv::Mat (boxed) flowX= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) flowY= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) errors= cv::Mat (boxed) = 
// Arg ARG Primitive(float) maxError= Primitive(float) = 
// Arg ARG cv::Mat (boxed) mask0= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask1= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) flowMask= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_calcFlowMask_Mat_Mat_Mat_float_Mat_Mat_Mat(void* flowX, void* flowY, void* errors, float maxError, void* mask0, void* mask1, void* flowMask) {
    try {
        cv::videostab::calcFlowMask(*reinterpret_cast<const cv::Mat*>(flowX), *reinterpret_cast<const cv::Mat*>(flowY), *reinterpret_cast<const cv::Mat*>(errors), maxError, *reinterpret_cast<const cv::Mat*>(mask0), *reinterpret_cast<const cv::Mat*>(mask1), *reinterpret_cast<cv::Mat*>(flowMask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::completeFrameAccordingToFlow
// as:     cv::videostab::completeFrameAccordingToFlow (function)
// Arg ARG cv::Mat (boxed) flowMask= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) flowX= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) flowY= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) frame1= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask1= cv::Mat (boxed) = 
// Arg ARG Primitive(float) distThresh= Primitive(float) = 
// Arg ARG cv::Mat (boxed) frame0= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask0= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_completeFrameAccordingToFlow_Mat_Mat_Mat_Mat_Mat_float_Mat_Mat(void* flowMask, void* flowX, void* flowY, void* frame1, void* mask1, float distThresh, void* frame0, void* mask0) {
    try {
        cv::videostab::completeFrameAccordingToFlow(*reinterpret_cast<const cv::Mat*>(flowMask), *reinterpret_cast<const cv::Mat*>(flowX), *reinterpret_cast<const cv::Mat*>(flowY), *reinterpret_cast<const cv::Mat*>(frame1), *reinterpret_cast<const cv::Mat*>(mask1), distThresh, *reinterpret_cast<cv::Mat*>(frame0), *reinterpret_cast<cv::Mat*>(mask0));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::ensureInclusionConstraint
// as:     cv::videostab::ensureInclusionConstraint (function)
// Arg ARG cv::Mat (boxed) M= cv::Mat (boxed) = 
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG Primitive(float) trimRatio= Primitive(float) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_videostab_ensureInclusionConstraint_Mat_Size_float(void* M, SizeWrapper size, float trimRatio) {
    try {
        cv::Mat ret = cv::videostab::ensureInclusionConstraint(*reinterpret_cast<const cv::Mat*>(M), *reinterpret_cast<cv::Size*>(&size), trimRatio);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::estimateGlobalMotionLeastSquares
// as:     cv::videostab::estimateGlobalMotionLeastSquares (function)
// Arg ARG cv::_InputOutputArray (boxed) points0= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) points1= cv::_InputOutputArray (boxed) = 
// Arg ARG Primitive(int) model= Primitive(int) = MM_AFFINE
// Arg ARG RawPtr[Primitive(float)] * rmse= (ptr) RawPtr[Primitive(float)] = 0
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_videostab_estimateGlobalMotionLeastSquares__InputOutputArray__InputOutputArray_int_float_X(void* points0, void* points1, int model, float* rmse) {
    try {
        cv::Mat ret = cv::videostab::estimateGlobalMotionLeastSquares(*reinterpret_cast<cv::_InputOutputArray*>(points0), *reinterpret_cast<cv::_InputOutputArray*>(points1), model, rmse);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::estimateOptimalTrimRatio
// as:     cv::videostab::estimateOptimalTrimRatio (function)
// Arg ARG cv::Mat (boxed) M= cv::Mat (boxed) = 
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Return value: Primitive(float)
cv_return_value_float cv_videostab_estimateOptimalTrimRatio_Mat_Size(void* M, SizeWrapper size) {
    try {
        float ret = cv::videostab::estimateOptimalTrimRatio(*reinterpret_cast<const cv::Mat*>(M), *reinterpret_cast<cv::Size*>(&size));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::videostab::getMotion
// as:     cv::videostab::getMotion (function)
// Arg ARG Primitive(int) from= Primitive(int) = 
// Arg ARG Primitive(int) to= Primitive(int) = 
// Arg ARG Vector[cv::Mat (boxed)] motions= Vector[cv::Mat (boxed)] = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_videostab_getMotion_int_int_VectorOfMat(int from, int to, void* motions) {
    try {
        cv::Mat ret = cv::videostab::getMotion(from, to, *reinterpret_cast<const std::vector<cv::Mat>*>(motions));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::videostab::ColorAverageInpainter
void cv_ColorAverageInpainter_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::ColorAverageInpainter*>(instance);
}
// parsed: cv::videostab::ColorAverageInpainter::inpaint
// as:     cv::videostab::ColorAverageInpainter::inpaint (method) cv::videostab::ColorAverageInpainter . inpaint
// Arg ARG Primitive(int) idx= Primitive(int) = 
// Arg ARG cv::Mat (boxed) frame= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_ColorAverageInpainter_inpaint_int_Mat_Mat(void* instance, int idx, void* frame, void* mask) {
    try {
        reinterpret_cast<cv::videostab::ColorAverageInpainter*>(instance)->inpaint(idx, *reinterpret_cast<cv::Mat*>(frame), *reinterpret_cast<cv::Mat*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::videostab::ColorInpainter
void cv_ColorInpainter_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::ColorInpainter*>(instance);
}
// parsed: cv::videostab::ColorInpainter::ColorInpainter
// as:     cv::videostab::ColorInpainter::ColorInpainter (constructor) cv::videostab::ColorInpainter . new
// Arg ARG Primitive(int) method= Primitive(int) = INPAINT_TELEA
// Arg ARG Primitive(double) radius= Primitive(double) = 2.
// Return value: cv::videostab::ColorInpainter (boxed)
cv_return_value_void_X cv_videostab_ColorInpainter_ColorInpainter_int_double(int method, double radius) {
    try {
        cv::videostab::ColorInpainter* ret = new cv::videostab::ColorInpainter(method, radius);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::ColorInpainter::inpaint
// as:     cv::videostab::ColorInpainter::inpaint (method) cv::videostab::ColorInpainter . inpaint
// Arg ARG Primitive(int) idx= Primitive(int) = 
// Arg ARG cv::Mat (boxed) frame= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_ColorInpainter_inpaint_int_Mat_Mat(void* instance, int idx, void* frame, void* mask) {
    try {
        reinterpret_cast<cv::videostab::ColorInpainter*>(instance)->inpaint(idx, *reinterpret_cast<cv::Mat*>(frame), *reinterpret_cast<cv::Mat*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::videostab::ConsistentMosaicInpainter
void cv_ConsistentMosaicInpainter_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::ConsistentMosaicInpainter*>(instance);
}
// parsed: cv::videostab::ConsistentMosaicInpainter::ConsistentMosaicInpainter
// as:     cv::videostab::ConsistentMosaicInpainter::ConsistentMosaicInpainter (constructor) cv::videostab::ConsistentMosaicInpainter . default
// Return value: cv::videostab::ConsistentMosaicInpainter (boxed)
cv_return_value_void_X cv_videostab_ConsistentMosaicInpainter_ConsistentMosaicInpainter() {
    try {
        cv::videostab::ConsistentMosaicInpainter* ret = new cv::videostab::ConsistentMosaicInpainter();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::ConsistentMosaicInpainter::setStdevThresh
// as:     cv::videostab::ConsistentMosaicInpainter::setStdevThresh (method) cv::videostab::ConsistentMosaicInpainter . setStdevThresh
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_ConsistentMosaicInpainter_setStdevThresh_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::videostab::ConsistentMosaicInpainter*>(instance)->setStdevThresh(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::ConsistentMosaicInpainter::stdevThresh
// as:     cv::videostab::ConsistentMosaicInpainter::stdevThresh (method) cv::videostab::ConsistentMosaicInpainter . stdevThresh
// Return value: Primitive(float)
cv_return_value_float cv_videostab_ConsistentMosaicInpainter_stdevThresh_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::videostab::ConsistentMosaicInpainter*>(instance)->stdevThresh();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::videostab::ConsistentMosaicInpainter::inpaint
// as:     cv::videostab::ConsistentMosaicInpainter::inpaint (method) cv::videostab::ConsistentMosaicInpainter . inpaint
// Arg ARG Primitive(int) idx= Primitive(int) = 
// Arg ARG cv::Mat (boxed) frame= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_ConsistentMosaicInpainter_inpaint_int_Mat_Mat(void* instance, int idx, void* frame, void* mask) {
    try {
        reinterpret_cast<cv::videostab::ConsistentMosaicInpainter*>(instance)->inpaint(idx, *reinterpret_cast<cv::Mat*>(frame), *reinterpret_cast<cv::Mat*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::DeblurerBase::setRadius
// as:     cv::videostab::DeblurerBase::setRadius (method) cv::videostab::DeblurerBase (trait) . setRadius
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_DeblurerBase_setRadius_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::videostab::DeblurerBase*>(instance)->setRadius(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::DeblurerBase::radius
// as:     cv::videostab::DeblurerBase::radius (method) cv::videostab::DeblurerBase (trait) . radius
// Return value: Primitive(int)
cv_return_value_int cv_videostab_DeblurerBase_radius_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::videostab::DeblurerBase*>(instance)->radius();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::videostab::DeblurerBase::deblur
// as:     cv::videostab::DeblurerBase::deblur (method) cv::videostab::DeblurerBase (trait) . deblur
// Arg ARG Primitive(int) idx= Primitive(int) = 
// Arg ARG cv::Mat (boxed) frame= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_DeblurerBase_deblur_int_Mat(void* instance, int idx, void* frame) {
    try {
        reinterpret_cast<cv::videostab::DeblurerBase*>(instance)->deblur(idx, *reinterpret_cast<cv::Mat*>(frame));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::DeblurerBase::setFrames
// as:     cv::videostab::DeblurerBase::setFrames (method) cv::videostab::DeblurerBase (trait) . setFrames
// Arg ARG Vector[cv::Mat (boxed)] val= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_DeblurerBase_setFrames_VectorOfMat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::DeblurerBase*>(instance)->setFrames(*reinterpret_cast<const std::vector<cv::Mat>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::DeblurerBase::frames
// as:     cv::videostab::DeblurerBase::frames (method) cv::videostab::DeblurerBase (trait) . frames
// Return value: Vector[cv::Mat (boxed)]
cv_return_value_void_X cv_videostab_DeblurerBase_frames_const(void* instance) {
    try {
        std::vector<cv::Mat> ret = reinterpret_cast<cv::videostab::DeblurerBase*>(instance)->frames();
        return { Error::Code::StsOk, NULL, new std::vector<cv::Mat>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::DeblurerBase::setMotions
// as:     cv::videostab::DeblurerBase::setMotions (method) cv::videostab::DeblurerBase (trait) . setMotions
// Arg ARG Vector[cv::Mat (boxed)] val= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_DeblurerBase_setMotions_VectorOfMat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::DeblurerBase*>(instance)->setMotions(*reinterpret_cast<const std::vector<cv::Mat>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::DeblurerBase::motions
// as:     cv::videostab::DeblurerBase::motions (method) cv::videostab::DeblurerBase (trait) . motions
// Return value: Vector[cv::Mat (boxed)]
cv_return_value_void_X cv_videostab_DeblurerBase_motions_const(void* instance) {
    try {
        std::vector<cv::Mat> ret = reinterpret_cast<cv::videostab::DeblurerBase*>(instance)->motions();
        return { Error::Code::StsOk, NULL, new std::vector<cv::Mat>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::DeblurerBase::setBlurrinessRates
// as:     cv::videostab::DeblurerBase::setBlurrinessRates (method) cv::videostab::DeblurerBase (trait) . setBlurrinessRates
// Arg ARG Vector[Primitive(float)] val= Vector[Primitive(float)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_DeblurerBase_setBlurrinessRates_VectorOffloat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::DeblurerBase*>(instance)->setBlurrinessRates(*reinterpret_cast<const std::vector<float>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::DeblurerBase::blurrinessRates
// as:     cv::videostab::DeblurerBase::blurrinessRates (method) cv::videostab::DeblurerBase (trait) . blurrinessRates
// Return value: Vector[Primitive(float)]
cv_return_value_void_X cv_videostab_DeblurerBase_blurrinessRates_const(void* instance) {
    try {
        std::vector<float> ret = reinterpret_cast<cv::videostab::DeblurerBase*>(instance)->blurrinessRates();
        return { Error::Code::StsOk, NULL, new std::vector<float>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::videostab::FastMarchingMethod
void cv_FastMarchingMethod_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::FastMarchingMethod*>(instance);
}
// parsed: cv::videostab::FastMarchingMethod::FastMarchingMethod
// as:     cv::videostab::FastMarchingMethod::FastMarchingMethod (constructor) cv::videostab::FastMarchingMethod . default
// Return value: cv::videostab::FastMarchingMethod (boxed)
cv_return_value_void_X cv_videostab_FastMarchingMethod_FastMarchingMethod() {
    try {
        cv::videostab::FastMarchingMethod* ret = new cv::videostab::FastMarchingMethod();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::FastMarchingMethod::distanceMap
// as:     cv::videostab::FastMarchingMethod::distanceMap (method) cv::videostab::FastMarchingMethod . distanceMap
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_videostab_FastMarchingMethod_distanceMap_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::videostab::FastMarchingMethod*>(instance)->distanceMap();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::videostab::FromFileMotionReader
void cv_FromFileMotionReader_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::FromFileMotionReader*>(instance);
}
// parsed: cv::videostab::FromFileMotionReader::FromFileMotionReader
// as:     cv::videostab::FromFileMotionReader::FromFileMotionReader (constructor) cv::videostab::FromFileMotionReader . new
// Arg ARG string path= string = 
// Return value: cv::videostab::FromFileMotionReader (boxed)
cv_return_value_void_X cv_videostab_FromFileMotionReader_FromFileMotionReader_String(const char* path) {
    try {
        cv::videostab::FromFileMotionReader* ret = new cv::videostab::FromFileMotionReader(String(path));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::FromFileMotionReader::estimate
// as:     cv::videostab::FromFileMotionReader::estimate (method) cv::videostab::FromFileMotionReader . estimate
// Arg ARG cv::Mat (boxed) frame0= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) frame1= cv::Mat (boxed) = 
// Arg ARG RawPtr[Primitive(bool)] * ok= (ptr) RawPtr[Primitive(bool)] = 0
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_videostab_FromFileMotionReader_estimate_Mat_Mat_bool_X(void* instance, void* frame0, void* frame1, bool* ok) {
    try {
        cv::Mat ret = reinterpret_cast<cv::videostab::FromFileMotionReader*>(instance)->estimate(*reinterpret_cast<const cv::Mat*>(frame0), *reinterpret_cast<const cv::Mat*>(frame1), ok);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::videostab::GaussianMotionFilter
void cv_GaussianMotionFilter_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::GaussianMotionFilter*>(instance);
}
// parsed: cv::videostab::GaussianMotionFilter::GaussianMotionFilter
// as:     cv::videostab::GaussianMotionFilter::GaussianMotionFilter (constructor) cv::videostab::GaussianMotionFilter . new
// Arg ARG Primitive(int) radius= Primitive(int) = 15
// Arg ARG Primitive(float) stdev= Primitive(float) = -1.f
// Return value: cv::videostab::GaussianMotionFilter (boxed)
cv_return_value_void_X cv_videostab_GaussianMotionFilter_GaussianMotionFilter_int_float(int radius, float stdev) {
    try {
        cv::videostab::GaussianMotionFilter* ret = new cv::videostab::GaussianMotionFilter(radius, stdev);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::GaussianMotionFilter::setParams
// as:     cv::videostab::GaussianMotionFilter::setParams (method) cv::videostab::GaussianMotionFilter . setParams
// Arg ARG Primitive(int) radius= Primitive(int) = 
// Arg ARG Primitive(float) stdev= Primitive(float) = -1.f
// Return value: Primitive(void)
cv_return_value_void cv_videostab_GaussianMotionFilter_setParams_int_float(void* instance, int radius, float stdev) {
    try {
        reinterpret_cast<cv::videostab::GaussianMotionFilter*>(instance)->setParams(radius, stdev);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::GaussianMotionFilter::radius
// as:     cv::videostab::GaussianMotionFilter::radius (method) cv::videostab::GaussianMotionFilter . radius
// Return value: Primitive(int)
cv_return_value_int cv_videostab_GaussianMotionFilter_radius_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::videostab::GaussianMotionFilter*>(instance)->radius();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::videostab::GaussianMotionFilter::stdev
// as:     cv::videostab::GaussianMotionFilter::stdev (method) cv::videostab::GaussianMotionFilter . stdev
// Return value: Primitive(float)
cv_return_value_float cv_videostab_GaussianMotionFilter_stdev_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::videostab::GaussianMotionFilter*>(instance)->stdev();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::videostab::IDenseOptFlowEstimator::run
// as:     cv::videostab::IDenseOptFlowEstimator::run (method) cv::videostab::IDenseOptFlowEstimator (trait) . run
// Arg ARG cv::_InputArray (boxed) frame0= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) frame1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) flowX= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) flowY= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) errors= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_IDenseOptFlowEstimator_run__InputArray__InputArray__InputOutputArray__InputOutputArray__OutputArray(void* instance, void* frame0, void* frame1, void* flowX, void* flowY, void* errors) {
    try {
        reinterpret_cast<cv::videostab::IDenseOptFlowEstimator*>(instance)->run(*reinterpret_cast<const cv::_InputArray*>(frame0), *reinterpret_cast<const cv::_InputArray*>(frame1), *reinterpret_cast<cv::_InputOutputArray*>(flowX), *reinterpret_cast<cv::_InputOutputArray*>(flowY), *reinterpret_cast<cv::_OutputArray*>(errors));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::IFrameSource::reset
// as:     cv::videostab::IFrameSource::reset (method) cv::videostab::IFrameSource (trait) . reset
// Return value: Primitive(void)
cv_return_value_void cv_videostab_IFrameSource_reset(void* instance) {
    try {
        reinterpret_cast<cv::videostab::IFrameSource*>(instance)->reset();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::IFrameSource::nextFrame
// as:     cv::videostab::IFrameSource::nextFrame (method) cv::videostab::IFrameSource (trait) . nextFrame
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_videostab_IFrameSource_nextFrame(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::videostab::IFrameSource*>(instance)->nextFrame();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::IOutlierRejector::process
// as:     cv::videostab::IOutlierRejector::process (method) cv::videostab::IOutlierRejector (trait) . process
// Arg ARG cv::Size (simple) frameSize= cv::Size (simple) = 
// Arg ARG cv::_InputArray (boxed) points0= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points1= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) mask= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_IOutlierRejector_process_Size__InputArray__InputArray__OutputArray(void* instance, SizeWrapper frameSize, void* points0, void* points1, void* mask) {
    try {
        reinterpret_cast<cv::videostab::IOutlierRejector*>(instance)->process(*reinterpret_cast<cv::Size*>(&frameSize), *reinterpret_cast<const cv::_InputArray*>(points0), *reinterpret_cast<const cv::_InputArray*>(points1), *reinterpret_cast<cv::_OutputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::ISparseOptFlowEstimator::run
// as:     cv::videostab::ISparseOptFlowEstimator::run (method) cv::videostab::ISparseOptFlowEstimator (trait) . run
// Arg ARG cv::_InputArray (boxed) frame0= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) frame1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points0= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) points1= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) status= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) errors= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_ISparseOptFlowEstimator_run__InputArray__InputArray__InputArray__InputOutputArray__OutputArray__OutputArray(void* instance, void* frame0, void* frame1, void* points0, void* points1, void* status, void* errors) {
    try {
        reinterpret_cast<cv::videostab::ISparseOptFlowEstimator*>(instance)->run(*reinterpret_cast<const cv::_InputArray*>(frame0), *reinterpret_cast<const cv::_InputArray*>(frame1), *reinterpret_cast<const cv::_InputArray*>(points0), *reinterpret_cast<cv::_InputOutputArray*>(points1), *reinterpret_cast<cv::_OutputArray*>(status), *reinterpret_cast<cv::_OutputArray*>(errors));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::ImageMotionEstimatorBase::setFrameMask
// as:     cv::videostab::ImageMotionEstimatorBase::setFrameMask (method) cv::videostab::ImageMotionEstimatorBase (trait) . setFrameMask
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_ImageMotionEstimatorBase_setFrameMask__InputArray(void* instance, void* mask) {
    try {
        reinterpret_cast<cv::videostab::ImageMotionEstimatorBase*>(instance)->setFrameMask(*reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::ImageMotionEstimatorBase::estimate
// as:     cv::videostab::ImageMotionEstimatorBase::estimate (method) cv::videostab::ImageMotionEstimatorBase (trait) . estimate
// Arg ARG cv::Mat (boxed) frame0= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) frame1= cv::Mat (boxed) = 
// Arg ARG RawPtr[Primitive(bool)] * ok= (ptr) RawPtr[Primitive(bool)] = 0
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_videostab_ImageMotionEstimatorBase_estimate_Mat_Mat_bool_X(void* instance, void* frame0, void* frame1, bool* ok) {
    try {
        cv::Mat ret = reinterpret_cast<cv::videostab::ImageMotionEstimatorBase*>(instance)->estimate(*reinterpret_cast<const cv::Mat*>(frame0), *reinterpret_cast<const cv::Mat*>(frame1), ok);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::InpainterBase::setRadius
// as:     cv::videostab::InpainterBase::setRadius (method) cv::videostab::InpainterBase (trait) . setRadius
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_InpainterBase_setRadius_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::videostab::InpainterBase*>(instance)->setRadius(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::InpainterBase::radius
// as:     cv::videostab::InpainterBase::radius (method) cv::videostab::InpainterBase (trait) . radius
// Return value: Primitive(int)
cv_return_value_int cv_videostab_InpainterBase_radius_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::videostab::InpainterBase*>(instance)->radius();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::videostab::InpainterBase::inpaint
// as:     cv::videostab::InpainterBase::inpaint (method) cv::videostab::InpainterBase (trait) . inpaint
// Arg ARG Primitive(int) idx= Primitive(int) = 
// Arg ARG cv::Mat (boxed) frame= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_InpainterBase_inpaint_int_Mat_Mat(void* instance, int idx, void* frame, void* mask) {
    try {
        reinterpret_cast<cv::videostab::InpainterBase*>(instance)->inpaint(idx, *reinterpret_cast<cv::Mat*>(frame), *reinterpret_cast<cv::Mat*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::InpainterBase::setFrames
// as:     cv::videostab::InpainterBase::setFrames (method) cv::videostab::InpainterBase (trait) . setFrames
// Arg ARG Vector[cv::Mat (boxed)] val= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_InpainterBase_setFrames_VectorOfMat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::InpainterBase*>(instance)->setFrames(*reinterpret_cast<const std::vector<cv::Mat>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::InpainterBase::frames
// as:     cv::videostab::InpainterBase::frames (method) cv::videostab::InpainterBase (trait) . frames
// Return value: Vector[cv::Mat (boxed)]
cv_return_value_void_X cv_videostab_InpainterBase_frames_const(void* instance) {
    try {
        std::vector<cv::Mat> ret = reinterpret_cast<cv::videostab::InpainterBase*>(instance)->frames();
        return { Error::Code::StsOk, NULL, new std::vector<cv::Mat>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::InpainterBase::setMotions
// as:     cv::videostab::InpainterBase::setMotions (method) cv::videostab::InpainterBase (trait) . setMotions
// Arg ARG Vector[cv::Mat (boxed)] val= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_InpainterBase_setMotions_VectorOfMat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::InpainterBase*>(instance)->setMotions(*reinterpret_cast<const std::vector<cv::Mat>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::InpainterBase::motions
// as:     cv::videostab::InpainterBase::motions (method) cv::videostab::InpainterBase (trait) . motions
// Return value: Vector[cv::Mat (boxed)]
cv_return_value_void_X cv_videostab_InpainterBase_motions_const(void* instance) {
    try {
        std::vector<cv::Mat> ret = reinterpret_cast<cv::videostab::InpainterBase*>(instance)->motions();
        return { Error::Code::StsOk, NULL, new std::vector<cv::Mat>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::InpainterBase::setStabilizedFrames
// as:     cv::videostab::InpainterBase::setStabilizedFrames (method) cv::videostab::InpainterBase (trait) . setStabilizedFrames
// Arg ARG Vector[cv::Mat (boxed)] val= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_InpainterBase_setStabilizedFrames_VectorOfMat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::InpainterBase*>(instance)->setStabilizedFrames(*reinterpret_cast<const std::vector<cv::Mat>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::InpainterBase::stabilizedFrames
// as:     cv::videostab::InpainterBase::stabilizedFrames (method) cv::videostab::InpainterBase (trait) . stabilizedFrames
// Return value: Vector[cv::Mat (boxed)]
cv_return_value_void_X cv_videostab_InpainterBase_stabilizedFrames_const(void* instance) {
    try {
        std::vector<cv::Mat> ret = reinterpret_cast<cv::videostab::InpainterBase*>(instance)->stabilizedFrames();
        return { Error::Code::StsOk, NULL, new std::vector<cv::Mat>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::InpainterBase::setStabilizationMotions
// as:     cv::videostab::InpainterBase::setStabilizationMotions (method) cv::videostab::InpainterBase (trait) . setStabilizationMotions
// Arg ARG Vector[cv::Mat (boxed)] val= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_InpainterBase_setStabilizationMotions_VectorOfMat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::InpainterBase*>(instance)->setStabilizationMotions(*reinterpret_cast<const std::vector<cv::Mat>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::InpainterBase::stabilizationMotions
// as:     cv::videostab::InpainterBase::stabilizationMotions (method) cv::videostab::InpainterBase (trait) . stabilizationMotions
// Return value: Vector[cv::Mat (boxed)]
cv_return_value_void_X cv_videostab_InpainterBase_stabilizationMotions_const(void* instance) {
    try {
        std::vector<cv::Mat> ret = reinterpret_cast<cv::videostab::InpainterBase*>(instance)->stabilizationMotions();
        return { Error::Code::StsOk, NULL, new std::vector<cv::Mat>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::videostab::InpaintingPipeline
void cv_InpaintingPipeline_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::InpaintingPipeline*>(instance);
}
// parsed: cv::videostab::InpaintingPipeline::pushBack
// as:     cv::videostab::InpaintingPipeline::pushBack (method) cv::videostab::InpaintingPipeline . pushBack
// Arg ARG SmartPtr[cv::videostab::InpainterBase (boxed)] inpainter= SmartPtr[cv::videostab::InpainterBase (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_InpaintingPipeline_pushBack_PtrOfInpainterBase(void* instance, void* inpainter) {
    try {
        reinterpret_cast<cv::videostab::InpaintingPipeline*>(instance)->pushBack(*reinterpret_cast<Ptr<cv::videostab::InpainterBase>*>(inpainter));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::InpaintingPipeline::empty
// as:     cv::videostab::InpaintingPipeline::empty (method) cv::videostab::InpaintingPipeline . empty
// Return value: Primitive(bool)
cv_return_value_bool cv_videostab_InpaintingPipeline_empty_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::videostab::InpaintingPipeline*>(instance)->empty();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::videostab::InpaintingPipeline::setRadius
// as:     cv::videostab::InpaintingPipeline::setRadius (method) cv::videostab::InpaintingPipeline . setRadius
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_InpaintingPipeline_setRadius_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::videostab::InpaintingPipeline*>(instance)->setRadius(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::InpaintingPipeline::setFrames
// as:     cv::videostab::InpaintingPipeline::setFrames (method) cv::videostab::InpaintingPipeline . setFrames
// Arg ARG Vector[cv::Mat (boxed)] val= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_InpaintingPipeline_setFrames_VectorOfMat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::InpaintingPipeline*>(instance)->setFrames(*reinterpret_cast<const std::vector<cv::Mat>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::InpaintingPipeline::setMotions
// as:     cv::videostab::InpaintingPipeline::setMotions (method) cv::videostab::InpaintingPipeline . setMotions
// Arg ARG Vector[cv::Mat (boxed)] val= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_InpaintingPipeline_setMotions_VectorOfMat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::InpaintingPipeline*>(instance)->setMotions(*reinterpret_cast<const std::vector<cv::Mat>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::InpaintingPipeline::setStabilizedFrames
// as:     cv::videostab::InpaintingPipeline::setStabilizedFrames (method) cv::videostab::InpaintingPipeline . setStabilizedFrames
// Arg ARG Vector[cv::Mat (boxed)] val= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_InpaintingPipeline_setStabilizedFrames_VectorOfMat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::InpaintingPipeline*>(instance)->setStabilizedFrames(*reinterpret_cast<const std::vector<cv::Mat>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::InpaintingPipeline::setStabilizationMotions
// as:     cv::videostab::InpaintingPipeline::setStabilizationMotions (method) cv::videostab::InpaintingPipeline . setStabilizationMotions
// Arg ARG Vector[cv::Mat (boxed)] val= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_InpaintingPipeline_setStabilizationMotions_VectorOfMat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::InpaintingPipeline*>(instance)->setStabilizationMotions(*reinterpret_cast<const std::vector<cv::Mat>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::InpaintingPipeline::inpaint
// as:     cv::videostab::InpaintingPipeline::inpaint (method) cv::videostab::InpaintingPipeline . inpaint
// Arg ARG Primitive(int) idx= Primitive(int) = 
// Arg ARG cv::Mat (boxed) frame= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_InpaintingPipeline_inpaint_int_Mat_Mat(void* instance, int idx, void* frame, void* mask) {
    try {
        reinterpret_cast<cv::videostab::InpaintingPipeline*>(instance)->inpaint(idx, *reinterpret_cast<cv::Mat*>(frame), *reinterpret_cast<cv::Mat*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::videostab::KeypointBasedMotionEstimator
void cv_KeypointBasedMotionEstimator_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::KeypointBasedMotionEstimator*>(instance);
}
// parsed: cv::videostab::KeypointBasedMotionEstimator::KeypointBasedMotionEstimator
// as:     cv::videostab::KeypointBasedMotionEstimator::KeypointBasedMotionEstimator (constructor) cv::videostab::KeypointBasedMotionEstimator . new
// Arg ARG SmartPtr[cv::videostab::MotionEstimatorBase (boxed)] estimator= SmartPtr[cv::videostab::MotionEstimatorBase (boxed)] = 
// Return value: cv::videostab::KeypointBasedMotionEstimator (boxed)
cv_return_value_void_X cv_videostab_KeypointBasedMotionEstimator_KeypointBasedMotionEstimator_PtrOfMotionEstimatorBase(void* estimator) {
    try {
        cv::videostab::KeypointBasedMotionEstimator* ret = new cv::videostab::KeypointBasedMotionEstimator(*reinterpret_cast<Ptr<cv::videostab::MotionEstimatorBase>*>(estimator));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::KeypointBasedMotionEstimator::setDetector
// as:     cv::videostab::KeypointBasedMotionEstimator::setDetector (method) cv::videostab::KeypointBasedMotionEstimator . setDetector
// Arg ARG SmartPtr[cv::Feature2D (boxed)] val= SmartPtr[cv::Feature2D (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_KeypointBasedMotionEstimator_setDetector_PtrOfFeature2D(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::KeypointBasedMotionEstimator*>(instance)->setDetector(*reinterpret_cast<Ptr<cv::Feature2D>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::KeypointBasedMotionEstimator::detector
// as:     cv::videostab::KeypointBasedMotionEstimator::detector (method) cv::videostab::KeypointBasedMotionEstimator . detector
// Return value: SmartPtr[cv::Feature2D (boxed)]
cv_return_value_void_X cv_videostab_KeypointBasedMotionEstimator_detector_const(void* instance) {
    try {
        Ptr<cv::Feature2D> ret = reinterpret_cast<cv::videostab::KeypointBasedMotionEstimator*>(instance)->detector();
        return { Error::Code::StsOk, NULL, new Ptr<cv::Feature2D>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::KeypointBasedMotionEstimator::setFrameMask
// as:     cv::videostab::KeypointBasedMotionEstimator::setFrameMask (method) cv::videostab::KeypointBasedMotionEstimator . setFrameMask
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_KeypointBasedMotionEstimator_setFrameMask__InputArray(void* instance, void* mask) {
    try {
        reinterpret_cast<cv::videostab::KeypointBasedMotionEstimator*>(instance)->setFrameMask(*reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::KeypointBasedMotionEstimator::estimate
// as:     cv::videostab::KeypointBasedMotionEstimator::estimate (method) cv::videostab::KeypointBasedMotionEstimator . estimate
// Arg ARG cv::Mat (boxed) frame0= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) frame1= cv::Mat (boxed) = 
// Arg ARG RawPtr[Primitive(bool)] * ok= (ptr) RawPtr[Primitive(bool)] = 0
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_videostab_KeypointBasedMotionEstimator_estimate_Mat_Mat_bool_X(void* instance, void* frame0, void* frame1, bool* ok) {
    try {
        cv::Mat ret = reinterpret_cast<cv::videostab::KeypointBasedMotionEstimator*>(instance)->estimate(*reinterpret_cast<const cv::Mat*>(frame0), *reinterpret_cast<const cv::Mat*>(frame1), ok);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::KeypointBasedMotionEstimator::estimate
// as:     cv::videostab::KeypointBasedMotionEstimator::estimate (method) cv::videostab::KeypointBasedMotionEstimator . estimate
// Arg ARG cv::_InputArray (boxed) frame0= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) frame1= cv::_InputArray (boxed) = 
// Arg ARG RawPtr[Primitive(bool)] * ok= (ptr) RawPtr[Primitive(bool)] = 0
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_videostab_KeypointBasedMotionEstimator_estimate__InputArray__InputArray_bool_X(void* instance, void* frame0, void* frame1, bool* ok) {
    try {
        cv::Mat ret = reinterpret_cast<cv::videostab::KeypointBasedMotionEstimator*>(instance)->estimate(*reinterpret_cast<const cv::_InputArray*>(frame0), *reinterpret_cast<const cv::_InputArray*>(frame1), ok);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::videostab::LogToStdout
void cv_LogToStdout_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::LogToStdout*>(instance);
}
// boxed class: cv::videostab::LpMotionStabilizer
void cv_LpMotionStabilizer_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::LpMotionStabilizer*>(instance);
}
// parsed: cv::videostab::LpMotionStabilizer::setFrameSize
// as:     cv::videostab::LpMotionStabilizer::setFrameSize (method) cv::videostab::LpMotionStabilizer . setFrameSize
// Arg ARG cv::Size (simple) val= cv::Size (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_LpMotionStabilizer_setFrameSize_Size(void* instance, SizeWrapper val) {
    try {
        reinterpret_cast<cv::videostab::LpMotionStabilizer*>(instance)->setFrameSize(*reinterpret_cast<cv::Size*>(&val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::LpMotionStabilizer::frameSize
// as:     cv::videostab::LpMotionStabilizer::frameSize (method) cv::videostab::LpMotionStabilizer . frameSize
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_videostab_LpMotionStabilizer_frameSize_const(void* instance) {
    try {
        cv::Size ret = reinterpret_cast<cv::videostab::LpMotionStabilizer*>(instance)->frameSize();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::videostab::LpMotionStabilizer::setTrimRatio
// as:     cv::videostab::LpMotionStabilizer::setTrimRatio (method) cv::videostab::LpMotionStabilizer . setTrimRatio
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_LpMotionStabilizer_setTrimRatio_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::videostab::LpMotionStabilizer*>(instance)->setTrimRatio(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::LpMotionStabilizer::trimRatio
// as:     cv::videostab::LpMotionStabilizer::trimRatio (method) cv::videostab::LpMotionStabilizer . trimRatio
// Return value: Primitive(float)
cv_return_value_float cv_videostab_LpMotionStabilizer_trimRatio_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::videostab::LpMotionStabilizer*>(instance)->trimRatio();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::videostab::LpMotionStabilizer::setWeight1
// as:     cv::videostab::LpMotionStabilizer::setWeight1 (method) cv::videostab::LpMotionStabilizer . setWeight1
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_LpMotionStabilizer_setWeight1_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::videostab::LpMotionStabilizer*>(instance)->setWeight1(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::LpMotionStabilizer::weight1
// as:     cv::videostab::LpMotionStabilizer::weight1 (method) cv::videostab::LpMotionStabilizer . weight1
// Return value: Primitive(float)
cv_return_value_float cv_videostab_LpMotionStabilizer_weight1_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::videostab::LpMotionStabilizer*>(instance)->weight1();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::videostab::LpMotionStabilizer::setWeight2
// as:     cv::videostab::LpMotionStabilizer::setWeight2 (method) cv::videostab::LpMotionStabilizer . setWeight2
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_LpMotionStabilizer_setWeight2_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::videostab::LpMotionStabilizer*>(instance)->setWeight2(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::LpMotionStabilizer::weight2
// as:     cv::videostab::LpMotionStabilizer::weight2 (method) cv::videostab::LpMotionStabilizer . weight2
// Return value: Primitive(float)
cv_return_value_float cv_videostab_LpMotionStabilizer_weight2_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::videostab::LpMotionStabilizer*>(instance)->weight2();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::videostab::LpMotionStabilizer::setWeight3
// as:     cv::videostab::LpMotionStabilizer::setWeight3 (method) cv::videostab::LpMotionStabilizer . setWeight3
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_LpMotionStabilizer_setWeight3_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::videostab::LpMotionStabilizer*>(instance)->setWeight3(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::LpMotionStabilizer::weight3
// as:     cv::videostab::LpMotionStabilizer::weight3 (method) cv::videostab::LpMotionStabilizer . weight3
// Return value: Primitive(float)
cv_return_value_float cv_videostab_LpMotionStabilizer_weight3_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::videostab::LpMotionStabilizer*>(instance)->weight3();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::videostab::LpMotionStabilizer::setWeight4
// as:     cv::videostab::LpMotionStabilizer::setWeight4 (method) cv::videostab::LpMotionStabilizer . setWeight4
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_LpMotionStabilizer_setWeight4_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::videostab::LpMotionStabilizer*>(instance)->setWeight4(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::LpMotionStabilizer::weight4
// as:     cv::videostab::LpMotionStabilizer::weight4 (method) cv::videostab::LpMotionStabilizer . weight4
// Return value: Primitive(float)
cv_return_value_float cv_videostab_LpMotionStabilizer_weight4_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::videostab::LpMotionStabilizer*>(instance)->weight4();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// boxed class: cv::videostab::MaskFrameSource
void cv_MaskFrameSource_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::MaskFrameSource*>(instance);
}
// parsed: cv::videostab::MaskFrameSource::MaskFrameSource
// as:     cv::videostab::MaskFrameSource::MaskFrameSource (constructor) cv::videostab::MaskFrameSource . new
// Arg ARG SmartPtr[cv::videostab::IFrameSource (boxed)] source= SmartPtr[cv::videostab::IFrameSource (boxed)] = 
// Return value: cv::videostab::MaskFrameSource (boxed)
cv_return_value_void_X cv_videostab_MaskFrameSource_MaskFrameSource_PtrOfIFrameSource(void* source) {
    try {
        cv::videostab::MaskFrameSource* ret = new cv::videostab::MaskFrameSource(*reinterpret_cast<const Ptr<cv::videostab::IFrameSource>*>(source));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::MaskFrameSource::reset
// as:     cv::videostab::MaskFrameSource::reset (method) cv::videostab::MaskFrameSource . reset
// Return value: Primitive(void)
cv_return_value_void cv_videostab_MaskFrameSource_reset(void* instance) {
    try {
        reinterpret_cast<cv::videostab::MaskFrameSource*>(instance)->reset();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::MaskFrameSource::nextFrame
// as:     cv::videostab::MaskFrameSource::nextFrame (method) cv::videostab::MaskFrameSource . nextFrame
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_videostab_MaskFrameSource_nextFrame(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::videostab::MaskFrameSource*>(instance)->nextFrame();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::videostab::MoreAccurateMotionWobbleSuppressor
void cv_MoreAccurateMotionWobbleSuppressor_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::MoreAccurateMotionWobbleSuppressor*>(instance);
}
// parsed: cv::videostab::MoreAccurateMotionWobbleSuppressor::suppress
// as:     cv::videostab::MoreAccurateMotionWobbleSuppressor::suppress (method) cv::videostab::MoreAccurateMotionWobbleSuppressor . suppress
// Arg ARG Primitive(int) idx= Primitive(int) = 
// Arg ARG cv::Mat (boxed) frame= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) result= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_MoreAccurateMotionWobbleSuppressor_suppress_int_Mat_Mat(void* instance, int idx, void* frame, void* result) {
    try {
        reinterpret_cast<cv::videostab::MoreAccurateMotionWobbleSuppressor*>(instance)->suppress(idx, *reinterpret_cast<const cv::Mat*>(frame), *reinterpret_cast<cv::Mat*>(result));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::MoreAccurateMotionWobbleSuppressorBase::setPeriod
// as:     cv::videostab::MoreAccurateMotionWobbleSuppressorBase::setPeriod (method) cv::videostab::MoreAccurateMotionWobbleSuppressorBase (trait) . setPeriod
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_MoreAccurateMotionWobbleSuppressorBase_setPeriod_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::videostab::MoreAccurateMotionWobbleSuppressorBase*>(instance)->setPeriod(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::MoreAccurateMotionWobbleSuppressorBase::period
// as:     cv::videostab::MoreAccurateMotionWobbleSuppressorBase::period (method) cv::videostab::MoreAccurateMotionWobbleSuppressorBase (trait) . period
// Return value: Primitive(int)
cv_return_value_int cv_videostab_MoreAccurateMotionWobbleSuppressorBase_period_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::videostab::MoreAccurateMotionWobbleSuppressorBase*>(instance)->period();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// boxed class: cv::videostab::MoreAccurateMotionWobbleSuppressorBase
void cv_MoreAccurateMotionWobbleSuppressorBase_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::MoreAccurateMotionWobbleSuppressorBase*>(instance);
}
// parsed: cv::videostab::MotionEstimatorBase::estimate
// as:     cv::videostab::MotionEstimatorBase::estimate (method) cv::videostab::MotionEstimatorBase (trait) . estimate
// Arg ARG cv::_InputArray (boxed) points0= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points1= cv::_InputArray (boxed) = 
// Arg ARG RawPtr[Primitive(bool)] * ok= (ptr) RawPtr[Primitive(bool)] = 0
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_videostab_MotionEstimatorBase_estimate__InputArray__InputArray_bool_X(void* instance, void* points0, void* points1, bool* ok) {
    try {
        cv::Mat ret = reinterpret_cast<cv::videostab::MotionEstimatorBase*>(instance)->estimate(*reinterpret_cast<const cv::_InputArray*>(points0), *reinterpret_cast<const cv::_InputArray*>(points1), ok);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::videostab::MotionEstimatorL1
void cv_MotionEstimatorL1_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::MotionEstimatorL1*>(instance);
}
// parsed: cv::videostab::MotionEstimatorL1::estimate
// as:     cv::videostab::MotionEstimatorL1::estimate (method) cv::videostab::MotionEstimatorL1 . estimate
// Arg ARG cv::_InputArray (boxed) points0= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points1= cv::_InputArray (boxed) = 
// Arg ARG RawPtr[Primitive(bool)] * ok= (ptr) RawPtr[Primitive(bool)] = 0
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_videostab_MotionEstimatorL1_estimate__InputArray__InputArray_bool_X(void* instance, void* points0, void* points1, bool* ok) {
    try {
        cv::Mat ret = reinterpret_cast<cv::videostab::MotionEstimatorL1*>(instance)->estimate(*reinterpret_cast<const cv::_InputArray*>(points0), *reinterpret_cast<const cv::_InputArray*>(points1), ok);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::videostab::MotionEstimatorRansacL2
void cv_MotionEstimatorRansacL2_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::MotionEstimatorRansacL2*>(instance);
}
// parsed: cv::videostab::MotionEstimatorRansacL2::setMinInlierRatio
// as:     cv::videostab::MotionEstimatorRansacL2::setMinInlierRatio (method) cv::videostab::MotionEstimatorRansacL2 . setMinInlierRatio
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_MotionEstimatorRansacL2_setMinInlierRatio_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::videostab::MotionEstimatorRansacL2*>(instance)->setMinInlierRatio(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::MotionEstimatorRansacL2::minInlierRatio
// as:     cv::videostab::MotionEstimatorRansacL2::minInlierRatio (method) cv::videostab::MotionEstimatorRansacL2 . minInlierRatio
// Return value: Primitive(float)
cv_return_value_float cv_videostab_MotionEstimatorRansacL2_minInlierRatio_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::videostab::MotionEstimatorRansacL2*>(instance)->minInlierRatio();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::videostab::MotionEstimatorRansacL2::estimate
// as:     cv::videostab::MotionEstimatorRansacL2::estimate (method) cv::videostab::MotionEstimatorRansacL2 . estimate
// Arg ARG cv::_InputArray (boxed) points0= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points1= cv::_InputArray (boxed) = 
// Arg ARG RawPtr[Primitive(bool)] * ok= (ptr) RawPtr[Primitive(bool)] = 0
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_videostab_MotionEstimatorRansacL2_estimate__InputArray__InputArray_bool_X(void* instance, void* points0, void* points1, bool* ok) {
    try {
        cv::Mat ret = reinterpret_cast<cv::videostab::MotionEstimatorRansacL2*>(instance)->estimate(*reinterpret_cast<const cv::_InputArray*>(points0), *reinterpret_cast<const cv::_InputArray*>(points1), ok);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::videostab::MotionInpainter
void cv_MotionInpainter_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::MotionInpainter*>(instance);
}
// parsed: cv::videostab::MotionInpainter::MotionInpainter
// as:     cv::videostab::MotionInpainter::MotionInpainter (constructor) cv::videostab::MotionInpainter . default
// Return value: cv::videostab::MotionInpainter (boxed)
cv_return_value_void_X cv_videostab_MotionInpainter_MotionInpainter() {
    try {
        cv::videostab::MotionInpainter* ret = new cv::videostab::MotionInpainter();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::MotionInpainter::setFlowErrorThreshold
// as:     cv::videostab::MotionInpainter::setFlowErrorThreshold (method) cv::videostab::MotionInpainter . setFlowErrorThreshold
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_MotionInpainter_setFlowErrorThreshold_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::videostab::MotionInpainter*>(instance)->setFlowErrorThreshold(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::MotionInpainter::flowErrorThreshold
// as:     cv::videostab::MotionInpainter::flowErrorThreshold (method) cv::videostab::MotionInpainter . flowErrorThreshold
// Return value: Primitive(float)
cv_return_value_float cv_videostab_MotionInpainter_flowErrorThreshold_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::videostab::MotionInpainter*>(instance)->flowErrorThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::videostab::MotionInpainter::setDistThreshold
// as:     cv::videostab::MotionInpainter::setDistThreshold (method) cv::videostab::MotionInpainter . setDistThreshold
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_MotionInpainter_setDistThreshold_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::videostab::MotionInpainter*>(instance)->setDistThreshold(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::MotionInpainter::distThresh
// as:     cv::videostab::MotionInpainter::distThresh (method) cv::videostab::MotionInpainter . distThresh
// Return value: Primitive(float)
cv_return_value_float cv_videostab_MotionInpainter_distThresh_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::videostab::MotionInpainter*>(instance)->distThresh();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::videostab::MotionInpainter::setBorderMode
// as:     cv::videostab::MotionInpainter::setBorderMode (method) cv::videostab::MotionInpainter . setBorderMode
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_MotionInpainter_setBorderMode_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::videostab::MotionInpainter*>(instance)->setBorderMode(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::MotionInpainter::borderMode
// as:     cv::videostab::MotionInpainter::borderMode (method) cv::videostab::MotionInpainter . borderMode
// Return value: Primitive(int)
cv_return_value_int cv_videostab_MotionInpainter_borderMode_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::videostab::MotionInpainter*>(instance)->borderMode();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::videostab::MotionInpainter::inpaint
// as:     cv::videostab::MotionInpainter::inpaint (method) cv::videostab::MotionInpainter . inpaint
// Arg ARG Primitive(int) idx= Primitive(int) = 
// Arg ARG cv::Mat (boxed) frame= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_MotionInpainter_inpaint_int_Mat_Mat(void* instance, int idx, void* frame, void* mask) {
    try {
        reinterpret_cast<cv::videostab::MotionInpainter*>(instance)->inpaint(idx, *reinterpret_cast<cv::Mat*>(frame), *reinterpret_cast<cv::Mat*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::videostab::MotionStabilizationPipeline
void cv_MotionStabilizationPipeline_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::MotionStabilizationPipeline*>(instance);
}
// parsed: cv::videostab::MotionStabilizationPipeline::pushBack
// as:     cv::videostab::MotionStabilizationPipeline::pushBack (method) cv::videostab::MotionStabilizationPipeline . pushBack
// Arg ARG SmartPtr[cv::videostab::IMotionStabilizer (boxed)] stabilizer= SmartPtr[cv::videostab::IMotionStabilizer (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_MotionStabilizationPipeline_pushBack_PtrOfIMotionStabilizer(void* instance, void* stabilizer) {
    try {
        reinterpret_cast<cv::videostab::MotionStabilizationPipeline*>(instance)->pushBack(*reinterpret_cast<Ptr<cv::videostab::IMotionStabilizer>*>(stabilizer));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::MotionStabilizationPipeline::empty
// as:     cv::videostab::MotionStabilizationPipeline::empty (method) cv::videostab::MotionStabilizationPipeline . empty
// Return value: Primitive(bool)
cv_return_value_bool cv_videostab_MotionStabilizationPipeline_empty_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::videostab::MotionStabilizationPipeline*>(instance)->empty();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// boxed class: cv::videostab::NullDeblurer
void cv_NullDeblurer_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::NullDeblurer*>(instance);
}
// parsed: cv::videostab::NullDeblurer::deblur
// as:     cv::videostab::NullDeblurer::deblur (method) cv::videostab::NullDeblurer . deblur
// Arg ARG Primitive(int) unnamed_arg= Primitive(int) = 
// Arg ARG cv::Mat (boxed) unnamed_arg_1= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_NullDeblurer_deblur_int_Mat(void* instance, int unnamed_arg, void* unnamed_arg_1) {
    try {
        reinterpret_cast<cv::videostab::NullDeblurer*>(instance)->deblur(unnamed_arg, *reinterpret_cast<cv::Mat*>(unnamed_arg_1));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::videostab::NullFrameSource
void cv_NullFrameSource_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::NullFrameSource*>(instance);
}
// parsed: cv::videostab::NullFrameSource::reset
// as:     cv::videostab::NullFrameSource::reset (method) cv::videostab::NullFrameSource . reset
// Return value: Primitive(void)
cv_return_value_void cv_videostab_NullFrameSource_reset(void* instance) {
    try {
        reinterpret_cast<cv::videostab::NullFrameSource*>(instance)->reset();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::NullFrameSource::nextFrame
// as:     cv::videostab::NullFrameSource::nextFrame (method) cv::videostab::NullFrameSource . nextFrame
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_videostab_NullFrameSource_nextFrame(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::videostab::NullFrameSource*>(instance)->nextFrame();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::videostab::NullInpainter
void cv_NullInpainter_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::NullInpainter*>(instance);
}
// parsed: cv::videostab::NullInpainter::inpaint
// as:     cv::videostab::NullInpainter::inpaint (method) cv::videostab::NullInpainter . inpaint
// Arg ARG Primitive(int) unnamed_arg= Primitive(int) = 
// Arg ARG cv::Mat (boxed) unnamed_arg_1= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) unnamed_arg_2= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_NullInpainter_inpaint_int_Mat_Mat(void* instance, int unnamed_arg, void* unnamed_arg_1, void* unnamed_arg_2) {
    try {
        reinterpret_cast<cv::videostab::NullInpainter*>(instance)->inpaint(unnamed_arg, *reinterpret_cast<cv::Mat*>(unnamed_arg_1), *reinterpret_cast<cv::Mat*>(unnamed_arg_2));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::videostab::NullLog
void cv_NullLog_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::NullLog*>(instance);
}
// boxed class: cv::videostab::NullOutlierRejector
void cv_NullOutlierRejector_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::NullOutlierRejector*>(instance);
}
// parsed: cv::videostab::NullOutlierRejector::process
// as:     cv::videostab::NullOutlierRejector::process (method) cv::videostab::NullOutlierRejector . process
// Arg ARG cv::Size (simple) frameSize= cv::Size (simple) = 
// Arg ARG cv::_InputArray (boxed) points0= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points1= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) mask= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_NullOutlierRejector_process_Size__InputArray__InputArray__OutputArray(void* instance, SizeWrapper frameSize, void* points0, void* points1, void* mask) {
    try {
        reinterpret_cast<cv::videostab::NullOutlierRejector*>(instance)->process(*reinterpret_cast<cv::Size*>(&frameSize), *reinterpret_cast<const cv::_InputArray*>(points0), *reinterpret_cast<const cv::_InputArray*>(points1), *reinterpret_cast<cv::_OutputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::videostab::NullWobbleSuppressor
void cv_NullWobbleSuppressor_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::NullWobbleSuppressor*>(instance);
}
// parsed: cv::videostab::NullWobbleSuppressor::suppress
// as:     cv::videostab::NullWobbleSuppressor::suppress (method) cv::videostab::NullWobbleSuppressor . suppress
// Arg ARG Primitive(int) idx= Primitive(int) = 
// Arg ARG cv::Mat (boxed) frame= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) result= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_NullWobbleSuppressor_suppress_int_Mat_Mat(void* instance, int idx, void* frame, void* result) {
    try {
        reinterpret_cast<cv::videostab::NullWobbleSuppressor*>(instance)->suppress(idx, *reinterpret_cast<const cv::Mat*>(frame), *reinterpret_cast<cv::Mat*>(result));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::videostab::OnePassStabilizer
void cv_OnePassStabilizer_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::OnePassStabilizer*>(instance);
}
// parsed: cv::videostab::OnePassStabilizer::OnePassStabilizer
// as:     cv::videostab::OnePassStabilizer::OnePassStabilizer (constructor) cv::videostab::OnePassStabilizer . default
// Return value: cv::videostab::OnePassStabilizer (boxed)
cv_return_value_void_X cv_videostab_OnePassStabilizer_OnePassStabilizer() {
    try {
        cv::videostab::OnePassStabilizer* ret = new cv::videostab::OnePassStabilizer();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::OnePassStabilizer::setMotionFilter
// as:     cv::videostab::OnePassStabilizer::setMotionFilter (method) cv::videostab::OnePassStabilizer . setMotionFilter
// Arg ARG SmartPtr[cv::videostab::MotionFilterBase (boxed)] val= SmartPtr[cv::videostab::MotionFilterBase (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_OnePassStabilizer_setMotionFilter_PtrOfMotionFilterBase(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::OnePassStabilizer*>(instance)->setMotionFilter(*reinterpret_cast<Ptr<cv::videostab::MotionFilterBase>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::OnePassStabilizer::motionFilter
// as:     cv::videostab::OnePassStabilizer::motionFilter (method) cv::videostab::OnePassStabilizer . motionFilter
// Return value: SmartPtr[cv::videostab::MotionFilterBase (boxed)]
cv_return_value_void_X cv_videostab_OnePassStabilizer_motionFilter_const(void* instance) {
    try {
        Ptr<cv::videostab::MotionFilterBase> ret = reinterpret_cast<cv::videostab::OnePassStabilizer*>(instance)->motionFilter();
        return { Error::Code::StsOk, NULL, new Ptr<cv::videostab::MotionFilterBase>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::OnePassStabilizer::reset
// as:     cv::videostab::OnePassStabilizer::reset (method) cv::videostab::OnePassStabilizer . reset
// Return value: Primitive(void)
cv_return_value_void cv_videostab_OnePassStabilizer_reset(void* instance) {
    try {
        reinterpret_cast<cv::videostab::OnePassStabilizer*>(instance)->reset();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::OnePassStabilizer::nextFrame
// as:     cv::videostab::OnePassStabilizer::nextFrame (method) cv::videostab::OnePassStabilizer . nextFrame
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_videostab_OnePassStabilizer_nextFrame(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::videostab::OnePassStabilizer*>(instance)->nextFrame();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::PyrLkOptFlowEstimatorBase::setWinSize
// as:     cv::videostab::PyrLkOptFlowEstimatorBase::setWinSize (method) cv::videostab::PyrLkOptFlowEstimatorBase (trait) . setWinSize
// Arg ARG cv::Size (simple) val= cv::Size (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_PyrLkOptFlowEstimatorBase_setWinSize_Size(void* instance, SizeWrapper val) {
    try {
        reinterpret_cast<cv::videostab::PyrLkOptFlowEstimatorBase*>(instance)->setWinSize(*reinterpret_cast<cv::Size*>(&val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::PyrLkOptFlowEstimatorBase::winSize
// as:     cv::videostab::PyrLkOptFlowEstimatorBase::winSize (method) cv::videostab::PyrLkOptFlowEstimatorBase (trait) . winSize
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_videostab_PyrLkOptFlowEstimatorBase_winSize_const(void* instance) {
    try {
        cv::Size ret = reinterpret_cast<cv::videostab::PyrLkOptFlowEstimatorBase*>(instance)->winSize();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::videostab::PyrLkOptFlowEstimatorBase::setMaxLevel
// as:     cv::videostab::PyrLkOptFlowEstimatorBase::setMaxLevel (method) cv::videostab::PyrLkOptFlowEstimatorBase (trait) . setMaxLevel
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_PyrLkOptFlowEstimatorBase_setMaxLevel_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::videostab::PyrLkOptFlowEstimatorBase*>(instance)->setMaxLevel(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::PyrLkOptFlowEstimatorBase::maxLevel
// as:     cv::videostab::PyrLkOptFlowEstimatorBase::maxLevel (method) cv::videostab::PyrLkOptFlowEstimatorBase (trait) . maxLevel
// Return value: Primitive(int)
cv_return_value_int cv_videostab_PyrLkOptFlowEstimatorBase_maxLevel_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::videostab::PyrLkOptFlowEstimatorBase*>(instance)->maxLevel();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// boxed class: cv::videostab::PyrLkOptFlowEstimatorBase
void cv_PyrLkOptFlowEstimatorBase_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::PyrLkOptFlowEstimatorBase*>(instance);
}
// parsed: cv::videostab::PyrLkOptFlowEstimatorBase::PyrLkOptFlowEstimatorBase
// as:     cv::videostab::PyrLkOptFlowEstimatorBase::PyrLkOptFlowEstimatorBase (constructor) cv::videostab::PyrLkOptFlowEstimatorBase (trait) . default
// Return value: cv::videostab::PyrLkOptFlowEstimatorBase (boxed)
cv_return_value_void_X cv_videostab_PyrLkOptFlowEstimatorBase_PyrLkOptFlowEstimatorBase() {
    try {
        cv::videostab::PyrLkOptFlowEstimatorBase* ret = new cv::videostab::PyrLkOptFlowEstimatorBase();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::videostab::RansacParams
void cv_RansacParams_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::RansacParams*>(instance);
}
// parsed: cv::videostab::RansacParams::niters
// as:     cv::videostab::RansacParams::niters (method) cv::videostab::RansacParams . niters
// Return value: Primitive(int)
cv_return_value_int cv_videostab_RansacParams_niters_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::videostab::RansacParams*>(instance)->niters();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// boxed class: cv::videostab::SparsePyrLkOptFlowEstimator
void cv_SparsePyrLkOptFlowEstimator_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::SparsePyrLkOptFlowEstimator*>(instance);
}
// parsed: cv::videostab::SparsePyrLkOptFlowEstimator::run
// as:     cv::videostab::SparsePyrLkOptFlowEstimator::run (method) cv::videostab::SparsePyrLkOptFlowEstimator . run
// Arg ARG cv::_InputArray (boxed) frame0= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) frame1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points0= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) points1= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) status= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) errors= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_SparsePyrLkOptFlowEstimator_run__InputArray__InputArray__InputArray__InputOutputArray__OutputArray__OutputArray(void* instance, void* frame0, void* frame1, void* points0, void* points1, void* status, void* errors) {
    try {
        reinterpret_cast<cv::videostab::SparsePyrLkOptFlowEstimator*>(instance)->run(*reinterpret_cast<const cv::_InputArray*>(frame0), *reinterpret_cast<const cv::_InputArray*>(frame1), *reinterpret_cast<const cv::_InputArray*>(points0), *reinterpret_cast<cv::_InputOutputArray*>(points1), *reinterpret_cast<cv::_OutputArray*>(status), *reinterpret_cast<cv::_OutputArray*>(errors));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::StabilizerBase::setLog
// as:     cv::videostab::StabilizerBase::setLog (method) cv::videostab::StabilizerBase (trait) . setLog
// Arg ARG SmartPtr[cv::videostab::ILog (boxed)] ilog= SmartPtr[cv::videostab::ILog (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_StabilizerBase_setLog_PtrOfILog(void* instance, void* ilog) {
    try {
        reinterpret_cast<cv::videostab::StabilizerBase*>(instance)->setLog(*reinterpret_cast<Ptr<cv::videostab::ILog>*>(ilog));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::StabilizerBase::log
// as:     cv::videostab::StabilizerBase::log (method) cv::videostab::StabilizerBase (trait) . log
// Return value: SmartPtr[cv::videostab::ILog (boxed)]
cv_return_value_void_X cv_videostab_StabilizerBase_log_const(void* instance) {
    try {
        Ptr<cv::videostab::ILog> ret = reinterpret_cast<cv::videostab::StabilizerBase*>(instance)->log();
        return { Error::Code::StsOk, NULL, new Ptr<cv::videostab::ILog>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::StabilizerBase::setRadius
// as:     cv::videostab::StabilizerBase::setRadius (method) cv::videostab::StabilizerBase (trait) . setRadius
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_StabilizerBase_setRadius_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::videostab::StabilizerBase*>(instance)->setRadius(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::StabilizerBase::radius
// as:     cv::videostab::StabilizerBase::radius (method) cv::videostab::StabilizerBase (trait) . radius
// Return value: Primitive(int)
cv_return_value_int cv_videostab_StabilizerBase_radius_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::videostab::StabilizerBase*>(instance)->radius();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::videostab::StabilizerBase::setFrameSource
// as:     cv::videostab::StabilizerBase::setFrameSource (method) cv::videostab::StabilizerBase (trait) . setFrameSource
// Arg ARG SmartPtr[cv::videostab::IFrameSource (boxed)] val= SmartPtr[cv::videostab::IFrameSource (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_StabilizerBase_setFrameSource_PtrOfIFrameSource(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::StabilizerBase*>(instance)->setFrameSource(*reinterpret_cast<Ptr<cv::videostab::IFrameSource>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::StabilizerBase::frameSource
// as:     cv::videostab::StabilizerBase::frameSource (method) cv::videostab::StabilizerBase (trait) . frameSource
// Return value: SmartPtr[cv::videostab::IFrameSource (boxed)]
cv_return_value_void_X cv_videostab_StabilizerBase_frameSource_const(void* instance) {
    try {
        Ptr<cv::videostab::IFrameSource> ret = reinterpret_cast<cv::videostab::StabilizerBase*>(instance)->frameSource();
        return { Error::Code::StsOk, NULL, new Ptr<cv::videostab::IFrameSource>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::StabilizerBase::setMaskSource
// as:     cv::videostab::StabilizerBase::setMaskSource (method) cv::videostab::StabilizerBase (trait) . setMaskSource
// Arg ARG SmartPtr[cv::videostab::IFrameSource (boxed)] val= SmartPtr[cv::videostab::IFrameSource (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_StabilizerBase_setMaskSource_PtrOfIFrameSource(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::StabilizerBase*>(instance)->setMaskSource(*reinterpret_cast<const Ptr<cv::videostab::IFrameSource>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::StabilizerBase::maskSource
// as:     cv::videostab::StabilizerBase::maskSource (method) cv::videostab::StabilizerBase (trait) . maskSource
// Return value: SmartPtr[cv::videostab::IFrameSource (boxed)]
cv_return_value_void_X cv_videostab_StabilizerBase_maskSource_const(void* instance) {
    try {
        Ptr<cv::videostab::IFrameSource> ret = reinterpret_cast<cv::videostab::StabilizerBase*>(instance)->maskSource();
        return { Error::Code::StsOk, NULL, new Ptr<cv::videostab::IFrameSource>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::StabilizerBase::setMotionEstimator
// as:     cv::videostab::StabilizerBase::setMotionEstimator (method) cv::videostab::StabilizerBase (trait) . setMotionEstimator
// Arg ARG SmartPtr[cv::videostab::ImageMotionEstimatorBase (boxed)] val= SmartPtr[cv::videostab::ImageMotionEstimatorBase (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_StabilizerBase_setMotionEstimator_PtrOfImageMotionEstimatorBase(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::StabilizerBase*>(instance)->setMotionEstimator(*reinterpret_cast<Ptr<cv::videostab::ImageMotionEstimatorBase>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::StabilizerBase::motionEstimator
// as:     cv::videostab::StabilizerBase::motionEstimator (method) cv::videostab::StabilizerBase (trait) . motionEstimator
// Return value: SmartPtr[cv::videostab::ImageMotionEstimatorBase (boxed)]
cv_return_value_void_X cv_videostab_StabilizerBase_motionEstimator_const(void* instance) {
    try {
        Ptr<cv::videostab::ImageMotionEstimatorBase> ret = reinterpret_cast<cv::videostab::StabilizerBase*>(instance)->motionEstimator();
        return { Error::Code::StsOk, NULL, new Ptr<cv::videostab::ImageMotionEstimatorBase>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::StabilizerBase::setDeblurer
// as:     cv::videostab::StabilizerBase::setDeblurer (method) cv::videostab::StabilizerBase (trait) . setDeblurer
// Arg ARG SmartPtr[cv::videostab::DeblurerBase (boxed)] val= SmartPtr[cv::videostab::DeblurerBase (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_StabilizerBase_setDeblurer_PtrOfDeblurerBase(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::StabilizerBase*>(instance)->setDeblurer(*reinterpret_cast<Ptr<cv::videostab::DeblurerBase>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::StabilizerBase::deblurrer
// as:     cv::videostab::StabilizerBase::deblurrer (method) cv::videostab::StabilizerBase (trait) . deblurrer
// Return value: SmartPtr[cv::videostab::DeblurerBase (boxed)]
cv_return_value_void_X cv_videostab_StabilizerBase_deblurrer_const(void* instance) {
    try {
        Ptr<cv::videostab::DeblurerBase> ret = reinterpret_cast<cv::videostab::StabilizerBase*>(instance)->deblurrer();
        return { Error::Code::StsOk, NULL, new Ptr<cv::videostab::DeblurerBase>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::StabilizerBase::setTrimRatio
// as:     cv::videostab::StabilizerBase::setTrimRatio (method) cv::videostab::StabilizerBase (trait) . setTrimRatio
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_StabilizerBase_setTrimRatio_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::videostab::StabilizerBase*>(instance)->setTrimRatio(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::StabilizerBase::trimRatio
// as:     cv::videostab::StabilizerBase::trimRatio (method) cv::videostab::StabilizerBase (trait) . trimRatio
// Return value: Primitive(float)
cv_return_value_float cv_videostab_StabilizerBase_trimRatio_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::videostab::StabilizerBase*>(instance)->trimRatio();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::videostab::StabilizerBase::setCorrectionForInclusion
// as:     cv::videostab::StabilizerBase::setCorrectionForInclusion (method) cv::videostab::StabilizerBase (trait) . setCorrectionForInclusion
// Arg ARG Primitive(bool) val= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_StabilizerBase_setCorrectionForInclusion_bool(void* instance, bool val) {
    try {
        reinterpret_cast<cv::videostab::StabilizerBase*>(instance)->setCorrectionForInclusion(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::StabilizerBase::doCorrectionForInclusion
// as:     cv::videostab::StabilizerBase::doCorrectionForInclusion (method) cv::videostab::StabilizerBase (trait) . doCorrectionForInclusion
// Return value: Primitive(bool)
cv_return_value_bool cv_videostab_StabilizerBase_doCorrectionForInclusion_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::videostab::StabilizerBase*>(instance)->doCorrectionForInclusion();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::videostab::StabilizerBase::setBorderMode
// as:     cv::videostab::StabilizerBase::setBorderMode (method) cv::videostab::StabilizerBase (trait) . setBorderMode
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_StabilizerBase_setBorderMode_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::videostab::StabilizerBase*>(instance)->setBorderMode(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::StabilizerBase::borderMode
// as:     cv::videostab::StabilizerBase::borderMode (method) cv::videostab::StabilizerBase (trait) . borderMode
// Return value: Primitive(int)
cv_return_value_int cv_videostab_StabilizerBase_borderMode_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::videostab::StabilizerBase*>(instance)->borderMode();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::videostab::StabilizerBase::setInpainter
// as:     cv::videostab::StabilizerBase::setInpainter (method) cv::videostab::StabilizerBase (trait) . setInpainter
// Arg ARG SmartPtr[cv::videostab::InpainterBase (boxed)] val= SmartPtr[cv::videostab::InpainterBase (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_StabilizerBase_setInpainter_PtrOfInpainterBase(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::StabilizerBase*>(instance)->setInpainter(*reinterpret_cast<Ptr<cv::videostab::InpainterBase>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::StabilizerBase::inpainter
// as:     cv::videostab::StabilizerBase::inpainter (method) cv::videostab::StabilizerBase (trait) . inpainter
// Return value: SmartPtr[cv::videostab::InpainterBase (boxed)]
cv_return_value_void_X cv_videostab_StabilizerBase_inpainter_const(void* instance) {
    try {
        Ptr<cv::videostab::InpainterBase> ret = reinterpret_cast<cv::videostab::StabilizerBase*>(instance)->inpainter();
        return { Error::Code::StsOk, NULL, new Ptr<cv::videostab::InpainterBase>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::videostab::ToFileMotionWriter
void cv_ToFileMotionWriter_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::ToFileMotionWriter*>(instance);
}
// parsed: cv::videostab::ToFileMotionWriter::ToFileMotionWriter
// as:     cv::videostab::ToFileMotionWriter::ToFileMotionWriter (constructor) cv::videostab::ToFileMotionWriter . new
// Arg ARG string path= string = 
// Arg ARG SmartPtr[cv::videostab::ImageMotionEstimatorBase (boxed)] estimator= SmartPtr[cv::videostab::ImageMotionEstimatorBase (boxed)] = 
// Return value: cv::videostab::ToFileMotionWriter (boxed)
cv_return_value_void_X cv_videostab_ToFileMotionWriter_ToFileMotionWriter_String_PtrOfImageMotionEstimatorBase(const char* path, void* estimator) {
    try {
        cv::videostab::ToFileMotionWriter* ret = new cv::videostab::ToFileMotionWriter(String(path), *reinterpret_cast<Ptr<cv::videostab::ImageMotionEstimatorBase>*>(estimator));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::ToFileMotionWriter::setFrameMask
// as:     cv::videostab::ToFileMotionWriter::setFrameMask (method) cv::videostab::ToFileMotionWriter . setFrameMask
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_ToFileMotionWriter_setFrameMask__InputArray(void* instance, void* mask) {
    try {
        reinterpret_cast<cv::videostab::ToFileMotionWriter*>(instance)->setFrameMask(*reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::ToFileMotionWriter::estimate
// as:     cv::videostab::ToFileMotionWriter::estimate (method) cv::videostab::ToFileMotionWriter . estimate
// Arg ARG cv::Mat (boxed) frame0= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) frame1= cv::Mat (boxed) = 
// Arg ARG RawPtr[Primitive(bool)] * ok= (ptr) RawPtr[Primitive(bool)] = 0
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_videostab_ToFileMotionWriter_estimate_Mat_Mat_bool_X(void* instance, void* frame0, void* frame1, bool* ok) {
    try {
        cv::Mat ret = reinterpret_cast<cv::videostab::ToFileMotionWriter*>(instance)->estimate(*reinterpret_cast<const cv::Mat*>(frame0), *reinterpret_cast<const cv::Mat*>(frame1), ok);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::videostab::TranslationBasedLocalOutlierRejector
void cv_TranslationBasedLocalOutlierRejector_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::TranslationBasedLocalOutlierRejector*>(instance);
}
// parsed: cv::videostab::TranslationBasedLocalOutlierRejector::TranslationBasedLocalOutlierRejector
// as:     cv::videostab::TranslationBasedLocalOutlierRejector::TranslationBasedLocalOutlierRejector (constructor) cv::videostab::TranslationBasedLocalOutlierRejector . default
// Return value: cv::videostab::TranslationBasedLocalOutlierRejector (boxed)
cv_return_value_void_X cv_videostab_TranslationBasedLocalOutlierRejector_TranslationBasedLocalOutlierRejector() {
    try {
        cv::videostab::TranslationBasedLocalOutlierRejector* ret = new cv::videostab::TranslationBasedLocalOutlierRejector();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::TranslationBasedLocalOutlierRejector::setCellSize
// as:     cv::videostab::TranslationBasedLocalOutlierRejector::setCellSize (method) cv::videostab::TranslationBasedLocalOutlierRejector . setCellSize
// Arg ARG cv::Size (simple) val= cv::Size (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_TranslationBasedLocalOutlierRejector_setCellSize_Size(void* instance, SizeWrapper val) {
    try {
        reinterpret_cast<cv::videostab::TranslationBasedLocalOutlierRejector*>(instance)->setCellSize(*reinterpret_cast<cv::Size*>(&val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::TranslationBasedLocalOutlierRejector::cellSize
// as:     cv::videostab::TranslationBasedLocalOutlierRejector::cellSize (method) cv::videostab::TranslationBasedLocalOutlierRejector . cellSize
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_videostab_TranslationBasedLocalOutlierRejector_cellSize_const(void* instance) {
    try {
        cv::Size ret = reinterpret_cast<cv::videostab::TranslationBasedLocalOutlierRejector*>(instance)->cellSize();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::videostab::TranslationBasedLocalOutlierRejector::process
// as:     cv::videostab::TranslationBasedLocalOutlierRejector::process (method) cv::videostab::TranslationBasedLocalOutlierRejector . process
// Arg ARG cv::Size (simple) frameSize= cv::Size (simple) = 
// Arg ARG cv::_InputArray (boxed) points0= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points1= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) mask= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_TranslationBasedLocalOutlierRejector_process_Size__InputArray__InputArray__OutputArray(void* instance, SizeWrapper frameSize, void* points0, void* points1, void* mask) {
    try {
        reinterpret_cast<cv::videostab::TranslationBasedLocalOutlierRejector*>(instance)->process(*reinterpret_cast<cv::Size*>(&frameSize), *reinterpret_cast<const cv::_InputArray*>(points0), *reinterpret_cast<const cv::_InputArray*>(points1), *reinterpret_cast<cv::_OutputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::videostab::TwoPassStabilizer
void cv_TwoPassStabilizer_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::TwoPassStabilizer*>(instance);
}
// parsed: cv::videostab::TwoPassStabilizer::TwoPassStabilizer
// as:     cv::videostab::TwoPassStabilizer::TwoPassStabilizer (constructor) cv::videostab::TwoPassStabilizer . default
// Return value: cv::videostab::TwoPassStabilizer (boxed)
cv_return_value_void_X cv_videostab_TwoPassStabilizer_TwoPassStabilizer() {
    try {
        cv::videostab::TwoPassStabilizer* ret = new cv::videostab::TwoPassStabilizer();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::TwoPassStabilizer::setMotionStabilizer
// as:     cv::videostab::TwoPassStabilizer::setMotionStabilizer (method) cv::videostab::TwoPassStabilizer . setMotionStabilizer
// Arg ARG SmartPtr[cv::videostab::IMotionStabilizer (boxed)] val= SmartPtr[cv::videostab::IMotionStabilizer (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_TwoPassStabilizer_setMotionStabilizer_PtrOfIMotionStabilizer(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::TwoPassStabilizer*>(instance)->setMotionStabilizer(*reinterpret_cast<Ptr<cv::videostab::IMotionStabilizer>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::TwoPassStabilizer::motionStabilizer
// as:     cv::videostab::TwoPassStabilizer::motionStabilizer (method) cv::videostab::TwoPassStabilizer . motionStabilizer
// Return value: SmartPtr[cv::videostab::IMotionStabilizer (boxed)]
cv_return_value_void_X cv_videostab_TwoPassStabilizer_motionStabilizer_const(void* instance) {
    try {
        Ptr<cv::videostab::IMotionStabilizer> ret = reinterpret_cast<cv::videostab::TwoPassStabilizer*>(instance)->motionStabilizer();
        return { Error::Code::StsOk, NULL, new Ptr<cv::videostab::IMotionStabilizer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::TwoPassStabilizer::setEstimateTrimRatio
// as:     cv::videostab::TwoPassStabilizer::setEstimateTrimRatio (method) cv::videostab::TwoPassStabilizer . setEstimateTrimRatio
// Arg ARG Primitive(bool) val= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_TwoPassStabilizer_setEstimateTrimRatio_bool(void* instance, bool val) {
    try {
        reinterpret_cast<cv::videostab::TwoPassStabilizer*>(instance)->setEstimateTrimRatio(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::TwoPassStabilizer::mustEstimateTrimaRatio
// as:     cv::videostab::TwoPassStabilizer::mustEstimateTrimaRatio (method) cv::videostab::TwoPassStabilizer . mustEstimateTrimaRatio
// Return value: Primitive(bool)
cv_return_value_bool cv_videostab_TwoPassStabilizer_mustEstimateTrimaRatio_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::videostab::TwoPassStabilizer*>(instance)->mustEstimateTrimaRatio();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::videostab::TwoPassStabilizer::reset
// as:     cv::videostab::TwoPassStabilizer::reset (method) cv::videostab::TwoPassStabilizer . reset
// Return value: Primitive(void)
cv_return_value_void cv_videostab_TwoPassStabilizer_reset(void* instance) {
    try {
        reinterpret_cast<cv::videostab::TwoPassStabilizer*>(instance)->reset();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::TwoPassStabilizer::nextFrame
// as:     cv::videostab::TwoPassStabilizer::nextFrame (method) cv::videostab::TwoPassStabilizer . nextFrame
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_videostab_TwoPassStabilizer_nextFrame(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::videostab::TwoPassStabilizer*>(instance)->nextFrame();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::videostab::VideoFileSource
void cv_VideoFileSource_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::VideoFileSource*>(instance);
}
// parsed: cv::videostab::VideoFileSource::VideoFileSource
// as:     cv::videostab::VideoFileSource::VideoFileSource (constructor) cv::videostab::VideoFileSource . new
// Arg ARG string path= string = 
// Arg ARG Primitive(bool) volatileFrame= Primitive(bool) = false
// Return value: cv::videostab::VideoFileSource (boxed)
cv_return_value_void_X cv_videostab_VideoFileSource_VideoFileSource_String_bool(const char* path, bool volatileFrame) {
    try {
        cv::videostab::VideoFileSource* ret = new cv::videostab::VideoFileSource(String(path), volatileFrame);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::VideoFileSource::reset
// as:     cv::videostab::VideoFileSource::reset (method) cv::videostab::VideoFileSource . reset
// Return value: Primitive(void)
cv_return_value_void cv_videostab_VideoFileSource_reset(void* instance) {
    try {
        reinterpret_cast<cv::videostab::VideoFileSource*>(instance)->reset();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::VideoFileSource::nextFrame
// as:     cv::videostab::VideoFileSource::nextFrame (method) cv::videostab::VideoFileSource . nextFrame
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_videostab_VideoFileSource_nextFrame(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::videostab::VideoFileSource*>(instance)->nextFrame();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::VideoFileSource::width
// as:     cv::videostab::VideoFileSource::width (method) cv::videostab::VideoFileSource . width
// Return value: Primitive(int)
cv_return_value_int cv_videostab_VideoFileSource_width(void* instance) {
    try {
        int ret = reinterpret_cast<cv::videostab::VideoFileSource*>(instance)->width();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::videostab::VideoFileSource::height
// as:     cv::videostab::VideoFileSource::height (method) cv::videostab::VideoFileSource . height
// Return value: Primitive(int)
cv_return_value_int cv_videostab_VideoFileSource_height(void* instance) {
    try {
        int ret = reinterpret_cast<cv::videostab::VideoFileSource*>(instance)->height();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::videostab::VideoFileSource::count
// as:     cv::videostab::VideoFileSource::count (method) cv::videostab::VideoFileSource . count
// Return value: Primitive(int)
cv_return_value_int cv_videostab_VideoFileSource_count(void* instance) {
    try {
        int ret = reinterpret_cast<cv::videostab::VideoFileSource*>(instance)->count();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::videostab::VideoFileSource::fps
// as:     cv::videostab::VideoFileSource::fps (method) cv::videostab::VideoFileSource . fps
// Return value: Primitive(double)
cv_return_value_double cv_videostab_VideoFileSource_fps(void* instance) {
    try {
        double ret = reinterpret_cast<cv::videostab::VideoFileSource*>(instance)->fps();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// boxed class: cv::videostab::WeightingDeblurer
void cv_WeightingDeblurer_delete(void* instance) {
    delete reinterpret_cast<cv::videostab::WeightingDeblurer*>(instance);
}
// parsed: cv::videostab::WeightingDeblurer::WeightingDeblurer
// as:     cv::videostab::WeightingDeblurer::WeightingDeblurer (constructor) cv::videostab::WeightingDeblurer . default
// Return value: cv::videostab::WeightingDeblurer (boxed)
cv_return_value_void_X cv_videostab_WeightingDeblurer_WeightingDeblurer() {
    try {
        cv::videostab::WeightingDeblurer* ret = new cv::videostab::WeightingDeblurer();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::WeightingDeblurer::setSensitivity
// as:     cv::videostab::WeightingDeblurer::setSensitivity (method) cv::videostab::WeightingDeblurer . setSensitivity
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_WeightingDeblurer_setSensitivity_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::videostab::WeightingDeblurer*>(instance)->setSensitivity(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::WeightingDeblurer::sensitivity
// as:     cv::videostab::WeightingDeblurer::sensitivity (method) cv::videostab::WeightingDeblurer . sensitivity
// Return value: Primitive(float)
cv_return_value_float cv_videostab_WeightingDeblurer_sensitivity_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::videostab::WeightingDeblurer*>(instance)->sensitivity();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::videostab::WeightingDeblurer::deblur
// as:     cv::videostab::WeightingDeblurer::deblur (method) cv::videostab::WeightingDeblurer . deblur
// Arg ARG Primitive(int) idx= Primitive(int) = 
// Arg ARG cv::Mat (boxed) frame= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_WeightingDeblurer_deblur_int_Mat(void* instance, int idx, void* frame) {
    try {
        reinterpret_cast<cv::videostab::WeightingDeblurer*>(instance)->deblur(idx, *reinterpret_cast<cv::Mat*>(frame));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::WobbleSuppressorBase::setMotionEstimator
// as:     cv::videostab::WobbleSuppressorBase::setMotionEstimator (method) cv::videostab::WobbleSuppressorBase (trait) . setMotionEstimator
// Arg ARG SmartPtr[cv::videostab::ImageMotionEstimatorBase (boxed)] val= SmartPtr[cv::videostab::ImageMotionEstimatorBase (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_WobbleSuppressorBase_setMotionEstimator_PtrOfImageMotionEstimatorBase(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::WobbleSuppressorBase*>(instance)->setMotionEstimator(*reinterpret_cast<Ptr<cv::videostab::ImageMotionEstimatorBase>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::WobbleSuppressorBase::motionEstimator
// as:     cv::videostab::WobbleSuppressorBase::motionEstimator (method) cv::videostab::WobbleSuppressorBase (trait) . motionEstimator
// Return value: SmartPtr[cv::videostab::ImageMotionEstimatorBase (boxed)]
cv_return_value_void_X cv_videostab_WobbleSuppressorBase_motionEstimator_const(void* instance) {
    try {
        Ptr<cv::videostab::ImageMotionEstimatorBase> ret = reinterpret_cast<cv::videostab::WobbleSuppressorBase*>(instance)->motionEstimator();
        return { Error::Code::StsOk, NULL, new Ptr<cv::videostab::ImageMotionEstimatorBase>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::WobbleSuppressorBase::suppress
// as:     cv::videostab::WobbleSuppressorBase::suppress (method) cv::videostab::WobbleSuppressorBase (trait) . suppress
// Arg ARG Primitive(int) idx= Primitive(int) = 
// Arg ARG cv::Mat (boxed) frame= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) result= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_WobbleSuppressorBase_suppress_int_Mat_Mat(void* instance, int idx, void* frame, void* result) {
    try {
        reinterpret_cast<cv::videostab::WobbleSuppressorBase*>(instance)->suppress(idx, *reinterpret_cast<const cv::Mat*>(frame), *reinterpret_cast<cv::Mat*>(result));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::WobbleSuppressorBase::setFrameCount
// as:     cv::videostab::WobbleSuppressorBase::setFrameCount (method) cv::videostab::WobbleSuppressorBase (trait) . setFrameCount
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_WobbleSuppressorBase_setFrameCount_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::videostab::WobbleSuppressorBase*>(instance)->setFrameCount(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::WobbleSuppressorBase::frameCount
// as:     cv::videostab::WobbleSuppressorBase::frameCount (method) cv::videostab::WobbleSuppressorBase (trait) . frameCount
// Return value: Primitive(int)
cv_return_value_int cv_videostab_WobbleSuppressorBase_frameCount_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::videostab::WobbleSuppressorBase*>(instance)->frameCount();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::videostab::WobbleSuppressorBase::setMotions
// as:     cv::videostab::WobbleSuppressorBase::setMotions (method) cv::videostab::WobbleSuppressorBase (trait) . setMotions
// Arg ARG Vector[cv::Mat (boxed)] val= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_WobbleSuppressorBase_setMotions_VectorOfMat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::WobbleSuppressorBase*>(instance)->setMotions(*reinterpret_cast<const std::vector<cv::Mat>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::WobbleSuppressorBase::motions
// as:     cv::videostab::WobbleSuppressorBase::motions (method) cv::videostab::WobbleSuppressorBase (trait) . motions
// Return value: Vector[cv::Mat (boxed)]
cv_return_value_void_X cv_videostab_WobbleSuppressorBase_motions_const(void* instance) {
    try {
        std::vector<cv::Mat> ret = reinterpret_cast<cv::videostab::WobbleSuppressorBase*>(instance)->motions();
        return { Error::Code::StsOk, NULL, new std::vector<cv::Mat>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::WobbleSuppressorBase::setMotions2
// as:     cv::videostab::WobbleSuppressorBase::setMotions2 (method) cv::videostab::WobbleSuppressorBase (trait) . setMotions2
// Arg ARG Vector[cv::Mat (boxed)] val= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_WobbleSuppressorBase_setMotions2_VectorOfMat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::WobbleSuppressorBase*>(instance)->setMotions2(*reinterpret_cast<const std::vector<cv::Mat>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::WobbleSuppressorBase::motions2
// as:     cv::videostab::WobbleSuppressorBase::motions2 (method) cv::videostab::WobbleSuppressorBase (trait) . motions2
// Return value: Vector[cv::Mat (boxed)]
cv_return_value_void_X cv_videostab_WobbleSuppressorBase_motions2_const(void* instance) {
    try {
        std::vector<cv::Mat> ret = reinterpret_cast<cv::videostab::WobbleSuppressorBase*>(instance)->motions2();
        return { Error::Code::StsOk, NULL, new std::vector<cv::Mat>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::videostab::WobbleSuppressorBase::setStabilizationMotions
// as:     cv::videostab::WobbleSuppressorBase::setStabilizationMotions (method) cv::videostab::WobbleSuppressorBase (trait) . setStabilizationMotions
// Arg ARG Vector[cv::Mat (boxed)] val= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_videostab_WobbleSuppressorBase_setStabilizationMotions_VectorOfMat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::videostab::WobbleSuppressorBase*>(instance)->setStabilizationMotions(*reinterpret_cast<const std::vector<cv::Mat>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::videostab::WobbleSuppressorBase::stabilizationMotions
// as:     cv::videostab::WobbleSuppressorBase::stabilizationMotions (method) cv::videostab::WobbleSuppressorBase (trait) . stabilizationMotions
// Return value: Vector[cv::Mat (boxed)]
cv_return_value_void_X cv_videostab_WobbleSuppressorBase_stabilizationMotions_const(void* instance) {
    try {
        std::vector<cv::Mat> ret = reinterpret_cast<cv::videostab::WobbleSuppressorBase*>(instance)->stabilizationMotions();
        return { Error::Code::StsOk, NULL, new std::vector<cv::Mat>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}



} // extern "C"

