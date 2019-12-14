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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/bioinspired.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/bioinspired/bioinspired.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/bioinspired/retina.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/bioinspired/retinafasttonemapping.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/bioinspired/transientareassegmentationmodule.hpp"

extern "C" {

// parsed: cv::bioinspired::Retina::getInputSize
// as:     cv::bioinspired::Retina::getInputSize (method) cv::bioinspired::Retina (trait) . getInputSize
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_bioinspired_Retina_getInputSize(void* instance) {
    try {
        cv::Size ret = reinterpret_cast<cv::bioinspired::Retina*>(instance)->getInputSize();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::bioinspired::Retina::getOutputSize
// as:     cv::bioinspired::Retina::getOutputSize (method) cv::bioinspired::Retina (trait) . getOutputSize
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_bioinspired_Retina_getOutputSize(void* instance) {
    try {
        cv::Size ret = reinterpret_cast<cv::bioinspired::Retina*>(instance)->getOutputSize();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::bioinspired::Retina::setup
// as:     cv::bioinspired::Retina::setup (method) cv::bioinspired::Retina (trait) . setup
// Arg ARG string retinaParameterFile= string = ""
// Arg ARG Primitive(bool) applyDefaultSetupOnFailure= Primitive(bool) = true
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_Retina_setup_String_bool(void* instance, const char* retinaParameterFile, bool applyDefaultSetupOnFailure) {
    try {
        reinterpret_cast<cv::bioinspired::Retina*>(instance)->setup(String(retinaParameterFile), applyDefaultSetupOnFailure);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::Retina::setup
// as:     cv::bioinspired::Retina::setup (method) cv::bioinspired::Retina (trait) . setup
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG Primitive(bool) applyDefaultSetupOnFailure= Primitive(bool) = true
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_Retina_setup_FileStorage_bool(void* instance, void* fs, bool applyDefaultSetupOnFailure) {
    try {
        reinterpret_cast<cv::bioinspired::Retina*>(instance)->setup(*reinterpret_cast<cv::FileStorage*>(fs), applyDefaultSetupOnFailure);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::Retina::setup
// as:     cv::bioinspired::Retina::setup (method) cv::bioinspired::Retina (trait) . setup
// Arg ARG cv::bioinspired::RetinaParameters (boxed) newParameters= cv::bioinspired::RetinaParameters (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_Retina_setup_RetinaParameters(void* instance, void* newParameters) {
    try {
        reinterpret_cast<cv::bioinspired::Retina*>(instance)->setup(*reinterpret_cast<cv::bioinspired::RetinaParameters*>(newParameters));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::Retina::getParameters
// as:     cv::bioinspired::Retina::getParameters (method) cv::bioinspired::Retina (trait) . getParameters
// Return value: cv::bioinspired::RetinaParameters (boxed)
cv_return_value_void_X cv_bioinspired_Retina_getParameters(void* instance) {
    try {
        cv::bioinspired::RetinaParameters ret = reinterpret_cast<cv::bioinspired::Retina*>(instance)->getParameters();
        return { Error::Code::StsOk, NULL, new cv::bioinspired::RetinaParameters(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::bioinspired::Retina::printSetup
// as:     cv::bioinspired::Retina::printSetup (method) cv::bioinspired::Retina (trait) . printSetup
// Return value: string
cv_return_value_const_char_X cv_bioinspired_Retina_printSetup(void* instance) {
    try {
        String ret = reinterpret_cast<cv::bioinspired::Retina*>(instance)->printSetup();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_const_char_X)
}

// parsed: cv::bioinspired::Retina::write
// as:     cv::bioinspired::Retina::write (method) cv::bioinspired::Retina (trait) . write
// Arg ARG string fs= string = 
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_Retina_write_const_String(void* instance, const char* fs) {
    try {
        reinterpret_cast<cv::bioinspired::Retina*>(instance)->write(String(fs));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::Retina::write
// as:     cv::bioinspired::Retina::write (method) cv::bioinspired::Retina (trait) . write
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_Retina_write_const_FileStorage(void* instance, void* fs) {
    try {
        reinterpret_cast<cv::bioinspired::Retina*>(instance)->write(*reinterpret_cast<cv::FileStorage*>(fs));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::Retina::setupOPLandIPLParvoChannel
// as:     cv::bioinspired::Retina::setupOPLandIPLParvoChannel (method) cv::bioinspired::Retina (trait) . setupOPLandIPLParvoChannel
// Arg ARG Primitive(bool) colorMode= Primitive(bool) = true
// Arg ARG Primitive(bool) normaliseOutput= Primitive(bool) = true
// Arg ARG Primitive(float) photoreceptorsLocalAdaptationSensitivity= Primitive(float) = 0.7f
// Arg ARG Primitive(float) photoreceptorsTemporalConstant= Primitive(float) = 0.5f
// Arg ARG Primitive(float) photoreceptorsSpatialConstant= Primitive(float) = 0.53f
// Arg ARG Primitive(float) horizontalCellsGain= Primitive(float) = 0.f
// Arg ARG Primitive(float) HcellsTemporalConstant= Primitive(float) = 1.f
// Arg ARG Primitive(float) HcellsSpatialConstant= Primitive(float) = 7.f
// Arg ARG Primitive(float) ganglionCellsSensitivity= Primitive(float) = 0.7f
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_Retina_setupOPLandIPLParvoChannel_bool_bool_float_float_float_float_float_float_float(void* instance, bool colorMode, bool normaliseOutput, float photoreceptorsLocalAdaptationSensitivity, float photoreceptorsTemporalConstant, float photoreceptorsSpatialConstant, float horizontalCellsGain, float HcellsTemporalConstant, float HcellsSpatialConstant, float ganglionCellsSensitivity) {
    try {
        reinterpret_cast<cv::bioinspired::Retina*>(instance)->setupOPLandIPLParvoChannel(colorMode, normaliseOutput, photoreceptorsLocalAdaptationSensitivity, photoreceptorsTemporalConstant, photoreceptorsSpatialConstant, horizontalCellsGain, HcellsTemporalConstant, HcellsSpatialConstant, ganglionCellsSensitivity);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::Retina::setupIPLMagnoChannel
// as:     cv::bioinspired::Retina::setupIPLMagnoChannel (method) cv::bioinspired::Retina (trait) . setupIPLMagnoChannel
// Arg ARG Primitive(bool) normaliseOutput= Primitive(bool) = true
// Arg ARG Primitive(float) parasolCells_beta= Primitive(float) = 0.f
// Arg ARG Primitive(float) parasolCells_tau= Primitive(float) = 0.f
// Arg ARG Primitive(float) parasolCells_k= Primitive(float) = 7.f
// Arg ARG Primitive(float) amacrinCellsTemporalCutFrequency= Primitive(float) = 1.2f
// Arg ARG Primitive(float) V0CompressionParameter= Primitive(float) = 0.95f
// Arg ARG Primitive(float) localAdaptintegration_tau= Primitive(float) = 0.f
// Arg ARG Primitive(float) localAdaptintegration_k= Primitive(float) = 7.f
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_Retina_setupIPLMagnoChannel_bool_float_float_float_float_float_float_float(void* instance, bool normaliseOutput, float parasolCells_beta, float parasolCells_tau, float parasolCells_k, float amacrinCellsTemporalCutFrequency, float V0CompressionParameter, float localAdaptintegration_tau, float localAdaptintegration_k) {
    try {
        reinterpret_cast<cv::bioinspired::Retina*>(instance)->setupIPLMagnoChannel(normaliseOutput, parasolCells_beta, parasolCells_tau, parasolCells_k, amacrinCellsTemporalCutFrequency, V0CompressionParameter, localAdaptintegration_tau, localAdaptintegration_k);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::Retina::run
// as:     cv::bioinspired::Retina::run (method) cv::bioinspired::Retina (trait) . run
// Arg ARG cv::_InputArray (boxed) inputImage= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_Retina_run__InputArray(void* instance, void* inputImage) {
    try {
        reinterpret_cast<cv::bioinspired::Retina*>(instance)->run(*reinterpret_cast<const cv::_InputArray*>(inputImage));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::Retina::applyFastToneMapping
// as:     cv::bioinspired::Retina::applyFastToneMapping (method) cv::bioinspired::Retina (trait) . applyFastToneMapping
// Arg ARG cv::_InputArray (boxed) inputImage= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) outputToneMappedImage= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_Retina_applyFastToneMapping__InputArray__OutputArray(void* instance, void* inputImage, void* outputToneMappedImage) {
    try {
        reinterpret_cast<cv::bioinspired::Retina*>(instance)->applyFastToneMapping(*reinterpret_cast<const cv::_InputArray*>(inputImage), *reinterpret_cast<cv::_OutputArray*>(outputToneMappedImage));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::Retina::getParvo
// as:     cv::bioinspired::Retina::getParvo (method) cv::bioinspired::Retina (trait) . getParvo
// Arg ARG cv::_OutputArray (boxed) retinaOutput_parvo= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_Retina_getParvo__OutputArray(void* instance, void* retinaOutput_parvo) {
    try {
        reinterpret_cast<cv::bioinspired::Retina*>(instance)->getParvo(*reinterpret_cast<cv::_OutputArray*>(retinaOutput_parvo));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::Retina::getParvoRAW
// as:     cv::bioinspired::Retina::getParvoRAW (method) cv::bioinspired::Retina (trait) . getParvoRAW
// Arg ARG cv::_OutputArray (boxed) retinaOutput_parvo= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_Retina_getParvoRAW__OutputArray(void* instance, void* retinaOutput_parvo) {
    try {
        reinterpret_cast<cv::bioinspired::Retina*>(instance)->getParvoRAW(*reinterpret_cast<cv::_OutputArray*>(retinaOutput_parvo));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::Retina::getMagno
// as:     cv::bioinspired::Retina::getMagno (method) cv::bioinspired::Retina (trait) . getMagno
// Arg ARG cv::_OutputArray (boxed) retinaOutput_magno= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_Retina_getMagno__OutputArray(void* instance, void* retinaOutput_magno) {
    try {
        reinterpret_cast<cv::bioinspired::Retina*>(instance)->getMagno(*reinterpret_cast<cv::_OutputArray*>(retinaOutput_magno));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::Retina::getMagnoRAW
// as:     cv::bioinspired::Retina::getMagnoRAW (method) cv::bioinspired::Retina (trait) . getMagnoRAW
// Arg ARG cv::_OutputArray (boxed) retinaOutput_magno= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_Retina_getMagnoRAW__OutputArray(void* instance, void* retinaOutput_magno) {
    try {
        reinterpret_cast<cv::bioinspired::Retina*>(instance)->getMagnoRAW(*reinterpret_cast<cv::_OutputArray*>(retinaOutput_magno));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::Retina::getMagnoRAW
// as:     cv::bioinspired::Retina::getMagnoRAW (method) cv::bioinspired::Retina (trait) . getMagnoRAW
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_bioinspired_Retina_getMagnoRAW_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::bioinspired::Retina*>(instance)->getMagnoRAW();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::bioinspired::Retina::getParvoRAW
// as:     cv::bioinspired::Retina::getParvoRAW (method) cv::bioinspired::Retina (trait) . getParvoRAW
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_bioinspired_Retina_getParvoRAW_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::bioinspired::Retina*>(instance)->getParvoRAW();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::bioinspired::Retina::setColorSaturation
// as:     cv::bioinspired::Retina::setColorSaturation (method) cv::bioinspired::Retina (trait) . setColorSaturation
// Arg ARG Primitive(bool) saturateColors= Primitive(bool) = true
// Arg ARG Primitive(float) colorSaturationValue= Primitive(float) = 4.0f
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_Retina_setColorSaturation_bool_float(void* instance, bool saturateColors, float colorSaturationValue) {
    try {
        reinterpret_cast<cv::bioinspired::Retina*>(instance)->setColorSaturation(saturateColors, colorSaturationValue);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::Retina::clearBuffers
// as:     cv::bioinspired::Retina::clearBuffers (method) cv::bioinspired::Retina (trait) . clearBuffers
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_Retina_clearBuffers(void* instance) {
    try {
        reinterpret_cast<cv::bioinspired::Retina*>(instance)->clearBuffers();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::Retina::activateMovingContoursProcessing
// as:     cv::bioinspired::Retina::activateMovingContoursProcessing (method) cv::bioinspired::Retina (trait) . activateMovingContoursProcessing
// Arg ARG Primitive(bool) activate= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_Retina_activateMovingContoursProcessing_bool(void* instance, bool activate) {
    try {
        reinterpret_cast<cv::bioinspired::Retina*>(instance)->activateMovingContoursProcessing(activate);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::Retina::activateContoursProcessing
// as:     cv::bioinspired::Retina::activateContoursProcessing (method) cv::bioinspired::Retina (trait) . activateContoursProcessing
// Arg ARG Primitive(bool) activate= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_Retina_activateContoursProcessing_bool(void* instance, bool activate) {
    try {
        reinterpret_cast<cv::bioinspired::Retina*>(instance)->activateContoursProcessing(activate);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::Retina::create
// as:     cv::bioinspired::Retina::create (method) cv::bioinspired::Retina (trait) . create
// Arg ARG cv::Size (simple) inputSize= cv::Size (simple) = 
// Return value: SmartPtr[cv::bioinspired::Retina (boxed)]
cv_return_value_void_X cv_bioinspired_Retina_create_Size(SizeWrapper inputSize) {
    try {
        Ptr<cv::bioinspired::Retina> ret = cv::bioinspired::Retina::create(*reinterpret_cast<cv::Size*>(&inputSize));
        return { Error::Code::StsOk, NULL, new Ptr<cv::bioinspired::Retina>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::bioinspired::Retina::create
// as:     cv::bioinspired::Retina::create (method) cv::bioinspired::Retina (trait) . create
// Arg ARG cv::Size (simple) inputSize= cv::Size (simple) = 
// Arg ARG Primitive(bool) colorMode= Primitive(bool) = 
// Arg ARG Primitive(int) colorSamplingMethod= Primitive(int) = RETINA_COLOR_BAYER
// Arg ARG Primitive(bool) useRetinaLogSampling= Primitive(bool) = false
// Arg ARG Primitive(float) reductionFactor= Primitive(float) = 1.0f
// Arg ARG Primitive(float) samplingStrenght= Primitive(float) = 10.0f
// Return value: SmartPtr[cv::bioinspired::Retina (boxed)]
cv_return_value_void_X cv_bioinspired_Retina_create_Size_bool_int_bool_float_float(SizeWrapper inputSize, bool colorMode, int colorSamplingMethod, bool useRetinaLogSampling, float reductionFactor, float samplingStrenght) {
    try {
        Ptr<cv::bioinspired::Retina> ret = cv::bioinspired::Retina::create(*reinterpret_cast<cv::Size*>(&inputSize), colorMode, colorSamplingMethod, useRetinaLogSampling, reductionFactor, samplingStrenght);
        return { Error::Code::StsOk, NULL, new Ptr<cv::bioinspired::Retina>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::bioinspired::RetinaFastToneMapping::applyFastToneMapping
// as:     cv::bioinspired::RetinaFastToneMapping::applyFastToneMapping (method) cv::bioinspired::RetinaFastToneMapping (trait) . applyFastToneMapping
// Arg ARG cv::_InputArray (boxed) inputImage= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) outputToneMappedImage= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_RetinaFastToneMapping_applyFastToneMapping__InputArray__OutputArray(void* instance, void* inputImage, void* outputToneMappedImage) {
    try {
        reinterpret_cast<cv::bioinspired::RetinaFastToneMapping*>(instance)->applyFastToneMapping(*reinterpret_cast<const cv::_InputArray*>(inputImage), *reinterpret_cast<cv::_OutputArray*>(outputToneMappedImage));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::RetinaFastToneMapping::setup
// as:     cv::bioinspired::RetinaFastToneMapping::setup (method) cv::bioinspired::RetinaFastToneMapping (trait) . setup
// Arg ARG Primitive(float) photoreceptorsNeighborhoodRadius= Primitive(float) = 3.f
// Arg ARG Primitive(float) ganglioncellsNeighborhoodRadius= Primitive(float) = 1.f
// Arg ARG Primitive(float) meanLuminanceModulatorK= Primitive(float) = 1.f
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_RetinaFastToneMapping_setup_float_float_float(void* instance, float photoreceptorsNeighborhoodRadius, float ganglioncellsNeighborhoodRadius, float meanLuminanceModulatorK) {
    try {
        reinterpret_cast<cv::bioinspired::RetinaFastToneMapping*>(instance)->setup(photoreceptorsNeighborhoodRadius, ganglioncellsNeighborhoodRadius, meanLuminanceModulatorK);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::RetinaFastToneMapping::create
// as:     cv::bioinspired::RetinaFastToneMapping::create (method) cv::bioinspired::RetinaFastToneMapping (trait) . create
// Arg ARG cv::Size (simple) inputSize= cv::Size (simple) = 
// Return value: SmartPtr[cv::bioinspired::RetinaFastToneMapping (boxed)]
cv_return_value_void_X cv_bioinspired_RetinaFastToneMapping_create_Size(SizeWrapper inputSize) {
    try {
        Ptr<cv::bioinspired::RetinaFastToneMapping> ret = cv::bioinspired::RetinaFastToneMapping::create(*reinterpret_cast<cv::Size*>(&inputSize));
        return { Error::Code::StsOk, NULL, new Ptr<cv::bioinspired::RetinaFastToneMapping>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::bioinspired::RetinaParameters
void cv_RetinaParameters_delete(void* instance) {
    delete reinterpret_cast<cv::bioinspired::RetinaParameters*>(instance);
}
// boxed class: cv::bioinspired::RetinaParameters::IplMagnoParameters
void cv_RetinaParameters_IplMagnoParameters_delete(void* instance) {
    delete reinterpret_cast<cv::bioinspired::RetinaParameters::IplMagnoParameters*>(instance);
}
// parsed: cv::bioinspired::RetinaParameters::IplMagnoParameters::IplMagnoParameters
// as:     cv::bioinspired::RetinaParameters::IplMagnoParameters::IplMagnoParameters (constructor) cv::bioinspired::RetinaParameters::IplMagnoParameters . default
// Return value: cv::bioinspired::RetinaParameters::IplMagnoParameters (boxed)
cv_return_value_void_X cv_bioinspired_RetinaParameters_IplMagnoParameters_IplMagnoParameters() {
    try {
        cv::bioinspired::RetinaParameters::IplMagnoParameters* ret = new cv::bioinspired::RetinaParameters::IplMagnoParameters();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::bioinspired::RetinaParameters::OPLandIplParvoParameters
void cv_RetinaParameters_OPLandIplParvoParameters_delete(void* instance) {
    delete reinterpret_cast<cv::bioinspired::RetinaParameters::OPLandIplParvoParameters*>(instance);
}
// parsed: cv::bioinspired::RetinaParameters::OPLandIplParvoParameters::OPLandIplParvoParameters
// as:     cv::bioinspired::RetinaParameters::OPLandIplParvoParameters::OPLandIplParvoParameters (constructor) cv::bioinspired::RetinaParameters::OPLandIplParvoParameters . default
// Return value: cv::bioinspired::RetinaParameters::OPLandIplParvoParameters (boxed)
cv_return_value_void_X cv_bioinspired_RetinaParameters_OPLandIplParvoParameters_OPLandIplParvoParameters() {
    try {
        cv::bioinspired::RetinaParameters::OPLandIplParvoParameters* ret = new cv::bioinspired::RetinaParameters::OPLandIplParvoParameters();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::bioinspired::SegmentationParameters
void cv_SegmentationParameters_delete(void* instance) {
    delete reinterpret_cast<cv::bioinspired::SegmentationParameters*>(instance);
}
// parsed: cv::bioinspired::SegmentationParameters::SegmentationParameters
// as:     cv::bioinspired::SegmentationParameters::SegmentationParameters (constructor) cv::bioinspired::SegmentationParameters . default
// Return value: cv::bioinspired::SegmentationParameters (boxed)
cv_return_value_void_X cv_bioinspired_SegmentationParameters_SegmentationParameters() {
    try {
        cv::bioinspired::SegmentationParameters* ret = new cv::bioinspired::SegmentationParameters();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::bioinspired::TransientAreasSegmentationModule::getSize
// as:     cv::bioinspired::TransientAreasSegmentationModule::getSize (method) cv::bioinspired::TransientAreasSegmentationModule (trait) . getSize
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_bioinspired_TransientAreasSegmentationModule_getSize(void* instance) {
    try {
        cv::Size ret = reinterpret_cast<cv::bioinspired::TransientAreasSegmentationModule*>(instance)->getSize();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::bioinspired::TransientAreasSegmentationModule::setup
// as:     cv::bioinspired::TransientAreasSegmentationModule::setup (method) cv::bioinspired::TransientAreasSegmentationModule (trait) . setup
// Arg ARG string segmentationParameterFile= string = ""
// Arg ARG Primitive(bool) applyDefaultSetupOnFailure= Primitive(bool) = true
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_TransientAreasSegmentationModule_setup_String_bool(void* instance, const char* segmentationParameterFile, bool applyDefaultSetupOnFailure) {
    try {
        reinterpret_cast<cv::bioinspired::TransientAreasSegmentationModule*>(instance)->setup(String(segmentationParameterFile), applyDefaultSetupOnFailure);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::TransientAreasSegmentationModule::setup
// as:     cv::bioinspired::TransientAreasSegmentationModule::setup (method) cv::bioinspired::TransientAreasSegmentationModule (trait) . setup
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG Primitive(bool) applyDefaultSetupOnFailure= Primitive(bool) = true
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_TransientAreasSegmentationModule_setup_FileStorage_bool(void* instance, void* fs, bool applyDefaultSetupOnFailure) {
    try {
        reinterpret_cast<cv::bioinspired::TransientAreasSegmentationModule*>(instance)->setup(*reinterpret_cast<cv::FileStorage*>(fs), applyDefaultSetupOnFailure);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::TransientAreasSegmentationModule::setup
// as:     cv::bioinspired::TransientAreasSegmentationModule::setup (method) cv::bioinspired::TransientAreasSegmentationModule (trait) . setup
// Arg ARG cv::bioinspired::SegmentationParameters (boxed) newParameters= cv::bioinspired::SegmentationParameters (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_TransientAreasSegmentationModule_setup_SegmentationParameters(void* instance, void* newParameters) {
    try {
        reinterpret_cast<cv::bioinspired::TransientAreasSegmentationModule*>(instance)->setup(*reinterpret_cast<cv::bioinspired::SegmentationParameters*>(newParameters));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::TransientAreasSegmentationModule::getParameters
// as:     cv::bioinspired::TransientAreasSegmentationModule::getParameters (method) cv::bioinspired::TransientAreasSegmentationModule (trait) . getParameters
// Return value: cv::bioinspired::SegmentationParameters (boxed)
cv_return_value_void_X cv_bioinspired_TransientAreasSegmentationModule_getParameters(void* instance) {
    try {
        cv::bioinspired::SegmentationParameters ret = reinterpret_cast<cv::bioinspired::TransientAreasSegmentationModule*>(instance)->getParameters();
        return { Error::Code::StsOk, NULL, new cv::bioinspired::SegmentationParameters(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::bioinspired::TransientAreasSegmentationModule::printSetup
// as:     cv::bioinspired::TransientAreasSegmentationModule::printSetup (method) cv::bioinspired::TransientAreasSegmentationModule (trait) . printSetup
// Return value: string
cv_return_value_const_char_X cv_bioinspired_TransientAreasSegmentationModule_printSetup(void* instance) {
    try {
        String ret = reinterpret_cast<cv::bioinspired::TransientAreasSegmentationModule*>(instance)->printSetup();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_const_char_X)
}

// parsed: cv::bioinspired::TransientAreasSegmentationModule::write
// as:     cv::bioinspired::TransientAreasSegmentationModule::write (method) cv::bioinspired::TransientAreasSegmentationModule (trait) . write
// Arg ARG string fs= string = 
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_TransientAreasSegmentationModule_write_const_String(void* instance, const char* fs) {
    try {
        reinterpret_cast<cv::bioinspired::TransientAreasSegmentationModule*>(instance)->write(String(fs));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::TransientAreasSegmentationModule::write
// as:     cv::bioinspired::TransientAreasSegmentationModule::write (method) cv::bioinspired::TransientAreasSegmentationModule (trait) . write
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_TransientAreasSegmentationModule_write_const_FileStorage(void* instance, void* fs) {
    try {
        reinterpret_cast<cv::bioinspired::TransientAreasSegmentationModule*>(instance)->write(*reinterpret_cast<cv::FileStorage*>(fs));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::TransientAreasSegmentationModule::run
// as:     cv::bioinspired::TransientAreasSegmentationModule::run (method) cv::bioinspired::TransientAreasSegmentationModule (trait) . run
// Arg ARG cv::_InputArray (boxed) inputToSegment= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) channelIndex= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_TransientAreasSegmentationModule_run__InputArray_int(void* instance, void* inputToSegment, int channelIndex) {
    try {
        reinterpret_cast<cv::bioinspired::TransientAreasSegmentationModule*>(instance)->run(*reinterpret_cast<const cv::_InputArray*>(inputToSegment), channelIndex);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::TransientAreasSegmentationModule::getSegmentationPicture
// as:     cv::bioinspired::TransientAreasSegmentationModule::getSegmentationPicture (method) cv::bioinspired::TransientAreasSegmentationModule (trait) . getSegmentationPicture
// Arg ARG cv::_OutputArray (boxed) transientAreas= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_TransientAreasSegmentationModule_getSegmentationPicture__OutputArray(void* instance, void* transientAreas) {
    try {
        reinterpret_cast<cv::bioinspired::TransientAreasSegmentationModule*>(instance)->getSegmentationPicture(*reinterpret_cast<cv::_OutputArray*>(transientAreas));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::TransientAreasSegmentationModule::clearAllBuffers
// as:     cv::bioinspired::TransientAreasSegmentationModule::clearAllBuffers (method) cv::bioinspired::TransientAreasSegmentationModule (trait) . clearAllBuffers
// Return value: Primitive(void)
cv_return_value_void cv_bioinspired_TransientAreasSegmentationModule_clearAllBuffers(void* instance) {
    try {
        reinterpret_cast<cv::bioinspired::TransientAreasSegmentationModule*>(instance)->clearAllBuffers();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bioinspired::TransientAreasSegmentationModule::create
// as:     cv::bioinspired::TransientAreasSegmentationModule::create (method) cv::bioinspired::TransientAreasSegmentationModule (trait) . create
// Arg ARG cv::Size (simple) inputSize= cv::Size (simple) = 
// Return value: SmartPtr[cv::bioinspired::TransientAreasSegmentationModule (boxed)]
cv_return_value_void_X cv_bioinspired_TransientAreasSegmentationModule_create_Size(SizeWrapper inputSize) {
    try {
        Ptr<cv::bioinspired::TransientAreasSegmentationModule> ret = cv::bioinspired::TransientAreasSegmentationModule::create(*reinterpret_cast<cv::Size*>(&inputSize));
        return { Error::Code::StsOk, NULL, new Ptr<cv::bioinspired::TransientAreasSegmentationModule>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}



} // extern "C"

