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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/bgsegm.hpp"

extern "C" {

// parsed: cv::bgsegm::createBackgroundSubtractorCNT
// as:     cv::bgsegm::createBackgroundSubtractorCNT (function)
// Arg ARG Primitive(int) minPixelStability= Primitive(int) = 15
// Arg ARG Primitive(bool) useHistory= Primitive(bool) = true
// Arg ARG Primitive(int) maxPixelStability= Primitive(int) = 15*60
// Arg ARG Primitive(bool) isParallel= Primitive(bool) = true
// Return value: SmartPtr[cv::bgsegm::BackgroundSubtractorCNT (boxed)]
cv_return_value_void_X cv_bgsegm_createBackgroundSubtractorCNT_int_bool_int_bool(int minPixelStability, bool useHistory, int maxPixelStability, bool isParallel) {
    try {
        Ptr<cv::bgsegm::BackgroundSubtractorCNT> ret = cv::bgsegm::createBackgroundSubtractorCNT(minPixelStability, useHistory, maxPixelStability, isParallel);
        return { Error::Code::StsOk, NULL, new Ptr<cv::bgsegm::BackgroundSubtractorCNT>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::bgsegm::createBackgroundSubtractorGMG
// as:     cv::bgsegm::createBackgroundSubtractorGMG (function)
// Arg ARG Primitive(int) initializationFrames= Primitive(int) = 120
// Arg ARG Primitive(double) decisionThreshold= Primitive(double) = 0.8
// Return value: SmartPtr[cv::bgsegm::BackgroundSubtractorGMG (boxed)]
cv_return_value_void_X cv_bgsegm_createBackgroundSubtractorGMG_int_double(int initializationFrames, double decisionThreshold) {
    try {
        Ptr<cv::bgsegm::BackgroundSubtractorGMG> ret = cv::bgsegm::createBackgroundSubtractorGMG(initializationFrames, decisionThreshold);
        return { Error::Code::StsOk, NULL, new Ptr<cv::bgsegm::BackgroundSubtractorGMG>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::bgsegm::createBackgroundSubtractorGSOC
// as:     cv::bgsegm::createBackgroundSubtractorGSOC (function)
// Arg ARG Primitive(int) mc= Primitive(int) = LSBP_CAMERA_MOTION_COMPENSATION_NONE
// Arg ARG Primitive(int) nSamples= Primitive(int) = 20
// Arg ARG Primitive(float) replaceRate= Primitive(float) = 0.003f
// Arg ARG Primitive(float) propagationRate= Primitive(float) = 0.01f
// Arg ARG Primitive(int) hitsThreshold= Primitive(int) = 32
// Arg ARG Primitive(float) alpha= Primitive(float) = 0.01f
// Arg ARG Primitive(float) beta= Primitive(float) = 0.0022f
// Arg ARG Primitive(float) blinkingSupressionDecay= Primitive(float) = 0.1f
// Arg ARG Primitive(float) blinkingSupressionMultiplier= Primitive(float) = 0.1f
// Arg ARG Primitive(float) noiseRemovalThresholdFacBG= Primitive(float) = 0.0004f
// Arg ARG Primitive(float) noiseRemovalThresholdFacFG= Primitive(float) = 0.0008f
// Return value: SmartPtr[cv::bgsegm::BackgroundSubtractorGSOC (boxed)]
cv_return_value_void_X cv_bgsegm_createBackgroundSubtractorGSOC_int_int_float_float_int_float_float_float_float_float_float(int mc, int nSamples, float replaceRate, float propagationRate, int hitsThreshold, float alpha, float beta, float blinkingSupressionDecay, float blinkingSupressionMultiplier, float noiseRemovalThresholdFacBG, float noiseRemovalThresholdFacFG) {
    try {
        Ptr<cv::bgsegm::BackgroundSubtractorGSOC> ret = cv::bgsegm::createBackgroundSubtractorGSOC(mc, nSamples, replaceRate, propagationRate, hitsThreshold, alpha, beta, blinkingSupressionDecay, blinkingSupressionMultiplier, noiseRemovalThresholdFacBG, noiseRemovalThresholdFacFG);
        return { Error::Code::StsOk, NULL, new Ptr<cv::bgsegm::BackgroundSubtractorGSOC>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::bgsegm::createBackgroundSubtractorLSBP
// as:     cv::bgsegm::createBackgroundSubtractorLSBP (function)
// Arg ARG Primitive(int) mc= Primitive(int) = LSBP_CAMERA_MOTION_COMPENSATION_NONE
// Arg ARG Primitive(int) nSamples= Primitive(int) = 20
// Arg ARG Primitive(int) LSBPRadius= Primitive(int) = 16
// Arg ARG Primitive(float) Tlower= Primitive(float) = 2.0f
// Arg ARG Primitive(float) Tupper= Primitive(float) = 32.0f
// Arg ARG Primitive(float) Tinc= Primitive(float) = 1.0f
// Arg ARG Primitive(float) Tdec= Primitive(float) = 0.05f
// Arg ARG Primitive(float) Rscale= Primitive(float) = 10.0f
// Arg ARG Primitive(float) Rincdec= Primitive(float) = 0.005f
// Arg ARG Primitive(float) noiseRemovalThresholdFacBG= Primitive(float) = 0.0004f
// Arg ARG Primitive(float) noiseRemovalThresholdFacFG= Primitive(float) = 0.0008f
// Arg ARG Primitive(int) LSBPthreshold= Primitive(int) = 8
// Arg ARG Primitive(int) minCount= Primitive(int) = 2
// Return value: SmartPtr[cv::bgsegm::BackgroundSubtractorLSBP (boxed)]
cv_return_value_void_X cv_bgsegm_createBackgroundSubtractorLSBP_int_int_int_float_float_float_float_float_float_float_float_int_int(int mc, int nSamples, int LSBPRadius, float Tlower, float Tupper, float Tinc, float Tdec, float Rscale, float Rincdec, float noiseRemovalThresholdFacBG, float noiseRemovalThresholdFacFG, int LSBPthreshold, int minCount) {
    try {
        Ptr<cv::bgsegm::BackgroundSubtractorLSBP> ret = cv::bgsegm::createBackgroundSubtractorLSBP(mc, nSamples, LSBPRadius, Tlower, Tupper, Tinc, Tdec, Rscale, Rincdec, noiseRemovalThresholdFacBG, noiseRemovalThresholdFacFG, LSBPthreshold, minCount);
        return { Error::Code::StsOk, NULL, new Ptr<cv::bgsegm::BackgroundSubtractorLSBP>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::bgsegm::createBackgroundSubtractorMOG
// as:     cv::bgsegm::createBackgroundSubtractorMOG (function)
// Arg ARG Primitive(int) history= Primitive(int) = 200
// Arg ARG Primitive(int) nmixtures= Primitive(int) = 5
// Arg ARG Primitive(double) backgroundRatio= Primitive(double) = 0.7
// Arg ARG Primitive(double) noiseSigma= Primitive(double) = 0
// Return value: SmartPtr[cv::bgsegm::BackgroundSubtractorMOG (boxed)]
cv_return_value_void_X cv_bgsegm_createBackgroundSubtractorMOG_int_int_double_double(int history, int nmixtures, double backgroundRatio, double noiseSigma) {
    try {
        Ptr<cv::bgsegm::BackgroundSubtractorMOG> ret = cv::bgsegm::createBackgroundSubtractorMOG(history, nmixtures, backgroundRatio, noiseSigma);
        return { Error::Code::StsOk, NULL, new Ptr<cv::bgsegm::BackgroundSubtractorMOG>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::bgsegm::createSyntheticSequenceGenerator
// as:     cv::bgsegm::createSyntheticSequenceGenerator (function)
// Arg ARG cv::_InputArray (boxed) background= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) object= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) amplitude= Primitive(double) = 2.0
// Arg ARG Primitive(double) wavelength= Primitive(double) = 20.0
// Arg ARG Primitive(double) wavespeed= Primitive(double) = 0.2
// Arg ARG Primitive(double) objspeed= Primitive(double) = 6.0
// Return value: SmartPtr[cv::bgsegm::SyntheticSequenceGenerator (boxed)]
cv_return_value_void_X cv_bgsegm_createSyntheticSequenceGenerator__InputArray__InputArray_double_double_double_double(void* background, void* object, double amplitude, double wavelength, double wavespeed, double objspeed) {
    try {
        Ptr<cv::bgsegm::SyntheticSequenceGenerator> ret = cv::bgsegm::createSyntheticSequenceGenerator(*reinterpret_cast<const cv::_InputArray*>(background), *reinterpret_cast<const cv::_InputArray*>(object), amplitude, wavelength, wavespeed, objspeed);
        return { Error::Code::StsOk, NULL, new Ptr<cv::bgsegm::SyntheticSequenceGenerator>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::bgsegm::BackgroundSubtractorCNT::apply
// as:     cv::bgsegm::BackgroundSubtractorCNT::apply (method) cv::bgsegm::BackgroundSubtractorCNT (trait) . apply
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) fgmask= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) learningRate= Primitive(double) = -1
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorCNT_apply__InputArray__OutputArray_double(void* instance, void* image, void* fgmask, double learningRate) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorCNT*>(instance)->apply(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(fgmask), learningRate);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorCNT::getBackgroundImage
// as:     cv::bgsegm::BackgroundSubtractorCNT::getBackgroundImage (method) cv::bgsegm::BackgroundSubtractorCNT (trait) . getBackgroundImage
// Arg ARG cv::_OutputArray (boxed) backgroundImage= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorCNT_getBackgroundImage_const__OutputArray(void* instance, void* backgroundImage) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorCNT*>(instance)->getBackgroundImage(*reinterpret_cast<cv::_OutputArray*>(backgroundImage));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorCNT::getMinPixelStability
// as:     cv::bgsegm::BackgroundSubtractorCNT::getMinPixelStability (method) cv::bgsegm::BackgroundSubtractorCNT (trait) . getMinPixelStability
// Return value: Primitive(int)
cv_return_value_int cv_bgsegm_BackgroundSubtractorCNT_getMinPixelStability_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::bgsegm::BackgroundSubtractorCNT*>(instance)->getMinPixelStability();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::bgsegm::BackgroundSubtractorCNT::setMinPixelStability
// as:     cv::bgsegm::BackgroundSubtractorCNT::setMinPixelStability (method) cv::bgsegm::BackgroundSubtractorCNT (trait) . setMinPixelStability
// Arg ARG Primitive(int) value= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorCNT_setMinPixelStability_int(void* instance, int value) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorCNT*>(instance)->setMinPixelStability(value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorCNT::getMaxPixelStability
// as:     cv::bgsegm::BackgroundSubtractorCNT::getMaxPixelStability (method) cv::bgsegm::BackgroundSubtractorCNT (trait) . getMaxPixelStability
// Return value: Primitive(int)
cv_return_value_int cv_bgsegm_BackgroundSubtractorCNT_getMaxPixelStability_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::bgsegm::BackgroundSubtractorCNT*>(instance)->getMaxPixelStability();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::bgsegm::BackgroundSubtractorCNT::setMaxPixelStability
// as:     cv::bgsegm::BackgroundSubtractorCNT::setMaxPixelStability (method) cv::bgsegm::BackgroundSubtractorCNT (trait) . setMaxPixelStability
// Arg ARG Primitive(int) value= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorCNT_setMaxPixelStability_int(void* instance, int value) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorCNT*>(instance)->setMaxPixelStability(value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorCNT::getUseHistory
// as:     cv::bgsegm::BackgroundSubtractorCNT::getUseHistory (method) cv::bgsegm::BackgroundSubtractorCNT (trait) . getUseHistory
// Return value: Primitive(bool)
cv_return_value_bool cv_bgsegm_BackgroundSubtractorCNT_getUseHistory_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::bgsegm::BackgroundSubtractorCNT*>(instance)->getUseHistory();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::bgsegm::BackgroundSubtractorCNT::setUseHistory
// as:     cv::bgsegm::BackgroundSubtractorCNT::setUseHistory (method) cv::bgsegm::BackgroundSubtractorCNT (trait) . setUseHistory
// Arg ARG Primitive(bool) value= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorCNT_setUseHistory_bool(void* instance, bool value) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorCNT*>(instance)->setUseHistory(value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorCNT::getIsParallel
// as:     cv::bgsegm::BackgroundSubtractorCNT::getIsParallel (method) cv::bgsegm::BackgroundSubtractorCNT (trait) . getIsParallel
// Return value: Primitive(bool)
cv_return_value_bool cv_bgsegm_BackgroundSubtractorCNT_getIsParallel_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::bgsegm::BackgroundSubtractorCNT*>(instance)->getIsParallel();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::bgsegm::BackgroundSubtractorCNT::setIsParallel
// as:     cv::bgsegm::BackgroundSubtractorCNT::setIsParallel (method) cv::bgsegm::BackgroundSubtractorCNT (trait) . setIsParallel
// Arg ARG Primitive(bool) value= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorCNT_setIsParallel_bool(void* instance, bool value) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorCNT*>(instance)->setIsParallel(value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorGMG::getMaxFeatures
// as:     cv::bgsegm::BackgroundSubtractorGMG::getMaxFeatures (method) cv::bgsegm::BackgroundSubtractorGMG (trait) . getMaxFeatures
// Return value: Primitive(int)
cv_return_value_int cv_bgsegm_BackgroundSubtractorGMG_getMaxFeatures_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::bgsegm::BackgroundSubtractorGMG*>(instance)->getMaxFeatures();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::bgsegm::BackgroundSubtractorGMG::setMaxFeatures
// as:     cv::bgsegm::BackgroundSubtractorGMG::setMaxFeatures (method) cv::bgsegm::BackgroundSubtractorGMG (trait) . setMaxFeatures
// Arg ARG Primitive(int) maxFeatures= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorGMG_setMaxFeatures_int(void* instance, int maxFeatures) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorGMG*>(instance)->setMaxFeatures(maxFeatures);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorGMG::getDefaultLearningRate
// as:     cv::bgsegm::BackgroundSubtractorGMG::getDefaultLearningRate (method) cv::bgsegm::BackgroundSubtractorGMG (trait) . getDefaultLearningRate
// Return value: Primitive(double)
cv_return_value_double cv_bgsegm_BackgroundSubtractorGMG_getDefaultLearningRate_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::bgsegm::BackgroundSubtractorGMG*>(instance)->getDefaultLearningRate();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::bgsegm::BackgroundSubtractorGMG::setDefaultLearningRate
// as:     cv::bgsegm::BackgroundSubtractorGMG::setDefaultLearningRate (method) cv::bgsegm::BackgroundSubtractorGMG (trait) . setDefaultLearningRate
// Arg ARG Primitive(double) lr= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorGMG_setDefaultLearningRate_double(void* instance, double lr) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorGMG*>(instance)->setDefaultLearningRate(lr);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorGMG::getNumFrames
// as:     cv::bgsegm::BackgroundSubtractorGMG::getNumFrames (method) cv::bgsegm::BackgroundSubtractorGMG (trait) . getNumFrames
// Return value: Primitive(int)
cv_return_value_int cv_bgsegm_BackgroundSubtractorGMG_getNumFrames_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::bgsegm::BackgroundSubtractorGMG*>(instance)->getNumFrames();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::bgsegm::BackgroundSubtractorGMG::setNumFrames
// as:     cv::bgsegm::BackgroundSubtractorGMG::setNumFrames (method) cv::bgsegm::BackgroundSubtractorGMG (trait) . setNumFrames
// Arg ARG Primitive(int) nframes= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorGMG_setNumFrames_int(void* instance, int nframes) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorGMG*>(instance)->setNumFrames(nframes);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorGMG::getQuantizationLevels
// as:     cv::bgsegm::BackgroundSubtractorGMG::getQuantizationLevels (method) cv::bgsegm::BackgroundSubtractorGMG (trait) . getQuantizationLevels
// Return value: Primitive(int)
cv_return_value_int cv_bgsegm_BackgroundSubtractorGMG_getQuantizationLevels_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::bgsegm::BackgroundSubtractorGMG*>(instance)->getQuantizationLevels();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::bgsegm::BackgroundSubtractorGMG::setQuantizationLevels
// as:     cv::bgsegm::BackgroundSubtractorGMG::setQuantizationLevels (method) cv::bgsegm::BackgroundSubtractorGMG (trait) . setQuantizationLevels
// Arg ARG Primitive(int) nlevels= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorGMG_setQuantizationLevels_int(void* instance, int nlevels) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorGMG*>(instance)->setQuantizationLevels(nlevels);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorGMG::getBackgroundPrior
// as:     cv::bgsegm::BackgroundSubtractorGMG::getBackgroundPrior (method) cv::bgsegm::BackgroundSubtractorGMG (trait) . getBackgroundPrior
// Return value: Primitive(double)
cv_return_value_double cv_bgsegm_BackgroundSubtractorGMG_getBackgroundPrior_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::bgsegm::BackgroundSubtractorGMG*>(instance)->getBackgroundPrior();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::bgsegm::BackgroundSubtractorGMG::setBackgroundPrior
// as:     cv::bgsegm::BackgroundSubtractorGMG::setBackgroundPrior (method) cv::bgsegm::BackgroundSubtractorGMG (trait) . setBackgroundPrior
// Arg ARG Primitive(double) bgprior= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorGMG_setBackgroundPrior_double(void* instance, double bgprior) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorGMG*>(instance)->setBackgroundPrior(bgprior);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorGMG::getSmoothingRadius
// as:     cv::bgsegm::BackgroundSubtractorGMG::getSmoothingRadius (method) cv::bgsegm::BackgroundSubtractorGMG (trait) . getSmoothingRadius
// Return value: Primitive(int)
cv_return_value_int cv_bgsegm_BackgroundSubtractorGMG_getSmoothingRadius_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::bgsegm::BackgroundSubtractorGMG*>(instance)->getSmoothingRadius();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::bgsegm::BackgroundSubtractorGMG::setSmoothingRadius
// as:     cv::bgsegm::BackgroundSubtractorGMG::setSmoothingRadius (method) cv::bgsegm::BackgroundSubtractorGMG (trait) . setSmoothingRadius
// Arg ARG Primitive(int) radius= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorGMG_setSmoothingRadius_int(void* instance, int radius) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorGMG*>(instance)->setSmoothingRadius(radius);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorGMG::getDecisionThreshold
// as:     cv::bgsegm::BackgroundSubtractorGMG::getDecisionThreshold (method) cv::bgsegm::BackgroundSubtractorGMG (trait) . getDecisionThreshold
// Return value: Primitive(double)
cv_return_value_double cv_bgsegm_BackgroundSubtractorGMG_getDecisionThreshold_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::bgsegm::BackgroundSubtractorGMG*>(instance)->getDecisionThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::bgsegm::BackgroundSubtractorGMG::setDecisionThreshold
// as:     cv::bgsegm::BackgroundSubtractorGMG::setDecisionThreshold (method) cv::bgsegm::BackgroundSubtractorGMG (trait) . setDecisionThreshold
// Arg ARG Primitive(double) thresh= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorGMG_setDecisionThreshold_double(void* instance, double thresh) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorGMG*>(instance)->setDecisionThreshold(thresh);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorGMG::getUpdateBackgroundModel
// as:     cv::bgsegm::BackgroundSubtractorGMG::getUpdateBackgroundModel (method) cv::bgsegm::BackgroundSubtractorGMG (trait) . getUpdateBackgroundModel
// Return value: Primitive(bool)
cv_return_value_bool cv_bgsegm_BackgroundSubtractorGMG_getUpdateBackgroundModel_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::bgsegm::BackgroundSubtractorGMG*>(instance)->getUpdateBackgroundModel();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::bgsegm::BackgroundSubtractorGMG::setUpdateBackgroundModel
// as:     cv::bgsegm::BackgroundSubtractorGMG::setUpdateBackgroundModel (method) cv::bgsegm::BackgroundSubtractorGMG (trait) . setUpdateBackgroundModel
// Arg ARG Primitive(bool) update= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorGMG_setUpdateBackgroundModel_bool(void* instance, bool update) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorGMG*>(instance)->setUpdateBackgroundModel(update);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorGMG::getMinVal
// as:     cv::bgsegm::BackgroundSubtractorGMG::getMinVal (method) cv::bgsegm::BackgroundSubtractorGMG (trait) . getMinVal
// Return value: Primitive(double)
cv_return_value_double cv_bgsegm_BackgroundSubtractorGMG_getMinVal_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::bgsegm::BackgroundSubtractorGMG*>(instance)->getMinVal();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::bgsegm::BackgroundSubtractorGMG::setMinVal
// as:     cv::bgsegm::BackgroundSubtractorGMG::setMinVal (method) cv::bgsegm::BackgroundSubtractorGMG (trait) . setMinVal
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorGMG_setMinVal_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorGMG*>(instance)->setMinVal(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorGMG::getMaxVal
// as:     cv::bgsegm::BackgroundSubtractorGMG::getMaxVal (method) cv::bgsegm::BackgroundSubtractorGMG (trait) . getMaxVal
// Return value: Primitive(double)
cv_return_value_double cv_bgsegm_BackgroundSubtractorGMG_getMaxVal_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::bgsegm::BackgroundSubtractorGMG*>(instance)->getMaxVal();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::bgsegm::BackgroundSubtractorGMG::setMaxVal
// as:     cv::bgsegm::BackgroundSubtractorGMG::setMaxVal (method) cv::bgsegm::BackgroundSubtractorGMG (trait) . setMaxVal
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorGMG_setMaxVal_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorGMG*>(instance)->setMaxVal(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::bgsegm::BackgroundSubtractorGSOC
void cv_BackgroundSubtractorGSOC_delete(void* instance) {
    delete reinterpret_cast<cv::bgsegm::BackgroundSubtractorGSOC*>(instance);
}
// parsed: cv::bgsegm::BackgroundSubtractorGSOC::apply
// as:     cv::bgsegm::BackgroundSubtractorGSOC::apply (method) cv::bgsegm::BackgroundSubtractorGSOC . apply
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) fgmask= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) learningRate= Primitive(double) = -1
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorGSOC_apply__InputArray__OutputArray_double(void* instance, void* image, void* fgmask, double learningRate) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorGSOC*>(instance)->apply(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(fgmask), learningRate);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorGSOC::getBackgroundImage
// as:     cv::bgsegm::BackgroundSubtractorGSOC::getBackgroundImage (method) cv::bgsegm::BackgroundSubtractorGSOC . getBackgroundImage
// Arg ARG cv::_OutputArray (boxed) backgroundImage= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorGSOC_getBackgroundImage_const__OutputArray(void* instance, void* backgroundImage) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorGSOC*>(instance)->getBackgroundImage(*reinterpret_cast<cv::_OutputArray*>(backgroundImage));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::bgsegm::BackgroundSubtractorLSBP
void cv_BackgroundSubtractorLSBP_delete(void* instance) {
    delete reinterpret_cast<cv::bgsegm::BackgroundSubtractorLSBP*>(instance);
}
// parsed: cv::bgsegm::BackgroundSubtractorLSBP::apply
// as:     cv::bgsegm::BackgroundSubtractorLSBP::apply (method) cv::bgsegm::BackgroundSubtractorLSBP . apply
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) fgmask= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) learningRate= Primitive(double) = -1
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorLSBP_apply__InputArray__OutputArray_double(void* instance, void* image, void* fgmask, double learningRate) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorLSBP*>(instance)->apply(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(fgmask), learningRate);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorLSBP::getBackgroundImage
// as:     cv::bgsegm::BackgroundSubtractorLSBP::getBackgroundImage (method) cv::bgsegm::BackgroundSubtractorLSBP . getBackgroundImage
// Arg ARG cv::_OutputArray (boxed) backgroundImage= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorLSBP_getBackgroundImage_const__OutputArray(void* instance, void* backgroundImage) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorLSBP*>(instance)->getBackgroundImage(*reinterpret_cast<cv::_OutputArray*>(backgroundImage));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::bgsegm::BackgroundSubtractorLSBPDesc
void cv_BackgroundSubtractorLSBPDesc_delete(void* instance) {
    delete reinterpret_cast<cv::bgsegm::BackgroundSubtractorLSBPDesc*>(instance);
}
// parsed: cv::bgsegm::BackgroundSubtractorLSBPDesc::calcLocalSVDValues
// as:     cv::bgsegm::BackgroundSubtractorLSBPDesc::calcLocalSVDValues (method) cv::bgsegm::BackgroundSubtractorLSBPDesc . calcLocalSVDValues
// Arg ARG cv::_OutputArray (boxed) localSVDValues= cv::_OutputArray (boxed) = 
// Arg ARG cv::Mat (boxed) frame= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorLSBPDesc_calcLocalSVDValues__OutputArray_Mat(void* localSVDValues, void* frame) {
    try {
        cv::bgsegm::BackgroundSubtractorLSBPDesc::calcLocalSVDValues(*reinterpret_cast<cv::_OutputArray*>(localSVDValues), *reinterpret_cast<const cv::Mat*>(frame));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorLSBPDesc::computeFromLocalSVDValues
// as:     cv::bgsegm::BackgroundSubtractorLSBPDesc::computeFromLocalSVDValues (method) cv::bgsegm::BackgroundSubtractorLSBPDesc . computeFromLocalSVDValues
// Arg ARG cv::_OutputArray (boxed) desc= cv::_OutputArray (boxed) = 
// Arg ARG cv::Mat (boxed) localSVDValues= cv::Mat (boxed) = 
// Arg ARG RawPtr[cv::Point2i (simple)] * LSBPSamplePoints= (ptr) RawPtr[cv::Point2i (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorLSBPDesc_computeFromLocalSVDValues__OutputArray_Mat_const_Point2i_X(void* desc, void* localSVDValues, const cv::Point2i* LSBPSamplePoints) {
    try {
        cv::bgsegm::BackgroundSubtractorLSBPDesc::computeFromLocalSVDValues(*reinterpret_cast<cv::_OutputArray*>(desc), *reinterpret_cast<const cv::Mat*>(localSVDValues), reinterpret_cast<const cv::Point2i*>(LSBPSamplePoints));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorLSBPDesc::compute
// as:     cv::bgsegm::BackgroundSubtractorLSBPDesc::compute (method) cv::bgsegm::BackgroundSubtractorLSBPDesc . compute
// Arg ARG cv::_OutputArray (boxed) desc= cv::_OutputArray (boxed) = 
// Arg ARG cv::Mat (boxed) frame= cv::Mat (boxed) = 
// Arg ARG RawPtr[cv::Point2i (simple)] * LSBPSamplePoints= (ptr) RawPtr[cv::Point2i (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorLSBPDesc_compute__OutputArray_Mat_const_Point2i_X(void* desc, void* frame, const cv::Point2i* LSBPSamplePoints) {
    try {
        cv::bgsegm::BackgroundSubtractorLSBPDesc::compute(*reinterpret_cast<cv::_OutputArray*>(desc), *reinterpret_cast<const cv::Mat*>(frame), reinterpret_cast<const cv::Point2i*>(LSBPSamplePoints));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorMOG::getHistory
// as:     cv::bgsegm::BackgroundSubtractorMOG::getHistory (method) cv::bgsegm::BackgroundSubtractorMOG (trait) . getHistory
// Return value: Primitive(int)
cv_return_value_int cv_bgsegm_BackgroundSubtractorMOG_getHistory_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::bgsegm::BackgroundSubtractorMOG*>(instance)->getHistory();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::bgsegm::BackgroundSubtractorMOG::setHistory
// as:     cv::bgsegm::BackgroundSubtractorMOG::setHistory (method) cv::bgsegm::BackgroundSubtractorMOG (trait) . setHistory
// Arg ARG Primitive(int) nframes= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorMOG_setHistory_int(void* instance, int nframes) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorMOG*>(instance)->setHistory(nframes);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorMOG::getNMixtures
// as:     cv::bgsegm::BackgroundSubtractorMOG::getNMixtures (method) cv::bgsegm::BackgroundSubtractorMOG (trait) . getNMixtures
// Return value: Primitive(int)
cv_return_value_int cv_bgsegm_BackgroundSubtractorMOG_getNMixtures_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::bgsegm::BackgroundSubtractorMOG*>(instance)->getNMixtures();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::bgsegm::BackgroundSubtractorMOG::setNMixtures
// as:     cv::bgsegm::BackgroundSubtractorMOG::setNMixtures (method) cv::bgsegm::BackgroundSubtractorMOG (trait) . setNMixtures
// Arg ARG Primitive(int) nmix= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorMOG_setNMixtures_int(void* instance, int nmix) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorMOG*>(instance)->setNMixtures(nmix);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorMOG::getBackgroundRatio
// as:     cv::bgsegm::BackgroundSubtractorMOG::getBackgroundRatio (method) cv::bgsegm::BackgroundSubtractorMOG (trait) . getBackgroundRatio
// Return value: Primitive(double)
cv_return_value_double cv_bgsegm_BackgroundSubtractorMOG_getBackgroundRatio_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::bgsegm::BackgroundSubtractorMOG*>(instance)->getBackgroundRatio();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::bgsegm::BackgroundSubtractorMOG::setBackgroundRatio
// as:     cv::bgsegm::BackgroundSubtractorMOG::setBackgroundRatio (method) cv::bgsegm::BackgroundSubtractorMOG (trait) . setBackgroundRatio
// Arg ARG Primitive(double) backgroundRatio= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorMOG_setBackgroundRatio_double(void* instance, double backgroundRatio) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorMOG*>(instance)->setBackgroundRatio(backgroundRatio);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bgsegm::BackgroundSubtractorMOG::getNoiseSigma
// as:     cv::bgsegm::BackgroundSubtractorMOG::getNoiseSigma (method) cv::bgsegm::BackgroundSubtractorMOG (trait) . getNoiseSigma
// Return value: Primitive(double)
cv_return_value_double cv_bgsegm_BackgroundSubtractorMOG_getNoiseSigma_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::bgsegm::BackgroundSubtractorMOG*>(instance)->getNoiseSigma();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::bgsegm::BackgroundSubtractorMOG::setNoiseSigma
// as:     cv::bgsegm::BackgroundSubtractorMOG::setNoiseSigma (method) cv::bgsegm::BackgroundSubtractorMOG (trait) . setNoiseSigma
// Arg ARG Primitive(double) noiseSigma= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_BackgroundSubtractorMOG_setNoiseSigma_double(void* instance, double noiseSigma) {
    try {
        reinterpret_cast<cv::bgsegm::BackgroundSubtractorMOG*>(instance)->setNoiseSigma(noiseSigma);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::bgsegm::SyntheticSequenceGenerator
void cv_SyntheticSequenceGenerator_delete(void* instance) {
    delete reinterpret_cast<cv::bgsegm::SyntheticSequenceGenerator*>(instance);
}
// parsed: cv::bgsegm::SyntheticSequenceGenerator::SyntheticSequenceGenerator
// as:     cv::bgsegm::SyntheticSequenceGenerator::SyntheticSequenceGenerator (constructor) cv::bgsegm::SyntheticSequenceGenerator . new
// Arg ARG cv::_InputArray (boxed) background= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) object= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) amplitude= Primitive(double) = 
// Arg ARG Primitive(double) wavelength= Primitive(double) = 
// Arg ARG Primitive(double) wavespeed= Primitive(double) = 
// Arg ARG Primitive(double) objspeed= Primitive(double) = 
// Return value: cv::bgsegm::SyntheticSequenceGenerator (boxed)
cv_return_value_void_X cv_bgsegm_SyntheticSequenceGenerator_SyntheticSequenceGenerator__InputArray__InputArray_double_double_double_double(void* background, void* object, double amplitude, double wavelength, double wavespeed, double objspeed) {
    try {
        cv::bgsegm::SyntheticSequenceGenerator* ret = new cv::bgsegm::SyntheticSequenceGenerator(*reinterpret_cast<const cv::_InputArray*>(background), *reinterpret_cast<const cv::_InputArray*>(object), amplitude, wavelength, wavespeed, objspeed);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::bgsegm::SyntheticSequenceGenerator::getNextFrame
// as:     cv::bgsegm::SyntheticSequenceGenerator::getNextFrame (method) cv::bgsegm::SyntheticSequenceGenerator . getNextFrame
// Arg ARG cv::_OutputArray (boxed) frame= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) gtMask= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_bgsegm_SyntheticSequenceGenerator_getNextFrame__OutputArray__OutputArray(void* instance, void* frame, void* gtMask) {
    try {
        reinterpret_cast<cv::bgsegm::SyntheticSequenceGenerator*>(instance)->getNextFrame(*reinterpret_cast<cv::_OutputArray*>(frame), *reinterpret_cast<cv::_OutputArray*>(gtMask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}



} // extern "C"

