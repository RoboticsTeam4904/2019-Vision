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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/phase_unwrapping.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/phase_unwrapping/histogramphaseunwrapping.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/phase_unwrapping/phase_unwrapping.hpp"

extern "C" {

// parsed: cv::phase_unwrapping::HistogramPhaseUnwrapping::getInverseReliabilityMap
// as:     cv::phase_unwrapping::HistogramPhaseUnwrapping::getInverseReliabilityMap (method) cv::phase_unwrapping::HistogramPhaseUnwrapping (trait) . getInverseReliabilityMap
// Arg ARG cv::_OutputArray (boxed) reliabilityMap= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_phase_unwrapping_HistogramPhaseUnwrapping_getInverseReliabilityMap__OutputArray(void* instance, void* reliabilityMap) {
    try {
        reinterpret_cast<cv::phase_unwrapping::HistogramPhaseUnwrapping*>(instance)->getInverseReliabilityMap(*reinterpret_cast<cv::_OutputArray*>(reliabilityMap));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::phase_unwrapping::HistogramPhaseUnwrapping::create
// as:     cv::phase_unwrapping::HistogramPhaseUnwrapping::create (method) cv::phase_unwrapping::HistogramPhaseUnwrapping (trait) . create
// Arg ARG cv::phase_unwrapping::HistogramPhaseUnwrapping::Params (boxed) parameters= cv::phase_unwrapping::HistogramPhaseUnwrapping::Params (boxed) = HistogramPhaseUnwrapping::Params()
// Return value: SmartPtr[cv::phase_unwrapping::HistogramPhaseUnwrapping (boxed)]
cv_return_value_void_X cv_phase_unwrapping_HistogramPhaseUnwrapping_create_Params(void* parameters) {
    try {
        Ptr<cv::phase_unwrapping::HistogramPhaseUnwrapping> ret = cv::phase_unwrapping::HistogramPhaseUnwrapping::create(*reinterpret_cast<const cv::phase_unwrapping::HistogramPhaseUnwrapping::Params*>(parameters));
        return { Error::Code::StsOk, NULL, new Ptr<cv::phase_unwrapping::HistogramPhaseUnwrapping>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::phase_unwrapping::HistogramPhaseUnwrapping::Params
void cv_HistogramPhaseUnwrapping_Params_delete(void* instance) {
    delete reinterpret_cast<cv::phase_unwrapping::HistogramPhaseUnwrapping::Params*>(instance);
}
// parsed: cv::phase_unwrapping::HistogramPhaseUnwrapping::Params::Params
// as:     cv::phase_unwrapping::HistogramPhaseUnwrapping::Params::Params (constructor) cv::phase_unwrapping::HistogramPhaseUnwrapping::Params . default
// Return value: cv::phase_unwrapping::HistogramPhaseUnwrapping::Params (boxed)
cv_return_value_void_X cv_phase_unwrapping_HistogramPhaseUnwrapping_Params_Params() {
    try {
        cv::phase_unwrapping::HistogramPhaseUnwrapping::Params* ret = new cv::phase_unwrapping::HistogramPhaseUnwrapping::Params();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::phase_unwrapping::PhaseUnwrapping::unwrapPhaseMap
// as:     cv::phase_unwrapping::PhaseUnwrapping::unwrapPhaseMap (method) cv::phase_unwrapping::PhaseUnwrapping (trait) . unwrapPhaseMap
// Arg ARG cv::_InputArray (boxed) wrappedPhaseMap= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) unwrappedPhaseMap= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) shadowMask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_phase_unwrapping_PhaseUnwrapping_unwrapPhaseMap__InputArray__OutputArray__InputArray(void* instance, void* wrappedPhaseMap, void* unwrappedPhaseMap, void* shadowMask) {
    try {
        reinterpret_cast<cv::phase_unwrapping::PhaseUnwrapping*>(instance)->unwrapPhaseMap(*reinterpret_cast<const cv::_InputArray*>(wrappedPhaseMap), *reinterpret_cast<cv::_OutputArray*>(unwrappedPhaseMap), *reinterpret_cast<const cv::_InputArray*>(shadowMask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}



} // extern "C"

