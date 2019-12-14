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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/structured_light.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/structured_light/graycodepattern.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/structured_light/sinusoidalpattern.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/structured_light/structured_light.hpp"

extern "C" {

// parsed: cv::structured_light::GrayCodePattern::getNumberOfPatternImages
// as:     cv::structured_light::GrayCodePattern::getNumberOfPatternImages (method) cv::structured_light::GrayCodePattern (trait) . getNumberOfPatternImages
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_structured_light_GrayCodePattern_getNumberOfPatternImages_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::structured_light::GrayCodePattern*>(instance)->getNumberOfPatternImages();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::structured_light::GrayCodePattern::setWhiteThreshold
// as:     cv::structured_light::GrayCodePattern::setWhiteThreshold (method) cv::structured_light::GrayCodePattern (trait) . setWhiteThreshold
// Arg ARG Primitive(size_t) value= Primitive(size_t) = 
// Return value: Primitive(void)
cv_return_value_void cv_structured_light_GrayCodePattern_setWhiteThreshold_size_t(void* instance, std::size_t value) {
    try {
        reinterpret_cast<cv::structured_light::GrayCodePattern*>(instance)->setWhiteThreshold(value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::structured_light::GrayCodePattern::setBlackThreshold
// as:     cv::structured_light::GrayCodePattern::setBlackThreshold (method) cv::structured_light::GrayCodePattern (trait) . setBlackThreshold
// Arg ARG Primitive(size_t) value= Primitive(size_t) = 
// Return value: Primitive(void)
cv_return_value_void cv_structured_light_GrayCodePattern_setBlackThreshold_size_t(void* instance, std::size_t value) {
    try {
        reinterpret_cast<cv::structured_light::GrayCodePattern*>(instance)->setBlackThreshold(value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::structured_light::GrayCodePattern::getImagesForShadowMasks
// as:     cv::structured_light::GrayCodePattern::getImagesForShadowMasks (method) cv::structured_light::GrayCodePattern (trait) . getImagesForShadowMasks
// Arg ARG cv::_InputOutputArray (boxed) blackImage= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) whiteImage= cv::_InputOutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_structured_light_GrayCodePattern_getImagesForShadowMasks_const__InputOutputArray__InputOutputArray(void* instance, void* blackImage, void* whiteImage) {
    try {
        reinterpret_cast<cv::structured_light::GrayCodePattern*>(instance)->getImagesForShadowMasks(*reinterpret_cast<cv::_InputOutputArray*>(blackImage), *reinterpret_cast<cv::_InputOutputArray*>(whiteImage));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::structured_light::GrayCodePattern::getProjPixel
// as:     cv::structured_light::GrayCodePattern::getProjPixel (method) cv::structured_light::GrayCodePattern (trait) . getProjPixel
// Arg ARG cv::_InputArray (boxed) patternImages= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) x= Primitive(int) = 
// Arg ARG Primitive(int) y= Primitive(int) = 
// Arg ARG cv::Point (simple) projPix= cv::Point (simple) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_structured_light_GrayCodePattern_getProjPixel_const__InputArray_int_int_Point(void* instance, void* patternImages, int x, int y, PointWrapper& projPix) {
    try {
        bool ret = reinterpret_cast<cv::structured_light::GrayCodePattern*>(instance)->getProjPixel(*reinterpret_cast<const cv::_InputArray*>(patternImages), x, y, *reinterpret_cast<cv::Point*>(&projPix));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::structured_light::GrayCodePattern::create
// as:     cv::structured_light::GrayCodePattern::create (method) cv::structured_light::GrayCodePattern (trait) . create
// Arg ARG cv::structured_light::GrayCodePattern::Params (boxed) parameters= cv::structured_light::GrayCodePattern::Params (boxed) = GrayCodePattern::Params()
// Return value: SmartPtr[cv::structured_light::GrayCodePattern (boxed)]
cv_return_value_void_X cv_structured_light_GrayCodePattern_create_Params(void* parameters) {
    try {
        Ptr<cv::structured_light::GrayCodePattern> ret = cv::structured_light::GrayCodePattern::create(*reinterpret_cast<const cv::structured_light::GrayCodePattern::Params*>(parameters));
        return { Error::Code::StsOk, NULL, new Ptr<cv::structured_light::GrayCodePattern>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::structured_light::GrayCodePattern::create
// as:     cv::structured_light::GrayCodePattern::create (method) cv::structured_light::GrayCodePattern (trait) . create
// Arg ARG Primitive(int) width= Primitive(int) = 
// Arg ARG Primitive(int) height= Primitive(int) = 
// Return value: SmartPtr[cv::structured_light::GrayCodePattern (boxed)]
cv_return_value_void_X cv_structured_light_GrayCodePattern_create_int_int(int width, int height) {
    try {
        Ptr<cv::structured_light::GrayCodePattern> ret = cv::structured_light::GrayCodePattern::create(width, height);
        return { Error::Code::StsOk, NULL, new Ptr<cv::structured_light::GrayCodePattern>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::structured_light::GrayCodePattern::Params
void cv_GrayCodePattern_Params_delete(void* instance) {
    delete reinterpret_cast<cv::structured_light::GrayCodePattern::Params*>(instance);
}
// parsed: cv::structured_light::GrayCodePattern::Params::Params
// as:     cv::structured_light::GrayCodePattern::Params::Params (constructor) cv::structured_light::GrayCodePattern::Params . default
// Return value: cv::structured_light::GrayCodePattern::Params (boxed)
cv_return_value_void_X cv_structured_light_GrayCodePattern_Params_Params() {
    try {
        cv::structured_light::GrayCodePattern::Params* ret = new cv::structured_light::GrayCodePattern::Params();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::structured_light::SinusoidalPattern::computePhaseMap
// as:     cv::structured_light::SinusoidalPattern::computePhaseMap (method) cv::structured_light::SinusoidalPattern (trait) . computePhaseMap
// Arg ARG cv::_InputArray (boxed) patternImages= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) wrappedPhaseMap= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) shadowMask= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) fundamental= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_structured_light_SinusoidalPattern_computePhaseMap__InputArray__OutputArray__OutputArray__InputArray(void* instance, void* patternImages, void* wrappedPhaseMap, void* shadowMask, void* fundamental) {
    try {
        reinterpret_cast<cv::structured_light::SinusoidalPattern*>(instance)->computePhaseMap(*reinterpret_cast<const cv::_InputArray*>(patternImages), *reinterpret_cast<cv::_OutputArray*>(wrappedPhaseMap), *reinterpret_cast<cv::_OutputArray*>(shadowMask), *reinterpret_cast<const cv::_InputArray*>(fundamental));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::structured_light::SinusoidalPattern::unwrapPhaseMap
// as:     cv::structured_light::SinusoidalPattern::unwrapPhaseMap (method) cv::structured_light::SinusoidalPattern (trait) . unwrapPhaseMap
// Arg ARG cv::_InputArray (boxed) wrappedPhaseMap= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) unwrappedPhaseMap= cv::_OutputArray (boxed) = 
// Arg ARG cv::Size (simple) camSize= cv::Size (simple) = 
// Arg ARG cv::_InputArray (boxed) shadowMask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_structured_light_SinusoidalPattern_unwrapPhaseMap__InputArray__OutputArray_Size__InputArray(void* instance, void* wrappedPhaseMap, void* unwrappedPhaseMap, SizeWrapper camSize, void* shadowMask) {
    try {
        reinterpret_cast<cv::structured_light::SinusoidalPattern*>(instance)->unwrapPhaseMap(*reinterpret_cast<const cv::_InputArray*>(wrappedPhaseMap), *reinterpret_cast<cv::_OutputArray*>(unwrappedPhaseMap), *reinterpret_cast<cv::Size*>(&camSize), *reinterpret_cast<const cv::_InputArray*>(shadowMask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::structured_light::SinusoidalPattern::findProCamMatches
// as:     cv::structured_light::SinusoidalPattern::findProCamMatches (method) cv::structured_light::SinusoidalPattern (trait) . findProCamMatches
// Arg ARG cv::_InputArray (boxed) projUnwrappedPhaseMap= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) camUnwrappedPhaseMap= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) matches= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_structured_light_SinusoidalPattern_findProCamMatches__InputArray__InputArray__OutputArray(void* instance, void* projUnwrappedPhaseMap, void* camUnwrappedPhaseMap, void* matches) {
    try {
        reinterpret_cast<cv::structured_light::SinusoidalPattern*>(instance)->findProCamMatches(*reinterpret_cast<const cv::_InputArray*>(projUnwrappedPhaseMap), *reinterpret_cast<const cv::_InputArray*>(camUnwrappedPhaseMap), *reinterpret_cast<cv::_OutputArray*>(matches));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::structured_light::SinusoidalPattern::computeDataModulationTerm
// as:     cv::structured_light::SinusoidalPattern::computeDataModulationTerm (method) cv::structured_light::SinusoidalPattern (trait) . computeDataModulationTerm
// Arg ARG cv::_InputArray (boxed) patternImages= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dataModulationTerm= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) shadowMask= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_structured_light_SinusoidalPattern_computeDataModulationTerm__InputArray__OutputArray__InputArray(void* instance, void* patternImages, void* dataModulationTerm, void* shadowMask) {
    try {
        reinterpret_cast<cv::structured_light::SinusoidalPattern*>(instance)->computeDataModulationTerm(*reinterpret_cast<const cv::_InputArray*>(patternImages), *reinterpret_cast<cv::_OutputArray*>(dataModulationTerm), *reinterpret_cast<const cv::_InputArray*>(shadowMask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::structured_light::SinusoidalPattern::create
// as:     cv::structured_light::SinusoidalPattern::create (method) cv::structured_light::SinusoidalPattern (trait) . create
// Arg ARG SmartPtr[cv::structured_light::SinusoidalPattern::Params (boxed)] parameters= SmartPtr[cv::structured_light::SinusoidalPattern::Params (boxed)] = makePtr<SinusoidalPattern::Params>()
// Return value: SmartPtr[cv::structured_light::SinusoidalPattern (boxed)]
cv_return_value_void_X cv_structured_light_SinusoidalPattern_create_PtrOfParams(void* parameters) {
    try {
        Ptr<cv::structured_light::SinusoidalPattern> ret = cv::structured_light::SinusoidalPattern::create(*reinterpret_cast<Ptr<cv::structured_light::SinusoidalPattern::Params>*>(parameters));
        return { Error::Code::StsOk, NULL, new Ptr<cv::structured_light::SinusoidalPattern>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::structured_light::SinusoidalPattern::Params
void cv_SinusoidalPattern_Params_delete(void* instance) {
    delete reinterpret_cast<cv::structured_light::SinusoidalPattern::Params*>(instance);
}
// parsed: cv::structured_light::SinusoidalPattern::Params::width
// as:     cv::structured_light::SinusoidalPattern::Params::width (method) cv::structured_light::SinusoidalPattern::Params . width
// Return value: Primitive(int)
cv_return_value_int cv_structured_light_SinusoidalPattern_Params_width_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::structured_light::SinusoidalPattern::Params*>(instance)->width;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::structured_light::SinusoidalPattern::Params::height
// as:     cv::structured_light::SinusoidalPattern::Params::height (method) cv::structured_light::SinusoidalPattern::Params . height
// Return value: Primitive(int)
cv_return_value_int cv_structured_light_SinusoidalPattern_Params_height_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::structured_light::SinusoidalPattern::Params*>(instance)->height;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::structured_light::SinusoidalPattern::Params::nbrOfPeriods
// as:     cv::structured_light::SinusoidalPattern::Params::nbrOfPeriods (method) cv::structured_light::SinusoidalPattern::Params . nbrOfPeriods
// Return value: Primitive(int)
cv_return_value_int cv_structured_light_SinusoidalPattern_Params_nbrOfPeriods_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::structured_light::SinusoidalPattern::Params*>(instance)->nbrOfPeriods;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::structured_light::SinusoidalPattern::Params::shiftValue
// as:     cv::structured_light::SinusoidalPattern::Params::shiftValue (method) cv::structured_light::SinusoidalPattern::Params . shiftValue
// Return value: Primitive(float)
cv_return_value_float cv_structured_light_SinusoidalPattern_Params_shiftValue_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::structured_light::SinusoidalPattern::Params*>(instance)->shiftValue;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::structured_light::SinusoidalPattern::Params::methodId
// as:     cv::structured_light::SinusoidalPattern::Params::methodId (method) cv::structured_light::SinusoidalPattern::Params . methodId
// Return value: Primitive(int)
cv_return_value_int cv_structured_light_SinusoidalPattern_Params_methodId_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::structured_light::SinusoidalPattern::Params*>(instance)->methodId;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::structured_light::SinusoidalPattern::Params::nbrOfPixelsBetweenMarkers
// as:     cv::structured_light::SinusoidalPattern::Params::nbrOfPixelsBetweenMarkers (method) cv::structured_light::SinusoidalPattern::Params . nbrOfPixelsBetweenMarkers
// Return value: Primitive(int)
cv_return_value_int cv_structured_light_SinusoidalPattern_Params_nbrOfPixelsBetweenMarkers_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::structured_light::SinusoidalPattern::Params*>(instance)->nbrOfPixelsBetweenMarkers;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::structured_light::SinusoidalPattern::Params::horizontal
// as:     cv::structured_light::SinusoidalPattern::Params::horizontal (method) cv::structured_light::SinusoidalPattern::Params . horizontal
// Return value: Primitive(bool)
cv_return_value_bool cv_structured_light_SinusoidalPattern_Params_horizontal_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::structured_light::SinusoidalPattern::Params*>(instance)->horizontal;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::structured_light::SinusoidalPattern::Params::setMarkers
// as:     cv::structured_light::SinusoidalPattern::Params::setMarkers (method) cv::structured_light::SinusoidalPattern::Params . setMarkers
// Return value: Primitive(bool)
cv_return_value_bool cv_structured_light_SinusoidalPattern_Params_setMarkers_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::structured_light::SinusoidalPattern::Params*>(instance)->setMarkers;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::structured_light::SinusoidalPattern::Params::Params
// as:     cv::structured_light::SinusoidalPattern::Params::Params (constructor) cv::structured_light::SinusoidalPattern::Params . default
// Return value: cv::structured_light::SinusoidalPattern::Params (boxed)
cv_return_value_void_X cv_structured_light_SinusoidalPattern_Params_Params() {
    try {
        cv::structured_light::SinusoidalPattern::Params* ret = new cv::structured_light::SinusoidalPattern::Params();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::structured_light::StructuredLightPattern::generate
// as:     cv::structured_light::StructuredLightPattern::generate (method) cv::structured_light::StructuredLightPattern (trait) . generate
// Arg ARG cv::_OutputArray (boxed) patternImages= cv::_OutputArray (boxed) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_structured_light_StructuredLightPattern_generate__OutputArray(void* instance, void* patternImages) {
    try {
        bool ret = reinterpret_cast<cv::structured_light::StructuredLightPattern*>(instance)->generate(*reinterpret_cast<cv::_OutputArray*>(patternImages));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::structured_light::StructuredLightPattern::decode
// as:     cv::structured_light::StructuredLightPattern::decode (method) cv::structured_light::StructuredLightPattern (trait) . decode
// Arg ARG Vector[Vector[cv::Mat (boxed)]] patternImages= Vector[Vector[cv::Mat (boxed)]] = 
// Arg ARG cv::_OutputArray (boxed) disparityMap= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) blackImages= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) whiteImages= cv::_InputArray (boxed) = noArray()
// Arg ARG Primitive(int) flags= Primitive(int) = DECODE_3D_UNDERWORLD
// Return value: Primitive(bool)
cv_return_value_bool cv_structured_light_StructuredLightPattern_decode_const_VectorOfVectorOfMat__OutputArray__InputArray__InputArray_int(void* instance, void* patternImages, void* disparityMap, void* blackImages, void* whiteImages, int flags) {
    try {
        bool ret = reinterpret_cast<cv::structured_light::StructuredLightPattern*>(instance)->decode(*reinterpret_cast<const std::vector<std::vector<cv::Mat>>*>(patternImages), *reinterpret_cast<cv::_OutputArray*>(disparityMap), *reinterpret_cast<const cv::_InputArray*>(blackImages), *reinterpret_cast<const cv::_InputArray*>(whiteImages), flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}



} // extern "C"

