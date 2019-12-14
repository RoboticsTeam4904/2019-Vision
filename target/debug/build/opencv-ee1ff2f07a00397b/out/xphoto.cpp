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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/xphoto.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/xphoto/bm3d_image_denoising.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/xphoto/dct_image_denoising.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/xphoto/inpainting.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/xphoto/oilpainting.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/xphoto/tonemap.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/xphoto/white_balance.hpp"

extern "C" {

// parsed: cv::xphoto::applyChannelGains
// as:     cv::xphoto::applyChannelGains (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(float) gainB= Primitive(float) = 
// Arg ARG Primitive(float) gainG= Primitive(float) = 
// Arg ARG Primitive(float) gainR= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_applyChannelGains__InputArray__OutputArray_float_float_float(void* src, void* dst, float gainB, float gainG, float gainR) {
    try {
        cv::xphoto::applyChannelGains(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), gainB, gainG, gainR);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::bm3dDenoising
// as:     cv::xphoto::bm3dDenoising (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) dstStep1= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dstStep2= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(float) h= Primitive(float) = 1
// Arg ARG Primitive(int) templateWindowSize= Primitive(int) = 4
// Arg ARG Primitive(int) searchWindowSize= Primitive(int) = 16
// Arg ARG Primitive(int) blockMatchingStep1= Primitive(int) = 2500
// Arg ARG Primitive(int) blockMatchingStep2= Primitive(int) = 400
// Arg ARG Primitive(int) groupSize= Primitive(int) = 8
// Arg ARG Primitive(int) slidingStep= Primitive(int) = 1
// Arg ARG Primitive(float) beta= Primitive(float) = 2.0f
// Arg ARG Primitive(int) normType= Primitive(int) = cv::NORM_L2
// Arg ARG Primitive(int) step= Primitive(int) = cv::xphoto::BM3D_STEPALL
// Arg ARG Primitive(int) transformType= Primitive(int) = cv::xphoto::HAAR
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_bm3dDenoising__InputArray__InputOutputArray__OutputArray_float_int_int_int_int_int_int_float_int_int_int(void* src, void* dstStep1, void* dstStep2, float h, int templateWindowSize, int searchWindowSize, int blockMatchingStep1, int blockMatchingStep2, int groupSize, int slidingStep, float beta, int normType, int step, int transformType) {
    try {
        cv::xphoto::bm3dDenoising(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_InputOutputArray*>(dstStep1), *reinterpret_cast<cv::_OutputArray*>(dstStep2), h, templateWindowSize, searchWindowSize, blockMatchingStep1, blockMatchingStep2, groupSize, slidingStep, beta, normType, step, transformType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::bm3dDenoising
// as:     cv::xphoto::bm3dDenoising (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(float) h= Primitive(float) = 1
// Arg ARG Primitive(int) templateWindowSize= Primitive(int) = 4
// Arg ARG Primitive(int) searchWindowSize= Primitive(int) = 16
// Arg ARG Primitive(int) blockMatchingStep1= Primitive(int) = 2500
// Arg ARG Primitive(int) blockMatchingStep2= Primitive(int) = 400
// Arg ARG Primitive(int) groupSize= Primitive(int) = 8
// Arg ARG Primitive(int) slidingStep= Primitive(int) = 1
// Arg ARG Primitive(float) beta= Primitive(float) = 2.0f
// Arg ARG Primitive(int) normType= Primitive(int) = cv::NORM_L2
// Arg ARG Primitive(int) step= Primitive(int) = cv::xphoto::BM3D_STEPALL
// Arg ARG Primitive(int) transformType= Primitive(int) = cv::xphoto::HAAR
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_bm3dDenoising__InputArray__OutputArray_float_int_int_int_int_int_int_float_int_int_int(void* src, void* dst, float h, int templateWindowSize, int searchWindowSize, int blockMatchingStep1, int blockMatchingStep2, int groupSize, int slidingStep, float beta, int normType, int step, int transformType) {
    try {
        cv::xphoto::bm3dDenoising(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), h, templateWindowSize, searchWindowSize, blockMatchingStep1, blockMatchingStep2, groupSize, slidingStep, beta, normType, step, transformType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::createGrayworldWB
// as:     cv::xphoto::createGrayworldWB (function)
// Return value: SmartPtr[cv::xphoto::GrayworldWB (boxed)]
cv_return_value_void_X cv_xphoto_createGrayworldWB() {
    try {
        Ptr<cv::xphoto::GrayworldWB> ret = cv::xphoto::createGrayworldWB();
        return { Error::Code::StsOk, NULL, new Ptr<cv::xphoto::GrayworldWB>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::xphoto::createLearningBasedWB
// as:     cv::xphoto::createLearningBasedWB (function)
// Arg ARG string path_to_model= string = String()
// Return value: SmartPtr[cv::xphoto::LearningBasedWB (boxed)]
cv_return_value_void_X cv_xphoto_createLearningBasedWB_String(const char* path_to_model) {
    try {
        Ptr<cv::xphoto::LearningBasedWB> ret = cv::xphoto::createLearningBasedWB(String(path_to_model));
        return { Error::Code::StsOk, NULL, new Ptr<cv::xphoto::LearningBasedWB>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::xphoto::createSimpleWB
// as:     cv::xphoto::createSimpleWB (function)
// Return value: SmartPtr[cv::xphoto::SimpleWB (boxed)]
cv_return_value_void_X cv_xphoto_createSimpleWB() {
    try {
        Ptr<cv::xphoto::SimpleWB> ret = cv::xphoto::createSimpleWB();
        return { Error::Code::StsOk, NULL, new Ptr<cv::xphoto::SimpleWB>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::xphoto::createTonemapDurand
// as:     cv::xphoto::createTonemapDurand (function)
// Arg ARG Primitive(float) gamma= Primitive(float) = 1.0f
// Arg ARG Primitive(float) contrast= Primitive(float) = 4.0f
// Arg ARG Primitive(float) saturation= Primitive(float) = 1.0f
// Arg ARG Primitive(float) sigma_space= Primitive(float) = 2.0f
// Arg ARG Primitive(float) sigma_color= Primitive(float) = 2.0f
// Return value: SmartPtr[cv::xphoto::TonemapDurand (boxed)]
cv_return_value_void_X cv_xphoto_createTonemapDurand_float_float_float_float_float(float gamma, float contrast, float saturation, float sigma_space, float sigma_color) {
    try {
        Ptr<cv::xphoto::TonemapDurand> ret = cv::xphoto::createTonemapDurand(gamma, contrast, saturation, sigma_space, sigma_color);
        return { Error::Code::StsOk, NULL, new Ptr<cv::xphoto::TonemapDurand>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::xphoto::dctDenoising
// as:     cv::xphoto::dctDenoising (function)
// Arg ARG cv::Mat (boxed) src= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst= cv::Mat (boxed) = 
// Arg ARG Primitive(double) sigma= Primitive(double) = 
// Arg ARG Primitive(int) psize= Primitive(int) = 16
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_dctDenoising_Mat_Mat_double_int(void* src, void* dst, double sigma, int psize) {
    try {
        cv::xphoto::dctDenoising(*reinterpret_cast<const cv::Mat*>(src), *reinterpret_cast<cv::Mat*>(dst), sigma, psize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::inpaint
// as:     cv::xphoto::inpaint (function)
// Arg ARG cv::Mat (boxed) src= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) mask= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst= cv::Mat (boxed) = 
// Arg ARG Primitive(int) algorithmType= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_inpaint_Mat_Mat_Mat_int(void* src, void* mask, void* dst, int algorithmType) {
    try {
        cv::xphoto::inpaint(*reinterpret_cast<const cv::Mat*>(src), *reinterpret_cast<const cv::Mat*>(mask), *reinterpret_cast<cv::Mat*>(dst), algorithmType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::oilPainting
// as:     cv::xphoto::oilPainting (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) size= Primitive(int) = 
// Arg ARG Primitive(int) dynRatio= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_oilPainting__InputArray__OutputArray_int_int(void* src, void* dst, int size, int dynRatio) {
    try {
        cv::xphoto::oilPainting(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), size, dynRatio);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::oilPainting
// as:     cv::xphoto::oilPainting (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) size= Primitive(int) = 
// Arg ARG Primitive(int) dynRatio= Primitive(int) = 
// Arg ARG Primitive(int) code= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_oilPainting__InputArray__OutputArray_int_int_int(void* src, void* dst, int size, int dynRatio, int code) {
    try {
        cv::xphoto::oilPainting(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), size, dynRatio, code);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::GrayworldWB::getSaturationThreshold
// as:     cv::xphoto::GrayworldWB::getSaturationThreshold (method) cv::xphoto::GrayworldWB (trait) . getSaturationThreshold
// Return value: Primitive(float)
cv_return_value_float cv_xphoto_GrayworldWB_getSaturationThreshold_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xphoto::GrayworldWB*>(instance)->getSaturationThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xphoto::GrayworldWB::setSaturationThreshold
// as:     cv::xphoto::GrayworldWB::setSaturationThreshold (method) cv::xphoto::GrayworldWB (trait) . setSaturationThreshold
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_GrayworldWB_setSaturationThreshold_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::xphoto::GrayworldWB*>(instance)->setSaturationThreshold(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::LearningBasedWB::extractSimpleFeatures
// as:     cv::xphoto::LearningBasedWB::extractSimpleFeatures (method) cv::xphoto::LearningBasedWB (trait) . extractSimpleFeatures
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_LearningBasedWB_extractSimpleFeatures__InputArray__OutputArray(void* instance, void* src, void* dst) {
    try {
        reinterpret_cast<cv::xphoto::LearningBasedWB*>(instance)->extractSimpleFeatures(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::LearningBasedWB::getRangeMaxVal
// as:     cv::xphoto::LearningBasedWB::getRangeMaxVal (method) cv::xphoto::LearningBasedWB (trait) . getRangeMaxVal
// Return value: Primitive(int)
cv_return_value_int cv_xphoto_LearningBasedWB_getRangeMaxVal_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::xphoto::LearningBasedWB*>(instance)->getRangeMaxVal();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::xphoto::LearningBasedWB::setRangeMaxVal
// as:     cv::xphoto::LearningBasedWB::setRangeMaxVal (method) cv::xphoto::LearningBasedWB (trait) . setRangeMaxVal
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_LearningBasedWB_setRangeMaxVal_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::xphoto::LearningBasedWB*>(instance)->setRangeMaxVal(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::LearningBasedWB::getSaturationThreshold
// as:     cv::xphoto::LearningBasedWB::getSaturationThreshold (method) cv::xphoto::LearningBasedWB (trait) . getSaturationThreshold
// Return value: Primitive(float)
cv_return_value_float cv_xphoto_LearningBasedWB_getSaturationThreshold_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xphoto::LearningBasedWB*>(instance)->getSaturationThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xphoto::LearningBasedWB::setSaturationThreshold
// as:     cv::xphoto::LearningBasedWB::setSaturationThreshold (method) cv::xphoto::LearningBasedWB (trait) . setSaturationThreshold
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_LearningBasedWB_setSaturationThreshold_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::xphoto::LearningBasedWB*>(instance)->setSaturationThreshold(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::LearningBasedWB::getHistBinNum
// as:     cv::xphoto::LearningBasedWB::getHistBinNum (method) cv::xphoto::LearningBasedWB (trait) . getHistBinNum
// Return value: Primitive(int)
cv_return_value_int cv_xphoto_LearningBasedWB_getHistBinNum_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::xphoto::LearningBasedWB*>(instance)->getHistBinNum();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::xphoto::LearningBasedWB::setHistBinNum
// as:     cv::xphoto::LearningBasedWB::setHistBinNum (method) cv::xphoto::LearningBasedWB (trait) . setHistBinNum
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_LearningBasedWB_setHistBinNum_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::xphoto::LearningBasedWB*>(instance)->setHistBinNum(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::SimpleWB::getInputMin
// as:     cv::xphoto::SimpleWB::getInputMin (method) cv::xphoto::SimpleWB (trait) . getInputMin
// Return value: Primitive(float)
cv_return_value_float cv_xphoto_SimpleWB_getInputMin_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xphoto::SimpleWB*>(instance)->getInputMin();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xphoto::SimpleWB::setInputMin
// as:     cv::xphoto::SimpleWB::setInputMin (method) cv::xphoto::SimpleWB (trait) . setInputMin
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_SimpleWB_setInputMin_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::xphoto::SimpleWB*>(instance)->setInputMin(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::SimpleWB::getInputMax
// as:     cv::xphoto::SimpleWB::getInputMax (method) cv::xphoto::SimpleWB (trait) . getInputMax
// Return value: Primitive(float)
cv_return_value_float cv_xphoto_SimpleWB_getInputMax_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xphoto::SimpleWB*>(instance)->getInputMax();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xphoto::SimpleWB::setInputMax
// as:     cv::xphoto::SimpleWB::setInputMax (method) cv::xphoto::SimpleWB (trait) . setInputMax
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_SimpleWB_setInputMax_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::xphoto::SimpleWB*>(instance)->setInputMax(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::SimpleWB::getOutputMin
// as:     cv::xphoto::SimpleWB::getOutputMin (method) cv::xphoto::SimpleWB (trait) . getOutputMin
// Return value: Primitive(float)
cv_return_value_float cv_xphoto_SimpleWB_getOutputMin_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xphoto::SimpleWB*>(instance)->getOutputMin();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xphoto::SimpleWB::setOutputMin
// as:     cv::xphoto::SimpleWB::setOutputMin (method) cv::xphoto::SimpleWB (trait) . setOutputMin
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_SimpleWB_setOutputMin_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::xphoto::SimpleWB*>(instance)->setOutputMin(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::SimpleWB::getOutputMax
// as:     cv::xphoto::SimpleWB::getOutputMax (method) cv::xphoto::SimpleWB (trait) . getOutputMax
// Return value: Primitive(float)
cv_return_value_float cv_xphoto_SimpleWB_getOutputMax_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xphoto::SimpleWB*>(instance)->getOutputMax();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xphoto::SimpleWB::setOutputMax
// as:     cv::xphoto::SimpleWB::setOutputMax (method) cv::xphoto::SimpleWB (trait) . setOutputMax
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_SimpleWB_setOutputMax_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::xphoto::SimpleWB*>(instance)->setOutputMax(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::SimpleWB::getP
// as:     cv::xphoto::SimpleWB::getP (method) cv::xphoto::SimpleWB (trait) . getP
// Return value: Primitive(float)
cv_return_value_float cv_xphoto_SimpleWB_getP_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xphoto::SimpleWB*>(instance)->getP();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xphoto::SimpleWB::setP
// as:     cv::xphoto::SimpleWB::setP (method) cv::xphoto::SimpleWB (trait) . setP
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_SimpleWB_setP_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::xphoto::SimpleWB*>(instance)->setP(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::TonemapDurand::getSaturation
// as:     cv::xphoto::TonemapDurand::getSaturation (method) cv::xphoto::TonemapDurand (trait) . getSaturation
// Return value: Primitive(float)
cv_return_value_float cv_xphoto_TonemapDurand_getSaturation_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xphoto::TonemapDurand*>(instance)->getSaturation();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xphoto::TonemapDurand::setSaturation
// as:     cv::xphoto::TonemapDurand::setSaturation (method) cv::xphoto::TonemapDurand (trait) . setSaturation
// Arg ARG Primitive(float) saturation= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_TonemapDurand_setSaturation_float(void* instance, float saturation) {
    try {
        reinterpret_cast<cv::xphoto::TonemapDurand*>(instance)->setSaturation(saturation);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::TonemapDurand::getContrast
// as:     cv::xphoto::TonemapDurand::getContrast (method) cv::xphoto::TonemapDurand (trait) . getContrast
// Return value: Primitive(float)
cv_return_value_float cv_xphoto_TonemapDurand_getContrast_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xphoto::TonemapDurand*>(instance)->getContrast();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xphoto::TonemapDurand::setContrast
// as:     cv::xphoto::TonemapDurand::setContrast (method) cv::xphoto::TonemapDurand (trait) . setContrast
// Arg ARG Primitive(float) contrast= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_TonemapDurand_setContrast_float(void* instance, float contrast) {
    try {
        reinterpret_cast<cv::xphoto::TonemapDurand*>(instance)->setContrast(contrast);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::TonemapDurand::getSigmaSpace
// as:     cv::xphoto::TonemapDurand::getSigmaSpace (method) cv::xphoto::TonemapDurand (trait) . getSigmaSpace
// Return value: Primitive(float)
cv_return_value_float cv_xphoto_TonemapDurand_getSigmaSpace_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xphoto::TonemapDurand*>(instance)->getSigmaSpace();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xphoto::TonemapDurand::setSigmaSpace
// as:     cv::xphoto::TonemapDurand::setSigmaSpace (method) cv::xphoto::TonemapDurand (trait) . setSigmaSpace
// Arg ARG Primitive(float) sigma_space= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_TonemapDurand_setSigmaSpace_float(void* instance, float sigma_space) {
    try {
        reinterpret_cast<cv::xphoto::TonemapDurand*>(instance)->setSigmaSpace(sigma_space);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::TonemapDurand::getSigmaColor
// as:     cv::xphoto::TonemapDurand::getSigmaColor (method) cv::xphoto::TonemapDurand (trait) . getSigmaColor
// Return value: Primitive(float)
cv_return_value_float cv_xphoto_TonemapDurand_getSigmaColor_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xphoto::TonemapDurand*>(instance)->getSigmaColor();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xphoto::TonemapDurand::setSigmaColor
// as:     cv::xphoto::TonemapDurand::setSigmaColor (method) cv::xphoto::TonemapDurand (trait) . setSigmaColor
// Arg ARG Primitive(float) sigma_color= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_TonemapDurand_setSigmaColor_float(void* instance, float sigma_color) {
    try {
        reinterpret_cast<cv::xphoto::TonemapDurand*>(instance)->setSigmaColor(sigma_color);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xphoto::WhiteBalancer::balanceWhite
// as:     cv::xphoto::WhiteBalancer::balanceWhite (method) cv::xphoto::WhiteBalancer (trait) . balanceWhite
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_xphoto_WhiteBalancer_balanceWhite__InputArray__OutputArray(void* instance, void* src, void* dst) {
    try {
        reinterpret_cast<cv::xphoto::WhiteBalancer*>(instance)->balanceWhite(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}



} // extern "C"

