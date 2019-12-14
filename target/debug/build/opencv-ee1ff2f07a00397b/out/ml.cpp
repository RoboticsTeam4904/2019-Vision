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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/ml.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/ml/ml.hpp"

extern "C" {

// parsed: cv::ml::createConcentricSpheresTestSet
// as:     cv::ml::createConcentricSpheresTestSet (function)
// Arg ARG Primitive(int) nsamples= Primitive(int) = 
// Arg ARG Primitive(int) nfeatures= Primitive(int) = 
// Arg ARG Primitive(int) nclasses= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) samples= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) responses= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_createConcentricSpheresTestSet_int_int_int__OutputArray__OutputArray(int nsamples, int nfeatures, int nclasses, void* samples, void* responses) {
    try {
        cv::ml::createConcentricSpheresTestSet(nsamples, nfeatures, nclasses, *reinterpret_cast<cv::_OutputArray*>(samples), *reinterpret_cast<cv::_OutputArray*>(responses));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::randMVNormal
// as:     cv::ml::randMVNormal (function)
// Arg ARG cv::_InputArray (boxed) mean= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cov= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) nsamples= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) samples= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_randMVNormal__InputArray__InputArray_int__OutputArray(void* mean, void* cov, int nsamples, void* samples) {
    try {
        cv::ml::randMVNormal(*reinterpret_cast<const cv::_InputArray*>(mean), *reinterpret_cast<const cv::_InputArray*>(cov), nsamples, *reinterpret_cast<cv::_OutputArray*>(samples));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::ANN_MLP::setTrainMethod
// as:     cv::ml::ANN_MLP::setTrainMethod (method) cv::ml::ANN_MLP (trait) . setTrainMethod
// Arg ARG Primitive(int) method= Primitive(int) = 
// Arg ARG Primitive(double) param1= Primitive(double) = 0
// Arg ARG Primitive(double) param2= Primitive(double) = 0
// Return value: Primitive(void)
cv_return_value_void cv_ml_ANN_MLP_setTrainMethod_int_double_double(void* instance, int method, double param1, double param2) {
    try {
        reinterpret_cast<cv::ml::ANN_MLP*>(instance)->setTrainMethod(method, param1, param2);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::ANN_MLP::getTrainMethod
// as:     cv::ml::ANN_MLP::getTrainMethod (method) cv::ml::ANN_MLP (trait) . getTrainMethod
// Return value: Primitive(int)
cv_return_value_int cv_ml_ANN_MLP_getTrainMethod_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::ANN_MLP*>(instance)->getTrainMethod();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::ANN_MLP::setActivationFunction
// as:     cv::ml::ANN_MLP::setActivationFunction (method) cv::ml::ANN_MLP (trait) . setActivationFunction
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG Primitive(double) param1= Primitive(double) = 0
// Arg ARG Primitive(double) param2= Primitive(double) = 0
// Return value: Primitive(void)
cv_return_value_void cv_ml_ANN_MLP_setActivationFunction_int_double_double(void* instance, int type, double param1, double param2) {
    try {
        reinterpret_cast<cv::ml::ANN_MLP*>(instance)->setActivationFunction(type, param1, param2);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::ANN_MLP::setLayerSizes
// as:     cv::ml::ANN_MLP::setLayerSizes (method) cv::ml::ANN_MLP (trait) . setLayerSizes
// Arg ARG cv::_InputArray (boxed) _layer_sizes= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_ANN_MLP_setLayerSizes__InputArray(void* instance, void* _layer_sizes) {
    try {
        reinterpret_cast<cv::ml::ANN_MLP*>(instance)->setLayerSizes(*reinterpret_cast<const cv::_InputArray*>(_layer_sizes));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::ANN_MLP::getLayerSizes
// as:     cv::ml::ANN_MLP::getLayerSizes (method) cv::ml::ANN_MLP (trait) . getLayerSizes
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_ANN_MLP_getLayerSizes_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::ANN_MLP*>(instance)->getLayerSizes();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::ANN_MLP::getTermCriteria
// as:     cv::ml::ANN_MLP::getTermCriteria (method) cv::ml::ANN_MLP (trait) . getTermCriteria
// Return value: cv::TermCriteria (boxed)
cv_return_value_void_X cv_ml_ANN_MLP_getTermCriteria_const(void* instance) {
    try {
        cv::TermCriteria ret = reinterpret_cast<cv::ml::ANN_MLP*>(instance)->getTermCriteria();
        return { Error::Code::StsOk, NULL, new cv::TermCriteria(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::ANN_MLP::setTermCriteria
// as:     cv::ml::ANN_MLP::setTermCriteria (method) cv::ml::ANN_MLP (trait) . setTermCriteria
// Arg ARG cv::TermCriteria (boxed) val= cv::TermCriteria (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_ANN_MLP_setTermCriteria_TermCriteria(void* instance, void* val) {
    try {
        reinterpret_cast<cv::ml::ANN_MLP*>(instance)->setTermCriteria(*reinterpret_cast<cv::TermCriteria*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::ANN_MLP::getBackpropWeightScale
// as:     cv::ml::ANN_MLP::getBackpropWeightScale (method) cv::ml::ANN_MLP (trait) . getBackpropWeightScale
// Return value: Primitive(double)
cv_return_value_double cv_ml_ANN_MLP_getBackpropWeightScale_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::ANN_MLP*>(instance)->getBackpropWeightScale();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::ANN_MLP::setBackpropWeightScale
// as:     cv::ml::ANN_MLP::setBackpropWeightScale (method) cv::ml::ANN_MLP (trait) . setBackpropWeightScale
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_ANN_MLP_setBackpropWeightScale_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::ml::ANN_MLP*>(instance)->setBackpropWeightScale(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::ANN_MLP::getBackpropMomentumScale
// as:     cv::ml::ANN_MLP::getBackpropMomentumScale (method) cv::ml::ANN_MLP (trait) . getBackpropMomentumScale
// Return value: Primitive(double)
cv_return_value_double cv_ml_ANN_MLP_getBackpropMomentumScale_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::ANN_MLP*>(instance)->getBackpropMomentumScale();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::ANN_MLP::setBackpropMomentumScale
// as:     cv::ml::ANN_MLP::setBackpropMomentumScale (method) cv::ml::ANN_MLP (trait) . setBackpropMomentumScale
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_ANN_MLP_setBackpropMomentumScale_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::ml::ANN_MLP*>(instance)->setBackpropMomentumScale(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::ANN_MLP::getRpropDW0
// as:     cv::ml::ANN_MLP::getRpropDW0 (method) cv::ml::ANN_MLP (trait) . getRpropDW0
// Return value: Primitive(double)
cv_return_value_double cv_ml_ANN_MLP_getRpropDW0_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::ANN_MLP*>(instance)->getRpropDW0();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::ANN_MLP::setRpropDW0
// as:     cv::ml::ANN_MLP::setRpropDW0 (method) cv::ml::ANN_MLP (trait) . setRpropDW0
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_ANN_MLP_setRpropDW0_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::ml::ANN_MLP*>(instance)->setRpropDW0(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::ANN_MLP::getRpropDWPlus
// as:     cv::ml::ANN_MLP::getRpropDWPlus (method) cv::ml::ANN_MLP (trait) . getRpropDWPlus
// Return value: Primitive(double)
cv_return_value_double cv_ml_ANN_MLP_getRpropDWPlus_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::ANN_MLP*>(instance)->getRpropDWPlus();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::ANN_MLP::setRpropDWPlus
// as:     cv::ml::ANN_MLP::setRpropDWPlus (method) cv::ml::ANN_MLP (trait) . setRpropDWPlus
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_ANN_MLP_setRpropDWPlus_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::ml::ANN_MLP*>(instance)->setRpropDWPlus(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::ANN_MLP::getRpropDWMinus
// as:     cv::ml::ANN_MLP::getRpropDWMinus (method) cv::ml::ANN_MLP (trait) . getRpropDWMinus
// Return value: Primitive(double)
cv_return_value_double cv_ml_ANN_MLP_getRpropDWMinus_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::ANN_MLP*>(instance)->getRpropDWMinus();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::ANN_MLP::setRpropDWMinus
// as:     cv::ml::ANN_MLP::setRpropDWMinus (method) cv::ml::ANN_MLP (trait) . setRpropDWMinus
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_ANN_MLP_setRpropDWMinus_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::ml::ANN_MLP*>(instance)->setRpropDWMinus(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::ANN_MLP::getRpropDWMin
// as:     cv::ml::ANN_MLP::getRpropDWMin (method) cv::ml::ANN_MLP (trait) . getRpropDWMin
// Return value: Primitive(double)
cv_return_value_double cv_ml_ANN_MLP_getRpropDWMin_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::ANN_MLP*>(instance)->getRpropDWMin();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::ANN_MLP::setRpropDWMin
// as:     cv::ml::ANN_MLP::setRpropDWMin (method) cv::ml::ANN_MLP (trait) . setRpropDWMin
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_ANN_MLP_setRpropDWMin_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::ml::ANN_MLP*>(instance)->setRpropDWMin(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::ANN_MLP::getRpropDWMax
// as:     cv::ml::ANN_MLP::getRpropDWMax (method) cv::ml::ANN_MLP (trait) . getRpropDWMax
// Return value: Primitive(double)
cv_return_value_double cv_ml_ANN_MLP_getRpropDWMax_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::ANN_MLP*>(instance)->getRpropDWMax();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::ANN_MLP::setRpropDWMax
// as:     cv::ml::ANN_MLP::setRpropDWMax (method) cv::ml::ANN_MLP (trait) . setRpropDWMax
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_ANN_MLP_setRpropDWMax_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::ml::ANN_MLP*>(instance)->setRpropDWMax(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::ANN_MLP::getAnnealInitialT
// as:     cv::ml::ANN_MLP::getAnnealInitialT (method) cv::ml::ANN_MLP (trait) . getAnnealInitialT
// Return value: Primitive(double)
cv_return_value_double cv_ml_ANN_MLP_getAnnealInitialT_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::ANN_MLP*>(instance)->getAnnealInitialT();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::ANN_MLP::setAnnealInitialT
// as:     cv::ml::ANN_MLP::setAnnealInitialT (method) cv::ml::ANN_MLP (trait) . setAnnealInitialT
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_ANN_MLP_setAnnealInitialT_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::ml::ANN_MLP*>(instance)->setAnnealInitialT(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::ANN_MLP::getAnnealFinalT
// as:     cv::ml::ANN_MLP::getAnnealFinalT (method) cv::ml::ANN_MLP (trait) . getAnnealFinalT
// Return value: Primitive(double)
cv_return_value_double cv_ml_ANN_MLP_getAnnealFinalT_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::ANN_MLP*>(instance)->getAnnealFinalT();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::ANN_MLP::setAnnealFinalT
// as:     cv::ml::ANN_MLP::setAnnealFinalT (method) cv::ml::ANN_MLP (trait) . setAnnealFinalT
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_ANN_MLP_setAnnealFinalT_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::ml::ANN_MLP*>(instance)->setAnnealFinalT(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::ANN_MLP::getAnnealCoolingRatio
// as:     cv::ml::ANN_MLP::getAnnealCoolingRatio (method) cv::ml::ANN_MLP (trait) . getAnnealCoolingRatio
// Return value: Primitive(double)
cv_return_value_double cv_ml_ANN_MLP_getAnnealCoolingRatio_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::ANN_MLP*>(instance)->getAnnealCoolingRatio();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::ANN_MLP::setAnnealCoolingRatio
// as:     cv::ml::ANN_MLP::setAnnealCoolingRatio (method) cv::ml::ANN_MLP (trait) . setAnnealCoolingRatio
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_ANN_MLP_setAnnealCoolingRatio_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::ml::ANN_MLP*>(instance)->setAnnealCoolingRatio(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::ANN_MLP::getAnnealItePerStep
// as:     cv::ml::ANN_MLP::getAnnealItePerStep (method) cv::ml::ANN_MLP (trait) . getAnnealItePerStep
// Return value: Primitive(int)
cv_return_value_int cv_ml_ANN_MLP_getAnnealItePerStep_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::ANN_MLP*>(instance)->getAnnealItePerStep();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::ANN_MLP::setAnnealItePerStep
// as:     cv::ml::ANN_MLP::setAnnealItePerStep (method) cv::ml::ANN_MLP (trait) . setAnnealItePerStep
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_ANN_MLP_setAnnealItePerStep_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::ml::ANN_MLP*>(instance)->setAnnealItePerStep(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::ANN_MLP::getWeights
// as:     cv::ml::ANN_MLP::getWeights (method) cv::ml::ANN_MLP (trait) . getWeights
// Arg ARG Primitive(int) layerIdx= Primitive(int) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_ANN_MLP_getWeights_const_int(void* instance, int layerIdx) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::ANN_MLP*>(instance)->getWeights(layerIdx);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::ANN_MLP::create
// as:     cv::ml::ANN_MLP::create (method) cv::ml::ANN_MLP (trait) . create
// Return value: SmartPtr[cv::ml::ANN_MLP (boxed)]
cv_return_value_void_X cv_ml_ANN_MLP_create() {
    try {
        Ptr<cv::ml::ANN_MLP> ret = cv::ml::ANN_MLP::create();
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::ANN_MLP>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::ANN_MLP::load
// as:     cv::ml::ANN_MLP::load (method) cv::ml::ANN_MLP (trait) . load
// Arg ARG string filepath= string = 
// Return value: SmartPtr[cv::ml::ANN_MLP (boxed)]
cv_return_value_void_X cv_ml_ANN_MLP_load_String(const char* filepath) {
    try {
        Ptr<cv::ml::ANN_MLP> ret = cv::ml::ANN_MLP::load(String(filepath));
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::ANN_MLP>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::Boost::getBoostType
// as:     cv::ml::Boost::getBoostType (method) cv::ml::Boost (trait) . getBoostType
// Return value: Primitive(int)
cv_return_value_int cv_ml_Boost_getBoostType_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::Boost*>(instance)->getBoostType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::Boost::setBoostType
// as:     cv::ml::Boost::setBoostType (method) cv::ml::Boost (trait) . setBoostType
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_Boost_setBoostType_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::ml::Boost*>(instance)->setBoostType(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::Boost::getWeakCount
// as:     cv::ml::Boost::getWeakCount (method) cv::ml::Boost (trait) . getWeakCount
// Return value: Primitive(int)
cv_return_value_int cv_ml_Boost_getWeakCount_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::Boost*>(instance)->getWeakCount();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::Boost::setWeakCount
// as:     cv::ml::Boost::setWeakCount (method) cv::ml::Boost (trait) . setWeakCount
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_Boost_setWeakCount_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::ml::Boost*>(instance)->setWeakCount(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::Boost::getWeightTrimRate
// as:     cv::ml::Boost::getWeightTrimRate (method) cv::ml::Boost (trait) . getWeightTrimRate
// Return value: Primitive(double)
cv_return_value_double cv_ml_Boost_getWeightTrimRate_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::Boost*>(instance)->getWeightTrimRate();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::Boost::setWeightTrimRate
// as:     cv::ml::Boost::setWeightTrimRate (method) cv::ml::Boost (trait) . setWeightTrimRate
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_Boost_setWeightTrimRate_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::ml::Boost*>(instance)->setWeightTrimRate(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::Boost::create
// as:     cv::ml::Boost::create (method) cv::ml::Boost (trait) . create
// Return value: SmartPtr[cv::ml::Boost (boxed)]
cv_return_value_void_X cv_ml_Boost_create() {
    try {
        Ptr<cv::ml::Boost> ret = cv::ml::Boost::create();
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::Boost>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::Boost::load
// as:     cv::ml::Boost::load (method) cv::ml::Boost (trait) . load
// Arg ARG string filepath= string = 
// Arg ARG string nodeName= string = String()
// Return value: SmartPtr[cv::ml::Boost (boxed)]
cv_return_value_void_X cv_ml_Boost_load_String_String(const char* filepath, const char* nodeName) {
    try {
        Ptr<cv::ml::Boost> ret = cv::ml::Boost::load(String(filepath), String(nodeName));
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::Boost>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::DTrees::getMaxCategories
// as:     cv::ml::DTrees::getMaxCategories (method) cv::ml::DTrees (trait) . getMaxCategories
// Return value: Primitive(int)
cv_return_value_int cv_ml_DTrees_getMaxCategories_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::DTrees*>(instance)->getMaxCategories();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::DTrees::setMaxCategories
// as:     cv::ml::DTrees::setMaxCategories (method) cv::ml::DTrees (trait) . setMaxCategories
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_DTrees_setMaxCategories_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::ml::DTrees*>(instance)->setMaxCategories(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::DTrees::getMaxDepth
// as:     cv::ml::DTrees::getMaxDepth (method) cv::ml::DTrees (trait) . getMaxDepth
// Return value: Primitive(int)
cv_return_value_int cv_ml_DTrees_getMaxDepth_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::DTrees*>(instance)->getMaxDepth();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::DTrees::setMaxDepth
// as:     cv::ml::DTrees::setMaxDepth (method) cv::ml::DTrees (trait) . setMaxDepth
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_DTrees_setMaxDepth_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::ml::DTrees*>(instance)->setMaxDepth(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::DTrees::getMinSampleCount
// as:     cv::ml::DTrees::getMinSampleCount (method) cv::ml::DTrees (trait) . getMinSampleCount
// Return value: Primitive(int)
cv_return_value_int cv_ml_DTrees_getMinSampleCount_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::DTrees*>(instance)->getMinSampleCount();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::DTrees::setMinSampleCount
// as:     cv::ml::DTrees::setMinSampleCount (method) cv::ml::DTrees (trait) . setMinSampleCount
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_DTrees_setMinSampleCount_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::ml::DTrees*>(instance)->setMinSampleCount(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::DTrees::getCVFolds
// as:     cv::ml::DTrees::getCVFolds (method) cv::ml::DTrees (trait) . getCVFolds
// Return value: Primitive(int)
cv_return_value_int cv_ml_DTrees_getCVFolds_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::DTrees*>(instance)->getCVFolds();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::DTrees::setCVFolds
// as:     cv::ml::DTrees::setCVFolds (method) cv::ml::DTrees (trait) . setCVFolds
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_DTrees_setCVFolds_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::ml::DTrees*>(instance)->setCVFolds(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::DTrees::getUseSurrogates
// as:     cv::ml::DTrees::getUseSurrogates (method) cv::ml::DTrees (trait) . getUseSurrogates
// Return value: Primitive(bool)
cv_return_value_bool cv_ml_DTrees_getUseSurrogates_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ml::DTrees*>(instance)->getUseSurrogates();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ml::DTrees::setUseSurrogates
// as:     cv::ml::DTrees::setUseSurrogates (method) cv::ml::DTrees (trait) . setUseSurrogates
// Arg ARG Primitive(bool) val= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_DTrees_setUseSurrogates_bool(void* instance, bool val) {
    try {
        reinterpret_cast<cv::ml::DTrees*>(instance)->setUseSurrogates(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::DTrees::getUse1SERule
// as:     cv::ml::DTrees::getUse1SERule (method) cv::ml::DTrees (trait) . getUse1SERule
// Return value: Primitive(bool)
cv_return_value_bool cv_ml_DTrees_getUse1SERule_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ml::DTrees*>(instance)->getUse1SERule();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ml::DTrees::setUse1SERule
// as:     cv::ml::DTrees::setUse1SERule (method) cv::ml::DTrees (trait) . setUse1SERule
// Arg ARG Primitive(bool) val= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_DTrees_setUse1SERule_bool(void* instance, bool val) {
    try {
        reinterpret_cast<cv::ml::DTrees*>(instance)->setUse1SERule(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::DTrees::getTruncatePrunedTree
// as:     cv::ml::DTrees::getTruncatePrunedTree (method) cv::ml::DTrees (trait) . getTruncatePrunedTree
// Return value: Primitive(bool)
cv_return_value_bool cv_ml_DTrees_getTruncatePrunedTree_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ml::DTrees*>(instance)->getTruncatePrunedTree();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ml::DTrees::setTruncatePrunedTree
// as:     cv::ml::DTrees::setTruncatePrunedTree (method) cv::ml::DTrees (trait) . setTruncatePrunedTree
// Arg ARG Primitive(bool) val= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_DTrees_setTruncatePrunedTree_bool(void* instance, bool val) {
    try {
        reinterpret_cast<cv::ml::DTrees*>(instance)->setTruncatePrunedTree(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::DTrees::getRegressionAccuracy
// as:     cv::ml::DTrees::getRegressionAccuracy (method) cv::ml::DTrees (trait) . getRegressionAccuracy
// Return value: Primitive(float)
cv_return_value_float cv_ml_DTrees_getRegressionAccuracy_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::ml::DTrees*>(instance)->getRegressionAccuracy();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::ml::DTrees::setRegressionAccuracy
// as:     cv::ml::DTrees::setRegressionAccuracy (method) cv::ml::DTrees (trait) . setRegressionAccuracy
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_DTrees_setRegressionAccuracy_float(void* instance, float val) {
    try {
        reinterpret_cast<cv::ml::DTrees*>(instance)->setRegressionAccuracy(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::DTrees::getPriors
// as:     cv::ml::DTrees::getPriors (method) cv::ml::DTrees (trait) . getPriors
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_DTrees_getPriors_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::DTrees*>(instance)->getPriors();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::DTrees::setPriors
// as:     cv::ml::DTrees::setPriors (method) cv::ml::DTrees (trait) . setPriors
// Arg ARG cv::Mat (boxed) val= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_DTrees_setPriors_Mat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::ml::DTrees*>(instance)->setPriors(*reinterpret_cast<const cv::Mat*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::DTrees::getRoots
// as:     cv::ml::DTrees::getRoots (method) cv::ml::DTrees (trait) . getRoots
// Return value: Vector[Primitive(int)]
cv_return_value_void_X cv_ml_DTrees_getRoots_const(void* instance) {
    try {
        std::vector<int> ret = reinterpret_cast<cv::ml::DTrees*>(instance)->getRoots();
        return { Error::Code::StsOk, NULL, new std::vector<int>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::DTrees::getNodes
// as:     cv::ml::DTrees::getNodes (method) cv::ml::DTrees (trait) . getNodes
// Return value: Vector[cv::ml::DTrees::Node (boxed)]
cv_return_value_void_X cv_ml_DTrees_getNodes_const(void* instance) {
    try {
        std::vector<cv::ml::DTrees::Node> ret = reinterpret_cast<cv::ml::DTrees*>(instance)->getNodes();
        return { Error::Code::StsOk, NULL, new std::vector<cv::ml::DTrees::Node>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::DTrees::getSplits
// as:     cv::ml::DTrees::getSplits (method) cv::ml::DTrees (trait) . getSplits
// Return value: Vector[cv::ml::DTrees::Split (boxed)]
cv_return_value_void_X cv_ml_DTrees_getSplits_const(void* instance) {
    try {
        std::vector<cv::ml::DTrees::Split> ret = reinterpret_cast<cv::ml::DTrees*>(instance)->getSplits();
        return { Error::Code::StsOk, NULL, new std::vector<cv::ml::DTrees::Split>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::DTrees::getSubsets
// as:     cv::ml::DTrees::getSubsets (method) cv::ml::DTrees (trait) . getSubsets
// Return value: Vector[Primitive(int)]
cv_return_value_void_X cv_ml_DTrees_getSubsets_const(void* instance) {
    try {
        std::vector<int> ret = reinterpret_cast<cv::ml::DTrees*>(instance)->getSubsets();
        return { Error::Code::StsOk, NULL, new std::vector<int>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::DTrees::create
// as:     cv::ml::DTrees::create (method) cv::ml::DTrees (trait) . create
// Return value: SmartPtr[cv::ml::DTrees (boxed)]
cv_return_value_void_X cv_ml_DTrees_create() {
    try {
        Ptr<cv::ml::DTrees> ret = cv::ml::DTrees::create();
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::DTrees>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::DTrees::load
// as:     cv::ml::DTrees::load (method) cv::ml::DTrees (trait) . load
// Arg ARG string filepath= string = 
// Arg ARG string nodeName= string = String()
// Return value: SmartPtr[cv::ml::DTrees (boxed)]
cv_return_value_void_X cv_ml_DTrees_load_String_String(const char* filepath, const char* nodeName) {
    try {
        Ptr<cv::ml::DTrees> ret = cv::ml::DTrees::load(String(filepath), String(nodeName));
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::DTrees>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::ml::DTrees::Node
void cv_DTrees_Node_delete(void* instance) {
    delete reinterpret_cast<cv::ml::DTrees::Node*>(instance);
}
// parsed: cv::ml::DTrees::Node::Node
// as:     cv::ml::DTrees::Node::Node (constructor) cv::ml::DTrees::Node . default
// Return value: cv::ml::DTrees::Node (boxed)
cv_return_value_void_X cv_ml_DTrees_Node_Node() {
    try {
        cv::ml::DTrees::Node* ret = new cv::ml::DTrees::Node();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::ml::DTrees::Split
void cv_DTrees_Split_delete(void* instance) {
    delete reinterpret_cast<cv::ml::DTrees::Split*>(instance);
}
// parsed: cv::ml::DTrees::Split::Split
// as:     cv::ml::DTrees::Split::Split (constructor) cv::ml::DTrees::Split . default
// Return value: cv::ml::DTrees::Split (boxed)
cv_return_value_void_X cv_ml_DTrees_Split_Split() {
    try {
        cv::ml::DTrees::Split* ret = new cv::ml::DTrees::Split();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::EM::getClustersNumber
// as:     cv::ml::EM::getClustersNumber (method) cv::ml::EM (trait) . getClustersNumber
// Return value: Primitive(int)
cv_return_value_int cv_ml_EM_getClustersNumber_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::EM*>(instance)->getClustersNumber();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::EM::setClustersNumber
// as:     cv::ml::EM::setClustersNumber (method) cv::ml::EM (trait) . setClustersNumber
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_EM_setClustersNumber_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::ml::EM*>(instance)->setClustersNumber(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::EM::getCovarianceMatrixType
// as:     cv::ml::EM::getCovarianceMatrixType (method) cv::ml::EM (trait) . getCovarianceMatrixType
// Return value: Primitive(int)
cv_return_value_int cv_ml_EM_getCovarianceMatrixType_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::EM*>(instance)->getCovarianceMatrixType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::EM::setCovarianceMatrixType
// as:     cv::ml::EM::setCovarianceMatrixType (method) cv::ml::EM (trait) . setCovarianceMatrixType
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_EM_setCovarianceMatrixType_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::ml::EM*>(instance)->setCovarianceMatrixType(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::EM::getTermCriteria
// as:     cv::ml::EM::getTermCriteria (method) cv::ml::EM (trait) . getTermCriteria
// Return value: cv::TermCriteria (boxed)
cv_return_value_void_X cv_ml_EM_getTermCriteria_const(void* instance) {
    try {
        cv::TermCriteria ret = reinterpret_cast<cv::ml::EM*>(instance)->getTermCriteria();
        return { Error::Code::StsOk, NULL, new cv::TermCriteria(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::EM::setTermCriteria
// as:     cv::ml::EM::setTermCriteria (method) cv::ml::EM (trait) . setTermCriteria
// Arg ARG cv::TermCriteria (boxed) val= cv::TermCriteria (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_EM_setTermCriteria_TermCriteria(void* instance, void* val) {
    try {
        reinterpret_cast<cv::ml::EM*>(instance)->setTermCriteria(*reinterpret_cast<const cv::TermCriteria*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::EM::getWeights
// as:     cv::ml::EM::getWeights (method) cv::ml::EM (trait) . getWeights
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_EM_getWeights_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::EM*>(instance)->getWeights();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::EM::getMeans
// as:     cv::ml::EM::getMeans (method) cv::ml::EM (trait) . getMeans
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_EM_getMeans_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::EM*>(instance)->getMeans();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::EM::getCovs
// as:     cv::ml::EM::getCovs (method) cv::ml::EM (trait) . getCovs
// Arg ARG Vector[cv::Mat (boxed)] covs= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_EM_getCovs_const_VectorOfMat(void* instance, void* covs) {
    try {
        reinterpret_cast<cv::ml::EM*>(instance)->getCovs(*reinterpret_cast<std::vector<cv::Mat>*>(covs));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::EM::predict
// as:     cv::ml::EM::predict (method) cv::ml::EM (trait) . predict
// Arg ARG cv::_InputArray (boxed) samples= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) results= cv::_OutputArray (boxed) = noArray()
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Return value: Primitive(float)
cv_return_value_float cv_ml_EM_predict_const__InputArray__OutputArray_int(void* instance, void* samples, void* results, int flags) {
    try {
        float ret = reinterpret_cast<cv::ml::EM*>(instance)->predict(*reinterpret_cast<const cv::_InputArray*>(samples), *reinterpret_cast<cv::_OutputArray*>(results), flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::ml::EM::predict2
// as:     cv::ml::EM::predict2 (method) cv::ml::EM (trait) . predict2
// Arg ARG cv::_InputArray (boxed) sample= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) probs= cv::_OutputArray (boxed) = 
// Return value: cv::Vec2d (simple)
cv_return_value_Vec2dWrapper cv_ml_EM_predict2_const__InputArray__OutputArray(void* instance, void* sample, void* probs) {
    try {
        cv::Vec2d ret = reinterpret_cast<cv::ml::EM*>(instance)->predict2(*reinterpret_cast<const cv::_InputArray*>(sample), *reinterpret_cast<cv::_OutputArray*>(probs));
        return { Error::Code::StsOk, NULL, *reinterpret_cast<Vec2dWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_Vec2dWrapper)
}

// parsed: cv::ml::EM::trainEM
// as:     cv::ml::EM::trainEM (method) cv::ml::EM (trait) . trainEM
// Arg ARG cv::_InputArray (boxed) samples= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) logLikelihoods= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) labels= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) probs= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(bool)
cv_return_value_bool cv_ml_EM_trainEM__InputArray__OutputArray__OutputArray__OutputArray(void* instance, void* samples, void* logLikelihoods, void* labels, void* probs) {
    try {
        bool ret = reinterpret_cast<cv::ml::EM*>(instance)->trainEM(*reinterpret_cast<const cv::_InputArray*>(samples), *reinterpret_cast<cv::_OutputArray*>(logLikelihoods), *reinterpret_cast<cv::_OutputArray*>(labels), *reinterpret_cast<cv::_OutputArray*>(probs));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ml::EM::trainE
// as:     cv::ml::EM::trainE (method) cv::ml::EM (trait) . trainE
// Arg ARG cv::_InputArray (boxed) samples= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) means0= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) covs0= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) weights0= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) logLikelihoods= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) labels= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) probs= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(bool)
cv_return_value_bool cv_ml_EM_trainE__InputArray__InputArray__InputArray__InputArray__OutputArray__OutputArray__OutputArray(void* instance, void* samples, void* means0, void* covs0, void* weights0, void* logLikelihoods, void* labels, void* probs) {
    try {
        bool ret = reinterpret_cast<cv::ml::EM*>(instance)->trainE(*reinterpret_cast<const cv::_InputArray*>(samples), *reinterpret_cast<const cv::_InputArray*>(means0), *reinterpret_cast<const cv::_InputArray*>(covs0), *reinterpret_cast<const cv::_InputArray*>(weights0), *reinterpret_cast<cv::_OutputArray*>(logLikelihoods), *reinterpret_cast<cv::_OutputArray*>(labels), *reinterpret_cast<cv::_OutputArray*>(probs));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ml::EM::trainM
// as:     cv::ml::EM::trainM (method) cv::ml::EM (trait) . trainM
// Arg ARG cv::_InputArray (boxed) samples= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) probs0= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) logLikelihoods= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) labels= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) probs= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(bool)
cv_return_value_bool cv_ml_EM_trainM__InputArray__InputArray__OutputArray__OutputArray__OutputArray(void* instance, void* samples, void* probs0, void* logLikelihoods, void* labels, void* probs) {
    try {
        bool ret = reinterpret_cast<cv::ml::EM*>(instance)->trainM(*reinterpret_cast<const cv::_InputArray*>(samples), *reinterpret_cast<const cv::_InputArray*>(probs0), *reinterpret_cast<cv::_OutputArray*>(logLikelihoods), *reinterpret_cast<cv::_OutputArray*>(labels), *reinterpret_cast<cv::_OutputArray*>(probs));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ml::EM::create
// as:     cv::ml::EM::create (method) cv::ml::EM (trait) . create
// Return value: SmartPtr[cv::ml::EM (boxed)]
cv_return_value_void_X cv_ml_EM_create() {
    try {
        Ptr<cv::ml::EM> ret = cv::ml::EM::create();
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::EM>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::EM::load
// as:     cv::ml::EM::load (method) cv::ml::EM (trait) . load
// Arg ARG string filepath= string = 
// Arg ARG string nodeName= string = String()
// Return value: SmartPtr[cv::ml::EM (boxed)]
cv_return_value_void_X cv_ml_EM_load_String_String(const char* filepath, const char* nodeName) {
    try {
        Ptr<cv::ml::EM> ret = cv::ml::EM::load(String(filepath), String(nodeName));
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::EM>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::KNearest::getDefaultK
// as:     cv::ml::KNearest::getDefaultK (method) cv::ml::KNearest (trait) . getDefaultK
// Return value: Primitive(int)
cv_return_value_int cv_ml_KNearest_getDefaultK_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::KNearest*>(instance)->getDefaultK();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::KNearest::setDefaultK
// as:     cv::ml::KNearest::setDefaultK (method) cv::ml::KNearest (trait) . setDefaultK
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_KNearest_setDefaultK_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::ml::KNearest*>(instance)->setDefaultK(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::KNearest::getIsClassifier
// as:     cv::ml::KNearest::getIsClassifier (method) cv::ml::KNearest (trait) . getIsClassifier
// Return value: Primitive(bool)
cv_return_value_bool cv_ml_KNearest_getIsClassifier_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ml::KNearest*>(instance)->getIsClassifier();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ml::KNearest::setIsClassifier
// as:     cv::ml::KNearest::setIsClassifier (method) cv::ml::KNearest (trait) . setIsClassifier
// Arg ARG Primitive(bool) val= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_KNearest_setIsClassifier_bool(void* instance, bool val) {
    try {
        reinterpret_cast<cv::ml::KNearest*>(instance)->setIsClassifier(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::KNearest::getEmax
// as:     cv::ml::KNearest::getEmax (method) cv::ml::KNearest (trait) . getEmax
// Return value: Primitive(int)
cv_return_value_int cv_ml_KNearest_getEmax_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::KNearest*>(instance)->getEmax();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::KNearest::setEmax
// as:     cv::ml::KNearest::setEmax (method) cv::ml::KNearest (trait) . setEmax
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_KNearest_setEmax_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::ml::KNearest*>(instance)->setEmax(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::KNearest::getAlgorithmType
// as:     cv::ml::KNearest::getAlgorithmType (method) cv::ml::KNearest (trait) . getAlgorithmType
// Return value: Primitive(int)
cv_return_value_int cv_ml_KNearest_getAlgorithmType_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::KNearest*>(instance)->getAlgorithmType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::KNearest::setAlgorithmType
// as:     cv::ml::KNearest::setAlgorithmType (method) cv::ml::KNearest (trait) . setAlgorithmType
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_KNearest_setAlgorithmType_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::ml::KNearest*>(instance)->setAlgorithmType(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::KNearest::findNearest
// as:     cv::ml::KNearest::findNearest (method) cv::ml::KNearest (trait) . findNearest
// Arg ARG cv::_InputArray (boxed) samples= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) k= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) results= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) neighborResponses= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) dist= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(float)
cv_return_value_float cv_ml_KNearest_findNearest_const__InputArray_int__OutputArray__OutputArray__OutputArray(void* instance, void* samples, int k, void* results, void* neighborResponses, void* dist) {
    try {
        float ret = reinterpret_cast<cv::ml::KNearest*>(instance)->findNearest(*reinterpret_cast<const cv::_InputArray*>(samples), k, *reinterpret_cast<cv::_OutputArray*>(results), *reinterpret_cast<cv::_OutputArray*>(neighborResponses), *reinterpret_cast<cv::_OutputArray*>(dist));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::ml::KNearest::create
// as:     cv::ml::KNearest::create (method) cv::ml::KNearest (trait) . create
// Return value: SmartPtr[cv::ml::KNearest (boxed)]
cv_return_value_void_X cv_ml_KNearest_create() {
    try {
        Ptr<cv::ml::KNearest> ret = cv::ml::KNearest::create();
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::KNearest>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::KNearest::load
// as:     cv::ml::KNearest::load (method) cv::ml::KNearest (trait) . load
// Arg ARG string filepath= string = 
// Return value: SmartPtr[cv::ml::KNearest (boxed)]
cv_return_value_void_X cv_ml_KNearest_load_String(const char* filepath) {
    try {
        Ptr<cv::ml::KNearest> ret = cv::ml::KNearest::load(String(filepath));
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::KNearest>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::LogisticRegression::getLearningRate
// as:     cv::ml::LogisticRegression::getLearningRate (method) cv::ml::LogisticRegression (trait) . getLearningRate
// Return value: Primitive(double)
cv_return_value_double cv_ml_LogisticRegression_getLearningRate_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::LogisticRegression*>(instance)->getLearningRate();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::LogisticRegression::setLearningRate
// as:     cv::ml::LogisticRegression::setLearningRate (method) cv::ml::LogisticRegression (trait) . setLearningRate
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_LogisticRegression_setLearningRate_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::ml::LogisticRegression*>(instance)->setLearningRate(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::LogisticRegression::getIterations
// as:     cv::ml::LogisticRegression::getIterations (method) cv::ml::LogisticRegression (trait) . getIterations
// Return value: Primitive(int)
cv_return_value_int cv_ml_LogisticRegression_getIterations_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::LogisticRegression*>(instance)->getIterations();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::LogisticRegression::setIterations
// as:     cv::ml::LogisticRegression::setIterations (method) cv::ml::LogisticRegression (trait) . setIterations
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_LogisticRegression_setIterations_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::ml::LogisticRegression*>(instance)->setIterations(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::LogisticRegression::getRegularization
// as:     cv::ml::LogisticRegression::getRegularization (method) cv::ml::LogisticRegression (trait) . getRegularization
// Return value: Primitive(int)
cv_return_value_int cv_ml_LogisticRegression_getRegularization_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::LogisticRegression*>(instance)->getRegularization();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::LogisticRegression::setRegularization
// as:     cv::ml::LogisticRegression::setRegularization (method) cv::ml::LogisticRegression (trait) . setRegularization
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_LogisticRegression_setRegularization_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::ml::LogisticRegression*>(instance)->setRegularization(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::LogisticRegression::getTrainMethod
// as:     cv::ml::LogisticRegression::getTrainMethod (method) cv::ml::LogisticRegression (trait) . getTrainMethod
// Return value: Primitive(int)
cv_return_value_int cv_ml_LogisticRegression_getTrainMethod_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::LogisticRegression*>(instance)->getTrainMethod();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::LogisticRegression::setTrainMethod
// as:     cv::ml::LogisticRegression::setTrainMethod (method) cv::ml::LogisticRegression (trait) . setTrainMethod
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_LogisticRegression_setTrainMethod_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::ml::LogisticRegression*>(instance)->setTrainMethod(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::LogisticRegression::getMiniBatchSize
// as:     cv::ml::LogisticRegression::getMiniBatchSize (method) cv::ml::LogisticRegression (trait) . getMiniBatchSize
// Return value: Primitive(int)
cv_return_value_int cv_ml_LogisticRegression_getMiniBatchSize_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::LogisticRegression*>(instance)->getMiniBatchSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::LogisticRegression::setMiniBatchSize
// as:     cv::ml::LogisticRegression::setMiniBatchSize (method) cv::ml::LogisticRegression (trait) . setMiniBatchSize
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_LogisticRegression_setMiniBatchSize_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::ml::LogisticRegression*>(instance)->setMiniBatchSize(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::LogisticRegression::getTermCriteria
// as:     cv::ml::LogisticRegression::getTermCriteria (method) cv::ml::LogisticRegression (trait) . getTermCriteria
// Return value: cv::TermCriteria (boxed)
cv_return_value_void_X cv_ml_LogisticRegression_getTermCriteria_const(void* instance) {
    try {
        cv::TermCriteria ret = reinterpret_cast<cv::ml::LogisticRegression*>(instance)->getTermCriteria();
        return { Error::Code::StsOk, NULL, new cv::TermCriteria(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::LogisticRegression::setTermCriteria
// as:     cv::ml::LogisticRegression::setTermCriteria (method) cv::ml::LogisticRegression (trait) . setTermCriteria
// Arg ARG cv::TermCriteria (boxed) val= cv::TermCriteria (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_LogisticRegression_setTermCriteria_TermCriteria(void* instance, void* val) {
    try {
        reinterpret_cast<cv::ml::LogisticRegression*>(instance)->setTermCriteria(*reinterpret_cast<cv::TermCriteria*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::LogisticRegression::predict
// as:     cv::ml::LogisticRegression::predict (method) cv::ml::LogisticRegression (trait) . predict
// Arg ARG cv::_InputArray (boxed) samples= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) results= cv::_OutputArray (boxed) = noArray()
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Return value: Primitive(float)
cv_return_value_float cv_ml_LogisticRegression_predict_const__InputArray__OutputArray_int(void* instance, void* samples, void* results, int flags) {
    try {
        float ret = reinterpret_cast<cv::ml::LogisticRegression*>(instance)->predict(*reinterpret_cast<const cv::_InputArray*>(samples), *reinterpret_cast<cv::_OutputArray*>(results), flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::ml::LogisticRegression::get_learnt_thetas
// as:     cv::ml::LogisticRegression::get_learnt_thetas (method) cv::ml::LogisticRegression (trait) . get_learnt_thetas
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_LogisticRegression_get_learnt_thetas_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::LogisticRegression*>(instance)->get_learnt_thetas();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::LogisticRegression::create
// as:     cv::ml::LogisticRegression::create (method) cv::ml::LogisticRegression (trait) . create
// Return value: SmartPtr[cv::ml::LogisticRegression (boxed)]
cv_return_value_void_X cv_ml_LogisticRegression_create() {
    try {
        Ptr<cv::ml::LogisticRegression> ret = cv::ml::LogisticRegression::create();
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::LogisticRegression>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::LogisticRegression::load
// as:     cv::ml::LogisticRegression::load (method) cv::ml::LogisticRegression (trait) . load
// Arg ARG string filepath= string = 
// Arg ARG string nodeName= string = String()
// Return value: SmartPtr[cv::ml::LogisticRegression (boxed)]
cv_return_value_void_X cv_ml_LogisticRegression_load_String_String(const char* filepath, const char* nodeName) {
    try {
        Ptr<cv::ml::LogisticRegression> ret = cv::ml::LogisticRegression::load(String(filepath), String(nodeName));
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::LogisticRegression>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::NormalBayesClassifier::predictProb
// as:     cv::ml::NormalBayesClassifier::predictProb (method) cv::ml::NormalBayesClassifier (trait) . predictProb
// Arg ARG cv::_InputArray (boxed) inputs= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) outputs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) outputProbs= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Return value: Primitive(float)
cv_return_value_float cv_ml_NormalBayesClassifier_predictProb_const__InputArray__OutputArray__OutputArray_int(void* instance, void* inputs, void* outputs, void* outputProbs, int flags) {
    try {
        float ret = reinterpret_cast<cv::ml::NormalBayesClassifier*>(instance)->predictProb(*reinterpret_cast<const cv::_InputArray*>(inputs), *reinterpret_cast<cv::_OutputArray*>(outputs), *reinterpret_cast<cv::_OutputArray*>(outputProbs), flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::ml::NormalBayesClassifier::create
// as:     cv::ml::NormalBayesClassifier::create (method) cv::ml::NormalBayesClassifier (trait) . create
// Return value: SmartPtr[cv::ml::NormalBayesClassifier (boxed)]
cv_return_value_void_X cv_ml_NormalBayesClassifier_create() {
    try {
        Ptr<cv::ml::NormalBayesClassifier> ret = cv::ml::NormalBayesClassifier::create();
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::NormalBayesClassifier>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::NormalBayesClassifier::load
// as:     cv::ml::NormalBayesClassifier::load (method) cv::ml::NormalBayesClassifier (trait) . load
// Arg ARG string filepath= string = 
// Arg ARG string nodeName= string = String()
// Return value: SmartPtr[cv::ml::NormalBayesClassifier (boxed)]
cv_return_value_void_X cv_ml_NormalBayesClassifier_load_String_String(const char* filepath, const char* nodeName) {
    try {
        Ptr<cv::ml::NormalBayesClassifier> ret = cv::ml::NormalBayesClassifier::load(String(filepath), String(nodeName));
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::NormalBayesClassifier>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::ml::ParamGrid
void cv_ParamGrid_delete(void* instance) {
    delete reinterpret_cast<cv::ml::ParamGrid*>(instance);
}
// parsed: cv::ml::ParamGrid::minVal
// as:     cv::ml::ParamGrid::minVal (method) cv::ml::ParamGrid . minVal
// Return value: Primitive(double)
cv_return_value_double cv_ml_ParamGrid_minVal_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::ParamGrid*>(instance)->minVal;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::ParamGrid::maxVal
// as:     cv::ml::ParamGrid::maxVal (method) cv::ml::ParamGrid . maxVal
// Return value: Primitive(double)
cv_return_value_double cv_ml_ParamGrid_maxVal_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::ParamGrid*>(instance)->maxVal;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::ParamGrid::logStep
// as:     cv::ml::ParamGrid::logStep (method) cv::ml::ParamGrid . logStep
// Return value: Primitive(double)
cv_return_value_double cv_ml_ParamGrid_logStep_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::ParamGrid*>(instance)->logStep;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::ParamGrid::ParamGrid
// as:     cv::ml::ParamGrid::ParamGrid (constructor) cv::ml::ParamGrid . default
// Return value: cv::ml::ParamGrid (boxed)
cv_return_value_void_X cv_ml_ParamGrid_ParamGrid() {
    try {
        cv::ml::ParamGrid* ret = new cv::ml::ParamGrid();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::ParamGrid::ParamGrid
// as:     cv::ml::ParamGrid::ParamGrid (constructor) cv::ml::ParamGrid . new
// Arg ARG Primitive(double) _minVal= Primitive(double) = 
// Arg ARG Primitive(double) _maxVal= Primitive(double) = 
// Arg ARG Primitive(double) _logStep= Primitive(double) = 
// Return value: cv::ml::ParamGrid (boxed)
cv_return_value_void_X cv_ml_ParamGrid_ParamGrid_double_double_double(double _minVal, double _maxVal, double _logStep) {
    try {
        cv::ml::ParamGrid* ret = new cv::ml::ParamGrid(_minVal, _maxVal, _logStep);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::ParamGrid::create
// as:     cv::ml::ParamGrid::create (method) cv::ml::ParamGrid . create
// Arg ARG Primitive(double) minVal= Primitive(double) = 0.
// Arg ARG Primitive(double) maxVal= Primitive(double) = 0.
// Arg ARG Primitive(double) logstep= Primitive(double) = 1.
// Return value: SmartPtr[cv::ml::ParamGrid (boxed)]
cv_return_value_void_X cv_ml_ParamGrid_create_double_double_double(double minVal, double maxVal, double logstep) {
    try {
        Ptr<cv::ml::ParamGrid> ret = cv::ml::ParamGrid::create(minVal, maxVal, logstep);
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::ParamGrid>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::RTrees::getCalculateVarImportance
// as:     cv::ml::RTrees::getCalculateVarImportance (method) cv::ml::RTrees (trait) . getCalculateVarImportance
// Return value: Primitive(bool)
cv_return_value_bool cv_ml_RTrees_getCalculateVarImportance_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ml::RTrees*>(instance)->getCalculateVarImportance();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ml::RTrees::setCalculateVarImportance
// as:     cv::ml::RTrees::setCalculateVarImportance (method) cv::ml::RTrees (trait) . setCalculateVarImportance
// Arg ARG Primitive(bool) val= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_RTrees_setCalculateVarImportance_bool(void* instance, bool val) {
    try {
        reinterpret_cast<cv::ml::RTrees*>(instance)->setCalculateVarImportance(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::RTrees::getActiveVarCount
// as:     cv::ml::RTrees::getActiveVarCount (method) cv::ml::RTrees (trait) . getActiveVarCount
// Return value: Primitive(int)
cv_return_value_int cv_ml_RTrees_getActiveVarCount_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::RTrees*>(instance)->getActiveVarCount();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::RTrees::setActiveVarCount
// as:     cv::ml::RTrees::setActiveVarCount (method) cv::ml::RTrees (trait) . setActiveVarCount
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_RTrees_setActiveVarCount_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::ml::RTrees*>(instance)->setActiveVarCount(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::RTrees::getTermCriteria
// as:     cv::ml::RTrees::getTermCriteria (method) cv::ml::RTrees (trait) . getTermCriteria
// Return value: cv::TermCriteria (boxed)
cv_return_value_void_X cv_ml_RTrees_getTermCriteria_const(void* instance) {
    try {
        cv::TermCriteria ret = reinterpret_cast<cv::ml::RTrees*>(instance)->getTermCriteria();
        return { Error::Code::StsOk, NULL, new cv::TermCriteria(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::RTrees::setTermCriteria
// as:     cv::ml::RTrees::setTermCriteria (method) cv::ml::RTrees (trait) . setTermCriteria
// Arg ARG cv::TermCriteria (boxed) val= cv::TermCriteria (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_RTrees_setTermCriteria_TermCriteria(void* instance, void* val) {
    try {
        reinterpret_cast<cv::ml::RTrees*>(instance)->setTermCriteria(*reinterpret_cast<const cv::TermCriteria*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::RTrees::getVarImportance
// as:     cv::ml::RTrees::getVarImportance (method) cv::ml::RTrees (trait) . getVarImportance
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_RTrees_getVarImportance_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::RTrees*>(instance)->getVarImportance();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::RTrees::getVotes
// as:     cv::ml::RTrees::getVotes (method) cv::ml::RTrees (trait) . getVotes
// Arg ARG cv::_InputArray (boxed) samples= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) results= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_RTrees_getVotes_const__InputArray__OutputArray_int(void* instance, void* samples, void* results, int flags) {
    try {
        reinterpret_cast<cv::ml::RTrees*>(instance)->getVotes(*reinterpret_cast<const cv::_InputArray*>(samples), *reinterpret_cast<cv::_OutputArray*>(results), flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::RTrees::create
// as:     cv::ml::RTrees::create (method) cv::ml::RTrees (trait) . create
// Return value: SmartPtr[cv::ml::RTrees (boxed)]
cv_return_value_void_X cv_ml_RTrees_create() {
    try {
        Ptr<cv::ml::RTrees> ret = cv::ml::RTrees::create();
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::RTrees>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::RTrees::load
// as:     cv::ml::RTrees::load (method) cv::ml::RTrees (trait) . load
// Arg ARG string filepath= string = 
// Arg ARG string nodeName= string = String()
// Return value: SmartPtr[cv::ml::RTrees (boxed)]
cv_return_value_void_X cv_ml_RTrees_load_String_String(const char* filepath, const char* nodeName) {
    try {
        Ptr<cv::ml::RTrees> ret = cv::ml::RTrees::load(String(filepath), String(nodeName));
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::RTrees>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::SVM::getType
// as:     cv::ml::SVM::getType (method) cv::ml::SVM (trait) . getType
// Return value: Primitive(int)
cv_return_value_int cv_ml_SVM_getType_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::SVM*>(instance)->getType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::SVM::setType
// as:     cv::ml::SVM::setType (method) cv::ml::SVM (trait) . setType
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_SVM_setType_int(void* instance, int val) {
    try {
        reinterpret_cast<cv::ml::SVM*>(instance)->setType(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::SVM::getGamma
// as:     cv::ml::SVM::getGamma (method) cv::ml::SVM (trait) . getGamma
// Return value: Primitive(double)
cv_return_value_double cv_ml_SVM_getGamma_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::SVM*>(instance)->getGamma();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::SVM::setGamma
// as:     cv::ml::SVM::setGamma (method) cv::ml::SVM (trait) . setGamma
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_SVM_setGamma_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::ml::SVM*>(instance)->setGamma(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::SVM::getCoef0
// as:     cv::ml::SVM::getCoef0 (method) cv::ml::SVM (trait) . getCoef0
// Return value: Primitive(double)
cv_return_value_double cv_ml_SVM_getCoef0_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::SVM*>(instance)->getCoef0();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::SVM::setCoef0
// as:     cv::ml::SVM::setCoef0 (method) cv::ml::SVM (trait) . setCoef0
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_SVM_setCoef0_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::ml::SVM*>(instance)->setCoef0(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::SVM::getDegree
// as:     cv::ml::SVM::getDegree (method) cv::ml::SVM (trait) . getDegree
// Return value: Primitive(double)
cv_return_value_double cv_ml_SVM_getDegree_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::SVM*>(instance)->getDegree();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::SVM::setDegree
// as:     cv::ml::SVM::setDegree (method) cv::ml::SVM (trait) . setDegree
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_SVM_setDegree_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::ml::SVM*>(instance)->setDegree(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::SVM::getC
// as:     cv::ml::SVM::getC (method) cv::ml::SVM (trait) . getC
// Return value: Primitive(double)
cv_return_value_double cv_ml_SVM_getC_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::SVM*>(instance)->getC();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::SVM::setC
// as:     cv::ml::SVM::setC (method) cv::ml::SVM (trait) . setC
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_SVM_setC_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::ml::SVM*>(instance)->setC(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::SVM::getNu
// as:     cv::ml::SVM::getNu (method) cv::ml::SVM (trait) . getNu
// Return value: Primitive(double)
cv_return_value_double cv_ml_SVM_getNu_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::SVM*>(instance)->getNu();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::SVM::setNu
// as:     cv::ml::SVM::setNu (method) cv::ml::SVM (trait) . setNu
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_SVM_setNu_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::ml::SVM*>(instance)->setNu(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::SVM::getP
// as:     cv::ml::SVM::getP (method) cv::ml::SVM (trait) . getP
// Return value: Primitive(double)
cv_return_value_double cv_ml_SVM_getP_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ml::SVM*>(instance)->getP();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::SVM::setP
// as:     cv::ml::SVM::setP (method) cv::ml::SVM (trait) . setP
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_SVM_setP_double(void* instance, double val) {
    try {
        reinterpret_cast<cv::ml::SVM*>(instance)->setP(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::SVM::getClassWeights
// as:     cv::ml::SVM::getClassWeights (method) cv::ml::SVM (trait) . getClassWeights
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_SVM_getClassWeights_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::SVM*>(instance)->getClassWeights();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::SVM::setClassWeights
// as:     cv::ml::SVM::setClassWeights (method) cv::ml::SVM (trait) . setClassWeights
// Arg ARG cv::Mat (boxed) val= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_SVM_setClassWeights_Mat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::ml::SVM*>(instance)->setClassWeights(*reinterpret_cast<const cv::Mat*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::SVM::getTermCriteria
// as:     cv::ml::SVM::getTermCriteria (method) cv::ml::SVM (trait) . getTermCriteria
// Return value: cv::TermCriteria (boxed)
cv_return_value_void_X cv_ml_SVM_getTermCriteria_const(void* instance) {
    try {
        cv::TermCriteria ret = reinterpret_cast<cv::ml::SVM*>(instance)->getTermCriteria();
        return { Error::Code::StsOk, NULL, new cv::TermCriteria(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::SVM::setTermCriteria
// as:     cv::ml::SVM::setTermCriteria (method) cv::ml::SVM (trait) . setTermCriteria
// Arg ARG cv::TermCriteria (boxed) val= cv::TermCriteria (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_SVM_setTermCriteria_TermCriteria(void* instance, void* val) {
    try {
        reinterpret_cast<cv::ml::SVM*>(instance)->setTermCriteria(*reinterpret_cast<const cv::TermCriteria*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::SVM::getKernelType
// as:     cv::ml::SVM::getKernelType (method) cv::ml::SVM (trait) . getKernelType
// Return value: Primitive(int)
cv_return_value_int cv_ml_SVM_getKernelType_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::SVM*>(instance)->getKernelType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::SVM::setKernel
// as:     cv::ml::SVM::setKernel (method) cv::ml::SVM (trait) . setKernel
// Arg ARG Primitive(int) kernelType= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_SVM_setKernel_int(void* instance, int kernelType) {
    try {
        reinterpret_cast<cv::ml::SVM*>(instance)->setKernel(kernelType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::SVM::setCustomKernel
// as:     cv::ml::SVM::setCustomKernel (method) cv::ml::SVM (trait) . setCustomKernel
// Arg ARG SmartPtr[cv::ml::SVM::Kernel (boxed)] _kernel= SmartPtr[cv::ml::SVM::Kernel (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_SVM_setCustomKernel_PtrOfKernel(void* instance, void* _kernel) {
    try {
        reinterpret_cast<cv::ml::SVM*>(instance)->setCustomKernel(*reinterpret_cast<const Ptr<cv::ml::SVM::Kernel>*>(_kernel));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::SVM::trainAuto
// as:     cv::ml::SVM::trainAuto (method) cv::ml::SVM (trait) . trainAuto
// Arg ARG SmartPtr[cv::ml::TrainData (boxed)] data= SmartPtr[cv::ml::TrainData (boxed)] = 
// Arg ARG Primitive(int) kFold= Primitive(int) = 10
// Arg ARG cv::ml::ParamGrid (boxed) Cgrid= cv::ml::ParamGrid (boxed) = getDefaultGrid(C)
// Arg ARG cv::ml::ParamGrid (boxed) gammaGrid= cv::ml::ParamGrid (boxed) = getDefaultGrid(GAMMA)
// Arg ARG cv::ml::ParamGrid (boxed) pGrid= cv::ml::ParamGrid (boxed) = getDefaultGrid(P)
// Arg ARG cv::ml::ParamGrid (boxed) nuGrid= cv::ml::ParamGrid (boxed) = getDefaultGrid(NU)
// Arg ARG cv::ml::ParamGrid (boxed) coeffGrid= cv::ml::ParamGrid (boxed) = getDefaultGrid(COEF)
// Arg ARG cv::ml::ParamGrid (boxed) degreeGrid= cv::ml::ParamGrid (boxed) = getDefaultGrid(DEGREE)
// Arg ARG Primitive(bool) balanced= Primitive(bool) = false
// Return value: Primitive(bool)
cv_return_value_bool cv_ml_SVM_trainAuto_PtrOfTrainData_int_ParamGrid_ParamGrid_ParamGrid_ParamGrid_ParamGrid_ParamGrid_bool(void* instance, void* data, int kFold, void* Cgrid, void* gammaGrid, void* pGrid, void* nuGrid, void* coeffGrid, void* degreeGrid, bool balanced) {
    try {
        bool ret = reinterpret_cast<cv::ml::SVM*>(instance)->trainAuto(*reinterpret_cast<const Ptr<cv::ml::TrainData>*>(data), kFold, *reinterpret_cast<cv::ml::ParamGrid*>(Cgrid), *reinterpret_cast<cv::ml::ParamGrid*>(gammaGrid), *reinterpret_cast<cv::ml::ParamGrid*>(pGrid), *reinterpret_cast<cv::ml::ParamGrid*>(nuGrid), *reinterpret_cast<cv::ml::ParamGrid*>(coeffGrid), *reinterpret_cast<cv::ml::ParamGrid*>(degreeGrid), balanced);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ml::SVM::trainAuto
// as:     cv::ml::SVM::trainAuto (method) cv::ml::SVM (trait) . trainAuto
// Arg ARG cv::_InputArray (boxed) samples= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) layout= Primitive(int) = 
// Arg ARG cv::_InputArray (boxed) responses= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) kFold= Primitive(int) = 10
// Arg ARG SmartPtr[cv::ml::ParamGrid (boxed)] Cgrid= SmartPtr[cv::ml::ParamGrid (boxed)] = SVM::getDefaultGridPtr(SVM::C)
// Arg ARG SmartPtr[cv::ml::ParamGrid (boxed)] gammaGrid= SmartPtr[cv::ml::ParamGrid (boxed)] = SVM::getDefaultGridPtr(SVM::GAMMA)
// Arg ARG SmartPtr[cv::ml::ParamGrid (boxed)] pGrid= SmartPtr[cv::ml::ParamGrid (boxed)] = SVM::getDefaultGridPtr(SVM::P)
// Arg ARG SmartPtr[cv::ml::ParamGrid (boxed)] nuGrid= SmartPtr[cv::ml::ParamGrid (boxed)] = SVM::getDefaultGridPtr(SVM::NU)
// Arg ARG SmartPtr[cv::ml::ParamGrid (boxed)] coeffGrid= SmartPtr[cv::ml::ParamGrid (boxed)] = SVM::getDefaultGridPtr(SVM::COEF)
// Arg ARG SmartPtr[cv::ml::ParamGrid (boxed)] degreeGrid= SmartPtr[cv::ml::ParamGrid (boxed)] = SVM::getDefaultGridPtr(SVM::DEGREE)
// Arg ARG Primitive(bool) balanced= Primitive(bool) = false
// Return value: Primitive(bool)
cv_return_value_bool cv_ml_SVM_trainAuto__InputArray_int__InputArray_int_PtrOfParamGrid_PtrOfParamGrid_PtrOfParamGrid_PtrOfParamGrid_PtrOfParamGrid_PtrOfParamGrid_bool(void* instance, void* samples, int layout, void* responses, int kFold, void* Cgrid, void* gammaGrid, void* pGrid, void* nuGrid, void* coeffGrid, void* degreeGrid, bool balanced) {
    try {
        bool ret = reinterpret_cast<cv::ml::SVM*>(instance)->trainAuto(*reinterpret_cast<const cv::_InputArray*>(samples), layout, *reinterpret_cast<const cv::_InputArray*>(responses), kFold, *reinterpret_cast<Ptr<cv::ml::ParamGrid>*>(Cgrid), *reinterpret_cast<Ptr<cv::ml::ParamGrid>*>(gammaGrid), *reinterpret_cast<Ptr<cv::ml::ParamGrid>*>(pGrid), *reinterpret_cast<Ptr<cv::ml::ParamGrid>*>(nuGrid), *reinterpret_cast<Ptr<cv::ml::ParamGrid>*>(coeffGrid), *reinterpret_cast<Ptr<cv::ml::ParamGrid>*>(degreeGrid), balanced);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ml::SVM::getSupportVectors
// as:     cv::ml::SVM::getSupportVectors (method) cv::ml::SVM (trait) . getSupportVectors
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_SVM_getSupportVectors_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::SVM*>(instance)->getSupportVectors();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::SVM::getUncompressedSupportVectors
// as:     cv::ml::SVM::getUncompressedSupportVectors (method) cv::ml::SVM (trait) . getUncompressedSupportVectors
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_SVM_getUncompressedSupportVectors_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::SVM*>(instance)->getUncompressedSupportVectors();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::SVM::getDecisionFunction
// as:     cv::ml::SVM::getDecisionFunction (method) cv::ml::SVM (trait) . getDecisionFunction
// Arg ARG Primitive(int) i= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) alpha= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) svidx= cv::_OutputArray (boxed) = 
// Return value: Primitive(double)
cv_return_value_double cv_ml_SVM_getDecisionFunction_const_int__OutputArray__OutputArray(void* instance, int i, void* alpha, void* svidx) {
    try {
        double ret = reinterpret_cast<cv::ml::SVM*>(instance)->getDecisionFunction(i, *reinterpret_cast<cv::_OutputArray*>(alpha), *reinterpret_cast<cv::_OutputArray*>(svidx));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ml::SVM::getDefaultGrid
// as:     cv::ml::SVM::getDefaultGrid (method) cv::ml::SVM (trait) . getDefaultGrid
// Arg ARG Primitive(int) param_id= Primitive(int) = 
// Return value: cv::ml::ParamGrid (boxed)
cv_return_value_void_X cv_ml_SVM_getDefaultGrid_int(int param_id) {
    try {
        cv::ml::ParamGrid ret = cv::ml::SVM::getDefaultGrid(param_id);
        return { Error::Code::StsOk, NULL, new cv::ml::ParamGrid(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::SVM::getDefaultGridPtr
// as:     cv::ml::SVM::getDefaultGridPtr (method) cv::ml::SVM (trait) . getDefaultGridPtr
// Arg ARG Primitive(int) param_id= Primitive(int) = 
// Return value: SmartPtr[cv::ml::ParamGrid (boxed)]
cv_return_value_void_X cv_ml_SVM_getDefaultGridPtr_int(int param_id) {
    try {
        Ptr<cv::ml::ParamGrid> ret = cv::ml::SVM::getDefaultGridPtr(param_id);
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::ParamGrid>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::SVM::create
// as:     cv::ml::SVM::create (method) cv::ml::SVM (trait) . create
// Return value: SmartPtr[cv::ml::SVM (boxed)]
cv_return_value_void_X cv_ml_SVM_create() {
    try {
        Ptr<cv::ml::SVM> ret = cv::ml::SVM::create();
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::SVM>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::SVM::load
// as:     cv::ml::SVM::load (method) cv::ml::SVM (trait) . load
// Arg ARG string filepath= string = 
// Return value: SmartPtr[cv::ml::SVM (boxed)]
cv_return_value_void_X cv_ml_SVM_load_String(const char* filepath) {
    try {
        Ptr<cv::ml::SVM> ret = cv::ml::SVM::load(String(filepath));
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::SVM>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::SVM::Kernel::getType
// as:     cv::ml::SVM::Kernel::getType (method) cv::ml::SVM::Kernel (trait) . getType
// Return value: Primitive(int)
cv_return_value_int cv_ml_SVM_Kernel_getType_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::SVM::Kernel*>(instance)->getType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::SVM::Kernel::calc
// as:     cv::ml::SVM::Kernel::calc (method) cv::ml::SVM::Kernel (trait) . calc
// Arg ARG Primitive(int) vcount= Primitive(int) = 
// Arg ARG Primitive(int) n= Primitive(int) = 
// Arg ARG RawPtr[Primitive(float)] * vecs= (ptr) RawPtr[Primitive(float)] = 
// Arg ARG RawPtr[Primitive(float)] * another= (ptr) RawPtr[Primitive(float)] = 
// Arg ARG RawPtr[Primitive(float)] * results= (ptr) RawPtr[Primitive(float)] = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_SVM_Kernel_calc_int_int_const_float_X_const_float_X_float_X(void* instance, int vcount, int n, const float* vecs, const float* another, float* results) {
    try {
        reinterpret_cast<cv::ml::SVM::Kernel*>(instance)->calc(vcount, n, vecs, another, results);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::SVMSGD::getWeights
// as:     cv::ml::SVMSGD::getWeights (method) cv::ml::SVMSGD (trait) . getWeights
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_SVMSGD_getWeights(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::SVMSGD*>(instance)->getWeights();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::SVMSGD::getShift
// as:     cv::ml::SVMSGD::getShift (method) cv::ml::SVMSGD (trait) . getShift
// Return value: Primitive(float)
cv_return_value_float cv_ml_SVMSGD_getShift(void* instance) {
    try {
        float ret = reinterpret_cast<cv::ml::SVMSGD*>(instance)->getShift();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::ml::SVMSGD::setOptimalParameters
// as:     cv::ml::SVMSGD::setOptimalParameters (method) cv::ml::SVMSGD (trait) . setOptimalParameters
// Arg ARG Primitive(int) svmsgdType= Primitive(int) = SVMSGD::ASGD
// Arg ARG Primitive(int) marginType= Primitive(int) = SVMSGD::SOFT_MARGIN
// Return value: Primitive(void)
cv_return_value_void cv_ml_SVMSGD_setOptimalParameters_int_int(void* instance, int svmsgdType, int marginType) {
    try {
        reinterpret_cast<cv::ml::SVMSGD*>(instance)->setOptimalParameters(svmsgdType, marginType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::SVMSGD::getSvmsgdType
// as:     cv::ml::SVMSGD::getSvmsgdType (method) cv::ml::SVMSGD (trait) . getSvmsgdType
// Return value: Primitive(int)
cv_return_value_int cv_ml_SVMSGD_getSvmsgdType_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::SVMSGD*>(instance)->getSvmsgdType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::SVMSGD::setSvmsgdType
// as:     cv::ml::SVMSGD::setSvmsgdType (method) cv::ml::SVMSGD (trait) . setSvmsgdType
// Arg ARG Primitive(int) svmsgdType= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_SVMSGD_setSvmsgdType_int(void* instance, int svmsgdType) {
    try {
        reinterpret_cast<cv::ml::SVMSGD*>(instance)->setSvmsgdType(svmsgdType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::SVMSGD::getMarginType
// as:     cv::ml::SVMSGD::getMarginType (method) cv::ml::SVMSGD (trait) . getMarginType
// Return value: Primitive(int)
cv_return_value_int cv_ml_SVMSGD_getMarginType_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::SVMSGD*>(instance)->getMarginType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::SVMSGD::setMarginType
// as:     cv::ml::SVMSGD::setMarginType (method) cv::ml::SVMSGD (trait) . setMarginType
// Arg ARG Primitive(int) marginType= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_SVMSGD_setMarginType_int(void* instance, int marginType) {
    try {
        reinterpret_cast<cv::ml::SVMSGD*>(instance)->setMarginType(marginType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::SVMSGD::getMarginRegularization
// as:     cv::ml::SVMSGD::getMarginRegularization (method) cv::ml::SVMSGD (trait) . getMarginRegularization
// Return value: Primitive(float)
cv_return_value_float cv_ml_SVMSGD_getMarginRegularization_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::ml::SVMSGD*>(instance)->getMarginRegularization();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::ml::SVMSGD::setMarginRegularization
// as:     cv::ml::SVMSGD::setMarginRegularization (method) cv::ml::SVMSGD (trait) . setMarginRegularization
// Arg ARG Primitive(float) marginRegularization= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_SVMSGD_setMarginRegularization_float(void* instance, float marginRegularization) {
    try {
        reinterpret_cast<cv::ml::SVMSGD*>(instance)->setMarginRegularization(marginRegularization);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::SVMSGD::getInitialStepSize
// as:     cv::ml::SVMSGD::getInitialStepSize (method) cv::ml::SVMSGD (trait) . getInitialStepSize
// Return value: Primitive(float)
cv_return_value_float cv_ml_SVMSGD_getInitialStepSize_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::ml::SVMSGD*>(instance)->getInitialStepSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::ml::SVMSGD::setInitialStepSize
// as:     cv::ml::SVMSGD::setInitialStepSize (method) cv::ml::SVMSGD (trait) . setInitialStepSize
// Arg ARG Primitive(float) InitialStepSize= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_SVMSGD_setInitialStepSize_float(void* instance, float InitialStepSize) {
    try {
        reinterpret_cast<cv::ml::SVMSGD*>(instance)->setInitialStepSize(InitialStepSize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::SVMSGD::getStepDecreasingPower
// as:     cv::ml::SVMSGD::getStepDecreasingPower (method) cv::ml::SVMSGD (trait) . getStepDecreasingPower
// Return value: Primitive(float)
cv_return_value_float cv_ml_SVMSGD_getStepDecreasingPower_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::ml::SVMSGD*>(instance)->getStepDecreasingPower();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::ml::SVMSGD::setStepDecreasingPower
// as:     cv::ml::SVMSGD::setStepDecreasingPower (method) cv::ml::SVMSGD (trait) . setStepDecreasingPower
// Arg ARG Primitive(float) stepDecreasingPower= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_SVMSGD_setStepDecreasingPower_float(void* instance, float stepDecreasingPower) {
    try {
        reinterpret_cast<cv::ml::SVMSGD*>(instance)->setStepDecreasingPower(stepDecreasingPower);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::SVMSGD::getTermCriteria
// as:     cv::ml::SVMSGD::getTermCriteria (method) cv::ml::SVMSGD (trait) . getTermCriteria
// Return value: cv::TermCriteria (boxed)
cv_return_value_void_X cv_ml_SVMSGD_getTermCriteria_const(void* instance) {
    try {
        cv::TermCriteria ret = reinterpret_cast<cv::ml::SVMSGD*>(instance)->getTermCriteria();
        return { Error::Code::StsOk, NULL, new cv::TermCriteria(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::SVMSGD::setTermCriteria
// as:     cv::ml::SVMSGD::setTermCriteria (method) cv::ml::SVMSGD (trait) . setTermCriteria
// Arg ARG cv::TermCriteria (boxed) val= cv::TermCriteria (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_SVMSGD_setTermCriteria_TermCriteria(void* instance, void* val) {
    try {
        reinterpret_cast<cv::ml::SVMSGD*>(instance)->setTermCriteria(*reinterpret_cast<const cv::TermCriteria*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::SVMSGD::create
// as:     cv::ml::SVMSGD::create (method) cv::ml::SVMSGD (trait) . create
// Return value: SmartPtr[cv::ml::SVMSGD (boxed)]
cv_return_value_void_X cv_ml_SVMSGD_create() {
    try {
        Ptr<cv::ml::SVMSGD> ret = cv::ml::SVMSGD::create();
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::SVMSGD>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::SVMSGD::load
// as:     cv::ml::SVMSGD::load (method) cv::ml::SVMSGD (trait) . load
// Arg ARG string filepath= string = 
// Arg ARG string nodeName= string = String()
// Return value: SmartPtr[cv::ml::SVMSGD (boxed)]
cv_return_value_void_X cv_ml_SVMSGD_load_String_String(const char* filepath, const char* nodeName) {
    try {
        Ptr<cv::ml::SVMSGD> ret = cv::ml::SVMSGD::load(String(filepath), String(nodeName));
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::SVMSGD>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::StatModel::getVarCount
// as:     cv::ml::StatModel::getVarCount (method) cv::ml::StatModel (trait) . getVarCount
// Return value: Primitive(int)
cv_return_value_int cv_ml_StatModel_getVarCount_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::StatModel*>(instance)->getVarCount();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::StatModel::empty
// as:     cv::ml::StatModel::empty (method) cv::ml::StatModel (trait) . empty
// Return value: Primitive(bool)
cv_return_value_bool cv_ml_StatModel_empty_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ml::StatModel*>(instance)->empty();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ml::StatModel::isTrained
// as:     cv::ml::StatModel::isTrained (method) cv::ml::StatModel (trait) . isTrained
// Return value: Primitive(bool)
cv_return_value_bool cv_ml_StatModel_isTrained_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ml::StatModel*>(instance)->isTrained();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ml::StatModel::isClassifier
// as:     cv::ml::StatModel::isClassifier (method) cv::ml::StatModel (trait) . isClassifier
// Return value: Primitive(bool)
cv_return_value_bool cv_ml_StatModel_isClassifier_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ml::StatModel*>(instance)->isClassifier();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ml::StatModel::train
// as:     cv::ml::StatModel::train (method) cv::ml::StatModel (trait) . train
// Arg ARG SmartPtr[cv::ml::TrainData (boxed)] trainData= SmartPtr[cv::ml::TrainData (boxed)] = 
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Return value: Primitive(bool)
cv_return_value_bool cv_ml_StatModel_train_PtrOfTrainData_int(void* instance, void* trainData, int flags) {
    try {
        bool ret = reinterpret_cast<cv::ml::StatModel*>(instance)->train(*reinterpret_cast<const Ptr<cv::ml::TrainData>*>(trainData), flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ml::StatModel::train
// as:     cv::ml::StatModel::train (method) cv::ml::StatModel (trait) . train
// Arg ARG cv::_InputArray (boxed) samples= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) layout= Primitive(int) = 
// Arg ARG cv::_InputArray (boxed) responses= cv::_InputArray (boxed) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_ml_StatModel_train__InputArray_int__InputArray(void* instance, void* samples, int layout, void* responses) {
    try {
        bool ret = reinterpret_cast<cv::ml::StatModel*>(instance)->train(*reinterpret_cast<const cv::_InputArray*>(samples), layout, *reinterpret_cast<const cv::_InputArray*>(responses));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ml::StatModel::calcError
// as:     cv::ml::StatModel::calcError (method) cv::ml::StatModel (trait) . calcError
// Arg ARG SmartPtr[cv::ml::TrainData (boxed)] data= SmartPtr[cv::ml::TrainData (boxed)] = 
// Arg ARG Primitive(bool) test= Primitive(bool) = 
// Arg ARG cv::_OutputArray (boxed) resp= cv::_OutputArray (boxed) = 
// Return value: Primitive(float)
cv_return_value_float cv_ml_StatModel_calcError_const_PtrOfTrainData_bool__OutputArray(void* instance, void* data, bool test, void* resp) {
    try {
        float ret = reinterpret_cast<cv::ml::StatModel*>(instance)->calcError(*reinterpret_cast<const Ptr<cv::ml::TrainData>*>(data), test, *reinterpret_cast<cv::_OutputArray*>(resp));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::ml::StatModel::predict
// as:     cv::ml::StatModel::predict (method) cv::ml::StatModel (trait) . predict
// Arg ARG cv::_InputArray (boxed) samples= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) results= cv::_OutputArray (boxed) = noArray()
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Return value: Primitive(float)
cv_return_value_float cv_ml_StatModel_predict_const__InputArray__OutputArray_int(void* instance, void* samples, void* results, int flags) {
    try {
        float ret = reinterpret_cast<cv::ml::StatModel*>(instance)->predict(*reinterpret_cast<const cv::_InputArray*>(samples), *reinterpret_cast<cv::_OutputArray*>(results), flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::ml::TrainData::missingValue
// as:     cv::ml::TrainData::missingValue (method) cv::ml::TrainData (trait) . missingValue
// Return value: Primitive(float)
cv_return_value_float cv_ml_TrainData_missingValue(void* instance) {
    try {
        float ret = reinterpret_cast<cv::ml::TrainData*>(instance)->missingValue();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::ml::TrainData::getLayout
// as:     cv::ml::TrainData::getLayout (method) cv::ml::TrainData (trait) . getLayout
// Return value: Primitive(int)
cv_return_value_int cv_ml_TrainData_getLayout_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getLayout();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::TrainData::getNTrainSamples
// as:     cv::ml::TrainData::getNTrainSamples (method) cv::ml::TrainData (trait) . getNTrainSamples
// Return value: Primitive(int)
cv_return_value_int cv_ml_TrainData_getNTrainSamples_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getNTrainSamples();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::TrainData::getNTestSamples
// as:     cv::ml::TrainData::getNTestSamples (method) cv::ml::TrainData (trait) . getNTestSamples
// Return value: Primitive(int)
cv_return_value_int cv_ml_TrainData_getNTestSamples_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getNTestSamples();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::TrainData::getNSamples
// as:     cv::ml::TrainData::getNSamples (method) cv::ml::TrainData (trait) . getNSamples
// Return value: Primitive(int)
cv_return_value_int cv_ml_TrainData_getNSamples_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getNSamples();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::TrainData::getNVars
// as:     cv::ml::TrainData::getNVars (method) cv::ml::TrainData (trait) . getNVars
// Return value: Primitive(int)
cv_return_value_int cv_ml_TrainData_getNVars_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getNVars();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::TrainData::getNAllVars
// as:     cv::ml::TrainData::getNAllVars (method) cv::ml::TrainData (trait) . getNAllVars
// Return value: Primitive(int)
cv_return_value_int cv_ml_TrainData_getNAllVars_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getNAllVars();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::TrainData::getSample
// as:     cv::ml::TrainData::getSample (method) cv::ml::TrainData (trait) . getSample
// Arg ARG cv::_InputArray (boxed) varIdx= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) sidx= Primitive(int) = 
// Arg ARG RawPtr[Primitive(float)] * buf= (ptr) RawPtr[Primitive(float)] = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_TrainData_getSample_const__InputArray_int_float_X(void* instance, void* varIdx, int sidx, float* buf) {
    try {
        reinterpret_cast<cv::ml::TrainData*>(instance)->getSample(*reinterpret_cast<const cv::_InputArray*>(varIdx), sidx, buf);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::TrainData::getSamples
// as:     cv::ml::TrainData::getSamples (method) cv::ml::TrainData (trait) . getSamples
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getSamples_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getSamples();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getMissing
// as:     cv::ml::TrainData::getMissing (method) cv::ml::TrainData (trait) . getMissing
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getMissing_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getMissing();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getTrainSamples
// as:     cv::ml::TrainData::getTrainSamples (method) cv::ml::TrainData (trait) . getTrainSamples
// Arg ARG Primitive(int) layout= Primitive(int) = ROW_SAMPLE
// Arg ARG Primitive(bool) compressSamples= Primitive(bool) = true
// Arg ARG Primitive(bool) compressVars= Primitive(bool) = true
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getTrainSamples_const_int_bool_bool(void* instance, int layout, bool compressSamples, bool compressVars) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getTrainSamples(layout, compressSamples, compressVars);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getTrainResponses
// as:     cv::ml::TrainData::getTrainResponses (method) cv::ml::TrainData (trait) . getTrainResponses
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getTrainResponses_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getTrainResponses();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getTrainNormCatResponses
// as:     cv::ml::TrainData::getTrainNormCatResponses (method) cv::ml::TrainData (trait) . getTrainNormCatResponses
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getTrainNormCatResponses_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getTrainNormCatResponses();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getTestResponses
// as:     cv::ml::TrainData::getTestResponses (method) cv::ml::TrainData (trait) . getTestResponses
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getTestResponses_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getTestResponses();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getTestNormCatResponses
// as:     cv::ml::TrainData::getTestNormCatResponses (method) cv::ml::TrainData (trait) . getTestNormCatResponses
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getTestNormCatResponses_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getTestNormCatResponses();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getResponses
// as:     cv::ml::TrainData::getResponses (method) cv::ml::TrainData (trait) . getResponses
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getResponses_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getResponses();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getNormCatResponses
// as:     cv::ml::TrainData::getNormCatResponses (method) cv::ml::TrainData (trait) . getNormCatResponses
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getNormCatResponses_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getNormCatResponses();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getSampleWeights
// as:     cv::ml::TrainData::getSampleWeights (method) cv::ml::TrainData (trait) . getSampleWeights
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getSampleWeights_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getSampleWeights();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getTrainSampleWeights
// as:     cv::ml::TrainData::getTrainSampleWeights (method) cv::ml::TrainData (trait) . getTrainSampleWeights
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getTrainSampleWeights_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getTrainSampleWeights();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getTestSampleWeights
// as:     cv::ml::TrainData::getTestSampleWeights (method) cv::ml::TrainData (trait) . getTestSampleWeights
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getTestSampleWeights_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getTestSampleWeights();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getVarIdx
// as:     cv::ml::TrainData::getVarIdx (method) cv::ml::TrainData (trait) . getVarIdx
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getVarIdx_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getVarIdx();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getVarType
// as:     cv::ml::TrainData::getVarType (method) cv::ml::TrainData (trait) . getVarType
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getVarType_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getVarType();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getVarSymbolFlags
// as:     cv::ml::TrainData::getVarSymbolFlags (method) cv::ml::TrainData (trait) . getVarSymbolFlags
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getVarSymbolFlags_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getVarSymbolFlags();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getResponseType
// as:     cv::ml::TrainData::getResponseType (method) cv::ml::TrainData (trait) . getResponseType
// Return value: Primitive(int)
cv_return_value_int cv_ml_TrainData_getResponseType_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getResponseType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::TrainData::getTrainSampleIdx
// as:     cv::ml::TrainData::getTrainSampleIdx (method) cv::ml::TrainData (trait) . getTrainSampleIdx
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getTrainSampleIdx_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getTrainSampleIdx();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getTestSampleIdx
// as:     cv::ml::TrainData::getTestSampleIdx (method) cv::ml::TrainData (trait) . getTestSampleIdx
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getTestSampleIdx_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getTestSampleIdx();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getValues
// as:     cv::ml::TrainData::getValues (method) cv::ml::TrainData (trait) . getValues
// Arg ARG Primitive(int) vi= Primitive(int) = 
// Arg ARG cv::_InputArray (boxed) sidx= cv::_InputArray (boxed) = 
// Arg ARG RawPtr[Primitive(float)] * values= (ptr) RawPtr[Primitive(float)] = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_TrainData_getValues_const_int__InputArray_float_X(void* instance, int vi, void* sidx, float* values) {
    try {
        reinterpret_cast<cv::ml::TrainData*>(instance)->getValues(vi, *reinterpret_cast<const cv::_InputArray*>(sidx), values);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::TrainData::getNormCatValues
// as:     cv::ml::TrainData::getNormCatValues (method) cv::ml::TrainData (trait) . getNormCatValues
// Arg ARG Primitive(int) vi= Primitive(int) = 
// Arg ARG cv::_InputArray (boxed) sidx= cv::_InputArray (boxed) = 
// Arg ARG RawPtr[Primitive(int)] * values= (ptr) RawPtr[Primitive(int)] = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_TrainData_getNormCatValues_const_int__InputArray_int_X(void* instance, int vi, void* sidx, int* values) {
    try {
        reinterpret_cast<cv::ml::TrainData*>(instance)->getNormCatValues(vi, *reinterpret_cast<const cv::_InputArray*>(sidx), values);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::TrainData::getDefaultSubstValues
// as:     cv::ml::TrainData::getDefaultSubstValues (method) cv::ml::TrainData (trait) . getDefaultSubstValues
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getDefaultSubstValues_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getDefaultSubstValues();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getCatCount
// as:     cv::ml::TrainData::getCatCount (method) cv::ml::TrainData (trait) . getCatCount
// Arg ARG Primitive(int) vi= Primitive(int) = 
// Return value: Primitive(int)
cv_return_value_int cv_ml_TrainData_getCatCount_const_int(void* instance, int vi) {
    try {
        int ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getCatCount(vi);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ml::TrainData::getClassLabels
// as:     cv::ml::TrainData::getClassLabels (method) cv::ml::TrainData (trait) . getClassLabels
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getClassLabels_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getClassLabels();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getCatOfs
// as:     cv::ml::TrainData::getCatOfs (method) cv::ml::TrainData (trait) . getCatOfs
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getCatOfs_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getCatOfs();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getCatMap
// as:     cv::ml::TrainData::getCatMap (method) cv::ml::TrainData (trait) . getCatMap
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getCatMap_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getCatMap();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::setTrainTestSplit
// as:     cv::ml::TrainData::setTrainTestSplit (method) cv::ml::TrainData (trait) . setTrainTestSplit
// Arg ARG Primitive(int) count= Primitive(int) = 
// Arg ARG Primitive(bool) shuffle= Primitive(bool) = true
// Return value: Primitive(void)
cv_return_value_void cv_ml_TrainData_setTrainTestSplit_int_bool(void* instance, int count, bool shuffle) {
    try {
        reinterpret_cast<cv::ml::TrainData*>(instance)->setTrainTestSplit(count, shuffle);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::TrainData::setTrainTestSplitRatio
// as:     cv::ml::TrainData::setTrainTestSplitRatio (method) cv::ml::TrainData (trait) . setTrainTestSplitRatio
// Arg ARG Primitive(double) ratio= Primitive(double) = 
// Arg ARG Primitive(bool) shuffle= Primitive(bool) = true
// Return value: Primitive(void)
cv_return_value_void cv_ml_TrainData_setTrainTestSplitRatio_double_bool(void* instance, double ratio, bool shuffle) {
    try {
        reinterpret_cast<cv::ml::TrainData*>(instance)->setTrainTestSplitRatio(ratio, shuffle);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::TrainData::shuffleTrainTest
// as:     cv::ml::TrainData::shuffleTrainTest (method) cv::ml::TrainData (trait) . shuffleTrainTest
// Return value: Primitive(void)
cv_return_value_void cv_ml_TrainData_shuffleTrainTest(void* instance) {
    try {
        reinterpret_cast<cv::ml::TrainData*>(instance)->shuffleTrainTest();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::TrainData::getTestSamples
// as:     cv::ml::TrainData::getTestSamples (method) cv::ml::TrainData (trait) . getTestSamples
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getTestSamples_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::ml::TrainData*>(instance)->getTestSamples();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getNames
// as:     cv::ml::TrainData::getNames (method) cv::ml::TrainData (trait) . getNames
// Arg ARG Vector[string] names= Vector[string] = 
// Return value: Primitive(void)
cv_return_value_void cv_ml_TrainData_getNames_const_VectorOfString(void* instance, void* names) {
    try {
        reinterpret_cast<cv::ml::TrainData*>(instance)->getNames(*reinterpret_cast<std::vector<String>*>(names));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ml::TrainData::getSubVector
// as:     cv::ml::TrainData::getSubVector (method) cv::ml::TrainData (trait) . getSubVector
// Arg ARG cv::Mat (boxed) vec= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) idx= cv::Mat (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getSubVector_Mat_Mat(void* vec, void* idx) {
    try {
        cv::Mat ret = cv::ml::TrainData::getSubVector(*reinterpret_cast<const cv::Mat*>(vec), *reinterpret_cast<const cv::Mat*>(idx));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::getSubMatrix
// as:     cv::ml::TrainData::getSubMatrix (method) cv::ml::TrainData (trait) . getSubMatrix
// Arg ARG cv::Mat (boxed) matrix= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) idx= cv::Mat (boxed) = 
// Arg ARG Primitive(int) layout= Primitive(int) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_ml_TrainData_getSubMatrix_Mat_Mat_int(void* matrix, void* idx, int layout) {
    try {
        cv::Mat ret = cv::ml::TrainData::getSubMatrix(*reinterpret_cast<const cv::Mat*>(matrix), *reinterpret_cast<const cv::Mat*>(idx), layout);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::loadFromCSV
// as:     cv::ml::TrainData::loadFromCSV (method) cv::ml::TrainData (trait) . loadFromCSV
// Arg ARG string filename= string = 
// Arg ARG Primitive(int) headerLineCount= Primitive(int) = 
// Arg ARG Primitive(int) responseStartIdx= Primitive(int) = -1
// Arg ARG Primitive(int) responseEndIdx= Primitive(int) = -1
// Arg ARG string varTypeSpec= string = String()
// Arg ARG Primitive(char) delimiter= Primitive(char) = ','
// Arg ARG Primitive(char) missch= Primitive(char) = '?'
// Return value: SmartPtr[cv::ml::TrainData (boxed)]
cv_return_value_void_X cv_ml_TrainData_loadFromCSV_String_int_int_int_String_char_char(const char* filename, int headerLineCount, int responseStartIdx, int responseEndIdx, const char* varTypeSpec, char delimiter, char missch) {
    try {
        Ptr<cv::ml::TrainData> ret = cv::ml::TrainData::loadFromCSV(String(filename), headerLineCount, responseStartIdx, responseEndIdx, String(varTypeSpec), delimiter, missch);
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::TrainData>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ml::TrainData::create
// as:     cv::ml::TrainData::create (method) cv::ml::TrainData (trait) . create
// Arg ARG cv::_InputArray (boxed) samples= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) layout= Primitive(int) = 
// Arg ARG cv::_InputArray (boxed) responses= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) varIdx= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) sampleIdx= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) sampleWeights= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) varType= cv::_InputArray (boxed) = noArray()
// Return value: SmartPtr[cv::ml::TrainData (boxed)]
cv_return_value_void_X cv_ml_TrainData_create__InputArray_int__InputArray__InputArray__InputArray__InputArray__InputArray(void* samples, int layout, void* responses, void* varIdx, void* sampleIdx, void* sampleWeights, void* varType) {
    try {
        Ptr<cv::ml::TrainData> ret = cv::ml::TrainData::create(*reinterpret_cast<const cv::_InputArray*>(samples), layout, *reinterpret_cast<const cv::_InputArray*>(responses), *reinterpret_cast<const cv::_InputArray*>(varIdx), *reinterpret_cast<const cv::_InputArray*>(sampleIdx), *reinterpret_cast<const cv::_InputArray*>(sampleWeights), *reinterpret_cast<const cv::_InputArray*>(varType));
        return { Error::Code::StsOk, NULL, new Ptr<cv::ml::TrainData>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}



} // extern "C"

