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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/photo.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/photo/photo.hpp"

extern "C" {

// parsed: cv::colorChange
// as:     cv::colorChange (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(float) red_mul= Primitive(float) = 1.0f
// Arg ARG Primitive(float) green_mul= Primitive(float) = 1.0f
// Arg ARG Primitive(float) blue_mul= Primitive(float) = 1.0f
// Return value: Primitive(void)
cv_return_value_void cv_colorChange__InputArray__InputArray__OutputArray_float_float_float(void* src, void* mask, void* dst, float red_mul, float green_mul, float blue_mul) {
    try {
        cv::colorChange(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<const cv::_InputArray*>(mask), *reinterpret_cast<cv::_OutputArray*>(dst), red_mul, green_mul, blue_mul);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::createAlignMTB
// as:     cv::createAlignMTB (function)
// Arg ARG Primitive(int) max_bits= Primitive(int) = 6
// Arg ARG Primitive(int) exclude_range= Primitive(int) = 4
// Arg ARG Primitive(bool) cut= Primitive(bool) = true
// Return value: SmartPtr[cv::AlignMTB (boxed)]
cv_return_value_void_X cv_createAlignMTB_int_int_bool(int max_bits, int exclude_range, bool cut) {
    try {
        Ptr<cv::AlignMTB> ret = cv::createAlignMTB(max_bits, exclude_range, cut);
        return { Error::Code::StsOk, NULL, new Ptr<cv::AlignMTB>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::createCalibrateDebevec
// as:     cv::createCalibrateDebevec (function)
// Arg ARG Primitive(int) samples= Primitive(int) = 70
// Arg ARG Primitive(float) lambda= Primitive(float) = 10.0f
// Arg ARG Primitive(bool) random= Primitive(bool) = false
// Return value: SmartPtr[cv::CalibrateDebevec (boxed)]
cv_return_value_void_X cv_createCalibrateDebevec_int_float_bool(int samples, float lambda, bool random) {
    try {
        Ptr<cv::CalibrateDebevec> ret = cv::createCalibrateDebevec(samples, lambda, random);
        return { Error::Code::StsOk, NULL, new Ptr<cv::CalibrateDebevec>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::createCalibrateRobertson
// as:     cv::createCalibrateRobertson (function)
// Arg ARG Primitive(int) max_iter= Primitive(int) = 30
// Arg ARG Primitive(float) threshold= Primitive(float) = 0.01f
// Return value: SmartPtr[cv::CalibrateRobertson (boxed)]
cv_return_value_void_X cv_createCalibrateRobertson_int_float(int max_iter, float threshold) {
    try {
        Ptr<cv::CalibrateRobertson> ret = cv::createCalibrateRobertson(max_iter, threshold);
        return { Error::Code::StsOk, NULL, new Ptr<cv::CalibrateRobertson>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::createMergeDebevec
// as:     cv::createMergeDebevec (function)
// Return value: SmartPtr[cv::MergeDebevec (boxed)]
cv_return_value_void_X cv_createMergeDebevec() {
    try {
        Ptr<cv::MergeDebevec> ret = cv::createMergeDebevec();
        return { Error::Code::StsOk, NULL, new Ptr<cv::MergeDebevec>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::createMergeMertens
// as:     cv::createMergeMertens (function)
// Arg ARG Primitive(float) contrast_weight= Primitive(float) = 1.0f
// Arg ARG Primitive(float) saturation_weight= Primitive(float) = 1.0f
// Arg ARG Primitive(float) exposure_weight= Primitive(float) = 0.0f
// Return value: SmartPtr[cv::MergeMertens (boxed)]
cv_return_value_void_X cv_createMergeMertens_float_float_float(float contrast_weight, float saturation_weight, float exposure_weight) {
    try {
        Ptr<cv::MergeMertens> ret = cv::createMergeMertens(contrast_weight, saturation_weight, exposure_weight);
        return { Error::Code::StsOk, NULL, new Ptr<cv::MergeMertens>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::createMergeRobertson
// as:     cv::createMergeRobertson (function)
// Return value: SmartPtr[cv::MergeRobertson (boxed)]
cv_return_value_void_X cv_createMergeRobertson() {
    try {
        Ptr<cv::MergeRobertson> ret = cv::createMergeRobertson();
        return { Error::Code::StsOk, NULL, new Ptr<cv::MergeRobertson>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::createTonemapDrago
// as:     cv::createTonemapDrago (function)
// Arg ARG Primitive(float) gamma= Primitive(float) = 1.0f
// Arg ARG Primitive(float) saturation= Primitive(float) = 1.0f
// Arg ARG Primitive(float) bias= Primitive(float) = 0.85f
// Return value: SmartPtr[cv::TonemapDrago (boxed)]
cv_return_value_void_X cv_createTonemapDrago_float_float_float(float gamma, float saturation, float bias) {
    try {
        Ptr<cv::TonemapDrago> ret = cv::createTonemapDrago(gamma, saturation, bias);
        return { Error::Code::StsOk, NULL, new Ptr<cv::TonemapDrago>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::createTonemapMantiuk
// as:     cv::createTonemapMantiuk (function)
// Arg ARG Primitive(float) gamma= Primitive(float) = 1.0f
// Arg ARG Primitive(float) scale= Primitive(float) = 0.7f
// Arg ARG Primitive(float) saturation= Primitive(float) = 1.0f
// Return value: SmartPtr[cv::TonemapMantiuk (boxed)]
cv_return_value_void_X cv_createTonemapMantiuk_float_float_float(float gamma, float scale, float saturation) {
    try {
        Ptr<cv::TonemapMantiuk> ret = cv::createTonemapMantiuk(gamma, scale, saturation);
        return { Error::Code::StsOk, NULL, new Ptr<cv::TonemapMantiuk>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::createTonemapReinhard
// as:     cv::createTonemapReinhard (function)
// Arg ARG Primitive(float) gamma= Primitive(float) = 1.0f
// Arg ARG Primitive(float) intensity= Primitive(float) = 0.0f
// Arg ARG Primitive(float) light_adapt= Primitive(float) = 1.0f
// Arg ARG Primitive(float) color_adapt= Primitive(float) = 0.0f
// Return value: SmartPtr[cv::TonemapReinhard (boxed)]
cv_return_value_void_X cv_createTonemapReinhard_float_float_float_float(float gamma, float intensity, float light_adapt, float color_adapt) {
    try {
        Ptr<cv::TonemapReinhard> ret = cv::createTonemapReinhard(gamma, intensity, light_adapt, color_adapt);
        return { Error::Code::StsOk, NULL, new Ptr<cv::TonemapReinhard>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::createTonemap
// as:     cv::createTonemap (function)
// Arg ARG Primitive(float) gamma= Primitive(float) = 1.0f
// Return value: SmartPtr[cv::Tonemap (boxed)]
cv_return_value_void_X cv_createTonemap_float(float gamma) {
    try {
        Ptr<cv::Tonemap> ret = cv::createTonemap(gamma);
        return { Error::Code::StsOk, NULL, new Ptr<cv::Tonemap>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::decolor
// as:     cv::decolor (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) grayscale= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) color_boost= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_decolor__InputArray__OutputArray__OutputArray(void* src, void* grayscale, void* color_boost) {
    try {
        cv::decolor(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(grayscale), *reinterpret_cast<cv::_OutputArray*>(color_boost));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::denoise_TVL1
// as:     cv::denoise_TVL1 (function)
// Arg ARG Vector[cv::Mat (boxed)] observations= Vector[cv::Mat (boxed)] = 
// Arg ARG cv::Mat (boxed) result= cv::Mat (boxed) = 
// Arg ARG Primitive(double) lambda= Primitive(double) = 1.0
// Arg ARG Primitive(int) niters= Primitive(int) = 30
// Return value: Primitive(void)
cv_return_value_void cv_denoise_TVL1_VectorOfMat_Mat_double_int(void* observations, void* result, double lambda, int niters) {
    try {
        cv::denoise_TVL1(*reinterpret_cast<const std::vector<cv::Mat>*>(observations), *reinterpret_cast<cv::Mat*>(result), lambda, niters);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::detailEnhance
// as:     cv::detailEnhance (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(float) sigma_s= Primitive(float) = 10
// Arg ARG Primitive(float) sigma_r= Primitive(float) = 0.15f
// Return value: Primitive(void)
cv_return_value_void cv_detailEnhance__InputArray__OutputArray_float_float(void* src, void* dst, float sigma_s, float sigma_r) {
    try {
        cv::detailEnhance(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), sigma_s, sigma_r);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::edgePreservingFilter
// as:     cv::edgePreservingFilter (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 1
// Arg ARG Primitive(float) sigma_s= Primitive(float) = 60
// Arg ARG Primitive(float) sigma_r= Primitive(float) = 0.4f
// Return value: Primitive(void)
cv_return_value_void cv_edgePreservingFilter__InputArray__OutputArray_int_float_float(void* src, void* dst, int flags, float sigma_s, float sigma_r) {
    try {
        cv::edgePreservingFilter(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), flags, sigma_s, sigma_r);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::fastNlMeansDenoisingColoredMulti
// as:     cv::fastNlMeansDenoisingColoredMulti (function)
// Arg ARG cv::_InputArray (boxed) srcImgs= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) imgToDenoiseIndex= Primitive(int) = 
// Arg ARG Primitive(int) temporalWindowSize= Primitive(int) = 
// Arg ARG Primitive(float) h= Primitive(float) = 3
// Arg ARG Primitive(float) hColor= Primitive(float) = 3
// Arg ARG Primitive(int) templateWindowSize= Primitive(int) = 7
// Arg ARG Primitive(int) searchWindowSize= Primitive(int) = 21
// Return value: Primitive(void)
cv_return_value_void cv_fastNlMeansDenoisingColoredMulti__InputArray__OutputArray_int_int_float_float_int_int(void* srcImgs, void* dst, int imgToDenoiseIndex, int temporalWindowSize, float h, float hColor, int templateWindowSize, int searchWindowSize) {
    try {
        cv::fastNlMeansDenoisingColoredMulti(*reinterpret_cast<const cv::_InputArray*>(srcImgs), *reinterpret_cast<cv::_OutputArray*>(dst), imgToDenoiseIndex, temporalWindowSize, h, hColor, templateWindowSize, searchWindowSize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::fastNlMeansDenoisingColored
// as:     cv::fastNlMeansDenoisingColored (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(float) h= Primitive(float) = 3
// Arg ARG Primitive(float) hColor= Primitive(float) = 3
// Arg ARG Primitive(int) templateWindowSize= Primitive(int) = 7
// Arg ARG Primitive(int) searchWindowSize= Primitive(int) = 21
// Return value: Primitive(void)
cv_return_value_void cv_fastNlMeansDenoisingColored__InputArray__OutputArray_float_float_int_int(void* src, void* dst, float h, float hColor, int templateWindowSize, int searchWindowSize) {
    try {
        cv::fastNlMeansDenoisingColored(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), h, hColor, templateWindowSize, searchWindowSize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::fastNlMeansDenoisingMulti
// as:     cv::fastNlMeansDenoisingMulti (function)
// Arg ARG cv::_InputArray (boxed) srcImgs= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) imgToDenoiseIndex= Primitive(int) = 
// Arg ARG Primitive(int) temporalWindowSize= Primitive(int) = 
// Arg ARG Vector[Primitive(float)] h= Vector[Primitive(float)] = 
// Arg ARG Primitive(int) templateWindowSize= Primitive(int) = 7
// Arg ARG Primitive(int) searchWindowSize= Primitive(int) = 21
// Arg ARG Primitive(int) normType= Primitive(int) = NORM_L2
// Return value: Primitive(void)
cv_return_value_void cv_fastNlMeansDenoisingMulti__InputArray__OutputArray_int_int_VectorOffloat_int_int_int(void* srcImgs, void* dst, int imgToDenoiseIndex, int temporalWindowSize, void* h, int templateWindowSize, int searchWindowSize, int normType) {
    try {
        cv::fastNlMeansDenoisingMulti(*reinterpret_cast<const cv::_InputArray*>(srcImgs), *reinterpret_cast<cv::_OutputArray*>(dst), imgToDenoiseIndex, temporalWindowSize, *reinterpret_cast<const std::vector<float>*>(h), templateWindowSize, searchWindowSize, normType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::fastNlMeansDenoisingMulti
// as:     cv::fastNlMeansDenoisingMulti (function)
// Arg ARG cv::_InputArray (boxed) srcImgs= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) imgToDenoiseIndex= Primitive(int) = 
// Arg ARG Primitive(int) temporalWindowSize= Primitive(int) = 
// Arg ARG Primitive(float) h= Primitive(float) = 3
// Arg ARG Primitive(int) templateWindowSize= Primitive(int) = 7
// Arg ARG Primitive(int) searchWindowSize= Primitive(int) = 21
// Return value: Primitive(void)
cv_return_value_void cv_fastNlMeansDenoisingMulti__InputArray__OutputArray_int_int_float_int_int(void* srcImgs, void* dst, int imgToDenoiseIndex, int temporalWindowSize, float h, int templateWindowSize, int searchWindowSize) {
    try {
        cv::fastNlMeansDenoisingMulti(*reinterpret_cast<const cv::_InputArray*>(srcImgs), *reinterpret_cast<cv::_OutputArray*>(dst), imgToDenoiseIndex, temporalWindowSize, h, templateWindowSize, searchWindowSize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::fastNlMeansDenoising
// as:     cv::fastNlMeansDenoising (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Vector[Primitive(float)] h= Vector[Primitive(float)] = 
// Arg ARG Primitive(int) templateWindowSize= Primitive(int) = 7
// Arg ARG Primitive(int) searchWindowSize= Primitive(int) = 21
// Arg ARG Primitive(int) normType= Primitive(int) = NORM_L2
// Return value: Primitive(void)
cv_return_value_void cv_fastNlMeansDenoising__InputArray__OutputArray_VectorOffloat_int_int_int(void* src, void* dst, void* h, int templateWindowSize, int searchWindowSize, int normType) {
    try {
        cv::fastNlMeansDenoising(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const std::vector<float>*>(h), templateWindowSize, searchWindowSize, normType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::fastNlMeansDenoising
// as:     cv::fastNlMeansDenoising (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(float) h= Primitive(float) = 3
// Arg ARG Primitive(int) templateWindowSize= Primitive(int) = 7
// Arg ARG Primitive(int) searchWindowSize= Primitive(int) = 21
// Return value: Primitive(void)
cv_return_value_void cv_fastNlMeansDenoising__InputArray__OutputArray_float_int_int(void* src, void* dst, float h, int templateWindowSize, int searchWindowSize) {
    try {
        cv::fastNlMeansDenoising(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), h, templateWindowSize, searchWindowSize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::illuminationChange
// as:     cv::illuminationChange (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(float) alpha= Primitive(float) = 0.2f
// Arg ARG Primitive(float) beta= Primitive(float) = 0.4f
// Return value: Primitive(void)
cv_return_value_void cv_illuminationChange__InputArray__InputArray__OutputArray_float_float(void* src, void* mask, void* dst, float alpha, float beta) {
    try {
        cv::illuminationChange(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<const cv::_InputArray*>(mask), *reinterpret_cast<cv::_OutputArray*>(dst), alpha, beta);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::inpaint
// as:     cv::inpaint (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) inpaintMask= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) inpaintRadius= Primitive(double) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_inpaint__InputArray__InputArray__OutputArray_double_int(void* src, void* inpaintMask, void* dst, double inpaintRadius, int flags) {
    try {
        cv::inpaint(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<const cv::_InputArray*>(inpaintMask), *reinterpret_cast<cv::_OutputArray*>(dst), inpaintRadius, flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::pencilSketch
// as:     cv::pencilSketch (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst2= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(float) sigma_s= Primitive(float) = 60
// Arg ARG Primitive(float) sigma_r= Primitive(float) = 0.07f
// Arg ARG Primitive(float) shade_factor= Primitive(float) = 0.02f
// Return value: Primitive(void)
cv_return_value_void cv_pencilSketch__InputArray__OutputArray__OutputArray_float_float_float(void* src, void* dst1, void* dst2, float sigma_s, float sigma_r, float shade_factor) {
    try {
        cv::pencilSketch(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst1), *reinterpret_cast<cv::_OutputArray*>(dst2), sigma_s, sigma_r, shade_factor);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::seamlessClone
// as:     cv::seamlessClone (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) dst= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = 
// Arg ARG cv::Point (simple) p= cv::Point (simple) = 
// Arg ARG cv::_OutputArray (boxed) blend= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_seamlessClone__InputArray__InputArray__InputArray_Point__OutputArray_int(void* src, void* dst, void* mask, PointWrapper p, void* blend, int flags) {
    try {
        cv::seamlessClone(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<const cv::_InputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(mask), *reinterpret_cast<cv::Point*>(&p), *reinterpret_cast<cv::_OutputArray*>(blend), flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::stylization
// as:     cv::stylization (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(float) sigma_s= Primitive(float) = 60
// Arg ARG Primitive(float) sigma_r= Primitive(float) = 0.45f
// Return value: Primitive(void)
cv_return_value_void cv_stylization__InputArray__OutputArray_float_float(void* src, void* dst, float sigma_s, float sigma_r) {
    try {
        cv::stylization(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), sigma_s, sigma_r);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::textureFlattening
// as:     cv::textureFlattening (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(float) low_threshold= Primitive(float) = 30
// Arg ARG Primitive(float) high_threshold= Primitive(float) = 45
// Arg ARG Primitive(int) kernel_size= Primitive(int) = 3
// Return value: Primitive(void)
cv_return_value_void cv_textureFlattening__InputArray__InputArray__OutputArray_float_float_int(void* src, void* mask, void* dst, float low_threshold, float high_threshold, int kernel_size) {
    try {
        cv::textureFlattening(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<const cv::_InputArray*>(mask), *reinterpret_cast<cv::_OutputArray*>(dst), low_threshold, high_threshold, kernel_size);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AlignExposures::process
// as:     cv::AlignExposures::process (method) cv::AlignExposures (trait) . process
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::Mat (boxed)] dst= Vector[cv::Mat (boxed)] = 
// Arg ARG cv::_InputArray (boxed) times= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) response= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_AlignExposures_process__InputArray_VectorOfMat__InputArray__InputArray(void* instance, void* src, void* dst, void* times, void* response) {
    try {
        reinterpret_cast<cv::AlignExposures*>(instance)->process(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<std::vector<cv::Mat>*>(dst), *reinterpret_cast<const cv::_InputArray*>(times), *reinterpret_cast<const cv::_InputArray*>(response));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AlignMTB::process
// as:     cv::AlignMTB::process (method) cv::AlignMTB (trait) . process
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::Mat (boxed)] dst= Vector[cv::Mat (boxed)] = 
// Arg ARG cv::_InputArray (boxed) times= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) response= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_AlignMTB_process__InputArray_VectorOfMat__InputArray__InputArray(void* instance, void* src, void* dst, void* times, void* response) {
    try {
        reinterpret_cast<cv::AlignMTB*>(instance)->process(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<std::vector<cv::Mat>*>(dst), *reinterpret_cast<const cv::_InputArray*>(times), *reinterpret_cast<const cv::_InputArray*>(response));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AlignMTB::process
// as:     cv::AlignMTB::process (method) cv::AlignMTB (trait) . process
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::Mat (boxed)] dst= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_AlignMTB_process__InputArray_VectorOfMat(void* instance, void* src, void* dst) {
    try {
        reinterpret_cast<cv::AlignMTB*>(instance)->process(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<std::vector<cv::Mat>*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AlignMTB::calculateShift
// as:     cv::AlignMTB::calculateShift (method) cv::AlignMTB (trait) . calculateShift
// Arg ARG cv::_InputArray (boxed) img0= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) img1= cv::_InputArray (boxed) = 
// Return value: cv::Point (simple)
cv_return_value_PointWrapper cv_AlignMTB_calculateShift__InputArray__InputArray(void* instance, void* img0, void* img1) {
    try {
        cv::Point ret = reinterpret_cast<cv::AlignMTB*>(instance)->calculateShift(*reinterpret_cast<const cv::_InputArray*>(img0), *reinterpret_cast<const cv::_InputArray*>(img1));
        return { Error::Code::StsOk, NULL, *reinterpret_cast<PointWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_PointWrapper)
}

// parsed: cv::AlignMTB::shiftMat
// as:     cv::AlignMTB::shiftMat (method) cv::AlignMTB (trait) . shiftMat
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::Point (simple) shift= cv::Point (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_AlignMTB_shiftMat__InputArray__OutputArray_Point(void* instance, void* src, void* dst, PointWrapper shift) {
    try {
        reinterpret_cast<cv::AlignMTB*>(instance)->shiftMat(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::Point*>(&shift));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AlignMTB::computeBitmaps
// as:     cv::AlignMTB::computeBitmaps (method) cv::AlignMTB (trait) . computeBitmaps
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tb= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) eb= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_AlignMTB_computeBitmaps__InputArray__OutputArray__OutputArray(void* instance, void* img, void* tb, void* eb) {
    try {
        reinterpret_cast<cv::AlignMTB*>(instance)->computeBitmaps(*reinterpret_cast<const cv::_InputArray*>(img), *reinterpret_cast<cv::_OutputArray*>(tb), *reinterpret_cast<cv::_OutputArray*>(eb));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AlignMTB::getMaxBits
// as:     cv::AlignMTB::getMaxBits (method) cv::AlignMTB (trait) . getMaxBits
// Return value: Primitive(int)
cv_return_value_int cv_AlignMTB_getMaxBits_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::AlignMTB*>(instance)->getMaxBits();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::AlignMTB::setMaxBits
// as:     cv::AlignMTB::setMaxBits (method) cv::AlignMTB (trait) . setMaxBits
// Arg ARG Primitive(int) max_bits= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_AlignMTB_setMaxBits_int(void* instance, int max_bits) {
    try {
        reinterpret_cast<cv::AlignMTB*>(instance)->setMaxBits(max_bits);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AlignMTB::getExcludeRange
// as:     cv::AlignMTB::getExcludeRange (method) cv::AlignMTB (trait) . getExcludeRange
// Return value: Primitive(int)
cv_return_value_int cv_AlignMTB_getExcludeRange_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::AlignMTB*>(instance)->getExcludeRange();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::AlignMTB::setExcludeRange
// as:     cv::AlignMTB::setExcludeRange (method) cv::AlignMTB (trait) . setExcludeRange
// Arg ARG Primitive(int) exclude_range= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_AlignMTB_setExcludeRange_int(void* instance, int exclude_range) {
    try {
        reinterpret_cast<cv::AlignMTB*>(instance)->setExcludeRange(exclude_range);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AlignMTB::getCut
// as:     cv::AlignMTB::getCut (method) cv::AlignMTB (trait) . getCut
// Return value: Primitive(bool)
cv_return_value_bool cv_AlignMTB_getCut_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::AlignMTB*>(instance)->getCut();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::AlignMTB::setCut
// as:     cv::AlignMTB::setCut (method) cv::AlignMTB (trait) . setCut
// Arg ARG Primitive(bool) value= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_AlignMTB_setCut_bool(void* instance, bool value) {
    try {
        reinterpret_cast<cv::AlignMTB*>(instance)->setCut(value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::CalibrateCRF::process
// as:     cv::CalibrateCRF::process (method) cv::CalibrateCRF (trait) . process
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) times= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_CalibrateCRF_process__InputArray__OutputArray__InputArray(void* instance, void* src, void* dst, void* times) {
    try {
        reinterpret_cast<cv::CalibrateCRF*>(instance)->process(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(times));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::CalibrateDebevec::getLambda
// as:     cv::CalibrateDebevec::getLambda (method) cv::CalibrateDebevec (trait) . getLambda
// Return value: Primitive(float)
cv_return_value_float cv_CalibrateDebevec_getLambda_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::CalibrateDebevec*>(instance)->getLambda();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::CalibrateDebevec::setLambda
// as:     cv::CalibrateDebevec::setLambda (method) cv::CalibrateDebevec (trait) . setLambda
// Arg ARG Primitive(float) lambda= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_CalibrateDebevec_setLambda_float(void* instance, float lambda) {
    try {
        reinterpret_cast<cv::CalibrateDebevec*>(instance)->setLambda(lambda);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::CalibrateDebevec::getSamples
// as:     cv::CalibrateDebevec::getSamples (method) cv::CalibrateDebevec (trait) . getSamples
// Return value: Primitive(int)
cv_return_value_int cv_CalibrateDebevec_getSamples_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::CalibrateDebevec*>(instance)->getSamples();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::CalibrateDebevec::setSamples
// as:     cv::CalibrateDebevec::setSamples (method) cv::CalibrateDebevec (trait) . setSamples
// Arg ARG Primitive(int) samples= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_CalibrateDebevec_setSamples_int(void* instance, int samples) {
    try {
        reinterpret_cast<cv::CalibrateDebevec*>(instance)->setSamples(samples);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::CalibrateDebevec::getRandom
// as:     cv::CalibrateDebevec::getRandom (method) cv::CalibrateDebevec (trait) . getRandom
// Return value: Primitive(bool)
cv_return_value_bool cv_CalibrateDebevec_getRandom_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::CalibrateDebevec*>(instance)->getRandom();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::CalibrateDebevec::setRandom
// as:     cv::CalibrateDebevec::setRandom (method) cv::CalibrateDebevec (trait) . setRandom
// Arg ARG Primitive(bool) random= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_CalibrateDebevec_setRandom_bool(void* instance, bool random) {
    try {
        reinterpret_cast<cv::CalibrateDebevec*>(instance)->setRandom(random);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::CalibrateRobertson::getMaxIter
// as:     cv::CalibrateRobertson::getMaxIter (method) cv::CalibrateRobertson (trait) . getMaxIter
// Return value: Primitive(int)
cv_return_value_int cv_CalibrateRobertson_getMaxIter_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::CalibrateRobertson*>(instance)->getMaxIter();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::CalibrateRobertson::setMaxIter
// as:     cv::CalibrateRobertson::setMaxIter (method) cv::CalibrateRobertson (trait) . setMaxIter
// Arg ARG Primitive(int) max_iter= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_CalibrateRobertson_setMaxIter_int(void* instance, int max_iter) {
    try {
        reinterpret_cast<cv::CalibrateRobertson*>(instance)->setMaxIter(max_iter);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::CalibrateRobertson::getThreshold
// as:     cv::CalibrateRobertson::getThreshold (method) cv::CalibrateRobertson (trait) . getThreshold
// Return value: Primitive(float)
cv_return_value_float cv_CalibrateRobertson_getThreshold_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::CalibrateRobertson*>(instance)->getThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::CalibrateRobertson::setThreshold
// as:     cv::CalibrateRobertson::setThreshold (method) cv::CalibrateRobertson (trait) . setThreshold
// Arg ARG Primitive(float) threshold= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_CalibrateRobertson_setThreshold_float(void* instance, float threshold) {
    try {
        reinterpret_cast<cv::CalibrateRobertson*>(instance)->setThreshold(threshold);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::CalibrateRobertson::getRadiance
// as:     cv::CalibrateRobertson::getRadiance (method) cv::CalibrateRobertson (trait) . getRadiance
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_CalibrateRobertson_getRadiance_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::CalibrateRobertson*>(instance)->getRadiance();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MergeDebevec::process
// as:     cv::MergeDebevec::process (method) cv::MergeDebevec (trait) . process
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) times= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) response= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MergeDebevec_process__InputArray__OutputArray__InputArray__InputArray(void* instance, void* src, void* dst, void* times, void* response) {
    try {
        reinterpret_cast<cv::MergeDebevec*>(instance)->process(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(times), *reinterpret_cast<const cv::_InputArray*>(response));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MergeDebevec::process
// as:     cv::MergeDebevec::process (method) cv::MergeDebevec (trait) . process
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) times= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MergeDebevec_process__InputArray__OutputArray__InputArray(void* instance, void* src, void* dst, void* times) {
    try {
        reinterpret_cast<cv::MergeDebevec*>(instance)->process(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(times));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MergeExposures::process
// as:     cv::MergeExposures::process (method) cv::MergeExposures (trait) . process
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) times= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) response= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MergeExposures_process__InputArray__OutputArray__InputArray__InputArray(void* instance, void* src, void* dst, void* times, void* response) {
    try {
        reinterpret_cast<cv::MergeExposures*>(instance)->process(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(times), *reinterpret_cast<const cv::_InputArray*>(response));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MergeMertens::process
// as:     cv::MergeMertens::process (method) cv::MergeMertens (trait) . process
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) times= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) response= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MergeMertens_process__InputArray__OutputArray__InputArray__InputArray(void* instance, void* src, void* dst, void* times, void* response) {
    try {
        reinterpret_cast<cv::MergeMertens*>(instance)->process(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(times), *reinterpret_cast<const cv::_InputArray*>(response));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MergeMertens::process
// as:     cv::MergeMertens::process (method) cv::MergeMertens (trait) . process
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MergeMertens_process__InputArray__OutputArray(void* instance, void* src, void* dst) {
    try {
        reinterpret_cast<cv::MergeMertens*>(instance)->process(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MergeMertens::getContrastWeight
// as:     cv::MergeMertens::getContrastWeight (method) cv::MergeMertens (trait) . getContrastWeight
// Return value: Primitive(float)
cv_return_value_float cv_MergeMertens_getContrastWeight_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::MergeMertens*>(instance)->getContrastWeight();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::MergeMertens::setContrastWeight
// as:     cv::MergeMertens::setContrastWeight (method) cv::MergeMertens (trait) . setContrastWeight
// Arg ARG Primitive(float) contrast_weiht= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_MergeMertens_setContrastWeight_float(void* instance, float contrast_weiht) {
    try {
        reinterpret_cast<cv::MergeMertens*>(instance)->setContrastWeight(contrast_weiht);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MergeMertens::getSaturationWeight
// as:     cv::MergeMertens::getSaturationWeight (method) cv::MergeMertens (trait) . getSaturationWeight
// Return value: Primitive(float)
cv_return_value_float cv_MergeMertens_getSaturationWeight_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::MergeMertens*>(instance)->getSaturationWeight();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::MergeMertens::setSaturationWeight
// as:     cv::MergeMertens::setSaturationWeight (method) cv::MergeMertens (trait) . setSaturationWeight
// Arg ARG Primitive(float) saturation_weight= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_MergeMertens_setSaturationWeight_float(void* instance, float saturation_weight) {
    try {
        reinterpret_cast<cv::MergeMertens*>(instance)->setSaturationWeight(saturation_weight);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MergeMertens::getExposureWeight
// as:     cv::MergeMertens::getExposureWeight (method) cv::MergeMertens (trait) . getExposureWeight
// Return value: Primitive(float)
cv_return_value_float cv_MergeMertens_getExposureWeight_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::MergeMertens*>(instance)->getExposureWeight();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::MergeMertens::setExposureWeight
// as:     cv::MergeMertens::setExposureWeight (method) cv::MergeMertens (trait) . setExposureWeight
// Arg ARG Primitive(float) exposure_weight= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_MergeMertens_setExposureWeight_float(void* instance, float exposure_weight) {
    try {
        reinterpret_cast<cv::MergeMertens*>(instance)->setExposureWeight(exposure_weight);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MergeRobertson::process
// as:     cv::MergeRobertson::process (method) cv::MergeRobertson (trait) . process
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) times= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) response= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MergeRobertson_process__InputArray__OutputArray__InputArray__InputArray(void* instance, void* src, void* dst, void* times, void* response) {
    try {
        reinterpret_cast<cv::MergeRobertson*>(instance)->process(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(times), *reinterpret_cast<const cv::_InputArray*>(response));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MergeRobertson::process
// as:     cv::MergeRobertson::process (method) cv::MergeRobertson (trait) . process
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) times= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MergeRobertson_process__InputArray__OutputArray__InputArray(void* instance, void* src, void* dst, void* times) {
    try {
        reinterpret_cast<cv::MergeRobertson*>(instance)->process(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(times));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Tonemap::process
// as:     cv::Tonemap::process (method) cv::Tonemap (trait) . process
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_Tonemap_process__InputArray__OutputArray(void* instance, void* src, void* dst) {
    try {
        reinterpret_cast<cv::Tonemap*>(instance)->process(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Tonemap::getGamma
// as:     cv::Tonemap::getGamma (method) cv::Tonemap (trait) . getGamma
// Return value: Primitive(float)
cv_return_value_float cv_Tonemap_getGamma_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::Tonemap*>(instance)->getGamma();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::Tonemap::setGamma
// as:     cv::Tonemap::setGamma (method) cv::Tonemap (trait) . setGamma
// Arg ARG Primitive(float) gamma= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_Tonemap_setGamma_float(void* instance, float gamma) {
    try {
        reinterpret_cast<cv::Tonemap*>(instance)->setGamma(gamma);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::TonemapDrago::getSaturation
// as:     cv::TonemapDrago::getSaturation (method) cv::TonemapDrago (trait) . getSaturation
// Return value: Primitive(float)
cv_return_value_float cv_TonemapDrago_getSaturation_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::TonemapDrago*>(instance)->getSaturation();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::TonemapDrago::setSaturation
// as:     cv::TonemapDrago::setSaturation (method) cv::TonemapDrago (trait) . setSaturation
// Arg ARG Primitive(float) saturation= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_TonemapDrago_setSaturation_float(void* instance, float saturation) {
    try {
        reinterpret_cast<cv::TonemapDrago*>(instance)->setSaturation(saturation);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::TonemapDrago::getBias
// as:     cv::TonemapDrago::getBias (method) cv::TonemapDrago (trait) . getBias
// Return value: Primitive(float)
cv_return_value_float cv_TonemapDrago_getBias_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::TonemapDrago*>(instance)->getBias();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::TonemapDrago::setBias
// as:     cv::TonemapDrago::setBias (method) cv::TonemapDrago (trait) . setBias
// Arg ARG Primitive(float) bias= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_TonemapDrago_setBias_float(void* instance, float bias) {
    try {
        reinterpret_cast<cv::TonemapDrago*>(instance)->setBias(bias);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::TonemapMantiuk::getScale
// as:     cv::TonemapMantiuk::getScale (method) cv::TonemapMantiuk (trait) . getScale
// Return value: Primitive(float)
cv_return_value_float cv_TonemapMantiuk_getScale_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::TonemapMantiuk*>(instance)->getScale();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::TonemapMantiuk::setScale
// as:     cv::TonemapMantiuk::setScale (method) cv::TonemapMantiuk (trait) . setScale
// Arg ARG Primitive(float) scale= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_TonemapMantiuk_setScale_float(void* instance, float scale) {
    try {
        reinterpret_cast<cv::TonemapMantiuk*>(instance)->setScale(scale);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::TonemapMantiuk::getSaturation
// as:     cv::TonemapMantiuk::getSaturation (method) cv::TonemapMantiuk (trait) . getSaturation
// Return value: Primitive(float)
cv_return_value_float cv_TonemapMantiuk_getSaturation_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::TonemapMantiuk*>(instance)->getSaturation();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::TonemapMantiuk::setSaturation
// as:     cv::TonemapMantiuk::setSaturation (method) cv::TonemapMantiuk (trait) . setSaturation
// Arg ARG Primitive(float) saturation= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_TonemapMantiuk_setSaturation_float(void* instance, float saturation) {
    try {
        reinterpret_cast<cv::TonemapMantiuk*>(instance)->setSaturation(saturation);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::TonemapReinhard::getIntensity
// as:     cv::TonemapReinhard::getIntensity (method) cv::TonemapReinhard (trait) . getIntensity
// Return value: Primitive(float)
cv_return_value_float cv_TonemapReinhard_getIntensity_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::TonemapReinhard*>(instance)->getIntensity();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::TonemapReinhard::setIntensity
// as:     cv::TonemapReinhard::setIntensity (method) cv::TonemapReinhard (trait) . setIntensity
// Arg ARG Primitive(float) intensity= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_TonemapReinhard_setIntensity_float(void* instance, float intensity) {
    try {
        reinterpret_cast<cv::TonemapReinhard*>(instance)->setIntensity(intensity);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::TonemapReinhard::getLightAdaptation
// as:     cv::TonemapReinhard::getLightAdaptation (method) cv::TonemapReinhard (trait) . getLightAdaptation
// Return value: Primitive(float)
cv_return_value_float cv_TonemapReinhard_getLightAdaptation_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::TonemapReinhard*>(instance)->getLightAdaptation();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::TonemapReinhard::setLightAdaptation
// as:     cv::TonemapReinhard::setLightAdaptation (method) cv::TonemapReinhard (trait) . setLightAdaptation
// Arg ARG Primitive(float) light_adapt= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_TonemapReinhard_setLightAdaptation_float(void* instance, float light_adapt) {
    try {
        reinterpret_cast<cv::TonemapReinhard*>(instance)->setLightAdaptation(light_adapt);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::TonemapReinhard::getColorAdaptation
// as:     cv::TonemapReinhard::getColorAdaptation (method) cv::TonemapReinhard (trait) . getColorAdaptation
// Return value: Primitive(float)
cv_return_value_float cv_TonemapReinhard_getColorAdaptation_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::TonemapReinhard*>(instance)->getColorAdaptation();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::TonemapReinhard::setColorAdaptation
// as:     cv::TonemapReinhard::setColorAdaptation (method) cv::TonemapReinhard (trait) . setColorAdaptation
// Arg ARG Primitive(float) color_adapt= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_TonemapReinhard_setColorAdaptation_float(void* instance, float color_adapt) {
    try {
        reinterpret_cast<cv::TonemapReinhard*>(instance)->setColorAdaptation(color_adapt);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}



} // extern "C"

