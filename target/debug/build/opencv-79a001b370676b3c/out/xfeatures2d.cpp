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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/xfeatures2d.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/xfeatures2d/nonfree.hpp"

extern "C" {

// parsed: cv::xfeatures2d::matchGMS
// as:     cv::xfeatures2d::matchGMS (function)
// Arg ARG cv::Size (simple) size1= cv::Size (simple) = 
// Arg ARG cv::Size (simple) size2= cv::Size (simple) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints1= Vector[cv::KeyPoint (simple)] = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints2= Vector[cv::KeyPoint (simple)] = 
// Arg ARG Vector[cv::DMatch (simple)] matches1to2= Vector[cv::DMatch (simple)] = 
// Arg ARG Vector[cv::DMatch (simple)] matchesGMS= Vector[cv::DMatch (simple)] = 
// Arg ARG Primitive(bool) withRotation= Primitive(bool) = false
// Arg ARG Primitive(bool) withScale= Primitive(bool) = false
// Arg ARG Primitive(double) thresholdFactor= Primitive(double) = 6.0
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_matchGMS_Size_Size_VectorOfKeyPoint_VectorOfKeyPoint_VectorOfDMatch_VectorOfDMatch_bool_bool_double(SizeWrapper size1, SizeWrapper size2, void* keypoints1, void* keypoints2, void* matches1to2, void* matchesGMS, bool withRotation, bool withScale, double thresholdFactor) {
    try {
        cv::xfeatures2d::matchGMS(*reinterpret_cast<const cv::Size*>(&size1), *reinterpret_cast<const cv::Size*>(&size2), *reinterpret_cast<const std::vector<cv::KeyPoint>*>(keypoints1), *reinterpret_cast<const std::vector<cv::KeyPoint>*>(keypoints2), *reinterpret_cast<const std::vector<cv::DMatch>*>(matches1to2), *reinterpret_cast<std::vector<cv::DMatch>*>(matchesGMS), withRotation, withScale, thresholdFactor);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::AffineFeature2D::detect
// as:     cv::xfeatures2d::AffineFeature2D::detect (method) cv::xfeatures2d::AffineFeature2D (trait) . detect
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::xfeatures2d::Elliptic_KeyPoint (boxed)] keypoints= Vector[cv::xfeatures2d::Elliptic_KeyPoint (boxed)] = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_AffineFeature2D_detect__InputArray_VectorOfElliptic_KeyPoint__InputArray(void* instance, void* image, void* keypoints, void* mask) {
    try {
        reinterpret_cast<cv::xfeatures2d::AffineFeature2D*>(instance)->detect(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<std::vector<cv::xfeatures2d::Elliptic_KeyPoint>*>(keypoints), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::AffineFeature2D::detectAndCompute
// as:     cv::xfeatures2d::AffineFeature2D::detectAndCompute (method) cv::xfeatures2d::AffineFeature2D (trait) . detectAndCompute
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::xfeatures2d::Elliptic_KeyPoint (boxed)] keypoints= Vector[cv::xfeatures2d::Elliptic_KeyPoint (boxed)] = 
// Arg ARG cv::_OutputArray (boxed) descriptors= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(bool) useProvidedKeypoints= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_AffineFeature2D_detectAndCompute__InputArray__InputArray_VectorOfElliptic_KeyPoint__OutputArray_bool(void* instance, void* image, void* mask, void* keypoints, void* descriptors, bool useProvidedKeypoints) {
    try {
        reinterpret_cast<cv::xfeatures2d::AffineFeature2D*>(instance)->detectAndCompute(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<const cv::_InputArray*>(mask), *reinterpret_cast<std::vector<cv::xfeatures2d::Elliptic_KeyPoint>*>(keypoints), *reinterpret_cast<cv::_OutputArray*>(descriptors), useProvidedKeypoints);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::AffineFeature2D::create
// as:     cv::xfeatures2d::AffineFeature2D::create (method) cv::xfeatures2d::AffineFeature2D (trait) . create
// Arg ARG SmartPtr[cv::Feature2D (boxed)] keypoint_detector= SmartPtr[cv::Feature2D (boxed)] = 
// Arg ARG SmartPtr[cv::Feature2D (boxed)] descriptor_extractor= SmartPtr[cv::Feature2D (boxed)] = 
// Return value: SmartPtr[cv::xfeatures2d::AffineFeature2D (boxed)]
cv_return_value_void_X cv_xfeatures2d_AffineFeature2D_create_PtrOfFeature2D_PtrOfFeature2D(void* keypoint_detector, void* descriptor_extractor) {
    try {
        Ptr<cv::xfeatures2d::AffineFeature2D> ret = cv::xfeatures2d::AffineFeature2D::create(*reinterpret_cast<Ptr<cv::Feature2D>*>(keypoint_detector), *reinterpret_cast<Ptr<cv::Feature2D>*>(descriptor_extractor));
        return { Error::Code::StsOk, NULL, new Ptr<cv::xfeatures2d::AffineFeature2D>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::xfeatures2d::AffineFeature2D::create
// as:     cv::xfeatures2d::AffineFeature2D::create (method) cv::xfeatures2d::AffineFeature2D (trait) . create
// Arg ARG SmartPtr[cv::Feature2D (boxed)] keypoint_detector= SmartPtr[cv::Feature2D (boxed)] = 
// Return value: SmartPtr[cv::xfeatures2d::AffineFeature2D (boxed)]
cv_return_value_void_X cv_xfeatures2d_AffineFeature2D_create_PtrOfFeature2D(void* keypoint_detector) {
    try {
        Ptr<cv::xfeatures2d::AffineFeature2D> ret = cv::xfeatures2d::AffineFeature2D::create(*reinterpret_cast<Ptr<cv::Feature2D>*>(keypoint_detector));
        return { Error::Code::StsOk, NULL, new Ptr<cv::xfeatures2d::AffineFeature2D>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::xfeatures2d::BoostDesc::setUseScaleOrientation
// as:     cv::xfeatures2d::BoostDesc::setUseScaleOrientation (method) cv::xfeatures2d::BoostDesc (trait) . setUseScaleOrientation
// Arg ARG Primitive(bool) use_scale_orientation= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_BoostDesc_setUseScaleOrientation_bool(void* instance, bool use_scale_orientation) {
    try {
        reinterpret_cast<cv::xfeatures2d::BoostDesc*>(instance)->setUseScaleOrientation(use_scale_orientation);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::BoostDesc::getUseScaleOrientation
// as:     cv::xfeatures2d::BoostDesc::getUseScaleOrientation (method) cv::xfeatures2d::BoostDesc (trait) . getUseScaleOrientation
// Return value: Primitive(bool)
cv_return_value_bool cv_xfeatures2d_BoostDesc_getUseScaleOrientation_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::xfeatures2d::BoostDesc*>(instance)->getUseScaleOrientation();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::xfeatures2d::BoostDesc::setScaleFactor
// as:     cv::xfeatures2d::BoostDesc::setScaleFactor (method) cv::xfeatures2d::BoostDesc (trait) . setScaleFactor
// Arg ARG Primitive(float) scale_factor= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_BoostDesc_setScaleFactor_float(void* instance, float scale_factor) {
    try {
        reinterpret_cast<cv::xfeatures2d::BoostDesc*>(instance)->setScaleFactor(scale_factor);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::BoostDesc::getScaleFactor
// as:     cv::xfeatures2d::BoostDesc::getScaleFactor (method) cv::xfeatures2d::BoostDesc (trait) . getScaleFactor
// Return value: Primitive(float)
cv_return_value_float cv_xfeatures2d_BoostDesc_getScaleFactor_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xfeatures2d::BoostDesc*>(instance)->getScaleFactor();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xfeatures2d::BoostDesc::create
// as:     cv::xfeatures2d::BoostDesc::create (method) cv::xfeatures2d::BoostDesc (trait) . create
// Arg ARG Primitive(int) desc= Primitive(int) = BoostDesc::BINBOOST_256
// Arg ARG Primitive(bool) use_scale_orientation= Primitive(bool) = true
// Arg ARG Primitive(float) scale_factor= Primitive(float) = 6.25f
// Return value: SmartPtr[cv::xfeatures2d::BoostDesc (boxed)]
cv_return_value_void_X cv_xfeatures2d_BoostDesc_create_int_bool_float(int desc, bool use_scale_orientation, float scale_factor) {
    try {
        Ptr<cv::xfeatures2d::BoostDesc> ret = cv::xfeatures2d::BoostDesc::create(desc, use_scale_orientation, scale_factor);
        return { Error::Code::StsOk, NULL, new Ptr<cv::xfeatures2d::BoostDesc>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::xfeatures2d::BriefDescriptorExtractor
void cv_BriefDescriptorExtractor_delete(void* instance) {
    delete reinterpret_cast<cv::xfeatures2d::BriefDescriptorExtractor*>(instance);
}
// parsed: cv::xfeatures2d::BriefDescriptorExtractor::create
// as:     cv::xfeatures2d::BriefDescriptorExtractor::create (method) cv::xfeatures2d::BriefDescriptorExtractor . create
// Arg ARG Primitive(int) bytes= Primitive(int) = 32
// Arg ARG Primitive(bool) use_orientation= Primitive(bool) = false
// Return value: SmartPtr[cv::xfeatures2d::BriefDescriptorExtractor (boxed)]
cv_return_value_void_X cv_xfeatures2d_BriefDescriptorExtractor_create_int_bool(int bytes, bool use_orientation) {
    try {
        Ptr<cv::xfeatures2d::BriefDescriptorExtractor> ret = cv::xfeatures2d::BriefDescriptorExtractor::create(bytes, use_orientation);
        return { Error::Code::StsOk, NULL, new Ptr<cv::xfeatures2d::BriefDescriptorExtractor>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::xfeatures2d::DAISY::compute
// as:     cv::xfeatures2d::DAISY::compute (method) cv::xfeatures2d::DAISY (trait) . compute
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::_OutputArray (boxed) descriptors= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_DAISY_compute__InputArray_VectorOfKeyPoint__OutputArray(void* instance, void* image, void* keypoints, void* descriptors) {
    try {
        reinterpret_cast<cv::xfeatures2d::DAISY*>(instance)->compute(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints), *reinterpret_cast<cv::_OutputArray*>(descriptors));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::DAISY::compute
// as:     cv::xfeatures2d::DAISY::compute (method) cv::xfeatures2d::DAISY (trait) . compute
// Arg ARG cv::_InputArray (boxed) images= cv::_InputArray (boxed) = 
// Arg ARG Vector[Vector[cv::KeyPoint (simple)]] keypoints= Vector[Vector[cv::KeyPoint (simple)]] = 
// Arg ARG cv::_OutputArray (boxed) descriptors= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_DAISY_compute__InputArray_VectorOfVectorOfKeyPoint__OutputArray(void* instance, void* images, void* keypoints, void* descriptors) {
    try {
        reinterpret_cast<cv::xfeatures2d::DAISY*>(instance)->compute(*reinterpret_cast<const cv::_InputArray*>(images), *reinterpret_cast<std::vector<std::vector<cv::KeyPoint>>*>(keypoints), *reinterpret_cast<cv::_OutputArray*>(descriptors));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::DAISY::compute
// as:     cv::xfeatures2d::DAISY::compute (method) cv::xfeatures2d::DAISY (trait) . compute
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::Rect (simple) roi= cv::Rect (simple) = 
// Arg ARG cv::_OutputArray (boxed) descriptors= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_DAISY_compute__InputArray_Rect__OutputArray(void* instance, void* image, RectWrapper roi, void* descriptors) {
    try {
        reinterpret_cast<cv::xfeatures2d::DAISY*>(instance)->compute(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::Rect*>(&roi), *reinterpret_cast<cv::_OutputArray*>(descriptors));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::DAISY::compute
// as:     cv::xfeatures2d::DAISY::compute (method) cv::xfeatures2d::DAISY (trait) . compute
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) descriptors= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_DAISY_compute__InputArray__OutputArray(void* instance, void* image, void* descriptors) {
    try {
        reinterpret_cast<cv::xfeatures2d::DAISY*>(instance)->compute(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(descriptors));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::DAISY::GetDescriptor
// as:     cv::xfeatures2d::DAISY::GetDescriptor (method) cv::xfeatures2d::DAISY (trait) . GetDescriptor
// Arg ARG Primitive(double) y= Primitive(double) = 
// Arg ARG Primitive(double) x= Primitive(double) = 
// Arg ARG Primitive(int) orientation= Primitive(int) = 
// Arg ARG RawPtr[Primitive(float)] * descriptor= (ptr) RawPtr[Primitive(float)] = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_DAISY_GetDescriptor_const_double_double_int_float_X(void* instance, double y, double x, int orientation, float* descriptor) {
    try {
        reinterpret_cast<cv::xfeatures2d::DAISY*>(instance)->GetDescriptor(y, x, orientation, descriptor);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::DAISY::GetDescriptor
// as:     cv::xfeatures2d::DAISY::GetDescriptor (method) cv::xfeatures2d::DAISY (trait) . GetDescriptor
// Arg ARG Primitive(double) y= Primitive(double) = 
// Arg ARG Primitive(double) x= Primitive(double) = 
// Arg ARG Primitive(int) orientation= Primitive(int) = 
// Arg ARG RawPtr[Primitive(float)] * descriptor= (ptr) RawPtr[Primitive(float)] = 
// Arg ARG RawPtr[Primitive(double)] * H= (ptr) RawPtr[Primitive(double)] = 
// Return value: Primitive(bool)
cv_return_value_bool cv_xfeatures2d_DAISY_GetDescriptor_const_double_double_int_float_X_double_X(void* instance, double y, double x, int orientation, float* descriptor, double* H) {
    try {
        bool ret = reinterpret_cast<cv::xfeatures2d::DAISY*>(instance)->GetDescriptor(y, x, orientation, descriptor, H);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::xfeatures2d::DAISY::GetUnnormalizedDescriptor
// as:     cv::xfeatures2d::DAISY::GetUnnormalizedDescriptor (method) cv::xfeatures2d::DAISY (trait) . GetUnnormalizedDescriptor
// Arg ARG Primitive(double) y= Primitive(double) = 
// Arg ARG Primitive(double) x= Primitive(double) = 
// Arg ARG Primitive(int) orientation= Primitive(int) = 
// Arg ARG RawPtr[Primitive(float)] * descriptor= (ptr) RawPtr[Primitive(float)] = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_DAISY_GetUnnormalizedDescriptor_const_double_double_int_float_X(void* instance, double y, double x, int orientation, float* descriptor) {
    try {
        reinterpret_cast<cv::xfeatures2d::DAISY*>(instance)->GetUnnormalizedDescriptor(y, x, orientation, descriptor);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::DAISY::GetUnnormalizedDescriptor
// as:     cv::xfeatures2d::DAISY::GetUnnormalizedDescriptor (method) cv::xfeatures2d::DAISY (trait) . GetUnnormalizedDescriptor
// Arg ARG Primitive(double) y= Primitive(double) = 
// Arg ARG Primitive(double) x= Primitive(double) = 
// Arg ARG Primitive(int) orientation= Primitive(int) = 
// Arg ARG RawPtr[Primitive(float)] * descriptor= (ptr) RawPtr[Primitive(float)] = 
// Arg ARG RawPtr[Primitive(double)] * H= (ptr) RawPtr[Primitive(double)] = 
// Return value: Primitive(bool)
cv_return_value_bool cv_xfeatures2d_DAISY_GetUnnormalizedDescriptor_const_double_double_int_float_X_double_X(void* instance, double y, double x, int orientation, float* descriptor, double* H) {
    try {
        bool ret = reinterpret_cast<cv::xfeatures2d::DAISY*>(instance)->GetUnnormalizedDescriptor(y, x, orientation, descriptor, H);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::xfeatures2d::DAISY::create
// as:     cv::xfeatures2d::DAISY::create (method) cv::xfeatures2d::DAISY (trait) . create
// Arg ARG Primitive(float) radius= Primitive(float) = 15
// Arg ARG Primitive(int) q_radius= Primitive(int) = 3
// Arg ARG Primitive(int) q_theta= Primitive(int) = 8
// Arg ARG Primitive(int) q_hist= Primitive(int) = 8
// Arg ARG xfeatures2d::DAISY::NormalizationType (enum) norm= xfeatures2d::DAISY::NormalizationType (enum) = DAISY::NRM_NONE
// Arg ARG cv::_InputArray (boxed) H= cv::_InputArray (boxed) = noArray()
// Arg ARG Primitive(bool) interpolation= Primitive(bool) = true
// Arg ARG Primitive(bool) use_orientation= Primitive(bool) = false
// Return value: SmartPtr[cv::xfeatures2d::DAISY (boxed)]
cv_return_value_void_X cv_xfeatures2d_DAISY_create_float_int_int_int_DAISY_NormalizationType__InputArray_bool_bool(float radius, int q_radius, int q_theta, int q_hist, xfeatures2d::DAISY::NormalizationType norm, void* H, bool interpolation, bool use_orientation) {
    try {
        Ptr<cv::xfeatures2d::DAISY> ret = cv::xfeatures2d::DAISY::create(radius, q_radius, q_theta, q_hist, *reinterpret_cast<xfeatures2d::DAISY::NormalizationType*>(&norm), *reinterpret_cast<const cv::_InputArray*>(H), interpolation, use_orientation);
        return { Error::Code::StsOk, NULL, new Ptr<cv::xfeatures2d::DAISY>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::xfeatures2d::Elliptic_KeyPoint
void cv_Elliptic_KeyPoint_delete(void* instance) {
    delete reinterpret_cast<cv::xfeatures2d::Elliptic_KeyPoint*>(instance);
}
// parsed: cv::xfeatures2d::Elliptic_KeyPoint::Elliptic_KeyPoint
// as:     cv::xfeatures2d::Elliptic_KeyPoint::Elliptic_KeyPoint (constructor) cv::xfeatures2d::Elliptic_KeyPoint . default
// Return value: cv::xfeatures2d::Elliptic_KeyPoint (boxed)
cv_return_value_void_X cv_xfeatures2d_Elliptic_KeyPoint_Elliptic_KeyPoint() {
    try {
        cv::xfeatures2d::Elliptic_KeyPoint* ret = new cv::xfeatures2d::Elliptic_KeyPoint();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::xfeatures2d::Elliptic_KeyPoint::Elliptic_KeyPoint
// as:     cv::xfeatures2d::Elliptic_KeyPoint::Elliptic_KeyPoint (constructor) cv::xfeatures2d::Elliptic_KeyPoint . new
// Arg ARG cv::Point2f (simple) pt= cv::Point2f (simple) = 
// Arg ARG Primitive(float) angle= Primitive(float) = 
// Arg ARG cv::Size (simple) axes= cv::Size (simple) = 
// Arg ARG Primitive(float) size= Primitive(float) = 
// Arg ARG Primitive(float) si= Primitive(float) = 
// Return value: cv::xfeatures2d::Elliptic_KeyPoint (boxed)
cv_return_value_void_X cv_xfeatures2d_Elliptic_KeyPoint_Elliptic_KeyPoint_Point2f_float_Size_float_float(Point2fWrapper pt, float angle, SizeWrapper axes, float size, float si) {
    try {
        cv::xfeatures2d::Elliptic_KeyPoint* ret = new cv::xfeatures2d::Elliptic_KeyPoint(*reinterpret_cast<cv::Point2f*>(&pt), angle, *reinterpret_cast<cv::Size*>(&axes), size, si);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::xfeatures2d::FREAK
void cv_FREAK_delete(void* instance) {
    delete reinterpret_cast<cv::xfeatures2d::FREAK*>(instance);
}
// parsed: cv::xfeatures2d::FREAK::create
// as:     cv::xfeatures2d::FREAK::create (method) cv::xfeatures2d::FREAK . create
// Arg ARG Primitive(bool) orientationNormalized= Primitive(bool) = true
// Arg ARG Primitive(bool) scaleNormalized= Primitive(bool) = true
// Arg ARG Primitive(float) patternScale= Primitive(float) = 22.0f
// Arg ARG Primitive(int) nOctaves= Primitive(int) = 4
// Arg ARG Vector[Primitive(int)] selectedPairs= Vector[Primitive(int)] = std::vector<int>()
// Return value: SmartPtr[cv::xfeatures2d::FREAK (boxed)]
cv_return_value_void_X cv_xfeatures2d_FREAK_create_bool_bool_float_int_VectorOfint(bool orientationNormalized, bool scaleNormalized, float patternScale, int nOctaves, void* selectedPairs) {
    try {
        Ptr<cv::xfeatures2d::FREAK> ret = cv::xfeatures2d::FREAK::create(orientationNormalized, scaleNormalized, patternScale, nOctaves, *reinterpret_cast<const std::vector<int>*>(selectedPairs));
        return { Error::Code::StsOk, NULL, new Ptr<cv::xfeatures2d::FREAK>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::xfeatures2d::HarrisLaplaceFeatureDetector
void cv_HarrisLaplaceFeatureDetector_delete(void* instance) {
    delete reinterpret_cast<cv::xfeatures2d::HarrisLaplaceFeatureDetector*>(instance);
}
// parsed: cv::xfeatures2d::HarrisLaplaceFeatureDetector::create
// as:     cv::xfeatures2d::HarrisLaplaceFeatureDetector::create (method) cv::xfeatures2d::HarrisLaplaceFeatureDetector . create
// Arg ARG Primitive(int) numOctaves= Primitive(int) = 6
// Arg ARG Primitive(float) corn_thresh= Primitive(float) = 0.01f
// Arg ARG Primitive(float) DOG_thresh= Primitive(float) = 0.01f
// Arg ARG Primitive(int) maxCorners= Primitive(int) = 5000
// Arg ARG Primitive(int) num_layers= Primitive(int) = 4
// Return value: SmartPtr[cv::xfeatures2d::HarrisLaplaceFeatureDetector (boxed)]
cv_return_value_void_X cv_xfeatures2d_HarrisLaplaceFeatureDetector_create_int_float_float_int_int(int numOctaves, float corn_thresh, float DOG_thresh, int maxCorners, int num_layers) {
    try {
        Ptr<cv::xfeatures2d::HarrisLaplaceFeatureDetector> ret = cv::xfeatures2d::HarrisLaplaceFeatureDetector::create(numOctaves, corn_thresh, DOG_thresh, maxCorners, num_layers);
        return { Error::Code::StsOk, NULL, new Ptr<cv::xfeatures2d::HarrisLaplaceFeatureDetector>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::xfeatures2d::LATCH
void cv_LATCH_delete(void* instance) {
    delete reinterpret_cast<cv::xfeatures2d::LATCH*>(instance);
}
// parsed: cv::xfeatures2d::LATCH::create
// as:     cv::xfeatures2d::LATCH::create (method) cv::xfeatures2d::LATCH . create
// Arg ARG Primitive(int) bytes= Primitive(int) = 32
// Arg ARG Primitive(bool) rotationInvariance= Primitive(bool) = true
// Arg ARG Primitive(int) half_ssd_size= Primitive(int) = 3
// Arg ARG Primitive(double) sigma= Primitive(double) = 2.0
// Return value: SmartPtr[cv::xfeatures2d::LATCH (boxed)]
cv_return_value_void_X cv_xfeatures2d_LATCH_create_int_bool_int_double(int bytes, bool rotationInvariance, int half_ssd_size, double sigma) {
    try {
        Ptr<cv::xfeatures2d::LATCH> ret = cv::xfeatures2d::LATCH::create(bytes, rotationInvariance, half_ssd_size, sigma);
        return { Error::Code::StsOk, NULL, new Ptr<cv::xfeatures2d::LATCH>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::xfeatures2d::LUCID
void cv_LUCID_delete(void* instance) {
    delete reinterpret_cast<cv::xfeatures2d::LUCID*>(instance);
}
// parsed: cv::xfeatures2d::LUCID::create
// as:     cv::xfeatures2d::LUCID::create (method) cv::xfeatures2d::LUCID . create
// Arg ARG Primitive(int) lucid_kernel= Primitive(int) = 1
// Arg ARG Primitive(int) blur_kernel= Primitive(int) = 2
// Return value: SmartPtr[cv::xfeatures2d::LUCID (boxed)]
cv_return_value_void_X cv_xfeatures2d_LUCID_create_int_int(int lucid_kernel, int blur_kernel) {
    try {
        Ptr<cv::xfeatures2d::LUCID> ret = cv::xfeatures2d::LUCID::create(lucid_kernel, blur_kernel);
        return { Error::Code::StsOk, NULL, new Ptr<cv::xfeatures2d::LUCID>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::xfeatures2d::MSDDetector
void cv_MSDDetector_delete(void* instance) {
    delete reinterpret_cast<cv::xfeatures2d::MSDDetector*>(instance);
}
// parsed: cv::xfeatures2d::MSDDetector::create
// as:     cv::xfeatures2d::MSDDetector::create (method) cv::xfeatures2d::MSDDetector . create
// Arg ARG Primitive(int) m_patch_radius= Primitive(int) = 3
// Arg ARG Primitive(int) m_search_area_radius= Primitive(int) = 5
// Arg ARG Primitive(int) m_nms_radius= Primitive(int) = 5
// Arg ARG Primitive(int) m_nms_scale_radius= Primitive(int) = 0
// Arg ARG Primitive(float) m_th_saliency= Primitive(float) = 250.0f
// Arg ARG Primitive(int) m_kNN= Primitive(int) = 4
// Arg ARG Primitive(float) m_scale_factor= Primitive(float) = 1.25f
// Arg ARG Primitive(int) m_n_scales= Primitive(int) = -1
// Arg ARG Primitive(bool) m_compute_orientation= Primitive(bool) = false
// Return value: SmartPtr[cv::xfeatures2d::MSDDetector (boxed)]
cv_return_value_void_X cv_xfeatures2d_MSDDetector_create_int_int_int_int_float_int_float_int_bool(int m_patch_radius, int m_search_area_radius, int m_nms_radius, int m_nms_scale_radius, float m_th_saliency, int m_kNN, float m_scale_factor, int m_n_scales, bool m_compute_orientation) {
    try {
        Ptr<cv::xfeatures2d::MSDDetector> ret = cv::xfeatures2d::MSDDetector::create(m_patch_radius, m_search_area_radius, m_nms_radius, m_nms_scale_radius, m_th_saliency, m_kNN, m_scale_factor, m_n_scales, m_compute_orientation);
        return { Error::Code::StsOk, NULL, new Ptr<cv::xfeatures2d::MSDDetector>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::xfeatures2d::PCTSignatures::computeSignature
// as:     cv::xfeatures2d::PCTSignatures::computeSignature (method) cv::xfeatures2d::PCTSignatures (trait) . computeSignature
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) signature= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_computeSignature_const__InputArray__OutputArray(void* instance, void* image, void* signature) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->computeSignature(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(signature));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::computeSignatures
// as:     cv::xfeatures2d::PCTSignatures::computeSignatures (method) cv::xfeatures2d::PCTSignatures (trait) . computeSignatures
// Arg ARG Vector[cv::Mat (boxed)] images= Vector[cv::Mat (boxed)] = 
// Arg ARG Vector[cv::Mat (boxed)] signatures= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_computeSignatures_const_VectorOfMat_VectorOfMat(void* instance, void* images, void* signatures) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->computeSignatures(*reinterpret_cast<const std::vector<cv::Mat>*>(images), *reinterpret_cast<std::vector<cv::Mat>*>(signatures));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::getSampleCount
// as:     cv::xfeatures2d::PCTSignatures::getSampleCount (method) cv::xfeatures2d::PCTSignatures (trait) . getSampleCount
// Return value: Primitive(int)
cv_return_value_int cv_xfeatures2d_PCTSignatures_getSampleCount_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->getSampleCount();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::xfeatures2d::PCTSignatures::getGrayscaleBits
// as:     cv::xfeatures2d::PCTSignatures::getGrayscaleBits (method) cv::xfeatures2d::PCTSignatures (trait) . getGrayscaleBits
// Return value: Primitive(int)
cv_return_value_int cv_xfeatures2d_PCTSignatures_getGrayscaleBits_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->getGrayscaleBits();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::xfeatures2d::PCTSignatures::setGrayscaleBits
// as:     cv::xfeatures2d::PCTSignatures::setGrayscaleBits (method) cv::xfeatures2d::PCTSignatures (trait) . setGrayscaleBits
// Arg ARG Primitive(int) grayscaleBits= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setGrayscaleBits_int(void* instance, int grayscaleBits) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setGrayscaleBits(grayscaleBits);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::getWindowRadius
// as:     cv::xfeatures2d::PCTSignatures::getWindowRadius (method) cv::xfeatures2d::PCTSignatures (trait) . getWindowRadius
// Return value: Primitive(int)
cv_return_value_int cv_xfeatures2d_PCTSignatures_getWindowRadius_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->getWindowRadius();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::xfeatures2d::PCTSignatures::setWindowRadius
// as:     cv::xfeatures2d::PCTSignatures::setWindowRadius (method) cv::xfeatures2d::PCTSignatures (trait) . setWindowRadius
// Arg ARG Primitive(int) radius= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setWindowRadius_int(void* instance, int radius) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setWindowRadius(radius);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::getWeightX
// as:     cv::xfeatures2d::PCTSignatures::getWeightX (method) cv::xfeatures2d::PCTSignatures (trait) . getWeightX
// Return value: Primitive(float)
cv_return_value_float cv_xfeatures2d_PCTSignatures_getWeightX_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->getWeightX();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xfeatures2d::PCTSignatures::setWeightX
// as:     cv::xfeatures2d::PCTSignatures::setWeightX (method) cv::xfeatures2d::PCTSignatures (trait) . setWeightX
// Arg ARG Primitive(float) weight= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setWeightX_float(void* instance, float weight) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setWeightX(weight);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::getWeightY
// as:     cv::xfeatures2d::PCTSignatures::getWeightY (method) cv::xfeatures2d::PCTSignatures (trait) . getWeightY
// Return value: Primitive(float)
cv_return_value_float cv_xfeatures2d_PCTSignatures_getWeightY_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->getWeightY();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xfeatures2d::PCTSignatures::setWeightY
// as:     cv::xfeatures2d::PCTSignatures::setWeightY (method) cv::xfeatures2d::PCTSignatures (trait) . setWeightY
// Arg ARG Primitive(float) weight= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setWeightY_float(void* instance, float weight) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setWeightY(weight);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::getWeightL
// as:     cv::xfeatures2d::PCTSignatures::getWeightL (method) cv::xfeatures2d::PCTSignatures (trait) . getWeightL
// Return value: Primitive(float)
cv_return_value_float cv_xfeatures2d_PCTSignatures_getWeightL_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->getWeightL();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xfeatures2d::PCTSignatures::setWeightL
// as:     cv::xfeatures2d::PCTSignatures::setWeightL (method) cv::xfeatures2d::PCTSignatures (trait) . setWeightL
// Arg ARG Primitive(float) weight= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setWeightL_float(void* instance, float weight) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setWeightL(weight);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::getWeightA
// as:     cv::xfeatures2d::PCTSignatures::getWeightA (method) cv::xfeatures2d::PCTSignatures (trait) . getWeightA
// Return value: Primitive(float)
cv_return_value_float cv_xfeatures2d_PCTSignatures_getWeightA_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->getWeightA();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xfeatures2d::PCTSignatures::setWeightA
// as:     cv::xfeatures2d::PCTSignatures::setWeightA (method) cv::xfeatures2d::PCTSignatures (trait) . setWeightA
// Arg ARG Primitive(float) weight= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setWeightA_float(void* instance, float weight) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setWeightA(weight);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::getWeightB
// as:     cv::xfeatures2d::PCTSignatures::getWeightB (method) cv::xfeatures2d::PCTSignatures (trait) . getWeightB
// Return value: Primitive(float)
cv_return_value_float cv_xfeatures2d_PCTSignatures_getWeightB_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->getWeightB();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xfeatures2d::PCTSignatures::setWeightB
// as:     cv::xfeatures2d::PCTSignatures::setWeightB (method) cv::xfeatures2d::PCTSignatures (trait) . setWeightB
// Arg ARG Primitive(float) weight= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setWeightB_float(void* instance, float weight) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setWeightB(weight);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::getWeightContrast
// as:     cv::xfeatures2d::PCTSignatures::getWeightContrast (method) cv::xfeatures2d::PCTSignatures (trait) . getWeightContrast
// Return value: Primitive(float)
cv_return_value_float cv_xfeatures2d_PCTSignatures_getWeightContrast_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->getWeightContrast();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xfeatures2d::PCTSignatures::setWeightContrast
// as:     cv::xfeatures2d::PCTSignatures::setWeightContrast (method) cv::xfeatures2d::PCTSignatures (trait) . setWeightContrast
// Arg ARG Primitive(float) weight= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setWeightContrast_float(void* instance, float weight) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setWeightContrast(weight);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::getWeightEntropy
// as:     cv::xfeatures2d::PCTSignatures::getWeightEntropy (method) cv::xfeatures2d::PCTSignatures (trait) . getWeightEntropy
// Return value: Primitive(float)
cv_return_value_float cv_xfeatures2d_PCTSignatures_getWeightEntropy_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->getWeightEntropy();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xfeatures2d::PCTSignatures::setWeightEntropy
// as:     cv::xfeatures2d::PCTSignatures::setWeightEntropy (method) cv::xfeatures2d::PCTSignatures (trait) . setWeightEntropy
// Arg ARG Primitive(float) weight= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setWeightEntropy_float(void* instance, float weight) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setWeightEntropy(weight);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::getSamplingPoints
// as:     cv::xfeatures2d::PCTSignatures::getSamplingPoints (method) cv::xfeatures2d::PCTSignatures (trait) . getSamplingPoints
// Return value: Vector[cv::Point2f (simple)]
cv_return_value_void_X cv_xfeatures2d_PCTSignatures_getSamplingPoints_const(void* instance) {
    try {
        std::vector<cv::Point2f> ret = reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->getSamplingPoints();
        return { Error::Code::StsOk, NULL, new std::vector<cv::Point2f>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::xfeatures2d::PCTSignatures::setWeight
// as:     cv::xfeatures2d::PCTSignatures::setWeight (method) cv::xfeatures2d::PCTSignatures (trait) . setWeight
// Arg ARG Primitive(int) idx= Primitive(int) = 
// Arg ARG Primitive(float) value= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setWeight_int_float(void* instance, int idx, float value) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setWeight(idx, value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::setWeights
// as:     cv::xfeatures2d::PCTSignatures::setWeights (method) cv::xfeatures2d::PCTSignatures (trait) . setWeights
// Arg ARG Vector[Primitive(float)] weights= Vector[Primitive(float)] = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setWeights_VectorOffloat(void* instance, void* weights) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setWeights(*reinterpret_cast<const std::vector<float>*>(weights));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::setTranslation
// as:     cv::xfeatures2d::PCTSignatures::setTranslation (method) cv::xfeatures2d::PCTSignatures (trait) . setTranslation
// Arg ARG Primitive(int) idx= Primitive(int) = 
// Arg ARG Primitive(float) value= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setTranslation_int_float(void* instance, int idx, float value) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setTranslation(idx, value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::setTranslations
// as:     cv::xfeatures2d::PCTSignatures::setTranslations (method) cv::xfeatures2d::PCTSignatures (trait) . setTranslations
// Arg ARG Vector[Primitive(float)] translations= Vector[Primitive(float)] = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setTranslations_VectorOffloat(void* instance, void* translations) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setTranslations(*reinterpret_cast<const std::vector<float>*>(translations));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::setSamplingPoints
// as:     cv::xfeatures2d::PCTSignatures::setSamplingPoints (method) cv::xfeatures2d::PCTSignatures (trait) . setSamplingPoints
// Arg ARG Vector[cv::Point2f (simple)] samplingPoints= Vector[cv::Point2f (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setSamplingPoints_VectorOfPoint2f(void* instance, void* samplingPoints) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setSamplingPoints(*reinterpret_cast<std::vector<cv::Point2f>*>(samplingPoints));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::getInitSeedIndexes
// as:     cv::xfeatures2d::PCTSignatures::getInitSeedIndexes (method) cv::xfeatures2d::PCTSignatures (trait) . getInitSeedIndexes
// Return value: Vector[Primitive(int)]
cv_return_value_void_X cv_xfeatures2d_PCTSignatures_getInitSeedIndexes_const(void* instance) {
    try {
        std::vector<int> ret = reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->getInitSeedIndexes();
        return { Error::Code::StsOk, NULL, new std::vector<int>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::xfeatures2d::PCTSignatures::setInitSeedIndexes
// as:     cv::xfeatures2d::PCTSignatures::setInitSeedIndexes (method) cv::xfeatures2d::PCTSignatures (trait) . setInitSeedIndexes
// Arg ARG Vector[Primitive(int)] initSeedIndexes= Vector[Primitive(int)] = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setInitSeedIndexes_VectorOfint(void* instance, void* initSeedIndexes) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setInitSeedIndexes(*reinterpret_cast<std::vector<int>*>(initSeedIndexes));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::getInitSeedCount
// as:     cv::xfeatures2d::PCTSignatures::getInitSeedCount (method) cv::xfeatures2d::PCTSignatures (trait) . getInitSeedCount
// Return value: Primitive(int)
cv_return_value_int cv_xfeatures2d_PCTSignatures_getInitSeedCount_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->getInitSeedCount();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::xfeatures2d::PCTSignatures::getIterationCount
// as:     cv::xfeatures2d::PCTSignatures::getIterationCount (method) cv::xfeatures2d::PCTSignatures (trait) . getIterationCount
// Return value: Primitive(int)
cv_return_value_int cv_xfeatures2d_PCTSignatures_getIterationCount_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->getIterationCount();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::xfeatures2d::PCTSignatures::setIterationCount
// as:     cv::xfeatures2d::PCTSignatures::setIterationCount (method) cv::xfeatures2d::PCTSignatures (trait) . setIterationCount
// Arg ARG Primitive(int) iterationCount= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setIterationCount_int(void* instance, int iterationCount) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setIterationCount(iterationCount);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::getMaxClustersCount
// as:     cv::xfeatures2d::PCTSignatures::getMaxClustersCount (method) cv::xfeatures2d::PCTSignatures (trait) . getMaxClustersCount
// Return value: Primitive(int)
cv_return_value_int cv_xfeatures2d_PCTSignatures_getMaxClustersCount_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->getMaxClustersCount();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::xfeatures2d::PCTSignatures::setMaxClustersCount
// as:     cv::xfeatures2d::PCTSignatures::setMaxClustersCount (method) cv::xfeatures2d::PCTSignatures (trait) . setMaxClustersCount
// Arg ARG Primitive(int) maxClustersCount= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setMaxClustersCount_int(void* instance, int maxClustersCount) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setMaxClustersCount(maxClustersCount);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::getClusterMinSize
// as:     cv::xfeatures2d::PCTSignatures::getClusterMinSize (method) cv::xfeatures2d::PCTSignatures (trait) . getClusterMinSize
// Return value: Primitive(int)
cv_return_value_int cv_xfeatures2d_PCTSignatures_getClusterMinSize_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->getClusterMinSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::xfeatures2d::PCTSignatures::setClusterMinSize
// as:     cv::xfeatures2d::PCTSignatures::setClusterMinSize (method) cv::xfeatures2d::PCTSignatures (trait) . setClusterMinSize
// Arg ARG Primitive(int) clusterMinSize= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setClusterMinSize_int(void* instance, int clusterMinSize) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setClusterMinSize(clusterMinSize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::getJoiningDistance
// as:     cv::xfeatures2d::PCTSignatures::getJoiningDistance (method) cv::xfeatures2d::PCTSignatures (trait) . getJoiningDistance
// Return value: Primitive(float)
cv_return_value_float cv_xfeatures2d_PCTSignatures_getJoiningDistance_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->getJoiningDistance();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xfeatures2d::PCTSignatures::setJoiningDistance
// as:     cv::xfeatures2d::PCTSignatures::setJoiningDistance (method) cv::xfeatures2d::PCTSignatures (trait) . setJoiningDistance
// Arg ARG Primitive(float) joiningDistance= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setJoiningDistance_float(void* instance, float joiningDistance) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setJoiningDistance(joiningDistance);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::getDropThreshold
// as:     cv::xfeatures2d::PCTSignatures::getDropThreshold (method) cv::xfeatures2d::PCTSignatures (trait) . getDropThreshold
// Return value: Primitive(float)
cv_return_value_float cv_xfeatures2d_PCTSignatures_getDropThreshold_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->getDropThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xfeatures2d::PCTSignatures::setDropThreshold
// as:     cv::xfeatures2d::PCTSignatures::setDropThreshold (method) cv::xfeatures2d::PCTSignatures (trait) . setDropThreshold
// Arg ARG Primitive(float) dropThreshold= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setDropThreshold_float(void* instance, float dropThreshold) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setDropThreshold(dropThreshold);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::getDistanceFunction
// as:     cv::xfeatures2d::PCTSignatures::getDistanceFunction (method) cv::xfeatures2d::PCTSignatures (trait) . getDistanceFunction
// Return value: Primitive(int)
cv_return_value_int cv_xfeatures2d_PCTSignatures_getDistanceFunction_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->getDistanceFunction();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::xfeatures2d::PCTSignatures::setDistanceFunction
// as:     cv::xfeatures2d::PCTSignatures::setDistanceFunction (method) cv::xfeatures2d::PCTSignatures (trait) . setDistanceFunction
// Arg ARG Primitive(int) distanceFunction= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_setDistanceFunction_int(void* instance, int distanceFunction) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignatures*>(instance)->setDistanceFunction(distanceFunction);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::create
// as:     cv::xfeatures2d::PCTSignatures::create (method) cv::xfeatures2d::PCTSignatures (trait) . create
// Arg ARG Primitive(int) initSampleCount= Primitive(int) = 2000
// Arg ARG Primitive(int) initSeedCount= Primitive(int) = 400
// Arg ARG Primitive(int) pointDistribution= Primitive(int) = 0
// Return value: SmartPtr[cv::xfeatures2d::PCTSignatures (boxed)]
cv_return_value_void_X cv_xfeatures2d_PCTSignatures_create_int_int_int(int initSampleCount, int initSeedCount, int pointDistribution) {
    try {
        Ptr<cv::xfeatures2d::PCTSignatures> ret = cv::xfeatures2d::PCTSignatures::create(initSampleCount, initSeedCount, pointDistribution);
        return { Error::Code::StsOk, NULL, new Ptr<cv::xfeatures2d::PCTSignatures>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::xfeatures2d::PCTSignatures::create
// as:     cv::xfeatures2d::PCTSignatures::create (method) cv::xfeatures2d::PCTSignatures (trait) . create
// Arg ARG Vector[cv::Point2f (simple)] initSamplingPoints= Vector[cv::Point2f (simple)] = 
// Arg ARG Primitive(int) initSeedCount= Primitive(int) = 
// Return value: SmartPtr[cv::xfeatures2d::PCTSignatures (boxed)]
cv_return_value_void_X cv_xfeatures2d_PCTSignatures_create_VectorOfPoint2f_int(void* initSamplingPoints, int initSeedCount) {
    try {
        Ptr<cv::xfeatures2d::PCTSignatures> ret = cv::xfeatures2d::PCTSignatures::create(*reinterpret_cast<const std::vector<cv::Point2f>*>(initSamplingPoints), initSeedCount);
        return { Error::Code::StsOk, NULL, new Ptr<cv::xfeatures2d::PCTSignatures>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::xfeatures2d::PCTSignatures::create
// as:     cv::xfeatures2d::PCTSignatures::create (method) cv::xfeatures2d::PCTSignatures (trait) . create
// Arg ARG Vector[cv::Point2f (simple)] initSamplingPoints= Vector[cv::Point2f (simple)] = 
// Arg ARG Vector[Primitive(int)] initClusterSeedIndexes= Vector[Primitive(int)] = 
// Return value: SmartPtr[cv::xfeatures2d::PCTSignatures (boxed)]
cv_return_value_void_X cv_xfeatures2d_PCTSignatures_create_VectorOfPoint2f_VectorOfint(void* initSamplingPoints, void* initClusterSeedIndexes) {
    try {
        Ptr<cv::xfeatures2d::PCTSignatures> ret = cv::xfeatures2d::PCTSignatures::create(*reinterpret_cast<const std::vector<cv::Point2f>*>(initSamplingPoints), *reinterpret_cast<const std::vector<int>*>(initClusterSeedIndexes));
        return { Error::Code::StsOk, NULL, new Ptr<cv::xfeatures2d::PCTSignatures>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::xfeatures2d::PCTSignatures::drawSignature
// as:     cv::xfeatures2d::PCTSignatures::drawSignature (method) cv::xfeatures2d::PCTSignatures (trait) . drawSignature
// Arg ARG cv::_InputArray (boxed) source= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) signature= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) result= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(float) radiusToShorterSideRatio= Primitive(float) = 1.0 / 8
// Arg ARG Primitive(int) borderThickness= Primitive(int) = 1
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_drawSignature__InputArray__InputArray__OutputArray_float_int(void* source, void* signature, void* result, float radiusToShorterSideRatio, int borderThickness) {
    try {
        cv::xfeatures2d::PCTSignatures::drawSignature(*reinterpret_cast<const cv::_InputArray*>(source), *reinterpret_cast<const cv::_InputArray*>(signature), *reinterpret_cast<cv::_OutputArray*>(result), radiusToShorterSideRatio, borderThickness);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignatures::generateInitPoints
// as:     cv::xfeatures2d::PCTSignatures::generateInitPoints (method) cv::xfeatures2d::PCTSignatures (trait) . generateInitPoints
// Arg ARG Vector[cv::Point2f (simple)] initPoints= Vector[cv::Point2f (simple)] = 
// Arg ARG Primitive(int) count= Primitive(int) = 
// Arg ARG Primitive(int) pointDistribution= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignatures_generateInitPoints_VectorOfPoint2f_int_int(void* initPoints, int count, int pointDistribution) {
    try {
        cv::xfeatures2d::PCTSignatures::generateInitPoints(*reinterpret_cast<std::vector<cv::Point2f>*>(initPoints), count, pointDistribution);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignaturesSQFD::computeQuadraticFormDistance
// as:     cv::xfeatures2d::PCTSignaturesSQFD::computeQuadraticFormDistance (method) cv::xfeatures2d::PCTSignaturesSQFD (trait) . computeQuadraticFormDistance
// Arg ARG cv::_InputArray (boxed) _signature0= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) _signature1= cv::_InputArray (boxed) = 
// Return value: Primitive(float)
cv_return_value_float cv_xfeatures2d_PCTSignaturesSQFD_computeQuadraticFormDistance_const__InputArray__InputArray(void* instance, void* _signature0, void* _signature1) {
    try {
        float ret = reinterpret_cast<cv::xfeatures2d::PCTSignaturesSQFD*>(instance)->computeQuadraticFormDistance(*reinterpret_cast<const cv::_InputArray*>(_signature0), *reinterpret_cast<const cv::_InputArray*>(_signature1));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xfeatures2d::PCTSignaturesSQFD::computeQuadraticFormDistances
// as:     cv::xfeatures2d::PCTSignaturesSQFD::computeQuadraticFormDistances (method) cv::xfeatures2d::PCTSignaturesSQFD (trait) . computeQuadraticFormDistances
// Arg ARG cv::Mat (boxed) sourceSignature= cv::Mat (boxed) = 
// Arg ARG Vector[cv::Mat (boxed)] imageSignatures= Vector[cv::Mat (boxed)] = 
// Arg ARG Vector[Primitive(float)] distances= Vector[Primitive(float)] = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_PCTSignaturesSQFD_computeQuadraticFormDistances_const_Mat_VectorOfMat_VectorOffloat(void* instance, void* sourceSignature, void* imageSignatures, void* distances) {
    try {
        reinterpret_cast<cv::xfeatures2d::PCTSignaturesSQFD*>(instance)->computeQuadraticFormDistances(*reinterpret_cast<const cv::Mat*>(sourceSignature), *reinterpret_cast<const std::vector<cv::Mat>*>(imageSignatures), *reinterpret_cast<std::vector<float>*>(distances));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::PCTSignaturesSQFD::create
// as:     cv::xfeatures2d::PCTSignaturesSQFD::create (method) cv::xfeatures2d::PCTSignaturesSQFD (trait) . create
// Arg ARG Primitive(int) distanceFunction= Primitive(int) = 3
// Arg ARG Primitive(int) similarityFunction= Primitive(int) = 2
// Arg ARG Primitive(float) similarityParameter= Primitive(float) = 1.0f
// Return value: SmartPtr[cv::xfeatures2d::PCTSignaturesSQFD (boxed)]
cv_return_value_void_X cv_xfeatures2d_PCTSignaturesSQFD_create_int_int_float(int distanceFunction, int similarityFunction, float similarityParameter) {
    try {
        Ptr<cv::xfeatures2d::PCTSignaturesSQFD> ret = cv::xfeatures2d::PCTSignaturesSQFD::create(distanceFunction, similarityFunction, similarityParameter);
        return { Error::Code::StsOk, NULL, new Ptr<cv::xfeatures2d::PCTSignaturesSQFD>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::xfeatures2d::SIFT
void cv_SIFT_delete(void* instance) {
    delete reinterpret_cast<cv::xfeatures2d::SIFT*>(instance);
}
// parsed: cv::xfeatures2d::SIFT::create
// as:     cv::xfeatures2d::SIFT::create (method) cv::xfeatures2d::SIFT . create
// Arg ARG Primitive(int) nfeatures= Primitive(int) = 0
// Arg ARG Primitive(int) nOctaveLayers= Primitive(int) = 3
// Arg ARG Primitive(double) contrastThreshold= Primitive(double) = 0.04
// Arg ARG Primitive(double) edgeThreshold= Primitive(double) = 10
// Arg ARG Primitive(double) sigma= Primitive(double) = 1.6
// Return value: SmartPtr[cv::xfeatures2d::SIFT (boxed)]
cv_return_value_void_X cv_xfeatures2d_SIFT_create_int_int_double_double_double(int nfeatures, int nOctaveLayers, double contrastThreshold, double edgeThreshold, double sigma) {
    try {
        Ptr<cv::xfeatures2d::SIFT> ret = cv::xfeatures2d::SIFT::create(nfeatures, nOctaveLayers, contrastThreshold, edgeThreshold, sigma);
        return { Error::Code::StsOk, NULL, new Ptr<cv::xfeatures2d::SIFT>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::xfeatures2d::SURF::setHessianThreshold
// as:     cv::xfeatures2d::SURF::setHessianThreshold (method) cv::xfeatures2d::SURF (trait) . setHessianThreshold
// Arg ARG Primitive(double) hessianThreshold= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_SURF_setHessianThreshold_double(void* instance, double hessianThreshold) {
    try {
        reinterpret_cast<cv::xfeatures2d::SURF*>(instance)->setHessianThreshold(hessianThreshold);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::SURF::getHessianThreshold
// as:     cv::xfeatures2d::SURF::getHessianThreshold (method) cv::xfeatures2d::SURF (trait) . getHessianThreshold
// Return value: Primitive(double)
cv_return_value_double cv_xfeatures2d_SURF_getHessianThreshold_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::xfeatures2d::SURF*>(instance)->getHessianThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::xfeatures2d::SURF::setNOctaves
// as:     cv::xfeatures2d::SURF::setNOctaves (method) cv::xfeatures2d::SURF (trait) . setNOctaves
// Arg ARG Primitive(int) nOctaves= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_SURF_setNOctaves_int(void* instance, int nOctaves) {
    try {
        reinterpret_cast<cv::xfeatures2d::SURF*>(instance)->setNOctaves(nOctaves);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::SURF::getNOctaves
// as:     cv::xfeatures2d::SURF::getNOctaves (method) cv::xfeatures2d::SURF (trait) . getNOctaves
// Return value: Primitive(int)
cv_return_value_int cv_xfeatures2d_SURF_getNOctaves_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::xfeatures2d::SURF*>(instance)->getNOctaves();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::xfeatures2d::SURF::setNOctaveLayers
// as:     cv::xfeatures2d::SURF::setNOctaveLayers (method) cv::xfeatures2d::SURF (trait) . setNOctaveLayers
// Arg ARG Primitive(int) nOctaveLayers= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_SURF_setNOctaveLayers_int(void* instance, int nOctaveLayers) {
    try {
        reinterpret_cast<cv::xfeatures2d::SURF*>(instance)->setNOctaveLayers(nOctaveLayers);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::SURF::getNOctaveLayers
// as:     cv::xfeatures2d::SURF::getNOctaveLayers (method) cv::xfeatures2d::SURF (trait) . getNOctaveLayers
// Return value: Primitive(int)
cv_return_value_int cv_xfeatures2d_SURF_getNOctaveLayers_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::xfeatures2d::SURF*>(instance)->getNOctaveLayers();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::xfeatures2d::SURF::setExtended
// as:     cv::xfeatures2d::SURF::setExtended (method) cv::xfeatures2d::SURF (trait) . setExtended
// Arg ARG Primitive(bool) extended= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_SURF_setExtended_bool(void* instance, bool extended) {
    try {
        reinterpret_cast<cv::xfeatures2d::SURF*>(instance)->setExtended(extended);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::SURF::getExtended
// as:     cv::xfeatures2d::SURF::getExtended (method) cv::xfeatures2d::SURF (trait) . getExtended
// Return value: Primitive(bool)
cv_return_value_bool cv_xfeatures2d_SURF_getExtended_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::xfeatures2d::SURF*>(instance)->getExtended();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::xfeatures2d::SURF::setUpright
// as:     cv::xfeatures2d::SURF::setUpright (method) cv::xfeatures2d::SURF (trait) . setUpright
// Arg ARG Primitive(bool) upright= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_SURF_setUpright_bool(void* instance, bool upright) {
    try {
        reinterpret_cast<cv::xfeatures2d::SURF*>(instance)->setUpright(upright);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::SURF::getUpright
// as:     cv::xfeatures2d::SURF::getUpright (method) cv::xfeatures2d::SURF (trait) . getUpright
// Return value: Primitive(bool)
cv_return_value_bool cv_xfeatures2d_SURF_getUpright_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::xfeatures2d::SURF*>(instance)->getUpright();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::xfeatures2d::SURF::create
// as:     cv::xfeatures2d::SURF::create (method) cv::xfeatures2d::SURF (trait) . create
// Arg ARG Primitive(double) hessianThreshold= Primitive(double) = 100
// Arg ARG Primitive(int) nOctaves= Primitive(int) = 4
// Arg ARG Primitive(int) nOctaveLayers= Primitive(int) = 3
// Arg ARG Primitive(bool) extended= Primitive(bool) = false
// Arg ARG Primitive(bool) upright= Primitive(bool) = false
// Return value: SmartPtr[cv::xfeatures2d::SURF (boxed)]
cv_return_value_void_X cv_xfeatures2d_SURF_create_double_int_int_bool_bool(double hessianThreshold, int nOctaves, int nOctaveLayers, bool extended, bool upright) {
    try {
        Ptr<cv::xfeatures2d::SURF> ret = cv::xfeatures2d::SURF::create(hessianThreshold, nOctaves, nOctaveLayers, extended, upright);
        return { Error::Code::StsOk, NULL, new Ptr<cv::xfeatures2d::SURF>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::xfeatures2d::StarDetector
void cv_StarDetector_delete(void* instance) {
    delete reinterpret_cast<cv::xfeatures2d::StarDetector*>(instance);
}
// parsed: cv::xfeatures2d::StarDetector::create
// as:     cv::xfeatures2d::StarDetector::create (method) cv::xfeatures2d::StarDetector . create
// Arg ARG Primitive(int) maxSize= Primitive(int) = 45
// Arg ARG Primitive(int) responseThreshold= Primitive(int) = 30
// Arg ARG Primitive(int) lineThresholdProjected= Primitive(int) = 10
// Arg ARG Primitive(int) lineThresholdBinarized= Primitive(int) = 8
// Arg ARG Primitive(int) suppressNonmaxSize= Primitive(int) = 5
// Return value: SmartPtr[cv::xfeatures2d::StarDetector (boxed)]
cv_return_value_void_X cv_xfeatures2d_StarDetector_create_int_int_int_int_int(int maxSize, int responseThreshold, int lineThresholdProjected, int lineThresholdBinarized, int suppressNonmaxSize) {
    try {
        Ptr<cv::xfeatures2d::StarDetector> ret = cv::xfeatures2d::StarDetector::create(maxSize, responseThreshold, lineThresholdProjected, lineThresholdBinarized, suppressNonmaxSize);
        return { Error::Code::StsOk, NULL, new Ptr<cv::xfeatures2d::StarDetector>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::xfeatures2d::VGG::setSigma
// as:     cv::xfeatures2d::VGG::setSigma (method) cv::xfeatures2d::VGG (trait) . setSigma
// Arg ARG Primitive(float) isigma= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_VGG_setSigma_float(void* instance, float isigma) {
    try {
        reinterpret_cast<cv::xfeatures2d::VGG*>(instance)->setSigma(isigma);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::VGG::getSigma
// as:     cv::xfeatures2d::VGG::getSigma (method) cv::xfeatures2d::VGG (trait) . getSigma
// Return value: Primitive(float)
cv_return_value_float cv_xfeatures2d_VGG_getSigma_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xfeatures2d::VGG*>(instance)->getSigma();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xfeatures2d::VGG::setUseNormalizeImage
// as:     cv::xfeatures2d::VGG::setUseNormalizeImage (method) cv::xfeatures2d::VGG (trait) . setUseNormalizeImage
// Arg ARG Primitive(bool) img_normalize= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_VGG_setUseNormalizeImage_bool(void* instance, bool img_normalize) {
    try {
        reinterpret_cast<cv::xfeatures2d::VGG*>(instance)->setUseNormalizeImage(img_normalize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::VGG::getUseNormalizeImage
// as:     cv::xfeatures2d::VGG::getUseNormalizeImage (method) cv::xfeatures2d::VGG (trait) . getUseNormalizeImage
// Return value: Primitive(bool)
cv_return_value_bool cv_xfeatures2d_VGG_getUseNormalizeImage_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::xfeatures2d::VGG*>(instance)->getUseNormalizeImage();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::xfeatures2d::VGG::setUseScaleOrientation
// as:     cv::xfeatures2d::VGG::setUseScaleOrientation (method) cv::xfeatures2d::VGG (trait) . setUseScaleOrientation
// Arg ARG Primitive(bool) use_scale_orientation= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_VGG_setUseScaleOrientation_bool(void* instance, bool use_scale_orientation) {
    try {
        reinterpret_cast<cv::xfeatures2d::VGG*>(instance)->setUseScaleOrientation(use_scale_orientation);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::VGG::getUseScaleOrientation
// as:     cv::xfeatures2d::VGG::getUseScaleOrientation (method) cv::xfeatures2d::VGG (trait) . getUseScaleOrientation
// Return value: Primitive(bool)
cv_return_value_bool cv_xfeatures2d_VGG_getUseScaleOrientation_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::xfeatures2d::VGG*>(instance)->getUseScaleOrientation();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::xfeatures2d::VGG::setScaleFactor
// as:     cv::xfeatures2d::VGG::setScaleFactor (method) cv::xfeatures2d::VGG (trait) . setScaleFactor
// Arg ARG Primitive(float) scale_factor= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_VGG_setScaleFactor_float(void* instance, float scale_factor) {
    try {
        reinterpret_cast<cv::xfeatures2d::VGG*>(instance)->setScaleFactor(scale_factor);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::VGG::getScaleFactor
// as:     cv::xfeatures2d::VGG::getScaleFactor (method) cv::xfeatures2d::VGG (trait) . getScaleFactor
// Return value: Primitive(float)
cv_return_value_float cv_xfeatures2d_VGG_getScaleFactor_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::xfeatures2d::VGG*>(instance)->getScaleFactor();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::xfeatures2d::VGG::setUseNormalizeDescriptor
// as:     cv::xfeatures2d::VGG::setUseNormalizeDescriptor (method) cv::xfeatures2d::VGG (trait) . setUseNormalizeDescriptor
// Arg ARG Primitive(bool) dsc_normalize= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_xfeatures2d_VGG_setUseNormalizeDescriptor_bool(void* instance, bool dsc_normalize) {
    try {
        reinterpret_cast<cv::xfeatures2d::VGG*>(instance)->setUseNormalizeDescriptor(dsc_normalize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::xfeatures2d::VGG::getUseNormalizeDescriptor
// as:     cv::xfeatures2d::VGG::getUseNormalizeDescriptor (method) cv::xfeatures2d::VGG (trait) . getUseNormalizeDescriptor
// Return value: Primitive(bool)
cv_return_value_bool cv_xfeatures2d_VGG_getUseNormalizeDescriptor_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::xfeatures2d::VGG*>(instance)->getUseNormalizeDescriptor();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::xfeatures2d::VGG::create
// as:     cv::xfeatures2d::VGG::create (method) cv::xfeatures2d::VGG (trait) . create
// Arg ARG Primitive(int) desc= Primitive(int) = VGG::VGG_120
// Arg ARG Primitive(float) isigma= Primitive(float) = 1.4f
// Arg ARG Primitive(bool) img_normalize= Primitive(bool) = true
// Arg ARG Primitive(bool) use_scale_orientation= Primitive(bool) = true
// Arg ARG Primitive(float) scale_factor= Primitive(float) = 6.25f
// Arg ARG Primitive(bool) dsc_normalize= Primitive(bool) = false
// Return value: SmartPtr[cv::xfeatures2d::VGG (boxed)]
cv_return_value_void_X cv_xfeatures2d_VGG_create_int_float_bool_bool_float_bool(int desc, float isigma, bool img_normalize, bool use_scale_orientation, float scale_factor, bool dsc_normalize) {
    try {
        Ptr<cv::xfeatures2d::VGG> ret = cv::xfeatures2d::VGG::create(desc, isigma, img_normalize, use_scale_orientation, scale_factor, dsc_normalize);
        return { Error::Code::StsOk, NULL, new Ptr<cv::xfeatures2d::VGG>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}



} // extern "C"

