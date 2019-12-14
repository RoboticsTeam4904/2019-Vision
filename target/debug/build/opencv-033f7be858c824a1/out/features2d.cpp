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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/features2d.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/features2d/features2d.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/features2d/hal/interface.h"

extern "C" {

// parsed: cv::AGAST
// as:     cv::AGAST (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG Primitive(int) threshold= Primitive(int) = 
// Arg ARG Primitive(bool) nonmaxSuppression= Primitive(bool) = true
// Return value: Primitive(void)
cv_return_value_void cv_AGAST__InputArray_VectorOfKeyPoint_int_bool(void* image, void* keypoints, int threshold, bool nonmaxSuppression) {
    try {
        cv::AGAST(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints), threshold, nonmaxSuppression);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AGAST
// as:     cv::AGAST (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG Primitive(int) threshold= Primitive(int) = 
// Arg ARG Primitive(bool) nonmaxSuppression= Primitive(bool) = 
// Arg ARG AgastFeatureDetector::DetectorType (enum) type= AgastFeatureDetector::DetectorType (enum) = 
// Return value: Primitive(void)
cv_return_value_void cv_AGAST__InputArray_VectorOfKeyPoint_int_bool_AgastFeatureDetector_DetectorType(void* image, void* keypoints, int threshold, bool nonmaxSuppression, AgastFeatureDetector::DetectorType type) {
    try {
        cv::AGAST(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints), threshold, nonmaxSuppression, *reinterpret_cast<AgastFeatureDetector::DetectorType*>(&type));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FAST
// as:     cv::FAST (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG Primitive(int) threshold= Primitive(int) = 
// Arg ARG Primitive(bool) nonmaxSuppression= Primitive(bool) = true
// Return value: Primitive(void)
cv_return_value_void cv_FAST__InputArray_VectorOfKeyPoint_int_bool(void* image, void* keypoints, int threshold, bool nonmaxSuppression) {
    try {
        cv::FAST(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints), threshold, nonmaxSuppression);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FAST
// as:     cv::FAST (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG Primitive(int) threshold= Primitive(int) = 
// Arg ARG Primitive(bool) nonmaxSuppression= Primitive(bool) = 
// Arg ARG FastFeatureDetector::DetectorType (enum) type= FastFeatureDetector::DetectorType (enum) = 
// Return value: Primitive(void)
cv_return_value_void cv_FAST__InputArray_VectorOfKeyPoint_int_bool_FastFeatureDetector_DetectorType(void* image, void* keypoints, int threshold, bool nonmaxSuppression, FastFeatureDetector::DetectorType type) {
    try {
        cv::FAST(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints), threshold, nonmaxSuppression, *reinterpret_cast<FastFeatureDetector::DetectorType*>(&type));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::computeRecallPrecisionCurve
// as:     cv::computeRecallPrecisionCurve (function)
// Arg ARG Vector[Vector[cv::DMatch (simple)]] matches1to2= Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG Vector[Vector[Primitive(uchar)]] correctMatches1to2Mask= Vector[Vector[Primitive(uchar)]] = 
// Arg ARG Vector[cv::Point2f (simple)] recallPrecisionCurve= Vector[cv::Point2f (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_computeRecallPrecisionCurve_VectorOfVectorOfDMatch_VectorOfVectorOfuchar_VectorOfPoint2f(void* matches1to2, void* correctMatches1to2Mask, void* recallPrecisionCurve) {
    try {
        cv::computeRecallPrecisionCurve(*reinterpret_cast<const std::vector<std::vector<cv::DMatch>>*>(matches1to2), *reinterpret_cast<const std::vector<std::vector<uchar>>*>(correctMatches1to2Mask), *reinterpret_cast<std::vector<cv::Point2f>*>(recallPrecisionCurve));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::drawKeypoints
// as:     cv::drawKeypoints (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::_InputOutputArray (boxed) outImage= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Scalar (simple) color= cv::Scalar (simple) = Scalar::all(-1)
// Arg ARG DrawMatchesFlags (enum) flags= DrawMatchesFlags (enum) = DrawMatchesFlags::DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_drawKeypoints__InputArray_VectorOfKeyPoint__InputOutputArray_Scalar_DrawMatchesFlags(void* image, void* keypoints, void* outImage, ScalarWrapper color, DrawMatchesFlags flags) {
    try {
        cv::drawKeypoints(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<const std::vector<cv::KeyPoint>*>(keypoints), *reinterpret_cast<cv::_InputOutputArray*>(outImage), *reinterpret_cast<const cv::Scalar*>(&color), *reinterpret_cast<DrawMatchesFlags*>(&flags));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::drawMatches
// as:     cv::drawMatches (function)
// Arg ARG cv::_InputArray (boxed) img1= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints1= Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::_InputArray (boxed) img2= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints2= Vector[cv::KeyPoint (simple)] = 
// Arg ARG Vector[cv::DMatch (simple)] matches1to2= Vector[cv::DMatch (simple)] = 
// Arg ARG cv::_InputOutputArray (boxed) outImg= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Scalar (simple) matchColor= cv::Scalar (simple) = Scalar::all(-1)
// Arg ARG cv::Scalar (simple) singlePointColor= cv::Scalar (simple) = Scalar::all(-1)
// Arg ARG Vector[Primitive(char)] matchesMask= Vector[Primitive(char)] = std::vector<char>()
// Arg ARG DrawMatchesFlags (enum) flags= DrawMatchesFlags (enum) = DrawMatchesFlags::DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_drawMatches__InputArray_VectorOfKeyPoint__InputArray_VectorOfKeyPoint_VectorOfDMatch__InputOutputArray_Scalar_Scalar_VectorOfchar_DrawMatchesFlags(void* img1, void* keypoints1, void* img2, void* keypoints2, void* matches1to2, void* outImg, ScalarWrapper matchColor, ScalarWrapper singlePointColor, void* matchesMask, DrawMatchesFlags flags) {
    try {
        cv::drawMatches(*reinterpret_cast<const cv::_InputArray*>(img1), *reinterpret_cast<const std::vector<cv::KeyPoint>*>(keypoints1), *reinterpret_cast<const cv::_InputArray*>(img2), *reinterpret_cast<const std::vector<cv::KeyPoint>*>(keypoints2), *reinterpret_cast<const std::vector<cv::DMatch>*>(matches1to2), *reinterpret_cast<cv::_InputOutputArray*>(outImg), *reinterpret_cast<const cv::Scalar*>(&matchColor), *reinterpret_cast<const cv::Scalar*>(&singlePointColor), *reinterpret_cast<const std::vector<char>*>(matchesMask), *reinterpret_cast<DrawMatchesFlags*>(&flags));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::drawMatches
// as:     cv::drawMatches (function)
// Arg ARG cv::_InputArray (boxed) img1= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints1= Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::_InputArray (boxed) img2= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints2= Vector[cv::KeyPoint (simple)] = 
// Arg ARG Vector[Vector[cv::DMatch (simple)]] matches1to2= Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG cv::_InputOutputArray (boxed) outImg= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Scalar (simple) matchColor= cv::Scalar (simple) = Scalar::all(-1)
// Arg ARG cv::Scalar (simple) singlePointColor= cv::Scalar (simple) = Scalar::all(-1)
// Arg ARG Vector[Vector[Primitive(char)]] matchesMask= Vector[Vector[Primitive(char)]] = std::vector<std::vector<char> >()
// Arg ARG DrawMatchesFlags (enum) flags= DrawMatchesFlags (enum) = DrawMatchesFlags::DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_drawMatches__InputArray_VectorOfKeyPoint__InputArray_VectorOfKeyPoint_VectorOfVectorOfDMatch__InputOutputArray_Scalar_Scalar_VectorOfVectorOfchar_DrawMatchesFlags(void* img1, void* keypoints1, void* img2, void* keypoints2, void* matches1to2, void* outImg, ScalarWrapper matchColor, ScalarWrapper singlePointColor, void* matchesMask, DrawMatchesFlags flags) {
    try {
        cv::drawMatches(*reinterpret_cast<const cv::_InputArray*>(img1), *reinterpret_cast<const std::vector<cv::KeyPoint>*>(keypoints1), *reinterpret_cast<const cv::_InputArray*>(img2), *reinterpret_cast<const std::vector<cv::KeyPoint>*>(keypoints2), *reinterpret_cast<const std::vector<std::vector<cv::DMatch>>*>(matches1to2), *reinterpret_cast<cv::_InputOutputArray*>(outImg), *reinterpret_cast<const cv::Scalar*>(&matchColor), *reinterpret_cast<const cv::Scalar*>(&singlePointColor), *reinterpret_cast<const std::vector<std::vector<char>>*>(matchesMask), *reinterpret_cast<DrawMatchesFlags*>(&flags));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::evaluateFeatureDetector
// as:     cv::evaluateFeatureDetector (function)
// Arg ARG cv::Mat (boxed) img1= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) img2= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) H1to2= cv::Mat (boxed) = 
// Arg ARG RawPtr[Vector[cv::KeyPoint (simple)]] * keypoints1= (ptr) RawPtr[Vector[cv::KeyPoint (simple)]] = 
// Arg ARG RawPtr[Vector[cv::KeyPoint (simple)]] * keypoints2= (ptr) RawPtr[Vector[cv::KeyPoint (simple)]] = 
// Arg ARG Primitive(float) repeatability= Primitive(float) = 
// Arg ARG Primitive(int) correspCount= Primitive(int) = 
// Arg ARG SmartPtr[cv::Feature2D (boxed)] fdetector= SmartPtr[cv::Feature2D (boxed)] = Ptr<FeatureDetector>()
// Return value: Primitive(void)
cv_return_value_void cv_evaluateFeatureDetector_Mat_Mat_Mat_VectorOfKeyPoint_VectorOfKeyPoint_float_int_PtrOfFeature2D(void* img1, void* img2, void* H1to2, void* keypoints1, void* keypoints2, float& repeatability, int& correspCount, void* fdetector) {
    try {
        cv::evaluateFeatureDetector(*reinterpret_cast<const cv::Mat*>(img1), *reinterpret_cast<const cv::Mat*>(img2), *reinterpret_cast<const cv::Mat*>(H1to2), reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints1), reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints2), repeatability, correspCount, *reinterpret_cast<const Ptr<cv::Feature2D>*>(fdetector));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::getNearestPoint
// as:     cv::getNearestPoint (function)
// Arg ARG Vector[cv::Point2f (simple)] recallPrecisionCurve= Vector[cv::Point2f (simple)] = 
// Arg ARG Primitive(float) l_precision= Primitive(float) = 
// Return value: Primitive(int)
cv_return_value_int cv_getNearestPoint_VectorOfPoint2f_float(void* recallPrecisionCurve, float l_precision) {
    try {
        int ret = cv::getNearestPoint(*reinterpret_cast<const std::vector<cv::Point2f>*>(recallPrecisionCurve), l_precision);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::getRecall
// as:     cv::getRecall (function)
// Arg ARG Vector[cv::Point2f (simple)] recallPrecisionCurve= Vector[cv::Point2f (simple)] = 
// Arg ARG Primitive(float) l_precision= Primitive(float) = 
// Return value: Primitive(float)
cv_return_value_float cv_getRecall_VectorOfPoint2f_float(void* recallPrecisionCurve, float l_precision) {
    try {
        float ret = cv::getRecall(*reinterpret_cast<const std::vector<cv::Point2f>*>(recallPrecisionCurve), l_precision);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::AKAZE::setDescriptorType
// as:     cv::AKAZE::setDescriptorType (method) cv::AKAZE (trait) . setDescriptorType
// Arg ARG AKAZE::DescriptorType (enum) dtype= AKAZE::DescriptorType (enum) = 
// Return value: Primitive(void)
cv_return_value_void cv_AKAZE_setDescriptorType_AKAZE_DescriptorType(void* instance, AKAZE::DescriptorType dtype) {
    try {
        reinterpret_cast<cv::AKAZE*>(instance)->setDescriptorType(*reinterpret_cast<AKAZE::DescriptorType*>(&dtype));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AKAZE::getDescriptorType
// as:     cv::AKAZE::getDescriptorType (method) cv::AKAZE (trait) . getDescriptorType
// Return value: AKAZE::DescriptorType (enum)
cv_return_value_AKAZE_DescriptorType cv_AKAZE_getDescriptorType_const(void* instance) {
    try {
        AKAZE::DescriptorType ret = reinterpret_cast<cv::AKAZE*>(instance)->getDescriptorType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_AKAZE_DescriptorType)
}

// parsed: cv::AKAZE::setDescriptorSize
// as:     cv::AKAZE::setDescriptorSize (method) cv::AKAZE (trait) . setDescriptorSize
// Arg ARG Primitive(int) dsize= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_AKAZE_setDescriptorSize_int(void* instance, int dsize) {
    try {
        reinterpret_cast<cv::AKAZE*>(instance)->setDescriptorSize(dsize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AKAZE::getDescriptorSize
// as:     cv::AKAZE::getDescriptorSize (method) cv::AKAZE (trait) . getDescriptorSize
// Return value: Primitive(int)
cv_return_value_int cv_AKAZE_getDescriptorSize_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::AKAZE*>(instance)->getDescriptorSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::AKAZE::setDescriptorChannels
// as:     cv::AKAZE::setDescriptorChannels (method) cv::AKAZE (trait) . setDescriptorChannels
// Arg ARG Primitive(int) dch= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_AKAZE_setDescriptorChannels_int(void* instance, int dch) {
    try {
        reinterpret_cast<cv::AKAZE*>(instance)->setDescriptorChannels(dch);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AKAZE::getDescriptorChannels
// as:     cv::AKAZE::getDescriptorChannels (method) cv::AKAZE (trait) . getDescriptorChannels
// Return value: Primitive(int)
cv_return_value_int cv_AKAZE_getDescriptorChannels_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::AKAZE*>(instance)->getDescriptorChannels();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::AKAZE::setThreshold
// as:     cv::AKAZE::setThreshold (method) cv::AKAZE (trait) . setThreshold
// Arg ARG Primitive(double) threshold= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_AKAZE_setThreshold_double(void* instance, double threshold) {
    try {
        reinterpret_cast<cv::AKAZE*>(instance)->setThreshold(threshold);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AKAZE::getThreshold
// as:     cv::AKAZE::getThreshold (method) cv::AKAZE (trait) . getThreshold
// Return value: Primitive(double)
cv_return_value_double cv_AKAZE_getThreshold_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::AKAZE*>(instance)->getThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::AKAZE::setNOctaves
// as:     cv::AKAZE::setNOctaves (method) cv::AKAZE (trait) . setNOctaves
// Arg ARG Primitive(int) octaves= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_AKAZE_setNOctaves_int(void* instance, int octaves) {
    try {
        reinterpret_cast<cv::AKAZE*>(instance)->setNOctaves(octaves);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AKAZE::getNOctaves
// as:     cv::AKAZE::getNOctaves (method) cv::AKAZE (trait) . getNOctaves
// Return value: Primitive(int)
cv_return_value_int cv_AKAZE_getNOctaves_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::AKAZE*>(instance)->getNOctaves();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::AKAZE::setNOctaveLayers
// as:     cv::AKAZE::setNOctaveLayers (method) cv::AKAZE (trait) . setNOctaveLayers
// Arg ARG Primitive(int) octaveLayers= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_AKAZE_setNOctaveLayers_int(void* instance, int octaveLayers) {
    try {
        reinterpret_cast<cv::AKAZE*>(instance)->setNOctaveLayers(octaveLayers);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AKAZE::getNOctaveLayers
// as:     cv::AKAZE::getNOctaveLayers (method) cv::AKAZE (trait) . getNOctaveLayers
// Return value: Primitive(int)
cv_return_value_int cv_AKAZE_getNOctaveLayers_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::AKAZE*>(instance)->getNOctaveLayers();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::AKAZE::setDiffusivity
// as:     cv::AKAZE::setDiffusivity (method) cv::AKAZE (trait) . setDiffusivity
// Arg ARG KAZE::DiffusivityType (enum) diff= KAZE::DiffusivityType (enum) = 
// Return value: Primitive(void)
cv_return_value_void cv_AKAZE_setDiffusivity_KAZE_DiffusivityType(void* instance, KAZE::DiffusivityType diff) {
    try {
        reinterpret_cast<cv::AKAZE*>(instance)->setDiffusivity(*reinterpret_cast<KAZE::DiffusivityType*>(&diff));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AKAZE::getDiffusivity
// as:     cv::AKAZE::getDiffusivity (method) cv::AKAZE (trait) . getDiffusivity
// Return value: KAZE::DiffusivityType (enum)
cv_return_value_KAZE_DiffusivityType cv_AKAZE_getDiffusivity_const(void* instance) {
    try {
        KAZE::DiffusivityType ret = reinterpret_cast<cv::AKAZE*>(instance)->getDiffusivity();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_KAZE_DiffusivityType)
}

// parsed: cv::AKAZE::getDefaultName
// as:     cv::AKAZE::getDefaultName (method) cv::AKAZE (trait) . getDefaultName
// Return value: string
cv_return_value_char_X cv_AKAZE_getDefaultName_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::AKAZE*>(instance)->getDefaultName();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::AKAZE::create
// as:     cv::AKAZE::create (method) cv::AKAZE (trait) . create
// Arg ARG AKAZE::DescriptorType (enum) descriptor_type= AKAZE::DescriptorType (enum) = AKAZE::DESCRIPTOR_MLDB
// Arg ARG Primitive(int) descriptor_size= Primitive(int) = 0
// Arg ARG Primitive(int) descriptor_channels= Primitive(int) = 3
// Arg ARG Primitive(float) threshold= Primitive(float) = 0.001f
// Arg ARG Primitive(int) nOctaves= Primitive(int) = 4
// Arg ARG Primitive(int) nOctaveLayers= Primitive(int) = 4
// Arg ARG KAZE::DiffusivityType (enum) diffusivity= KAZE::DiffusivityType (enum) = KAZE::DIFF_PM_G2
// Return value: SmartPtr[cv::AKAZE (boxed)]
cv_return_value_void_X cv_AKAZE_create_AKAZE_DescriptorType_int_int_float_int_int_KAZE_DiffusivityType(AKAZE::DescriptorType descriptor_type, int descriptor_size, int descriptor_channels, float threshold, int nOctaves, int nOctaveLayers, KAZE::DiffusivityType diffusivity) {
    try {
        Ptr<cv::AKAZE> ret = cv::AKAZE::create(*reinterpret_cast<AKAZE::DescriptorType*>(&descriptor_type), descriptor_size, descriptor_channels, threshold, nOctaves, nOctaveLayers, *reinterpret_cast<KAZE::DiffusivityType*>(&diffusivity));
        return { Error::Code::StsOk, NULL, new Ptr<cv::AKAZE>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::AgastFeatureDetector::setThreshold
// as:     cv::AgastFeatureDetector::setThreshold (method) cv::AgastFeatureDetector (trait) . setThreshold
// Arg ARG Primitive(int) threshold= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_AgastFeatureDetector_setThreshold_int(void* instance, int threshold) {
    try {
        reinterpret_cast<cv::AgastFeatureDetector*>(instance)->setThreshold(threshold);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AgastFeatureDetector::getThreshold
// as:     cv::AgastFeatureDetector::getThreshold (method) cv::AgastFeatureDetector (trait) . getThreshold
// Return value: Primitive(int)
cv_return_value_int cv_AgastFeatureDetector_getThreshold_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::AgastFeatureDetector*>(instance)->getThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::AgastFeatureDetector::setNonmaxSuppression
// as:     cv::AgastFeatureDetector::setNonmaxSuppression (method) cv::AgastFeatureDetector (trait) . setNonmaxSuppression
// Arg ARG Primitive(bool) f= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_AgastFeatureDetector_setNonmaxSuppression_bool(void* instance, bool f) {
    try {
        reinterpret_cast<cv::AgastFeatureDetector*>(instance)->setNonmaxSuppression(f);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AgastFeatureDetector::getNonmaxSuppression
// as:     cv::AgastFeatureDetector::getNonmaxSuppression (method) cv::AgastFeatureDetector (trait) . getNonmaxSuppression
// Return value: Primitive(bool)
cv_return_value_bool cv_AgastFeatureDetector_getNonmaxSuppression_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::AgastFeatureDetector*>(instance)->getNonmaxSuppression();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::AgastFeatureDetector::setType
// as:     cv::AgastFeatureDetector::setType (method) cv::AgastFeatureDetector (trait) . setType
// Arg ARG AgastFeatureDetector::DetectorType (enum) type= AgastFeatureDetector::DetectorType (enum) = 
// Return value: Primitive(void)
cv_return_value_void cv_AgastFeatureDetector_setType_AgastFeatureDetector_DetectorType(void* instance, AgastFeatureDetector::DetectorType type) {
    try {
        reinterpret_cast<cv::AgastFeatureDetector*>(instance)->setType(*reinterpret_cast<AgastFeatureDetector::DetectorType*>(&type));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AgastFeatureDetector::getType
// as:     cv::AgastFeatureDetector::getType (method) cv::AgastFeatureDetector (trait) . getType
// Return value: AgastFeatureDetector::DetectorType (enum)
cv_return_value_AgastFeatureDetector_DetectorType cv_AgastFeatureDetector_getType_const(void* instance) {
    try {
        AgastFeatureDetector::DetectorType ret = reinterpret_cast<cv::AgastFeatureDetector*>(instance)->getType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_AgastFeatureDetector_DetectorType)
}

// parsed: cv::AgastFeatureDetector::getDefaultName
// as:     cv::AgastFeatureDetector::getDefaultName (method) cv::AgastFeatureDetector (trait) . getDefaultName
// Return value: string
cv_return_value_char_X cv_AgastFeatureDetector_getDefaultName_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::AgastFeatureDetector*>(instance)->getDefaultName();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::AgastFeatureDetector::create
// as:     cv::AgastFeatureDetector::create (method) cv::AgastFeatureDetector (trait) . create
// Arg ARG Primitive(int) threshold= Primitive(int) = 10
// Arg ARG Primitive(bool) nonmaxSuppression= Primitive(bool) = true
// Arg ARG AgastFeatureDetector::DetectorType (enum) type= AgastFeatureDetector::DetectorType (enum) = AgastFeatureDetector::OAST_9_16
// Return value: SmartPtr[cv::AgastFeatureDetector (boxed)]
cv_return_value_void_X cv_AgastFeatureDetector_create_int_bool_AgastFeatureDetector_DetectorType(int threshold, bool nonmaxSuppression, AgastFeatureDetector::DetectorType type) {
    try {
        Ptr<cv::AgastFeatureDetector> ret = cv::AgastFeatureDetector::create(threshold, nonmaxSuppression, *reinterpret_cast<AgastFeatureDetector::DetectorType*>(&type));
        return { Error::Code::StsOk, NULL, new Ptr<cv::AgastFeatureDetector>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::BFMatcher
void cv_BFMatcher_delete(void* instance) {
    delete reinterpret_cast<cv::BFMatcher*>(instance);
}
// parsed: cv::BFMatcher::BFMatcher
// as:     cv::BFMatcher::BFMatcher (constructor) cv::BFMatcher . new
// Arg ARG Primitive(int) normType= Primitive(int) = NORM_L2
// Arg ARG Primitive(bool) crossCheck= Primitive(bool) = false
// Return value: cv::BFMatcher (boxed)
cv_return_value_void_X cv_BFMatcher_BFMatcher_int_bool(int normType, bool crossCheck) {
    try {
        cv::BFMatcher* ret = new cv::BFMatcher(normType, crossCheck);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::BFMatcher::isMaskSupported
// as:     cv::BFMatcher::isMaskSupported (method) cv::BFMatcher . isMaskSupported
// Return value: Primitive(bool)
cv_return_value_bool cv_BFMatcher_isMaskSupported_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::BFMatcher*>(instance)->isMaskSupported();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::BFMatcher::create
// as:     cv::BFMatcher::create (method) cv::BFMatcher . create
// Arg ARG Primitive(int) normType= Primitive(int) = NORM_L2
// Arg ARG Primitive(bool) crossCheck= Primitive(bool) = false
// Return value: SmartPtr[cv::BFMatcher (boxed)]
cv_return_value_void_X cv_BFMatcher_create_int_bool(int normType, bool crossCheck) {
    try {
        Ptr<cv::BFMatcher> ret = cv::BFMatcher::create(normType, crossCheck);
        return { Error::Code::StsOk, NULL, new Ptr<cv::BFMatcher>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::BFMatcher::clone
// as:     cv::BFMatcher::clone (method) cv::BFMatcher . clone
// Arg ARG Primitive(bool) emptyTrainData= Primitive(bool) = false
// Return value: SmartPtr[cv::DescriptorMatcher (boxed)]
cv_return_value_void_X cv_BFMatcher_clone_const_bool(void* instance, bool emptyTrainData) {
    try {
        Ptr<cv::DescriptorMatcher> ret = reinterpret_cast<cv::BFMatcher*>(instance)->clone(emptyTrainData);
        return { Error::Code::StsOk, NULL, new Ptr<cv::DescriptorMatcher>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::BOWImgDescriptorExtractor
void cv_BOWImgDescriptorExtractor_delete(void* instance) {
    delete reinterpret_cast<cv::BOWImgDescriptorExtractor*>(instance);
}
// parsed: cv::BOWImgDescriptorExtractor::BOWImgDescriptorExtractor
// as:     cv::BOWImgDescriptorExtractor::BOWImgDescriptorExtractor (constructor) cv::BOWImgDescriptorExtractor . new
// Arg ARG SmartPtr[cv::Feature2D (boxed)] dextractor= SmartPtr[cv::Feature2D (boxed)] = 
// Arg ARG SmartPtr[cv::DescriptorMatcher (boxed)] dmatcher= SmartPtr[cv::DescriptorMatcher (boxed)] = 
// Return value: cv::BOWImgDescriptorExtractor (boxed)
cv_return_value_void_X cv_BOWImgDescriptorExtractor_BOWImgDescriptorExtractor_PtrOfFeature2D_PtrOfDescriptorMatcher(void* dextractor, void* dmatcher) {
    try {
        cv::BOWImgDescriptorExtractor* ret = new cv::BOWImgDescriptorExtractor(*reinterpret_cast<const Ptr<cv::Feature2D>*>(dextractor), *reinterpret_cast<const Ptr<cv::DescriptorMatcher>*>(dmatcher));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::BOWImgDescriptorExtractor::BOWImgDescriptorExtractor
// as:     cv::BOWImgDescriptorExtractor::BOWImgDescriptorExtractor (constructor) cv::BOWImgDescriptorExtractor . new
// Arg ARG SmartPtr[cv::DescriptorMatcher (boxed)] dmatcher= SmartPtr[cv::DescriptorMatcher (boxed)] = 
// Return value: cv::BOWImgDescriptorExtractor (boxed)
cv_return_value_void_X cv_BOWImgDescriptorExtractor_BOWImgDescriptorExtractor_PtrOfDescriptorMatcher(void* dmatcher) {
    try {
        cv::BOWImgDescriptorExtractor* ret = new cv::BOWImgDescriptorExtractor(*reinterpret_cast<const Ptr<cv::DescriptorMatcher>*>(dmatcher));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::BOWImgDescriptorExtractor::setVocabulary
// as:     cv::BOWImgDescriptorExtractor::setVocabulary (method) cv::BOWImgDescriptorExtractor . setVocabulary
// Arg ARG cv::Mat (boxed) vocabulary= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_BOWImgDescriptorExtractor_setVocabulary_Mat(void* instance, void* vocabulary) {
    try {
        reinterpret_cast<cv::BOWImgDescriptorExtractor*>(instance)->setVocabulary(*reinterpret_cast<const cv::Mat*>(vocabulary));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BOWImgDescriptorExtractor::getVocabulary
// as:     cv::BOWImgDescriptorExtractor::getVocabulary (method) cv::BOWImgDescriptorExtractor . getVocabulary
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_BOWImgDescriptorExtractor_getVocabulary_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::BOWImgDescriptorExtractor*>(instance)->getVocabulary();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::BOWImgDescriptorExtractor::compute
// as:     cv::BOWImgDescriptorExtractor::compute (method) cv::BOWImgDescriptorExtractor . compute
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::_OutputArray (boxed) imgDescriptor= cv::_OutputArray (boxed) = 
// Arg ARG RawPtr[Vector[Vector[Primitive(int)]]] * pointIdxsOfClusters= (ptr) RawPtr[Vector[Vector[Primitive(int)]]] = 0
// Arg ARG RawPtr[cv::Mat (boxed)] * descriptors= (ptr) RawPtr[cv::Mat (boxed)] = 0
// Return value: Primitive(void)
cv_return_value_void cv_BOWImgDescriptorExtractor_compute__InputArray_VectorOfKeyPoint__OutputArray_VectorOfVectorOfint_Mat(void* instance, void* image, void* keypoints, void* imgDescriptor, void* pointIdxsOfClusters, void* descriptors) {
    try {
        reinterpret_cast<cv::BOWImgDescriptorExtractor*>(instance)->compute(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints), *reinterpret_cast<cv::_OutputArray*>(imgDescriptor), reinterpret_cast<std::vector<std::vector<int>>*>(pointIdxsOfClusters), reinterpret_cast<cv::Mat*>(descriptors));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BOWImgDescriptorExtractor::compute
// as:     cv::BOWImgDescriptorExtractor::compute (method) cv::BOWImgDescriptorExtractor . compute
// Arg ARG cv::_InputArray (boxed) keypointDescriptors= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) imgDescriptor= cv::_OutputArray (boxed) = 
// Arg ARG RawPtr[Vector[Vector[Primitive(int)]]] * pointIdxsOfClusters= (ptr) RawPtr[Vector[Vector[Primitive(int)]]] = 0
// Return value: Primitive(void)
cv_return_value_void cv_BOWImgDescriptorExtractor_compute__InputArray__OutputArray_VectorOfVectorOfint(void* instance, void* keypointDescriptors, void* imgDescriptor, void* pointIdxsOfClusters) {
    try {
        reinterpret_cast<cv::BOWImgDescriptorExtractor*>(instance)->compute(*reinterpret_cast<const cv::_InputArray*>(keypointDescriptors), *reinterpret_cast<cv::_OutputArray*>(imgDescriptor), reinterpret_cast<std::vector<std::vector<int>>*>(pointIdxsOfClusters));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BOWImgDescriptorExtractor::compute2
// as:     cv::BOWImgDescriptorExtractor::compute2 (method) cv::BOWImgDescriptorExtractor . compute2
// Arg ARG cv::Mat (boxed) image= cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::Mat (boxed) imgDescriptor= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_BOWImgDescriptorExtractor_compute2_Mat_VectorOfKeyPoint_Mat(void* instance, void* image, void* keypoints, void* imgDescriptor) {
    try {
        reinterpret_cast<cv::BOWImgDescriptorExtractor*>(instance)->compute2(*reinterpret_cast<const cv::Mat*>(image), *reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints), *reinterpret_cast<cv::Mat*>(imgDescriptor));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BOWImgDescriptorExtractor::descriptorSize
// as:     cv::BOWImgDescriptorExtractor::descriptorSize (method) cv::BOWImgDescriptorExtractor . descriptorSize
// Return value: Primitive(int)
cv_return_value_int cv_BOWImgDescriptorExtractor_descriptorSize_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::BOWImgDescriptorExtractor*>(instance)->descriptorSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::BOWImgDescriptorExtractor::descriptorType
// as:     cv::BOWImgDescriptorExtractor::descriptorType (method) cv::BOWImgDescriptorExtractor . descriptorType
// Return value: Primitive(int)
cv_return_value_int cv_BOWImgDescriptorExtractor_descriptorType_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::BOWImgDescriptorExtractor*>(instance)->descriptorType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// boxed class: cv::BOWKMeansTrainer
void cv_BOWKMeansTrainer_delete(void* instance) {
    delete reinterpret_cast<cv::BOWKMeansTrainer*>(instance);
}
// parsed: cv::BOWKMeansTrainer::BOWKMeansTrainer
// as:     cv::BOWKMeansTrainer::BOWKMeansTrainer (constructor) cv::BOWKMeansTrainer . new
// Arg ARG Primitive(int) clusterCount= Primitive(int) = 
// Arg ARG cv::TermCriteria (boxed) termcrit= cv::TermCriteria (boxed) = TermCriteria()
// Arg ARG Primitive(int) attempts= Primitive(int) = 3
// Arg ARG Primitive(int) flags= Primitive(int) = KMEANS_PP_CENTERS
// Return value: cv::BOWKMeansTrainer (boxed)
cv_return_value_void_X cv_BOWKMeansTrainer_BOWKMeansTrainer_int_TermCriteria_int_int(int clusterCount, void* termcrit, int attempts, int flags) {
    try {
        cv::BOWKMeansTrainer* ret = new cv::BOWKMeansTrainer(clusterCount, *reinterpret_cast<const cv::TermCriteria*>(termcrit), attempts, flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::BOWKMeansTrainer::cluster
// as:     cv::BOWKMeansTrainer::cluster (method) cv::BOWKMeansTrainer . cluster
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_BOWKMeansTrainer_cluster_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::BOWKMeansTrainer*>(instance)->cluster();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::BOWKMeansTrainer::cluster
// as:     cv::BOWKMeansTrainer::cluster (method) cv::BOWKMeansTrainer . cluster
// Arg ARG cv::Mat (boxed) descriptors= cv::Mat (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_BOWKMeansTrainer_cluster_const_Mat(void* instance, void* descriptors) {
    try {
        cv::Mat ret = reinterpret_cast<cv::BOWKMeansTrainer*>(instance)->cluster(*reinterpret_cast<const cv::Mat*>(descriptors));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::BOWTrainer::add
// as:     cv::BOWTrainer::add (method) cv::BOWTrainer (trait) . add
// Arg ARG cv::Mat (boxed) descriptors= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_BOWTrainer_add_Mat(void* instance, void* descriptors) {
    try {
        reinterpret_cast<cv::BOWTrainer*>(instance)->add(*reinterpret_cast<const cv::Mat*>(descriptors));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BOWTrainer::getDescriptors
// as:     cv::BOWTrainer::getDescriptors (method) cv::BOWTrainer (trait) . getDescriptors
// Return value: Vector[cv::Mat (boxed)]
cv_return_value_void_X cv_BOWTrainer_getDescriptors_const(void* instance) {
    try {
        std::vector<cv::Mat> ret = reinterpret_cast<cv::BOWTrainer*>(instance)->getDescriptors();
        return { Error::Code::StsOk, NULL, new std::vector<cv::Mat>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::BOWTrainer::descriptorsCount
// as:     cv::BOWTrainer::descriptorsCount (method) cv::BOWTrainer (trait) . descriptorsCount
// Return value: Primitive(int)
cv_return_value_int cv_BOWTrainer_descriptorsCount_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::BOWTrainer*>(instance)->descriptorsCount();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::BOWTrainer::clear
// as:     cv::BOWTrainer::clear (method) cv::BOWTrainer (trait) . clear
// Return value: Primitive(void)
cv_return_value_void cv_BOWTrainer_clear(void* instance) {
    try {
        reinterpret_cast<cv::BOWTrainer*>(instance)->clear();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BOWTrainer::cluster
// as:     cv::BOWTrainer::cluster (method) cv::BOWTrainer (trait) . cluster
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_BOWTrainer_cluster_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::BOWTrainer*>(instance)->cluster();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::BOWTrainer::cluster
// as:     cv::BOWTrainer::cluster (method) cv::BOWTrainer (trait) . cluster
// Arg ARG cv::Mat (boxed) descriptors= cv::Mat (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_BOWTrainer_cluster_const_Mat(void* instance, void* descriptors) {
    try {
        cv::Mat ret = reinterpret_cast<cv::BOWTrainer*>(instance)->cluster(*reinterpret_cast<const cv::Mat*>(descriptors));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::BRISK
void cv_BRISK_delete(void* instance) {
    delete reinterpret_cast<cv::BRISK*>(instance);
}
// parsed: cv::BRISK::create
// as:     cv::BRISK::create (method) cv::BRISK . create
// Arg ARG Primitive(int) thresh= Primitive(int) = 30
// Arg ARG Primitive(int) octaves= Primitive(int) = 3
// Arg ARG Primitive(float) patternScale= Primitive(float) = 1.0f
// Return value: SmartPtr[cv::BRISK (boxed)]
cv_return_value_void_X cv_BRISK_create_int_int_float(int thresh, int octaves, float patternScale) {
    try {
        Ptr<cv::BRISK> ret = cv::BRISK::create(thresh, octaves, patternScale);
        return { Error::Code::StsOk, NULL, new Ptr<cv::BRISK>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::BRISK::create
// as:     cv::BRISK::create (method) cv::BRISK . create
// Arg ARG Vector[Primitive(float)] radiusList= Vector[Primitive(float)] = 
// Arg ARG Vector[Primitive(int)] numberList= Vector[Primitive(int)] = 
// Arg ARG Primitive(float) dMax= Primitive(float) = 5.85f
// Arg ARG Primitive(float) dMin= Primitive(float) = 8.2f
// Arg ARG Vector[Primitive(int)] indexChange= Vector[Primitive(int)] = std::vector<int>()
// Return value: SmartPtr[cv::BRISK (boxed)]
cv_return_value_void_X cv_BRISK_create_VectorOffloat_VectorOfint_float_float_VectorOfint(void* radiusList, void* numberList, float dMax, float dMin, void* indexChange) {
    try {
        Ptr<cv::BRISK> ret = cv::BRISK::create(*reinterpret_cast<const std::vector<float>*>(radiusList), *reinterpret_cast<const std::vector<int>*>(numberList), dMax, dMin, *reinterpret_cast<const std::vector<int>*>(indexChange));
        return { Error::Code::StsOk, NULL, new Ptr<cv::BRISK>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::BRISK::create
// as:     cv::BRISK::create (method) cv::BRISK . create
// Arg ARG Primitive(int) thresh= Primitive(int) = 
// Arg ARG Primitive(int) octaves= Primitive(int) = 
// Arg ARG Vector[Primitive(float)] radiusList= Vector[Primitive(float)] = 
// Arg ARG Vector[Primitive(int)] numberList= Vector[Primitive(int)] = 
// Arg ARG Primitive(float) dMax= Primitive(float) = 5.85f
// Arg ARG Primitive(float) dMin= Primitive(float) = 8.2f
// Arg ARG Vector[Primitive(int)] indexChange= Vector[Primitive(int)] = std::vector<int>()
// Return value: SmartPtr[cv::BRISK (boxed)]
cv_return_value_void_X cv_BRISK_create_int_int_VectorOffloat_VectorOfint_float_float_VectorOfint(int thresh, int octaves, void* radiusList, void* numberList, float dMax, float dMin, void* indexChange) {
    try {
        Ptr<cv::BRISK> ret = cv::BRISK::create(thresh, octaves, *reinterpret_cast<const std::vector<float>*>(radiusList), *reinterpret_cast<const std::vector<int>*>(numberList), dMax, dMin, *reinterpret_cast<const std::vector<int>*>(indexChange));
        return { Error::Code::StsOk, NULL, new Ptr<cv::BRISK>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::BRISK::getDefaultName
// as:     cv::BRISK::getDefaultName (method) cv::BRISK . getDefaultName
// Return value: string
cv_return_value_char_X cv_BRISK_getDefaultName_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::BRISK*>(instance)->getDefaultName();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::BRISK::setThreshold
// as:     cv::BRISK::setThreshold (method) cv::BRISK . setThreshold
// Arg ARG Primitive(int) threshold= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_BRISK_setThreshold_int(void* instance, int threshold) {
    try {
        reinterpret_cast<cv::BRISK*>(instance)->setThreshold(threshold);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BRISK::getThreshold
// as:     cv::BRISK::getThreshold (method) cv::BRISK . getThreshold
// Return value: Primitive(int)
cv_return_value_int cv_BRISK_getThreshold_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::BRISK*>(instance)->getThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::BRISK::setOctaves
// as:     cv::BRISK::setOctaves (method) cv::BRISK . setOctaves
// Arg ARG Primitive(int) octaves= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_BRISK_setOctaves_int(void* instance, int octaves) {
    try {
        reinterpret_cast<cv::BRISK*>(instance)->setOctaves(octaves);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BRISK::getOctaves
// as:     cv::BRISK::getOctaves (method) cv::BRISK . getOctaves
// Return value: Primitive(int)
cv_return_value_int cv_BRISK_getOctaves_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::BRISK*>(instance)->getOctaves();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::DescriptorMatcher::add
// as:     cv::DescriptorMatcher::add (method) cv::DescriptorMatcher (trait) . add
// Arg ARG cv::_InputArray (boxed) descriptors= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_DescriptorMatcher_add__InputArray(void* instance, void* descriptors) {
    try {
        reinterpret_cast<cv::DescriptorMatcher*>(instance)->add(*reinterpret_cast<const cv::_InputArray*>(descriptors));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DescriptorMatcher::getTrainDescriptors
// as:     cv::DescriptorMatcher::getTrainDescriptors (method) cv::DescriptorMatcher (trait) . getTrainDescriptors
// Return value: Vector[cv::Mat (boxed)]
cv_return_value_void_X cv_DescriptorMatcher_getTrainDescriptors_const(void* instance) {
    try {
        std::vector<cv::Mat> ret = reinterpret_cast<cv::DescriptorMatcher*>(instance)->getTrainDescriptors();
        return { Error::Code::StsOk, NULL, new std::vector<cv::Mat>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::DescriptorMatcher::clear
// as:     cv::DescriptorMatcher::clear (method) cv::DescriptorMatcher (trait) . clear
// Return value: Primitive(void)
cv_return_value_void cv_DescriptorMatcher_clear(void* instance) {
    try {
        reinterpret_cast<cv::DescriptorMatcher*>(instance)->clear();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DescriptorMatcher::empty
// as:     cv::DescriptorMatcher::empty (method) cv::DescriptorMatcher (trait) . empty
// Return value: Primitive(bool)
cv_return_value_bool cv_DescriptorMatcher_empty_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::DescriptorMatcher*>(instance)->empty();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::DescriptorMatcher::isMaskSupported
// as:     cv::DescriptorMatcher::isMaskSupported (method) cv::DescriptorMatcher (trait) . isMaskSupported
// Return value: Primitive(bool)
cv_return_value_bool cv_DescriptorMatcher_isMaskSupported_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::DescriptorMatcher*>(instance)->isMaskSupported();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::DescriptorMatcher::train
// as:     cv::DescriptorMatcher::train (method) cv::DescriptorMatcher (trait) . train
// Return value: Primitive(void)
cv_return_value_void cv_DescriptorMatcher_train(void* instance) {
    try {
        reinterpret_cast<cv::DescriptorMatcher*>(instance)->train();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DescriptorMatcher::match
// as:     cv::DescriptorMatcher::match (method) cv::DescriptorMatcher (trait) . match
// Arg ARG cv::_InputArray (boxed) queryDescriptors= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) trainDescriptors= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::DMatch (simple)] matches= Vector[cv::DMatch (simple)] = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_DescriptorMatcher_match_const__InputArray__InputArray_VectorOfDMatch__InputArray(void* instance, void* queryDescriptors, void* trainDescriptors, void* matches, void* mask) {
    try {
        reinterpret_cast<cv::DescriptorMatcher*>(instance)->match(*reinterpret_cast<const cv::_InputArray*>(queryDescriptors), *reinterpret_cast<const cv::_InputArray*>(trainDescriptors), *reinterpret_cast<std::vector<cv::DMatch>*>(matches), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DescriptorMatcher::knnMatch
// as:     cv::DescriptorMatcher::knnMatch (method) cv::DescriptorMatcher (trait) . knnMatch
// Arg ARG cv::_InputArray (boxed) queryDescriptors= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) trainDescriptors= cv::_InputArray (boxed) = 
// Arg ARG Vector[Vector[cv::DMatch (simple)]] matches= Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG Primitive(int) k= Primitive(int) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Arg ARG Primitive(bool) compactResult= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_DescriptorMatcher_knnMatch_const__InputArray__InputArray_VectorOfVectorOfDMatch_int__InputArray_bool(void* instance, void* queryDescriptors, void* trainDescriptors, void* matches, int k, void* mask, bool compactResult) {
    try {
        reinterpret_cast<cv::DescriptorMatcher*>(instance)->knnMatch(*reinterpret_cast<const cv::_InputArray*>(queryDescriptors), *reinterpret_cast<const cv::_InputArray*>(trainDescriptors), *reinterpret_cast<std::vector<std::vector<cv::DMatch>>*>(matches), k, *reinterpret_cast<const cv::_InputArray*>(mask), compactResult);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DescriptorMatcher::radiusMatch
// as:     cv::DescriptorMatcher::radiusMatch (method) cv::DescriptorMatcher (trait) . radiusMatch
// Arg ARG cv::_InputArray (boxed) queryDescriptors= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) trainDescriptors= cv::_InputArray (boxed) = 
// Arg ARG Vector[Vector[cv::DMatch (simple)]] matches= Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG Primitive(float) maxDistance= Primitive(float) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Arg ARG Primitive(bool) compactResult= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_DescriptorMatcher_radiusMatch_const__InputArray__InputArray_VectorOfVectorOfDMatch_float__InputArray_bool(void* instance, void* queryDescriptors, void* trainDescriptors, void* matches, float maxDistance, void* mask, bool compactResult) {
    try {
        reinterpret_cast<cv::DescriptorMatcher*>(instance)->radiusMatch(*reinterpret_cast<const cv::_InputArray*>(queryDescriptors), *reinterpret_cast<const cv::_InputArray*>(trainDescriptors), *reinterpret_cast<std::vector<std::vector<cv::DMatch>>*>(matches), maxDistance, *reinterpret_cast<const cv::_InputArray*>(mask), compactResult);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DescriptorMatcher::match
// as:     cv::DescriptorMatcher::match (method) cv::DescriptorMatcher (trait) . match
// Arg ARG cv::_InputArray (boxed) queryDescriptors= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::DMatch (simple)] matches= Vector[cv::DMatch (simple)] = 
// Arg ARG cv::_InputArray (boxed) masks= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_DescriptorMatcher_match__InputArray_VectorOfDMatch__InputArray(void* instance, void* queryDescriptors, void* matches, void* masks) {
    try {
        reinterpret_cast<cv::DescriptorMatcher*>(instance)->match(*reinterpret_cast<const cv::_InputArray*>(queryDescriptors), *reinterpret_cast<std::vector<cv::DMatch>*>(matches), *reinterpret_cast<const cv::_InputArray*>(masks));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DescriptorMatcher::knnMatch
// as:     cv::DescriptorMatcher::knnMatch (method) cv::DescriptorMatcher (trait) . knnMatch
// Arg ARG cv::_InputArray (boxed) queryDescriptors= cv::_InputArray (boxed) = 
// Arg ARG Vector[Vector[cv::DMatch (simple)]] matches= Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG Primitive(int) k= Primitive(int) = 
// Arg ARG cv::_InputArray (boxed) masks= cv::_InputArray (boxed) = noArray()
// Arg ARG Primitive(bool) compactResult= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_DescriptorMatcher_knnMatch__InputArray_VectorOfVectorOfDMatch_int__InputArray_bool(void* instance, void* queryDescriptors, void* matches, int k, void* masks, bool compactResult) {
    try {
        reinterpret_cast<cv::DescriptorMatcher*>(instance)->knnMatch(*reinterpret_cast<const cv::_InputArray*>(queryDescriptors), *reinterpret_cast<std::vector<std::vector<cv::DMatch>>*>(matches), k, *reinterpret_cast<const cv::_InputArray*>(masks), compactResult);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DescriptorMatcher::radiusMatch
// as:     cv::DescriptorMatcher::radiusMatch (method) cv::DescriptorMatcher (trait) . radiusMatch
// Arg ARG cv::_InputArray (boxed) queryDescriptors= cv::_InputArray (boxed) = 
// Arg ARG Vector[Vector[cv::DMatch (simple)]] matches= Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG Primitive(float) maxDistance= Primitive(float) = 
// Arg ARG cv::_InputArray (boxed) masks= cv::_InputArray (boxed) = noArray()
// Arg ARG Primitive(bool) compactResult= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_DescriptorMatcher_radiusMatch__InputArray_VectorOfVectorOfDMatch_float__InputArray_bool(void* instance, void* queryDescriptors, void* matches, float maxDistance, void* masks, bool compactResult) {
    try {
        reinterpret_cast<cv::DescriptorMatcher*>(instance)->radiusMatch(*reinterpret_cast<const cv::_InputArray*>(queryDescriptors), *reinterpret_cast<std::vector<std::vector<cv::DMatch>>*>(matches), maxDistance, *reinterpret_cast<const cv::_InputArray*>(masks), compactResult);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DescriptorMatcher::write
// as:     cv::DescriptorMatcher::write (method) cv::DescriptorMatcher (trait) . write
// Arg ARG string fileName= string = 
// Return value: Primitive(void)
cv_return_value_void cv_DescriptorMatcher_write_const_String(void* instance, const char* fileName) {
    try {
        reinterpret_cast<cv::DescriptorMatcher*>(instance)->write(String(fileName));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DescriptorMatcher::read
// as:     cv::DescriptorMatcher::read (method) cv::DescriptorMatcher (trait) . read
// Arg ARG string fileName= string = 
// Return value: Primitive(void)
cv_return_value_void cv_DescriptorMatcher_read_String(void* instance, const char* fileName) {
    try {
        reinterpret_cast<cv::DescriptorMatcher*>(instance)->read(String(fileName));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DescriptorMatcher::read
// as:     cv::DescriptorMatcher::read (method) cv::DescriptorMatcher (trait) . read
// Arg ARG cv::FileNode (boxed) unnamed_arg= cv::FileNode (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_DescriptorMatcher_read_FileNode(void* instance, void* unnamed_arg) {
    try {
        reinterpret_cast<cv::DescriptorMatcher*>(instance)->read(*reinterpret_cast<const cv::FileNode*>(unnamed_arg));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DescriptorMatcher::write
// as:     cv::DescriptorMatcher::write (method) cv::DescriptorMatcher (trait) . write
// Arg ARG cv::FileStorage (boxed) unnamed_arg= cv::FileStorage (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_DescriptorMatcher_write_const_FileStorage(void* instance, void* unnamed_arg) {
    try {
        reinterpret_cast<cv::DescriptorMatcher*>(instance)->write(*reinterpret_cast<cv::FileStorage*>(unnamed_arg));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DescriptorMatcher::clone
// as:     cv::DescriptorMatcher::clone (method) cv::DescriptorMatcher (trait) . clone
// Arg ARG Primitive(bool) emptyTrainData= Primitive(bool) = false
// Return value: SmartPtr[cv::DescriptorMatcher (boxed)]
cv_return_value_void_X cv_DescriptorMatcher_clone_const_bool(void* instance, bool emptyTrainData) {
    try {
        Ptr<cv::DescriptorMatcher> ret = reinterpret_cast<cv::DescriptorMatcher*>(instance)->clone(emptyTrainData);
        return { Error::Code::StsOk, NULL, new Ptr<cv::DescriptorMatcher>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::DescriptorMatcher::write
// as:     cv::DescriptorMatcher::write (method) cv::DescriptorMatcher (trait) . write
// Arg ARG SmartPtr[cv::FileStorage (boxed)] fs= SmartPtr[cv::FileStorage (boxed)] = 
// Arg ARG string name= string = String()
// Return value: Primitive(void)
cv_return_value_void cv_DescriptorMatcher_write_const_PtrOfFileStorage_String(void* instance, void* fs, const char* name) {
    try {
        reinterpret_cast<cv::DescriptorMatcher*>(instance)->write(*reinterpret_cast<const Ptr<cv::FileStorage>*>(fs), String(name));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DescriptorMatcher::create
// as:     cv::DescriptorMatcher::create (method) cv::DescriptorMatcher (trait) . create
// Arg ARG string descriptorMatcherType= string = 
// Return value: SmartPtr[cv::DescriptorMatcher (boxed)]
cv_return_value_void_X cv_DescriptorMatcher_create_String(const char* descriptorMatcherType) {
    try {
        Ptr<cv::DescriptorMatcher> ret = cv::DescriptorMatcher::create(String(descriptorMatcherType));
        return { Error::Code::StsOk, NULL, new Ptr<cv::DescriptorMatcher>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::DescriptorMatcher::create
// as:     cv::DescriptorMatcher::create (method) cv::DescriptorMatcher (trait) . create
// Arg ARG DescriptorMatcher::MatcherType (enum) matcherType= DescriptorMatcher::MatcherType (enum) = 
// Return value: SmartPtr[cv::DescriptorMatcher (boxed)]
cv_return_value_void_X cv_DescriptorMatcher_create_DescriptorMatcher_MatcherType(const DescriptorMatcher::MatcherType& matcherType) {
    try {
        Ptr<cv::DescriptorMatcher> ret = cv::DescriptorMatcher::create(*reinterpret_cast<const DescriptorMatcher::MatcherType*>(&matcherType));
        return { Error::Code::StsOk, NULL, new Ptr<cv::DescriptorMatcher>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::FastFeatureDetector::setThreshold
// as:     cv::FastFeatureDetector::setThreshold (method) cv::FastFeatureDetector (trait) . setThreshold
// Arg ARG Primitive(int) threshold= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_FastFeatureDetector_setThreshold_int(void* instance, int threshold) {
    try {
        reinterpret_cast<cv::FastFeatureDetector*>(instance)->setThreshold(threshold);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FastFeatureDetector::getThreshold
// as:     cv::FastFeatureDetector::getThreshold (method) cv::FastFeatureDetector (trait) . getThreshold
// Return value: Primitive(int)
cv_return_value_int cv_FastFeatureDetector_getThreshold_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::FastFeatureDetector*>(instance)->getThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::FastFeatureDetector::setNonmaxSuppression
// as:     cv::FastFeatureDetector::setNonmaxSuppression (method) cv::FastFeatureDetector (trait) . setNonmaxSuppression
// Arg ARG Primitive(bool) f= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_FastFeatureDetector_setNonmaxSuppression_bool(void* instance, bool f) {
    try {
        reinterpret_cast<cv::FastFeatureDetector*>(instance)->setNonmaxSuppression(f);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FastFeatureDetector::getNonmaxSuppression
// as:     cv::FastFeatureDetector::getNonmaxSuppression (method) cv::FastFeatureDetector (trait) . getNonmaxSuppression
// Return value: Primitive(bool)
cv_return_value_bool cv_FastFeatureDetector_getNonmaxSuppression_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::FastFeatureDetector*>(instance)->getNonmaxSuppression();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::FastFeatureDetector::setType
// as:     cv::FastFeatureDetector::setType (method) cv::FastFeatureDetector (trait) . setType
// Arg ARG FastFeatureDetector::DetectorType (enum) type= FastFeatureDetector::DetectorType (enum) = 
// Return value: Primitive(void)
cv_return_value_void cv_FastFeatureDetector_setType_FastFeatureDetector_DetectorType(void* instance, FastFeatureDetector::DetectorType type) {
    try {
        reinterpret_cast<cv::FastFeatureDetector*>(instance)->setType(*reinterpret_cast<FastFeatureDetector::DetectorType*>(&type));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FastFeatureDetector::getType
// as:     cv::FastFeatureDetector::getType (method) cv::FastFeatureDetector (trait) . getType
// Return value: FastFeatureDetector::DetectorType (enum)
cv_return_value_FastFeatureDetector_DetectorType cv_FastFeatureDetector_getType_const(void* instance) {
    try {
        FastFeatureDetector::DetectorType ret = reinterpret_cast<cv::FastFeatureDetector*>(instance)->getType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_FastFeatureDetector_DetectorType)
}

// parsed: cv::FastFeatureDetector::getDefaultName
// as:     cv::FastFeatureDetector::getDefaultName (method) cv::FastFeatureDetector (trait) . getDefaultName
// Return value: string
cv_return_value_char_X cv_FastFeatureDetector_getDefaultName_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::FastFeatureDetector*>(instance)->getDefaultName();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::FastFeatureDetector::create
// as:     cv::FastFeatureDetector::create (method) cv::FastFeatureDetector (trait) . create
// Arg ARG Primitive(int) threshold= Primitive(int) = 10
// Arg ARG Primitive(bool) nonmaxSuppression= Primitive(bool) = true
// Arg ARG FastFeatureDetector::DetectorType (enum) type= FastFeatureDetector::DetectorType (enum) = FastFeatureDetector::TYPE_9_16
// Return value: SmartPtr[cv::FastFeatureDetector (boxed)]
cv_return_value_void_X cv_FastFeatureDetector_create_int_bool_FastFeatureDetector_DetectorType(int threshold, bool nonmaxSuppression, FastFeatureDetector::DetectorType type) {
    try {
        Ptr<cv::FastFeatureDetector> ret = cv::FastFeatureDetector::create(threshold, nonmaxSuppression, *reinterpret_cast<FastFeatureDetector::DetectorType*>(&type));
        return { Error::Code::StsOk, NULL, new Ptr<cv::FastFeatureDetector>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Feature2D::detect
// as:     cv::Feature2D::detect (method) cv::Feature2D (trait) . detect
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_Feature2D_detect__InputArray_VectorOfKeyPoint__InputArray(void* instance, void* image, void* keypoints, void* mask) {
    try {
        reinterpret_cast<cv::Feature2D*>(instance)->detect(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Feature2D::detect
// as:     cv::Feature2D::detect (method) cv::Feature2D (trait) . detect
// Arg ARG cv::_InputArray (boxed) images= cv::_InputArray (boxed) = 
// Arg ARG Vector[Vector[cv::KeyPoint (simple)]] keypoints= Vector[Vector[cv::KeyPoint (simple)]] = 
// Arg ARG cv::_InputArray (boxed) masks= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_Feature2D_detect__InputArray_VectorOfVectorOfKeyPoint__InputArray(void* instance, void* images, void* keypoints, void* masks) {
    try {
        reinterpret_cast<cv::Feature2D*>(instance)->detect(*reinterpret_cast<const cv::_InputArray*>(images), *reinterpret_cast<std::vector<std::vector<cv::KeyPoint>>*>(keypoints), *reinterpret_cast<const cv::_InputArray*>(masks));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Feature2D::compute
// as:     cv::Feature2D::compute (method) cv::Feature2D (trait) . compute
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::_OutputArray (boxed) descriptors= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_Feature2D_compute__InputArray_VectorOfKeyPoint__OutputArray(void* instance, void* image, void* keypoints, void* descriptors) {
    try {
        reinterpret_cast<cv::Feature2D*>(instance)->compute(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints), *reinterpret_cast<cv::_OutputArray*>(descriptors));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Feature2D::compute
// as:     cv::Feature2D::compute (method) cv::Feature2D (trait) . compute
// Arg ARG cv::_InputArray (boxed) images= cv::_InputArray (boxed) = 
// Arg ARG Vector[Vector[cv::KeyPoint (simple)]] keypoints= Vector[Vector[cv::KeyPoint (simple)]] = 
// Arg ARG cv::_OutputArray (boxed) descriptors= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_Feature2D_compute__InputArray_VectorOfVectorOfKeyPoint__OutputArray(void* instance, void* images, void* keypoints, void* descriptors) {
    try {
        reinterpret_cast<cv::Feature2D*>(instance)->compute(*reinterpret_cast<const cv::_InputArray*>(images), *reinterpret_cast<std::vector<std::vector<cv::KeyPoint>>*>(keypoints), *reinterpret_cast<cv::_OutputArray*>(descriptors));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Feature2D::detectAndCompute
// as:     cv::Feature2D::detectAndCompute (method) cv::Feature2D (trait) . detectAndCompute
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::_OutputArray (boxed) descriptors= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(bool) useProvidedKeypoints= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_Feature2D_detectAndCompute__InputArray__InputArray_VectorOfKeyPoint__OutputArray_bool(void* instance, void* image, void* mask, void* keypoints, void* descriptors, bool useProvidedKeypoints) {
    try {
        reinterpret_cast<cv::Feature2D*>(instance)->detectAndCompute(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<const cv::_InputArray*>(mask), *reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints), *reinterpret_cast<cv::_OutputArray*>(descriptors), useProvidedKeypoints);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Feature2D::descriptorSize
// as:     cv::Feature2D::descriptorSize (method) cv::Feature2D (trait) . descriptorSize
// Return value: Primitive(int)
cv_return_value_int cv_Feature2D_descriptorSize_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::Feature2D*>(instance)->descriptorSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Feature2D::descriptorType
// as:     cv::Feature2D::descriptorType (method) cv::Feature2D (trait) . descriptorType
// Return value: Primitive(int)
cv_return_value_int cv_Feature2D_descriptorType_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::Feature2D*>(instance)->descriptorType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Feature2D::defaultNorm
// as:     cv::Feature2D::defaultNorm (method) cv::Feature2D (trait) . defaultNorm
// Return value: Primitive(int)
cv_return_value_int cv_Feature2D_defaultNorm_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::Feature2D*>(instance)->defaultNorm();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Feature2D::write
// as:     cv::Feature2D::write (method) cv::Feature2D (trait) . write
// Arg ARG string fileName= string = 
// Return value: Primitive(void)
cv_return_value_void cv_Feature2D_write_const_String(void* instance, const char* fileName) {
    try {
        reinterpret_cast<cv::Feature2D*>(instance)->write(String(fileName));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Feature2D::read
// as:     cv::Feature2D::read (method) cv::Feature2D (trait) . read
// Arg ARG string fileName= string = 
// Return value: Primitive(void)
cv_return_value_void cv_Feature2D_read_String(void* instance, const char* fileName) {
    try {
        reinterpret_cast<cv::Feature2D*>(instance)->read(String(fileName));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Feature2D::write
// as:     cv::Feature2D::write (method) cv::Feature2D (trait) . write
// Arg ARG cv::FileStorage (boxed) unnamed_arg= cv::FileStorage (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_Feature2D_write_const_FileStorage(void* instance, void* unnamed_arg) {
    try {
        reinterpret_cast<cv::Feature2D*>(instance)->write(*reinterpret_cast<cv::FileStorage*>(unnamed_arg));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Feature2D::read
// as:     cv::Feature2D::read (method) cv::Feature2D (trait) . read
// Arg ARG cv::FileNode (boxed) unnamed_arg= cv::FileNode (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_Feature2D_read_FileNode(void* instance, void* unnamed_arg) {
    try {
        reinterpret_cast<cv::Feature2D*>(instance)->read(*reinterpret_cast<const cv::FileNode*>(unnamed_arg));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Feature2D::empty
// as:     cv::Feature2D::empty (method) cv::Feature2D (trait) . empty
// Return value: Primitive(bool)
cv_return_value_bool cv_Feature2D_empty_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::Feature2D*>(instance)->empty();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::Feature2D::getDefaultName
// as:     cv::Feature2D::getDefaultName (method) cv::Feature2D (trait) . getDefaultName
// Return value: string
cv_return_value_char_X cv_Feature2D_getDefaultName_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::Feature2D*>(instance)->getDefaultName();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::Feature2D::write
// as:     cv::Feature2D::write (method) cv::Feature2D (trait) . write
// Arg ARG SmartPtr[cv::FileStorage (boxed)] fs= SmartPtr[cv::FileStorage (boxed)] = 
// Arg ARG string name= string = String()
// Return value: Primitive(void)
cv_return_value_void cv_Feature2D_write_const_PtrOfFileStorage_String(void* instance, void* fs, const char* name) {
    try {
        reinterpret_cast<cv::Feature2D*>(instance)->write(*reinterpret_cast<const Ptr<cv::FileStorage>*>(fs), String(name));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::Feature2D
void cv_Feature2D_delete(void* instance) {
    delete reinterpret_cast<cv::Feature2D*>(instance);
}
// boxed class: cv::FlannBasedMatcher
void cv_FlannBasedMatcher_delete(void* instance) {
    delete reinterpret_cast<cv::FlannBasedMatcher*>(instance);
}
// parsed: cv::FlannBasedMatcher::add
// as:     cv::FlannBasedMatcher::add (method) cv::FlannBasedMatcher . add
// Arg ARG cv::_InputArray (boxed) descriptors= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_FlannBasedMatcher_add__InputArray(void* instance, void* descriptors) {
    try {
        reinterpret_cast<cv::FlannBasedMatcher*>(instance)->add(*reinterpret_cast<const cv::_InputArray*>(descriptors));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FlannBasedMatcher::clear
// as:     cv::FlannBasedMatcher::clear (method) cv::FlannBasedMatcher . clear
// Return value: Primitive(void)
cv_return_value_void cv_FlannBasedMatcher_clear(void* instance) {
    try {
        reinterpret_cast<cv::FlannBasedMatcher*>(instance)->clear();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FlannBasedMatcher::read
// as:     cv::FlannBasedMatcher::read (method) cv::FlannBasedMatcher . read
// Arg ARG cv::FileNode (boxed) unnamed_arg= cv::FileNode (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_FlannBasedMatcher_read_FileNode(void* instance, void* unnamed_arg) {
    try {
        reinterpret_cast<cv::FlannBasedMatcher*>(instance)->read(*reinterpret_cast<const cv::FileNode*>(unnamed_arg));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FlannBasedMatcher::write
// as:     cv::FlannBasedMatcher::write (method) cv::FlannBasedMatcher . write
// Arg ARG cv::FileStorage (boxed) unnamed_arg= cv::FileStorage (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_FlannBasedMatcher_write_const_FileStorage(void* instance, void* unnamed_arg) {
    try {
        reinterpret_cast<cv::FlannBasedMatcher*>(instance)->write(*reinterpret_cast<cv::FileStorage*>(unnamed_arg));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FlannBasedMatcher::train
// as:     cv::FlannBasedMatcher::train (method) cv::FlannBasedMatcher . train
// Return value: Primitive(void)
cv_return_value_void cv_FlannBasedMatcher_train(void* instance) {
    try {
        reinterpret_cast<cv::FlannBasedMatcher*>(instance)->train();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FlannBasedMatcher::isMaskSupported
// as:     cv::FlannBasedMatcher::isMaskSupported (method) cv::FlannBasedMatcher . isMaskSupported
// Return value: Primitive(bool)
cv_return_value_bool cv_FlannBasedMatcher_isMaskSupported_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::FlannBasedMatcher*>(instance)->isMaskSupported();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::FlannBasedMatcher::create
// as:     cv::FlannBasedMatcher::create (method) cv::FlannBasedMatcher . create
// Return value: SmartPtr[cv::FlannBasedMatcher (boxed)]
cv_return_value_void_X cv_FlannBasedMatcher_create() {
    try {
        Ptr<cv::FlannBasedMatcher> ret = cv::FlannBasedMatcher::create();
        return { Error::Code::StsOk, NULL, new Ptr<cv::FlannBasedMatcher>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::FlannBasedMatcher::clone
// as:     cv::FlannBasedMatcher::clone (method) cv::FlannBasedMatcher . clone
// Arg ARG Primitive(bool) emptyTrainData= Primitive(bool) = false
// Return value: SmartPtr[cv::DescriptorMatcher (boxed)]
cv_return_value_void_X cv_FlannBasedMatcher_clone_const_bool(void* instance, bool emptyTrainData) {
    try {
        Ptr<cv::DescriptorMatcher> ret = reinterpret_cast<cv::FlannBasedMatcher*>(instance)->clone(emptyTrainData);
        return { Error::Code::StsOk, NULL, new Ptr<cv::DescriptorMatcher>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::GFTTDetector::setMaxFeatures
// as:     cv::GFTTDetector::setMaxFeatures (method) cv::GFTTDetector (trait) . setMaxFeatures
// Arg ARG Primitive(int) maxFeatures= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_GFTTDetector_setMaxFeatures_int(void* instance, int maxFeatures) {
    try {
        reinterpret_cast<cv::GFTTDetector*>(instance)->setMaxFeatures(maxFeatures);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GFTTDetector::getMaxFeatures
// as:     cv::GFTTDetector::getMaxFeatures (method) cv::GFTTDetector (trait) . getMaxFeatures
// Return value: Primitive(int)
cv_return_value_int cv_GFTTDetector_getMaxFeatures_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::GFTTDetector*>(instance)->getMaxFeatures();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::GFTTDetector::setQualityLevel
// as:     cv::GFTTDetector::setQualityLevel (method) cv::GFTTDetector (trait) . setQualityLevel
// Arg ARG Primitive(double) qlevel= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_GFTTDetector_setQualityLevel_double(void* instance, double qlevel) {
    try {
        reinterpret_cast<cv::GFTTDetector*>(instance)->setQualityLevel(qlevel);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GFTTDetector::getQualityLevel
// as:     cv::GFTTDetector::getQualityLevel (method) cv::GFTTDetector (trait) . getQualityLevel
// Return value: Primitive(double)
cv_return_value_double cv_GFTTDetector_getQualityLevel_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::GFTTDetector*>(instance)->getQualityLevel();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::GFTTDetector::setMinDistance
// as:     cv::GFTTDetector::setMinDistance (method) cv::GFTTDetector (trait) . setMinDistance
// Arg ARG Primitive(double) minDistance= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_GFTTDetector_setMinDistance_double(void* instance, double minDistance) {
    try {
        reinterpret_cast<cv::GFTTDetector*>(instance)->setMinDistance(minDistance);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GFTTDetector::getMinDistance
// as:     cv::GFTTDetector::getMinDistance (method) cv::GFTTDetector (trait) . getMinDistance
// Return value: Primitive(double)
cv_return_value_double cv_GFTTDetector_getMinDistance_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::GFTTDetector*>(instance)->getMinDistance();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::GFTTDetector::setBlockSize
// as:     cv::GFTTDetector::setBlockSize (method) cv::GFTTDetector (trait) . setBlockSize
// Arg ARG Primitive(int) blockSize= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_GFTTDetector_setBlockSize_int(void* instance, int blockSize) {
    try {
        reinterpret_cast<cv::GFTTDetector*>(instance)->setBlockSize(blockSize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GFTTDetector::getBlockSize
// as:     cv::GFTTDetector::getBlockSize (method) cv::GFTTDetector (trait) . getBlockSize
// Return value: Primitive(int)
cv_return_value_int cv_GFTTDetector_getBlockSize_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::GFTTDetector*>(instance)->getBlockSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::GFTTDetector::setHarrisDetector
// as:     cv::GFTTDetector::setHarrisDetector (method) cv::GFTTDetector (trait) . setHarrisDetector
// Arg ARG Primitive(bool) val= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_GFTTDetector_setHarrisDetector_bool(void* instance, bool val) {
    try {
        reinterpret_cast<cv::GFTTDetector*>(instance)->setHarrisDetector(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GFTTDetector::getHarrisDetector
// as:     cv::GFTTDetector::getHarrisDetector (method) cv::GFTTDetector (trait) . getHarrisDetector
// Return value: Primitive(bool)
cv_return_value_bool cv_GFTTDetector_getHarrisDetector_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::GFTTDetector*>(instance)->getHarrisDetector();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::GFTTDetector::setK
// as:     cv::GFTTDetector::setK (method) cv::GFTTDetector (trait) . setK
// Arg ARG Primitive(double) k= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_GFTTDetector_setK_double(void* instance, double k) {
    try {
        reinterpret_cast<cv::GFTTDetector*>(instance)->setK(k);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::GFTTDetector::getK
// as:     cv::GFTTDetector::getK (method) cv::GFTTDetector (trait) . getK
// Return value: Primitive(double)
cv_return_value_double cv_GFTTDetector_getK_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::GFTTDetector*>(instance)->getK();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::GFTTDetector::getDefaultName
// as:     cv::GFTTDetector::getDefaultName (method) cv::GFTTDetector (trait) . getDefaultName
// Return value: string
cv_return_value_char_X cv_GFTTDetector_getDefaultName_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::GFTTDetector*>(instance)->getDefaultName();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::GFTTDetector::create
// as:     cv::GFTTDetector::create (method) cv::GFTTDetector (trait) . create
// Arg ARG Primitive(int) maxCorners= Primitive(int) = 1000
// Arg ARG Primitive(double) qualityLevel= Primitive(double) = 0.01
// Arg ARG Primitive(double) minDistance= Primitive(double) = 1
// Arg ARG Primitive(int) blockSize= Primitive(int) = 3
// Arg ARG Primitive(bool) useHarrisDetector= Primitive(bool) = false
// Arg ARG Primitive(double) k= Primitive(double) = 0.04
// Return value: SmartPtr[cv::GFTTDetector (boxed)]
cv_return_value_void_X cv_GFTTDetector_create_int_double_double_int_bool_double(int maxCorners, double qualityLevel, double minDistance, int blockSize, bool useHarrisDetector, double k) {
    try {
        Ptr<cv::GFTTDetector> ret = cv::GFTTDetector::create(maxCorners, qualityLevel, minDistance, blockSize, useHarrisDetector, k);
        return { Error::Code::StsOk, NULL, new Ptr<cv::GFTTDetector>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::GFTTDetector::create
// as:     cv::GFTTDetector::create (method) cv::GFTTDetector (trait) . create
// Arg ARG Primitive(int) maxCorners= Primitive(int) = 
// Arg ARG Primitive(double) qualityLevel= Primitive(double) = 
// Arg ARG Primitive(double) minDistance= Primitive(double) = 
// Arg ARG Primitive(int) blockSize= Primitive(int) = 
// Arg ARG Primitive(int) gradiantSize= Primitive(int) = 
// Arg ARG Primitive(bool) useHarrisDetector= Primitive(bool) = false
// Arg ARG Primitive(double) k= Primitive(double) = 0.04
// Return value: SmartPtr[cv::GFTTDetector (boxed)]
cv_return_value_void_X cv_GFTTDetector_create_int_double_double_int_int_bool_double(int maxCorners, double qualityLevel, double minDistance, int blockSize, int gradiantSize, bool useHarrisDetector, double k) {
    try {
        Ptr<cv::GFTTDetector> ret = cv::GFTTDetector::create(maxCorners, qualityLevel, minDistance, blockSize, gradiantSize, useHarrisDetector, k);
        return { Error::Code::StsOk, NULL, new Ptr<cv::GFTTDetector>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::KAZE::setExtended
// as:     cv::KAZE::setExtended (method) cv::KAZE (trait) . setExtended
// Arg ARG Primitive(bool) extended= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_KAZE_setExtended_bool(void* instance, bool extended) {
    try {
        reinterpret_cast<cv::KAZE*>(instance)->setExtended(extended);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KAZE::getExtended
// as:     cv::KAZE::getExtended (method) cv::KAZE (trait) . getExtended
// Return value: Primitive(bool)
cv_return_value_bool cv_KAZE_getExtended_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::KAZE*>(instance)->getExtended();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::KAZE::setUpright
// as:     cv::KAZE::setUpright (method) cv::KAZE (trait) . setUpright
// Arg ARG Primitive(bool) upright= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_KAZE_setUpright_bool(void* instance, bool upright) {
    try {
        reinterpret_cast<cv::KAZE*>(instance)->setUpright(upright);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KAZE::getUpright
// as:     cv::KAZE::getUpright (method) cv::KAZE (trait) . getUpright
// Return value: Primitive(bool)
cv_return_value_bool cv_KAZE_getUpright_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::KAZE*>(instance)->getUpright();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::KAZE::setThreshold
// as:     cv::KAZE::setThreshold (method) cv::KAZE (trait) . setThreshold
// Arg ARG Primitive(double) threshold= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_KAZE_setThreshold_double(void* instance, double threshold) {
    try {
        reinterpret_cast<cv::KAZE*>(instance)->setThreshold(threshold);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KAZE::getThreshold
// as:     cv::KAZE::getThreshold (method) cv::KAZE (trait) . getThreshold
// Return value: Primitive(double)
cv_return_value_double cv_KAZE_getThreshold_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::KAZE*>(instance)->getThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::KAZE::setNOctaves
// as:     cv::KAZE::setNOctaves (method) cv::KAZE (trait) . setNOctaves
// Arg ARG Primitive(int) octaves= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_KAZE_setNOctaves_int(void* instance, int octaves) {
    try {
        reinterpret_cast<cv::KAZE*>(instance)->setNOctaves(octaves);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KAZE::getNOctaves
// as:     cv::KAZE::getNOctaves (method) cv::KAZE (trait) . getNOctaves
// Return value: Primitive(int)
cv_return_value_int cv_KAZE_getNOctaves_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::KAZE*>(instance)->getNOctaves();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::KAZE::setNOctaveLayers
// as:     cv::KAZE::setNOctaveLayers (method) cv::KAZE (trait) . setNOctaveLayers
// Arg ARG Primitive(int) octaveLayers= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_KAZE_setNOctaveLayers_int(void* instance, int octaveLayers) {
    try {
        reinterpret_cast<cv::KAZE*>(instance)->setNOctaveLayers(octaveLayers);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KAZE::getNOctaveLayers
// as:     cv::KAZE::getNOctaveLayers (method) cv::KAZE (trait) . getNOctaveLayers
// Return value: Primitive(int)
cv_return_value_int cv_KAZE_getNOctaveLayers_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::KAZE*>(instance)->getNOctaveLayers();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::KAZE::setDiffusivity
// as:     cv::KAZE::setDiffusivity (method) cv::KAZE (trait) . setDiffusivity
// Arg ARG KAZE::DiffusivityType (enum) diff= KAZE::DiffusivityType (enum) = 
// Return value: Primitive(void)
cv_return_value_void cv_KAZE_setDiffusivity_KAZE_DiffusivityType(void* instance, KAZE::DiffusivityType diff) {
    try {
        reinterpret_cast<cv::KAZE*>(instance)->setDiffusivity(*reinterpret_cast<KAZE::DiffusivityType*>(&diff));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KAZE::getDiffusivity
// as:     cv::KAZE::getDiffusivity (method) cv::KAZE (trait) . getDiffusivity
// Return value: KAZE::DiffusivityType (enum)
cv_return_value_KAZE_DiffusivityType cv_KAZE_getDiffusivity_const(void* instance) {
    try {
        KAZE::DiffusivityType ret = reinterpret_cast<cv::KAZE*>(instance)->getDiffusivity();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_KAZE_DiffusivityType)
}

// parsed: cv::KAZE::getDefaultName
// as:     cv::KAZE::getDefaultName (method) cv::KAZE (trait) . getDefaultName
// Return value: string
cv_return_value_char_X cv_KAZE_getDefaultName_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::KAZE*>(instance)->getDefaultName();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::KAZE::create
// as:     cv::KAZE::create (method) cv::KAZE (trait) . create
// Arg ARG Primitive(bool) extended= Primitive(bool) = false
// Arg ARG Primitive(bool) upright= Primitive(bool) = false
// Arg ARG Primitive(float) threshold= Primitive(float) = 0.001f
// Arg ARG Primitive(int) nOctaves= Primitive(int) = 4
// Arg ARG Primitive(int) nOctaveLayers= Primitive(int) = 4
// Arg ARG KAZE::DiffusivityType (enum) diffusivity= KAZE::DiffusivityType (enum) = KAZE::DIFF_PM_G2
// Return value: SmartPtr[cv::KAZE (boxed)]
cv_return_value_void_X cv_KAZE_create_bool_bool_float_int_int_KAZE_DiffusivityType(bool extended, bool upright, float threshold, int nOctaves, int nOctaveLayers, KAZE::DiffusivityType diffusivity) {
    try {
        Ptr<cv::KAZE> ret = cv::KAZE::create(extended, upright, threshold, nOctaves, nOctaveLayers, *reinterpret_cast<KAZE::DiffusivityType*>(&diffusivity));
        return { Error::Code::StsOk, NULL, new Ptr<cv::KAZE>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::KeyPointsFilter
void cv_KeyPointsFilter_delete(void* instance) {
    delete reinterpret_cast<cv::KeyPointsFilter*>(instance);
}
// parsed: cv::KeyPointsFilter::KeyPointsFilter
// as:     cv::KeyPointsFilter::KeyPointsFilter (constructor) cv::KeyPointsFilter . default
// Return value: cv::KeyPointsFilter (boxed)
cv_return_value_void_X cv_KeyPointsFilter_KeyPointsFilter() {
    try {
        cv::KeyPointsFilter* ret = new cv::KeyPointsFilter();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::KeyPointsFilter::runByImageBorder
// as:     cv::KeyPointsFilter::runByImageBorder (method) cv::KeyPointsFilter . runByImageBorder
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG Primitive(int) borderSize= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_KeyPointsFilter_runByImageBorder_VectorOfKeyPoint_Size_int(void* keypoints, SizeWrapper imageSize, int borderSize) {
    try {
        cv::KeyPointsFilter::runByImageBorder(*reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints), *reinterpret_cast<cv::Size*>(&imageSize), borderSize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KeyPointsFilter::runByKeypointSize
// as:     cv::KeyPointsFilter::runByKeypointSize (method) cv::KeyPointsFilter . runByKeypointSize
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG Primitive(float) minSize= Primitive(float) = 
// Arg ARG Primitive(float) maxSize= Primitive(float) = FLT_MAX
// Return value: Primitive(void)
cv_return_value_void cv_KeyPointsFilter_runByKeypointSize_VectorOfKeyPoint_float_float(void* keypoints, float minSize, float maxSize) {
    try {
        cv::KeyPointsFilter::runByKeypointSize(*reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints), minSize, maxSize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KeyPointsFilter::runByPixelsMask
// as:     cv::KeyPointsFilter::runByPixelsMask (method) cv::KeyPointsFilter . runByPixelsMask
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::Mat (boxed) mask= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_KeyPointsFilter_runByPixelsMask_VectorOfKeyPoint_Mat(void* keypoints, void* mask) {
    try {
        cv::KeyPointsFilter::runByPixelsMask(*reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints), *reinterpret_cast<const cv::Mat*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KeyPointsFilter::removeDuplicated
// as:     cv::KeyPointsFilter::removeDuplicated (method) cv::KeyPointsFilter . removeDuplicated
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_KeyPointsFilter_removeDuplicated_VectorOfKeyPoint(void* keypoints) {
    try {
        cv::KeyPointsFilter::removeDuplicated(*reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KeyPointsFilter::removeDuplicatedSorted
// as:     cv::KeyPointsFilter::removeDuplicatedSorted (method) cv::KeyPointsFilter . removeDuplicatedSorted
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_KeyPointsFilter_removeDuplicatedSorted_VectorOfKeyPoint(void* keypoints) {
    try {
        cv::KeyPointsFilter::removeDuplicatedSorted(*reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KeyPointsFilter::retainBest
// as:     cv::KeyPointsFilter::retainBest (method) cv::KeyPointsFilter . retainBest
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG Primitive(int) npoints= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_KeyPointsFilter_retainBest_VectorOfKeyPoint_int(void* keypoints, int npoints) {
    try {
        cv::KeyPointsFilter::retainBest(*reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints), npoints);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MSER::detectRegions
// as:     cv::MSER::detectRegions (method) cv::MSER (trait) . detectRegions
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG Vector[Vector[cv::Point (simple)]] msers= Vector[Vector[cv::Point (simple)]] = 
// Arg ARG Vector[cv::Rect (simple)] bboxes= Vector[cv::Rect (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_MSER_detectRegions__InputArray_VectorOfVectorOfPoint_VectorOfRect(void* instance, void* image, void* msers, void* bboxes) {
    try {
        reinterpret_cast<cv::MSER*>(instance)->detectRegions(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<std::vector<std::vector<cv::Point>>*>(msers), *reinterpret_cast<std::vector<cv::Rect>*>(bboxes));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MSER::setDelta
// as:     cv::MSER::setDelta (method) cv::MSER (trait) . setDelta
// Arg ARG Primitive(int) delta= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_MSER_setDelta_int(void* instance, int delta) {
    try {
        reinterpret_cast<cv::MSER*>(instance)->setDelta(delta);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MSER::getDelta
// as:     cv::MSER::getDelta (method) cv::MSER (trait) . getDelta
// Return value: Primitive(int)
cv_return_value_int cv_MSER_getDelta_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::MSER*>(instance)->getDelta();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::MSER::setMinArea
// as:     cv::MSER::setMinArea (method) cv::MSER (trait) . setMinArea
// Arg ARG Primitive(int) minArea= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_MSER_setMinArea_int(void* instance, int minArea) {
    try {
        reinterpret_cast<cv::MSER*>(instance)->setMinArea(minArea);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MSER::getMinArea
// as:     cv::MSER::getMinArea (method) cv::MSER (trait) . getMinArea
// Return value: Primitive(int)
cv_return_value_int cv_MSER_getMinArea_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::MSER*>(instance)->getMinArea();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::MSER::setMaxArea
// as:     cv::MSER::setMaxArea (method) cv::MSER (trait) . setMaxArea
// Arg ARG Primitive(int) maxArea= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_MSER_setMaxArea_int(void* instance, int maxArea) {
    try {
        reinterpret_cast<cv::MSER*>(instance)->setMaxArea(maxArea);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MSER::getMaxArea
// as:     cv::MSER::getMaxArea (method) cv::MSER (trait) . getMaxArea
// Return value: Primitive(int)
cv_return_value_int cv_MSER_getMaxArea_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::MSER*>(instance)->getMaxArea();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::MSER::setPass2Only
// as:     cv::MSER::setPass2Only (method) cv::MSER (trait) . setPass2Only
// Arg ARG Primitive(bool) f= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_MSER_setPass2Only_bool(void* instance, bool f) {
    try {
        reinterpret_cast<cv::MSER*>(instance)->setPass2Only(f);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MSER::getPass2Only
// as:     cv::MSER::getPass2Only (method) cv::MSER (trait) . getPass2Only
// Return value: Primitive(bool)
cv_return_value_bool cv_MSER_getPass2Only_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::MSER*>(instance)->getPass2Only();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::MSER::getDefaultName
// as:     cv::MSER::getDefaultName (method) cv::MSER (trait) . getDefaultName
// Return value: string
cv_return_value_char_X cv_MSER_getDefaultName_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::MSER*>(instance)->getDefaultName();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::MSER::create
// as:     cv::MSER::create (method) cv::MSER (trait) . create
// Arg ARG Primitive(int) _delta= Primitive(int) = 5
// Arg ARG Primitive(int) _min_area= Primitive(int) = 60
// Arg ARG Primitive(int) _max_area= Primitive(int) = 14400
// Arg ARG Primitive(double) _max_variation= Primitive(double) = 0.25
// Arg ARG Primitive(double) _min_diversity= Primitive(double) = .2
// Arg ARG Primitive(int) _max_evolution= Primitive(int) = 200
// Arg ARG Primitive(double) _area_threshold= Primitive(double) = 1.01
// Arg ARG Primitive(double) _min_margin= Primitive(double) = 0.003
// Arg ARG Primitive(int) _edge_blur_size= Primitive(int) = 5
// Return value: SmartPtr[cv::MSER (boxed)]
cv_return_value_void_X cv_MSER_create_int_int_int_double_double_int_double_double_int(int _delta, int _min_area, int _max_area, double _max_variation, double _min_diversity, int _max_evolution, double _area_threshold, double _min_margin, int _edge_blur_size) {
    try {
        Ptr<cv::MSER> ret = cv::MSER::create(_delta, _min_area, _max_area, _max_variation, _min_diversity, _max_evolution, _area_threshold, _min_margin, _edge_blur_size);
        return { Error::Code::StsOk, NULL, new Ptr<cv::MSER>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ORB::setMaxFeatures
// as:     cv::ORB::setMaxFeatures (method) cv::ORB (trait) . setMaxFeatures
// Arg ARG Primitive(int) maxFeatures= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ORB_setMaxFeatures_int(void* instance, int maxFeatures) {
    try {
        reinterpret_cast<cv::ORB*>(instance)->setMaxFeatures(maxFeatures);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ORB::getMaxFeatures
// as:     cv::ORB::getMaxFeatures (method) cv::ORB (trait) . getMaxFeatures
// Return value: Primitive(int)
cv_return_value_int cv_ORB_getMaxFeatures_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ORB*>(instance)->getMaxFeatures();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ORB::setScaleFactor
// as:     cv::ORB::setScaleFactor (method) cv::ORB (trait) . setScaleFactor
// Arg ARG Primitive(double) scaleFactor= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_ORB_setScaleFactor_double(void* instance, double scaleFactor) {
    try {
        reinterpret_cast<cv::ORB*>(instance)->setScaleFactor(scaleFactor);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ORB::getScaleFactor
// as:     cv::ORB::getScaleFactor (method) cv::ORB (trait) . getScaleFactor
// Return value: Primitive(double)
cv_return_value_double cv_ORB_getScaleFactor_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ORB*>(instance)->getScaleFactor();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ORB::setNLevels
// as:     cv::ORB::setNLevels (method) cv::ORB (trait) . setNLevels
// Arg ARG Primitive(int) nlevels= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ORB_setNLevels_int(void* instance, int nlevels) {
    try {
        reinterpret_cast<cv::ORB*>(instance)->setNLevels(nlevels);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ORB::getNLevels
// as:     cv::ORB::getNLevels (method) cv::ORB (trait) . getNLevels
// Return value: Primitive(int)
cv_return_value_int cv_ORB_getNLevels_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ORB*>(instance)->getNLevels();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ORB::setEdgeThreshold
// as:     cv::ORB::setEdgeThreshold (method) cv::ORB (trait) . setEdgeThreshold
// Arg ARG Primitive(int) edgeThreshold= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ORB_setEdgeThreshold_int(void* instance, int edgeThreshold) {
    try {
        reinterpret_cast<cv::ORB*>(instance)->setEdgeThreshold(edgeThreshold);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ORB::getEdgeThreshold
// as:     cv::ORB::getEdgeThreshold (method) cv::ORB (trait) . getEdgeThreshold
// Return value: Primitive(int)
cv_return_value_int cv_ORB_getEdgeThreshold_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ORB*>(instance)->getEdgeThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ORB::setFirstLevel
// as:     cv::ORB::setFirstLevel (method) cv::ORB (trait) . setFirstLevel
// Arg ARG Primitive(int) firstLevel= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ORB_setFirstLevel_int(void* instance, int firstLevel) {
    try {
        reinterpret_cast<cv::ORB*>(instance)->setFirstLevel(firstLevel);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ORB::getFirstLevel
// as:     cv::ORB::getFirstLevel (method) cv::ORB (trait) . getFirstLevel
// Return value: Primitive(int)
cv_return_value_int cv_ORB_getFirstLevel_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ORB*>(instance)->getFirstLevel();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ORB::setWTA_K
// as:     cv::ORB::setWTA_K (method) cv::ORB (trait) . setWTA_K
// Arg ARG Primitive(int) wta_k= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ORB_setWTA_K_int(void* instance, int wta_k) {
    try {
        reinterpret_cast<cv::ORB*>(instance)->setWTA_K(wta_k);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ORB::getWTA_K
// as:     cv::ORB::getWTA_K (method) cv::ORB (trait) . getWTA_K
// Return value: Primitive(int)
cv_return_value_int cv_ORB_getWTA_K_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ORB*>(instance)->getWTA_K();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ORB::setScoreType
// as:     cv::ORB::setScoreType (method) cv::ORB (trait) . setScoreType
// Arg ARG ORB::ScoreType (enum) scoreType= ORB::ScoreType (enum) = 
// Return value: Primitive(void)
cv_return_value_void cv_ORB_setScoreType_ORB_ScoreType(void* instance, ORB::ScoreType scoreType) {
    try {
        reinterpret_cast<cv::ORB*>(instance)->setScoreType(*reinterpret_cast<ORB::ScoreType*>(&scoreType));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ORB::getScoreType
// as:     cv::ORB::getScoreType (method) cv::ORB (trait) . getScoreType
// Return value: ORB::ScoreType (enum)
cv_return_value_ORB_ScoreType cv_ORB_getScoreType_const(void* instance) {
    try {
        ORB::ScoreType ret = reinterpret_cast<cv::ORB*>(instance)->getScoreType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_ORB_ScoreType)
}

// parsed: cv::ORB::setPatchSize
// as:     cv::ORB::setPatchSize (method) cv::ORB (trait) . setPatchSize
// Arg ARG Primitive(int) patchSize= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ORB_setPatchSize_int(void* instance, int patchSize) {
    try {
        reinterpret_cast<cv::ORB*>(instance)->setPatchSize(patchSize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ORB::getPatchSize
// as:     cv::ORB::getPatchSize (method) cv::ORB (trait) . getPatchSize
// Return value: Primitive(int)
cv_return_value_int cv_ORB_getPatchSize_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ORB*>(instance)->getPatchSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ORB::setFastThreshold
// as:     cv::ORB::setFastThreshold (method) cv::ORB (trait) . setFastThreshold
// Arg ARG Primitive(int) fastThreshold= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ORB_setFastThreshold_int(void* instance, int fastThreshold) {
    try {
        reinterpret_cast<cv::ORB*>(instance)->setFastThreshold(fastThreshold);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ORB::getFastThreshold
// as:     cv::ORB::getFastThreshold (method) cv::ORB (trait) . getFastThreshold
// Return value: Primitive(int)
cv_return_value_int cv_ORB_getFastThreshold_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ORB*>(instance)->getFastThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ORB::getDefaultName
// as:     cv::ORB::getDefaultName (method) cv::ORB (trait) . getDefaultName
// Return value: string
cv_return_value_char_X cv_ORB_getDefaultName_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::ORB*>(instance)->getDefaultName();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::ORB::create
// as:     cv::ORB::create (method) cv::ORB (trait) . create
// Arg ARG Primitive(int) nfeatures= Primitive(int) = 500
// Arg ARG Primitive(float) scaleFactor= Primitive(float) = 1.2f
// Arg ARG Primitive(int) nlevels= Primitive(int) = 8
// Arg ARG Primitive(int) edgeThreshold= Primitive(int) = 31
// Arg ARG Primitive(int) firstLevel= Primitive(int) = 0
// Arg ARG Primitive(int) WTA_K= Primitive(int) = 2
// Arg ARG ORB::ScoreType (enum) scoreType= ORB::ScoreType (enum) = ORB::HARRIS_SCORE
// Arg ARG Primitive(int) patchSize= Primitive(int) = 31
// Arg ARG Primitive(int) fastThreshold= Primitive(int) = 20
// Return value: SmartPtr[cv::ORB (boxed)]
cv_return_value_void_X cv_ORB_create_int_float_int_int_int_int_ORB_ScoreType_int_int(int nfeatures, float scaleFactor, int nlevels, int edgeThreshold, int firstLevel, int WTA_K, ORB::ScoreType scoreType, int patchSize, int fastThreshold) {
    try {
        Ptr<cv::ORB> ret = cv::ORB::create(nfeatures, scaleFactor, nlevels, edgeThreshold, firstLevel, WTA_K, *reinterpret_cast<ORB::ScoreType*>(&scoreType), patchSize, fastThreshold);
        return { Error::Code::StsOk, NULL, new Ptr<cv::ORB>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ORB::create
// as:     cv::ORB::create (method) cv::ORB (trait) . create
// Return value: SmartPtr[cv::ORB (boxed)]
cv_return_value_void_X cv_ORB_create() {
    try {
        Ptr<cv::ORB> ret = cv::ORB::create();
        return { Error::Code::StsOk, NULL, new Ptr<cv::ORB>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::SimpleBlobDetector
void cv_SimpleBlobDetector_delete(void* instance) {
    delete reinterpret_cast<cv::SimpleBlobDetector*>(instance);
}
// parsed: cv::SimpleBlobDetector::create
// as:     cv::SimpleBlobDetector::create (method) cv::SimpleBlobDetector . create
// Arg ARG cv::SimpleBlobDetector::Params (simple) parameters= cv::SimpleBlobDetector::Params (simple) = SimpleBlobDetector::Params()
// Return value: SmartPtr[cv::SimpleBlobDetector (boxed)]
cv_return_value_void_X cv_SimpleBlobDetector_create_SimpleBlobDetector_Params(cv::SimpleBlobDetector::Params parameters) {
    try {
        Ptr<cv::SimpleBlobDetector> ret = cv::SimpleBlobDetector::create(*reinterpret_cast<const cv::SimpleBlobDetector::Params*>(&parameters));
        return { Error::Code::StsOk, NULL, new Ptr<cv::SimpleBlobDetector>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::SimpleBlobDetector::getDefaultName
// as:     cv::SimpleBlobDetector::getDefaultName (method) cv::SimpleBlobDetector . getDefaultName
// Return value: string
cv_return_value_char_X cv_SimpleBlobDetector_getDefaultName_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::SimpleBlobDetector*>(instance)->getDefaultName();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::SimpleBlobDetector::Params::Params
// as:     cv::SimpleBlobDetector::Params::Params (constructor) cv::SimpleBlobDetector::Params (simple) . default
// Return value: cv::SimpleBlobDetector::Params (simple)
cv_return_value_SimpleBlobDetector_Params cv_SimpleBlobDetector_Params_Params() {
    try {
        cv::SimpleBlobDetector::Params ret;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_SimpleBlobDetector_Params)
}

// parsed: cv::SimpleBlobDetector::Params::read
// as:     cv::SimpleBlobDetector::Params::read (method) cv::SimpleBlobDetector::Params (simple) . read
// Arg ARG cv::FileNode (boxed) fn= cv::FileNode (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_SimpleBlobDetector_Params_read_FileNode(cv::SimpleBlobDetector::Params instance, void* fn) {
    try {
        reinterpret_cast<cv::SimpleBlobDetector::Params*>(&instance)->read(*reinterpret_cast<const cv::FileNode*>(fn));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SimpleBlobDetector::Params::write
// as:     cv::SimpleBlobDetector::Params::write (method) cv::SimpleBlobDetector::Params (simple) . write
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_SimpleBlobDetector_Params_write_const_FileStorage(cv::SimpleBlobDetector::Params instance, void* fs) {
    try {
        reinterpret_cast<cv::SimpleBlobDetector::Params*>(&instance)->write(*reinterpret_cast<cv::FileStorage*>(fs));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}



} // extern "C"

