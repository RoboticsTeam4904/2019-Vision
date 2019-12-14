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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/img_hash.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/img_hash/average_hash.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/img_hash/block_mean_hash.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/img_hash/color_moment_hash.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/img_hash/img_hash_base.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/img_hash/marr_hildreth_hash.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/img_hash/phash.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/img_hash/radial_variance_hash.hpp"

extern "C" {

// boxed class: cv::img_hash::AverageHash
void cv_AverageHash_delete(void* instance) {
    delete reinterpret_cast<cv::img_hash::AverageHash*>(instance);
}
// parsed: cv::img_hash::AverageHash::create
// as:     cv::img_hash::AverageHash::create (method) cv::img_hash::AverageHash . create
// Return value: SmartPtr[cv::img_hash::AverageHash (boxed)]
cv_return_value_void_X cv_img_hash_AverageHash_create() {
    try {
        Ptr<cv::img_hash::AverageHash> ret = cv::img_hash::AverageHash::create();
        return { Error::Code::StsOk, NULL, new Ptr<cv::img_hash::AverageHash>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::img_hash::BlockMeanHash
void cv_BlockMeanHash_delete(void* instance) {
    delete reinterpret_cast<cv::img_hash::BlockMeanHash*>(instance);
}
// parsed: cv::img_hash::BlockMeanHash::setMode
// as:     cv::img_hash::BlockMeanHash::setMode (method) cv::img_hash::BlockMeanHash . setMode
// Arg ARG Primitive(int) mode= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_img_hash_BlockMeanHash_setMode_int(void* instance, int mode) {
    try {
        reinterpret_cast<cv::img_hash::BlockMeanHash*>(instance)->setMode(mode);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::img_hash::BlockMeanHash::getMean
// as:     cv::img_hash::BlockMeanHash::getMean (method) cv::img_hash::BlockMeanHash . getMean
// Return value: Vector[Primitive(double)]
cv_return_value_void_X cv_img_hash_BlockMeanHash_getMean_const(void* instance) {
    try {
        std::vector<double> ret = reinterpret_cast<cv::img_hash::BlockMeanHash*>(instance)->getMean();
        return { Error::Code::StsOk, NULL, new std::vector<double>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::img_hash::BlockMeanHash::create
// as:     cv::img_hash::BlockMeanHash::create (method) cv::img_hash::BlockMeanHash . create
// Arg ARG Primitive(int) mode= Primitive(int) = BLOCK_MEAN_HASH_MODE_0
// Return value: SmartPtr[cv::img_hash::BlockMeanHash (boxed)]
cv_return_value_void_X cv_img_hash_BlockMeanHash_create_int(int mode) {
    try {
        Ptr<cv::img_hash::BlockMeanHash> ret = cv::img_hash::BlockMeanHash::create(mode);
        return { Error::Code::StsOk, NULL, new Ptr<cv::img_hash::BlockMeanHash>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::img_hash::ColorMomentHash
void cv_ColorMomentHash_delete(void* instance) {
    delete reinterpret_cast<cv::img_hash::ColorMomentHash*>(instance);
}
// parsed: cv::img_hash::ColorMomentHash::create
// as:     cv::img_hash::ColorMomentHash::create (method) cv::img_hash::ColorMomentHash . create
// Return value: SmartPtr[cv::img_hash::ColorMomentHash (boxed)]
cv_return_value_void_X cv_img_hash_ColorMomentHash_create() {
    try {
        Ptr<cv::img_hash::ColorMomentHash> ret = cv::img_hash::ColorMomentHash::create();
        return { Error::Code::StsOk, NULL, new Ptr<cv::img_hash::ColorMomentHash>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::img_hash::ImgHashBase
void cv_ImgHashBase_delete(void* instance) {
    delete reinterpret_cast<cv::img_hash::ImgHashBase*>(instance);
}
// boxed class: cv::img_hash::MarrHildrethHash
void cv_MarrHildrethHash_delete(void* instance) {
    delete reinterpret_cast<cv::img_hash::MarrHildrethHash*>(instance);
}
// parsed: cv::img_hash::MarrHildrethHash::getAlpha
// as:     cv::img_hash::MarrHildrethHash::getAlpha (method) cv::img_hash::MarrHildrethHash . getAlpha
// Return value: Primitive(float)
cv_return_value_float cv_img_hash_MarrHildrethHash_getAlpha_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::img_hash::MarrHildrethHash*>(instance)->getAlpha();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::img_hash::MarrHildrethHash::getScale
// as:     cv::img_hash::MarrHildrethHash::getScale (method) cv::img_hash::MarrHildrethHash . getScale
// Return value: Primitive(float)
cv_return_value_float cv_img_hash_MarrHildrethHash_getScale_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::img_hash::MarrHildrethHash*>(instance)->getScale();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::img_hash::MarrHildrethHash::setKernelParam
// as:     cv::img_hash::MarrHildrethHash::setKernelParam (method) cv::img_hash::MarrHildrethHash . setKernelParam
// Arg ARG Primitive(float) alpha= Primitive(float) = 
// Arg ARG Primitive(float) scale= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_img_hash_MarrHildrethHash_setKernelParam_float_float(void* instance, float alpha, float scale) {
    try {
        reinterpret_cast<cv::img_hash::MarrHildrethHash*>(instance)->setKernelParam(alpha, scale);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::img_hash::MarrHildrethHash::create
// as:     cv::img_hash::MarrHildrethHash::create (method) cv::img_hash::MarrHildrethHash . create
// Arg ARG Primitive(float) alpha= Primitive(float) = 2.0f
// Arg ARG Primitive(float) scale= Primitive(float) = 1.0f
// Return value: SmartPtr[cv::img_hash::MarrHildrethHash (boxed)]
cv_return_value_void_X cv_img_hash_MarrHildrethHash_create_float_float(float alpha, float scale) {
    try {
        Ptr<cv::img_hash::MarrHildrethHash> ret = cv::img_hash::MarrHildrethHash::create(alpha, scale);
        return { Error::Code::StsOk, NULL, new Ptr<cv::img_hash::MarrHildrethHash>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::img_hash::PHash
void cv_PHash_delete(void* instance) {
    delete reinterpret_cast<cv::img_hash::PHash*>(instance);
}
// parsed: cv::img_hash::PHash::create
// as:     cv::img_hash::PHash::create (method) cv::img_hash::PHash . create
// Return value: SmartPtr[cv::img_hash::PHash (boxed)]
cv_return_value_void_X cv_img_hash_PHash_create() {
    try {
        Ptr<cv::img_hash::PHash> ret = cv::img_hash::PHash::create();
        return { Error::Code::StsOk, NULL, new Ptr<cv::img_hash::PHash>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::img_hash::RadialVarianceHash
void cv_RadialVarianceHash_delete(void* instance) {
    delete reinterpret_cast<cv::img_hash::RadialVarianceHash*>(instance);
}
// parsed: cv::img_hash::RadialVarianceHash::create
// as:     cv::img_hash::RadialVarianceHash::create (method) cv::img_hash::RadialVarianceHash . create
// Arg ARG Primitive(double) sigma= Primitive(double) = 1
// Arg ARG Primitive(int) numOfAngleLine= Primitive(int) = 180
// Return value: SmartPtr[cv::img_hash::RadialVarianceHash (boxed)]
cv_return_value_void_X cv_img_hash_RadialVarianceHash_create_double_int(double sigma, int numOfAngleLine) {
    try {
        Ptr<cv::img_hash::RadialVarianceHash> ret = cv::img_hash::RadialVarianceHash::create(sigma, numOfAngleLine);
        return { Error::Code::StsOk, NULL, new Ptr<cv::img_hash::RadialVarianceHash>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::img_hash::RadialVarianceHash::getNumOfAngleLine
// as:     cv::img_hash::RadialVarianceHash::getNumOfAngleLine (method) cv::img_hash::RadialVarianceHash . getNumOfAngleLine
// Return value: Primitive(int)
cv_return_value_int cv_img_hash_RadialVarianceHash_getNumOfAngleLine_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::img_hash::RadialVarianceHash*>(instance)->getNumOfAngleLine();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::img_hash::RadialVarianceHash::getSigma
// as:     cv::img_hash::RadialVarianceHash::getSigma (method) cv::img_hash::RadialVarianceHash . getSigma
// Return value: Primitive(double)
cv_return_value_double cv_img_hash_RadialVarianceHash_getSigma_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::img_hash::RadialVarianceHash*>(instance)->getSigma();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::img_hash::RadialVarianceHash::setNumOfAngleLine
// as:     cv::img_hash::RadialVarianceHash::setNumOfAngleLine (method) cv::img_hash::RadialVarianceHash . setNumOfAngleLine
// Arg ARG Primitive(int) value= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_img_hash_RadialVarianceHash_setNumOfAngleLine_int(void* instance, int value) {
    try {
        reinterpret_cast<cv::img_hash::RadialVarianceHash*>(instance)->setNumOfAngleLine(value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::img_hash::RadialVarianceHash::setSigma
// as:     cv::img_hash::RadialVarianceHash::setSigma (method) cv::img_hash::RadialVarianceHash . setSigma
// Arg ARG Primitive(double) value= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_img_hash_RadialVarianceHash_setSigma_double(void* instance, double value) {
    try {
        reinterpret_cast<cv::img_hash::RadialVarianceHash*>(instance)->setSigma(value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::img_hash::RadialVarianceHash::getFeatures
// as:     cv::img_hash::RadialVarianceHash::getFeatures (method) cv::img_hash::RadialVarianceHash . getFeatures
// Return value: Vector[Primitive(double)]
cv_return_value_void_X cv_img_hash_RadialVarianceHash_getFeatures(void* instance) {
    try {
        std::vector<double> ret = reinterpret_cast<cv::img_hash::RadialVarianceHash*>(instance)->getFeatures();
        return { Error::Code::StsOk, NULL, new std::vector<double>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::img_hash::RadialVarianceHash::getHash
// as:     cv::img_hash::RadialVarianceHash::getHash (method) cv::img_hash::RadialVarianceHash . getHash
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_img_hash_RadialVarianceHash_getHash(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::img_hash::RadialVarianceHash*>(instance)->getHash();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::img_hash::RadialVarianceHash::getProjection
// as:     cv::img_hash::RadialVarianceHash::getProjection (method) cv::img_hash::RadialVarianceHash . getProjection
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_img_hash_RadialVarianceHash_getProjection(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::img_hash::RadialVarianceHash*>(instance)->getProjection();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}



} // extern "C"

