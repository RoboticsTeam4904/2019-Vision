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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/objdetect.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/objdetect/detection_based_tracker.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/objdetect/objdetect.hpp"

extern "C" {

// parsed: cv::createFaceDetectionMaskGenerator
// as:     cv::createFaceDetectionMaskGenerator (function)
// Return value: SmartPtr[cv::BaseCascadeClassifier::MaskGenerator (boxed)]
cv_return_value_void_X cv_createFaceDetectionMaskGenerator() {
    try {
        Ptr<cv::BaseCascadeClassifier::MaskGenerator> ret = cv::createFaceDetectionMaskGenerator();
        return { Error::Code::StsOk, NULL, new Ptr<cv::BaseCascadeClassifier::MaskGenerator>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::groupRectangles
// as:     cv::groupRectangles (function)
// Arg ARG Vector[cv::Rect (simple)] rectList= Vector[cv::Rect (simple)] = 
// Arg ARG Vector[Primitive(int)] rejectLevels= Vector[Primitive(int)] = 
// Arg ARG Vector[Primitive(double)] levelWeights= Vector[Primitive(double)] = 
// Arg ARG Primitive(int) groupThreshold= Primitive(int) = 
// Arg ARG Primitive(double) eps= Primitive(double) = 0.2
// Return value: Primitive(void)
cv_return_value_void cv_groupRectangles_VectorOfRect_VectorOfint_VectorOfdouble_int_double(void* rectList, void* rejectLevels, void* levelWeights, int groupThreshold, double eps) {
    try {
        cv::groupRectangles(*reinterpret_cast<std::vector<cv::Rect>*>(rectList), *reinterpret_cast<std::vector<int>*>(rejectLevels), *reinterpret_cast<std::vector<double>*>(levelWeights), groupThreshold, eps);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::groupRectangles
// as:     cv::groupRectangles (function)
// Arg ARG Vector[cv::Rect (simple)] rectList= Vector[cv::Rect (simple)] = 
// Arg ARG Vector[Primitive(int)] weights= Vector[Primitive(int)] = 
// Arg ARG Primitive(int) groupThreshold= Primitive(int) = 
// Arg ARG Primitive(double) eps= Primitive(double) = 0.2
// Return value: Primitive(void)
cv_return_value_void cv_groupRectangles_VectorOfRect_VectorOfint_int_double(void* rectList, void* weights, int groupThreshold, double eps) {
    try {
        cv::groupRectangles(*reinterpret_cast<std::vector<cv::Rect>*>(rectList), *reinterpret_cast<std::vector<int>*>(weights), groupThreshold, eps);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::groupRectangles
// as:     cv::groupRectangles (function)
// Arg ARG Vector[cv::Rect (simple)] rectList= Vector[cv::Rect (simple)] = 
// Arg ARG Primitive(int) groupThreshold= Primitive(int) = 
// Arg ARG Primitive(double) eps= Primitive(double) = 0.2
// Return value: Primitive(void)
cv_return_value_void cv_groupRectangles_VectorOfRect_int_double(void* rectList, int groupThreshold, double eps) {
    try {
        cv::groupRectangles(*reinterpret_cast<std::vector<cv::Rect>*>(rectList), groupThreshold, eps);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::groupRectangles
// as:     cv::groupRectangles (function)
// Arg ARG Vector[cv::Rect (simple)] rectList= Vector[cv::Rect (simple)] = 
// Arg ARG Primitive(int) groupThreshold= Primitive(int) = 
// Arg ARG Primitive(double) eps= Primitive(double) = 
// Arg ARG RawPtr[Vector[Primitive(int)]] * weights= (ptr) RawPtr[Vector[Primitive(int)]] = 
// Arg ARG RawPtr[Vector[Primitive(double)]] * levelWeights= (ptr) RawPtr[Vector[Primitive(double)]] = 
// Return value: Primitive(void)
cv_return_value_void cv_groupRectangles_VectorOfRect_int_double_VectorOfint_VectorOfdouble(void* rectList, int groupThreshold, double eps, void* weights, void* levelWeights) {
    try {
        cv::groupRectangles(*reinterpret_cast<std::vector<cv::Rect>*>(rectList), groupThreshold, eps, reinterpret_cast<std::vector<int>*>(weights), reinterpret_cast<std::vector<double>*>(levelWeights));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::groupRectangles_meanshift
// as:     cv::groupRectangles_meanshift (function)
// Arg ARG Vector[cv::Rect (simple)] rectList= Vector[cv::Rect (simple)] = 
// Arg ARG Vector[Primitive(double)] foundWeights= Vector[Primitive(double)] = 
// Arg ARG Vector[Primitive(double)] foundScales= Vector[Primitive(double)] = 
// Arg ARG Primitive(double) detectThreshold= Primitive(double) = 0.0
// Arg ARG cv::Size (simple) winDetSize= cv::Size (simple) = Size(64, 128)
// Return value: Primitive(void)
cv_return_value_void cv_groupRectangles_meanshift_VectorOfRect_VectorOfdouble_VectorOfdouble_double_Size(void* rectList, void* foundWeights, void* foundScales, double detectThreshold, SizeWrapper winDetSize) {
    try {
        cv::groupRectangles_meanshift(*reinterpret_cast<std::vector<cv::Rect>*>(rectList), *reinterpret_cast<std::vector<double>*>(foundWeights), *reinterpret_cast<std::vector<double>*>(foundScales), detectThreshold, *reinterpret_cast<cv::Size*>(&winDetSize));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BaseCascadeClassifier::empty
// as:     cv::BaseCascadeClassifier::empty (method) cv::BaseCascadeClassifier (trait) . empty
// Return value: Primitive(bool)
cv_return_value_bool cv_BaseCascadeClassifier_empty_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::BaseCascadeClassifier*>(instance)->empty();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::BaseCascadeClassifier::load
// as:     cv::BaseCascadeClassifier::load (method) cv::BaseCascadeClassifier (trait) . load
// Arg ARG string filename= string = 
// Return value: Primitive(bool)
cv_return_value_bool cv_BaseCascadeClassifier_load_String(void* instance, const char* filename) {
    try {
        bool ret = reinterpret_cast<cv::BaseCascadeClassifier*>(instance)->load(String(filename));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::BaseCascadeClassifier::detectMultiScale
// as:     cv::BaseCascadeClassifier::detectMultiScale (method) cv::BaseCascadeClassifier (trait) . detectMultiScale
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::Rect (simple)] objects= Vector[cv::Rect (simple)] = 
// Arg ARG Primitive(double) scaleFactor= Primitive(double) = 
// Arg ARG Primitive(int) minNeighbors= Primitive(int) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG cv::Size (simple) minSize= cv::Size (simple) = 
// Arg ARG cv::Size (simple) maxSize= cv::Size (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_BaseCascadeClassifier_detectMultiScale__InputArray_VectorOfRect_double_int_int_Size_Size(void* instance, void* image, void* objects, double scaleFactor, int minNeighbors, int flags, SizeWrapper minSize, SizeWrapper maxSize) {
    try {
        reinterpret_cast<cv::BaseCascadeClassifier*>(instance)->detectMultiScale(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<std::vector<cv::Rect>*>(objects), scaleFactor, minNeighbors, flags, *reinterpret_cast<cv::Size*>(&minSize), *reinterpret_cast<cv::Size*>(&maxSize));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BaseCascadeClassifier::detectMultiScale
// as:     cv::BaseCascadeClassifier::detectMultiScale (method) cv::BaseCascadeClassifier (trait) . detectMultiScale
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::Rect (simple)] objects= Vector[cv::Rect (simple)] = 
// Arg ARG Vector[Primitive(int)] numDetections= Vector[Primitive(int)] = 
// Arg ARG Primitive(double) scaleFactor= Primitive(double) = 
// Arg ARG Primitive(int) minNeighbors= Primitive(int) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG cv::Size (simple) minSize= cv::Size (simple) = 
// Arg ARG cv::Size (simple) maxSize= cv::Size (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_BaseCascadeClassifier_detectMultiScale__InputArray_VectorOfRect_VectorOfint_double_int_int_Size_Size(void* instance, void* image, void* objects, void* numDetections, double scaleFactor, int minNeighbors, int flags, SizeWrapper minSize, SizeWrapper maxSize) {
    try {
        reinterpret_cast<cv::BaseCascadeClassifier*>(instance)->detectMultiScale(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<std::vector<cv::Rect>*>(objects), *reinterpret_cast<std::vector<int>*>(numDetections), scaleFactor, minNeighbors, flags, *reinterpret_cast<cv::Size*>(&minSize), *reinterpret_cast<cv::Size*>(&maxSize));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BaseCascadeClassifier::detectMultiScale
// as:     cv::BaseCascadeClassifier::detectMultiScale (method) cv::BaseCascadeClassifier (trait) . detectMultiScale
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::Rect (simple)] objects= Vector[cv::Rect (simple)] = 
// Arg ARG Vector[Primitive(int)] rejectLevels= Vector[Primitive(int)] = 
// Arg ARG Vector[Primitive(double)] levelWeights= Vector[Primitive(double)] = 
// Arg ARG Primitive(double) scaleFactor= Primitive(double) = 
// Arg ARG Primitive(int) minNeighbors= Primitive(int) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG cv::Size (simple) minSize= cv::Size (simple) = 
// Arg ARG cv::Size (simple) maxSize= cv::Size (simple) = 
// Arg ARG Primitive(bool) outputRejectLevels= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_BaseCascadeClassifier_detectMultiScale__InputArray_VectorOfRect_VectorOfint_VectorOfdouble_double_int_int_Size_Size_bool(void* instance, void* image, void* objects, void* rejectLevels, void* levelWeights, double scaleFactor, int minNeighbors, int flags, SizeWrapper minSize, SizeWrapper maxSize, bool outputRejectLevels) {
    try {
        reinterpret_cast<cv::BaseCascadeClassifier*>(instance)->detectMultiScale(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<std::vector<cv::Rect>*>(objects), *reinterpret_cast<std::vector<int>*>(rejectLevels), *reinterpret_cast<std::vector<double>*>(levelWeights), scaleFactor, minNeighbors, flags, *reinterpret_cast<cv::Size*>(&minSize), *reinterpret_cast<cv::Size*>(&maxSize), outputRejectLevels);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BaseCascadeClassifier::isOldFormatCascade
// as:     cv::BaseCascadeClassifier::isOldFormatCascade (method) cv::BaseCascadeClassifier (trait) . isOldFormatCascade
// Return value: Primitive(bool)
cv_return_value_bool cv_BaseCascadeClassifier_isOldFormatCascade_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::BaseCascadeClassifier*>(instance)->isOldFormatCascade();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::BaseCascadeClassifier::getOriginalWindowSize
// as:     cv::BaseCascadeClassifier::getOriginalWindowSize (method) cv::BaseCascadeClassifier (trait) . getOriginalWindowSize
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_BaseCascadeClassifier_getOriginalWindowSize_const(void* instance) {
    try {
        cv::Size ret = reinterpret_cast<cv::BaseCascadeClassifier*>(instance)->getOriginalWindowSize();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::BaseCascadeClassifier::getFeatureType
// as:     cv::BaseCascadeClassifier::getFeatureType (method) cv::BaseCascadeClassifier (trait) . getFeatureType
// Return value: Primitive(int)
cv_return_value_int cv_BaseCascadeClassifier_getFeatureType_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::BaseCascadeClassifier*>(instance)->getFeatureType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::BaseCascadeClassifier::getOldCascade
// as:     cv::BaseCascadeClassifier::getOldCascade (method) cv::BaseCascadeClassifier (trait) . getOldCascade
// Return value: RawPtr[Primitive(void)]
cv_return_value_void_X cv_BaseCascadeClassifier_getOldCascade(void* instance) {
    try {
        void* ret = reinterpret_cast<cv::BaseCascadeClassifier*>(instance)->getOldCascade();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::BaseCascadeClassifier::setMaskGenerator
// as:     cv::BaseCascadeClassifier::setMaskGenerator (method) cv::BaseCascadeClassifier (trait) . setMaskGenerator
// Arg ARG SmartPtr[cv::BaseCascadeClassifier::MaskGenerator (boxed)] maskGenerator= SmartPtr[cv::BaseCascadeClassifier::MaskGenerator (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_BaseCascadeClassifier_setMaskGenerator_PtrOfMaskGenerator(void* instance, void* maskGenerator) {
    try {
        reinterpret_cast<cv::BaseCascadeClassifier*>(instance)->setMaskGenerator(*reinterpret_cast<const Ptr<cv::BaseCascadeClassifier::MaskGenerator>*>(maskGenerator));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BaseCascadeClassifier::getMaskGenerator
// as:     cv::BaseCascadeClassifier::getMaskGenerator (method) cv::BaseCascadeClassifier (trait) . getMaskGenerator
// Return value: SmartPtr[cv::BaseCascadeClassifier::MaskGenerator (boxed)]
cv_return_value_void_X cv_BaseCascadeClassifier_getMaskGenerator(void* instance) {
    try {
        Ptr<cv::BaseCascadeClassifier::MaskGenerator> ret = reinterpret_cast<cv::BaseCascadeClassifier*>(instance)->getMaskGenerator();
        return { Error::Code::StsOk, NULL, new Ptr<cv::BaseCascadeClassifier::MaskGenerator>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::BaseCascadeClassifier::MaskGenerator::generateMask
// as:     cv::BaseCascadeClassifier::MaskGenerator::generateMask (method) cv::BaseCascadeClassifier::MaskGenerator (trait) . generateMask
// Arg ARG cv::Mat (boxed) src= cv::Mat (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_BaseCascadeClassifier_MaskGenerator_generateMask_Mat(void* instance, void* src) {
    try {
        cv::Mat ret = reinterpret_cast<cv::BaseCascadeClassifier::MaskGenerator*>(instance)->generateMask(*reinterpret_cast<const cv::Mat*>(src));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::BaseCascadeClassifier::MaskGenerator::initializeMask
// as:     cv::BaseCascadeClassifier::MaskGenerator::initializeMask (method) cv::BaseCascadeClassifier::MaskGenerator (trait) . initializeMask
// Arg ARG cv::Mat (boxed) unnamed_arg= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_BaseCascadeClassifier_MaskGenerator_initializeMask_Mat(void* instance, void* unnamed_arg) {
    try {
        reinterpret_cast<cv::BaseCascadeClassifier::MaskGenerator*>(instance)->initializeMask(*reinterpret_cast<const cv::Mat*>(unnamed_arg));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::CascadeClassifier
void cv_CascadeClassifier_delete(void* instance) {
    delete reinterpret_cast<cv::CascadeClassifier*>(instance);
}
// parsed: cv::CascadeClassifier::CascadeClassifier
// as:     cv::CascadeClassifier::CascadeClassifier (constructor) cv::CascadeClassifier . default
// Return value: cv::CascadeClassifier (boxed)
cv_return_value_void_X cv_CascadeClassifier_CascadeClassifier() {
    try {
        cv::CascadeClassifier* ret = new cv::CascadeClassifier();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::CascadeClassifier::CascadeClassifier
// as:     cv::CascadeClassifier::CascadeClassifier (constructor) cv::CascadeClassifier . new
// Arg ARG string filename= string = 
// Return value: cv::CascadeClassifier (boxed)
cv_return_value_void_X cv_CascadeClassifier_CascadeClassifier_String(const char* filename) {
    try {
        cv::CascadeClassifier* ret = new cv::CascadeClassifier(String(filename));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::CascadeClassifier::empty
// as:     cv::CascadeClassifier::empty (method) cv::CascadeClassifier . empty
// Return value: Primitive(bool)
cv_return_value_bool cv_CascadeClassifier_empty_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::CascadeClassifier*>(instance)->empty();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::CascadeClassifier::load
// as:     cv::CascadeClassifier::load (method) cv::CascadeClassifier . load
// Arg ARG string filename= string = 
// Return value: Primitive(bool)
cv_return_value_bool cv_CascadeClassifier_load_String(void* instance, const char* filename) {
    try {
        bool ret = reinterpret_cast<cv::CascadeClassifier*>(instance)->load(String(filename));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::CascadeClassifier::read
// as:     cv::CascadeClassifier::read (method) cv::CascadeClassifier . read
// Arg ARG cv::FileNode (boxed) node= cv::FileNode (boxed) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_CascadeClassifier_read_FileNode(void* instance, void* node) {
    try {
        bool ret = reinterpret_cast<cv::CascadeClassifier*>(instance)->read(*reinterpret_cast<const cv::FileNode*>(node));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::CascadeClassifier::detectMultiScale
// as:     cv::CascadeClassifier::detectMultiScale (method) cv::CascadeClassifier . detectMultiScale
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::Rect (simple)] objects= Vector[cv::Rect (simple)] = 
// Arg ARG Primitive(double) scaleFactor= Primitive(double) = 1.1
// Arg ARG Primitive(int) minNeighbors= Primitive(int) = 3
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Arg ARG cv::Size (simple) minSize= cv::Size (simple) = Size()
// Arg ARG cv::Size (simple) maxSize= cv::Size (simple) = Size()
// Return value: Primitive(void)
cv_return_value_void cv_CascadeClassifier_detectMultiScale__InputArray_VectorOfRect_double_int_int_Size_Size(void* instance, void* image, void* objects, double scaleFactor, int minNeighbors, int flags, SizeWrapper minSize, SizeWrapper maxSize) {
    try {
        reinterpret_cast<cv::CascadeClassifier*>(instance)->detectMultiScale(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<std::vector<cv::Rect>*>(objects), scaleFactor, minNeighbors, flags, *reinterpret_cast<cv::Size*>(&minSize), *reinterpret_cast<cv::Size*>(&maxSize));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::CascadeClassifier::detectMultiScale
// as:     cv::CascadeClassifier::detectMultiScale (method) cv::CascadeClassifier . detectMultiScale
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::Rect (simple)] objects= Vector[cv::Rect (simple)] = 
// Arg ARG Vector[Primitive(int)] numDetections= Vector[Primitive(int)] = 
// Arg ARG Primitive(double) scaleFactor= Primitive(double) = 1.1
// Arg ARG Primitive(int) minNeighbors= Primitive(int) = 3
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Arg ARG cv::Size (simple) minSize= cv::Size (simple) = Size()
// Arg ARG cv::Size (simple) maxSize= cv::Size (simple) = Size()
// Return value: Primitive(void)
cv_return_value_void cv_CascadeClassifier_detectMultiScale__InputArray_VectorOfRect_VectorOfint_double_int_int_Size_Size(void* instance, void* image, void* objects, void* numDetections, double scaleFactor, int minNeighbors, int flags, SizeWrapper minSize, SizeWrapper maxSize) {
    try {
        reinterpret_cast<cv::CascadeClassifier*>(instance)->detectMultiScale(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<std::vector<cv::Rect>*>(objects), *reinterpret_cast<std::vector<int>*>(numDetections), scaleFactor, minNeighbors, flags, *reinterpret_cast<cv::Size*>(&minSize), *reinterpret_cast<cv::Size*>(&maxSize));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::CascadeClassifier::detectMultiScale
// as:     cv::CascadeClassifier::detectMultiScale (method) cv::CascadeClassifier . detectMultiScale
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::Rect (simple)] objects= Vector[cv::Rect (simple)] = 
// Arg ARG Vector[Primitive(int)] rejectLevels= Vector[Primitive(int)] = 
// Arg ARG Vector[Primitive(double)] levelWeights= Vector[Primitive(double)] = 
// Arg ARG Primitive(double) scaleFactor= Primitive(double) = 1.1
// Arg ARG Primitive(int) minNeighbors= Primitive(int) = 3
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Arg ARG cv::Size (simple) minSize= cv::Size (simple) = Size()
// Arg ARG cv::Size (simple) maxSize= cv::Size (simple) = Size()
// Arg ARG Primitive(bool) outputRejectLevels= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_CascadeClassifier_detectMultiScale__InputArray_VectorOfRect_VectorOfint_VectorOfdouble_double_int_int_Size_Size_bool(void* instance, void* image, void* objects, void* rejectLevels, void* levelWeights, double scaleFactor, int minNeighbors, int flags, SizeWrapper minSize, SizeWrapper maxSize, bool outputRejectLevels) {
    try {
        reinterpret_cast<cv::CascadeClassifier*>(instance)->detectMultiScale(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<std::vector<cv::Rect>*>(objects), *reinterpret_cast<std::vector<int>*>(rejectLevels), *reinterpret_cast<std::vector<double>*>(levelWeights), scaleFactor, minNeighbors, flags, *reinterpret_cast<cv::Size*>(&minSize), *reinterpret_cast<cv::Size*>(&maxSize), outputRejectLevels);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::CascadeClassifier::isOldFormatCascade
// as:     cv::CascadeClassifier::isOldFormatCascade (method) cv::CascadeClassifier . isOldFormatCascade
// Return value: Primitive(bool)
cv_return_value_bool cv_CascadeClassifier_isOldFormatCascade_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::CascadeClassifier*>(instance)->isOldFormatCascade();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::CascadeClassifier::getOriginalWindowSize
// as:     cv::CascadeClassifier::getOriginalWindowSize (method) cv::CascadeClassifier . getOriginalWindowSize
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_CascadeClassifier_getOriginalWindowSize_const(void* instance) {
    try {
        cv::Size ret = reinterpret_cast<cv::CascadeClassifier*>(instance)->getOriginalWindowSize();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::CascadeClassifier::getFeatureType
// as:     cv::CascadeClassifier::getFeatureType (method) cv::CascadeClassifier . getFeatureType
// Return value: Primitive(int)
cv_return_value_int cv_CascadeClassifier_getFeatureType_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::CascadeClassifier*>(instance)->getFeatureType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::CascadeClassifier::getOldCascade
// as:     cv::CascadeClassifier::getOldCascade (method) cv::CascadeClassifier . getOldCascade
// Return value: RawPtr[Primitive(void)]
cv_return_value_void_X cv_CascadeClassifier_getOldCascade(void* instance) {
    try {
        void* ret = reinterpret_cast<cv::CascadeClassifier*>(instance)->getOldCascade();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::CascadeClassifier::convert
// as:     cv::CascadeClassifier::convert (method) cv::CascadeClassifier . convert
// Arg ARG string oldcascade= string = 
// Arg ARG string newcascade= string = 
// Return value: Primitive(bool)
cv_return_value_bool cv_CascadeClassifier_convert_String_String(const char* oldcascade, const char* newcascade) {
    try {
        bool ret = cv::CascadeClassifier::convert(String(oldcascade), String(newcascade));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::CascadeClassifier::setMaskGenerator
// as:     cv::CascadeClassifier::setMaskGenerator (method) cv::CascadeClassifier . setMaskGenerator
// Arg ARG SmartPtr[cv::BaseCascadeClassifier::MaskGenerator (boxed)] maskGenerator= SmartPtr[cv::BaseCascadeClassifier::MaskGenerator (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_CascadeClassifier_setMaskGenerator_PtrOfMaskGenerator(void* instance, void* maskGenerator) {
    try {
        reinterpret_cast<cv::CascadeClassifier*>(instance)->setMaskGenerator(*reinterpret_cast<const Ptr<cv::BaseCascadeClassifier::MaskGenerator>*>(maskGenerator));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::CascadeClassifier::getMaskGenerator
// as:     cv::CascadeClassifier::getMaskGenerator (method) cv::CascadeClassifier . getMaskGenerator
// Return value: SmartPtr[cv::BaseCascadeClassifier::MaskGenerator (boxed)]
cv_return_value_void_X cv_CascadeClassifier_getMaskGenerator(void* instance) {
    try {
        Ptr<cv::BaseCascadeClassifier::MaskGenerator> ret = reinterpret_cast<cv::CascadeClassifier*>(instance)->getMaskGenerator();
        return { Error::Code::StsOk, NULL, new Ptr<cv::BaseCascadeClassifier::MaskGenerator>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::DetectionBasedTracker
void cv_DetectionBasedTracker_delete(void* instance) {
    delete reinterpret_cast<cv::DetectionBasedTracker*>(instance);
}
// parsed: cv::DetectionBasedTracker::run
// as:     cv::DetectionBasedTracker::run (method) cv::DetectionBasedTracker . run
// Return value: Primitive(bool)
cv_return_value_bool cv_DetectionBasedTracker_run(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::DetectionBasedTracker*>(instance)->run();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::DetectionBasedTracker::stop
// as:     cv::DetectionBasedTracker::stop (method) cv::DetectionBasedTracker . stop
// Return value: Primitive(void)
cv_return_value_void cv_DetectionBasedTracker_stop(void* instance) {
    try {
        reinterpret_cast<cv::DetectionBasedTracker*>(instance)->stop();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DetectionBasedTracker::resetTracking
// as:     cv::DetectionBasedTracker::resetTracking (method) cv::DetectionBasedTracker . resetTracking
// Return value: Primitive(void)
cv_return_value_void cv_DetectionBasedTracker_resetTracking(void* instance) {
    try {
        reinterpret_cast<cv::DetectionBasedTracker*>(instance)->resetTracking();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DetectionBasedTracker::process
// as:     cv::DetectionBasedTracker::process (method) cv::DetectionBasedTracker . process
// Arg ARG cv::Mat (boxed) imageGray= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_DetectionBasedTracker_process_Mat(void* instance, void* imageGray) {
    try {
        reinterpret_cast<cv::DetectionBasedTracker*>(instance)->process(*reinterpret_cast<const cv::Mat*>(imageGray));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DetectionBasedTracker::setParameters
// as:     cv::DetectionBasedTracker::setParameters (method) cv::DetectionBasedTracker . setParameters
// Arg ARG cv::DetectionBasedTracker::Parameters (boxed) params= cv::DetectionBasedTracker::Parameters (boxed) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_DetectionBasedTracker_setParameters_Parameters(void* instance, void* params) {
    try {
        bool ret = reinterpret_cast<cv::DetectionBasedTracker*>(instance)->setParameters(*reinterpret_cast<const cv::DetectionBasedTracker::Parameters*>(params));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::DetectionBasedTracker::getParameters
// as:     cv::DetectionBasedTracker::getParameters (method) cv::DetectionBasedTracker . getParameters
// Return value: cv::DetectionBasedTracker::Parameters (boxed)
cv_return_value_void_X cv_DetectionBasedTracker_getParameters_const(void* instance) {
    try {
        cv::DetectionBasedTracker::Parameters ret = reinterpret_cast<cv::DetectionBasedTracker*>(instance)->getParameters();
        return { Error::Code::StsOk, NULL, new cv::DetectionBasedTracker::Parameters(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::DetectionBasedTracker::getObjects
// as:     cv::DetectionBasedTracker::getObjects (method) cv::DetectionBasedTracker . getObjects
// Arg ARG Vector[cv::Rect (simple)] result= Vector[cv::Rect (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_DetectionBasedTracker_getObjects_const_VectorOfRect(void* instance, void* result) {
    try {
        reinterpret_cast<cv::DetectionBasedTracker*>(instance)->getObjects(*reinterpret_cast<std::vector<cv::Rect>*>(result));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DetectionBasedTracker::getObjects
// as:     cv::DetectionBasedTracker::getObjects (method) cv::DetectionBasedTracker . getObjects
// Arg ARG Vector[cv::DetectionBasedTracker::ExtObject (boxed)] result= Vector[cv::DetectionBasedTracker::ExtObject (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_DetectionBasedTracker_getObjects_const_VectorOfExtObject(void* instance, void* result) {
    try {
        reinterpret_cast<cv::DetectionBasedTracker*>(instance)->getObjects(*reinterpret_cast<std::vector<cv::DetectionBasedTracker::ExtObject>*>(result));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DetectionBasedTracker::addObject
// as:     cv::DetectionBasedTracker::addObject (method) cv::DetectionBasedTracker . addObject
// Arg ARG cv::Rect (simple) location= cv::Rect (simple) = 
// Return value: Primitive(int)
cv_return_value_int cv_DetectionBasedTracker_addObject_Rect(void* instance, RectWrapper location) {
    try {
        int ret = reinterpret_cast<cv::DetectionBasedTracker*>(instance)->addObject(*reinterpret_cast<const cv::Rect*>(&location));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// boxed class: cv::DetectionBasedTracker::ExtObject
void cv_DetectionBasedTracker_ExtObject_delete(void* instance) {
    delete reinterpret_cast<cv::DetectionBasedTracker::ExtObject*>(instance);
}
// parsed: cv::DetectionBasedTracker::ExtObject::ExtObject
// as:     cv::DetectionBasedTracker::ExtObject::ExtObject (constructor) cv::DetectionBasedTracker::ExtObject . new
// Arg ARG Primitive(int) _id= Primitive(int) = 
// Arg ARG cv::Rect (simple) _location= cv::Rect (simple) = 
// Arg ARG DetectionBasedTracker::ObjectStatus (enum) _status= DetectionBasedTracker::ObjectStatus (enum) = 
// Return value: cv::DetectionBasedTracker::ExtObject (boxed)
cv_return_value_void_X cv_DetectionBasedTracker_ExtObject_ExtObject_int_Rect_DetectionBasedTracker_ObjectStatus(int _id, RectWrapper _location, DetectionBasedTracker::ObjectStatus _status) {
    try {
        cv::DetectionBasedTracker::ExtObject* ret = new cv::DetectionBasedTracker::ExtObject(_id, *reinterpret_cast<cv::Rect*>(&_location), *reinterpret_cast<DetectionBasedTracker::ObjectStatus*>(&_status));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::DetectionBasedTracker::IDetector::detect
// as:     cv::DetectionBasedTracker::IDetector::detect (method) cv::DetectionBasedTracker::IDetector (trait) . detect
// Arg ARG cv::Mat (boxed) image= cv::Mat (boxed) = 
// Arg ARG Vector[cv::Rect (simple)] objects= Vector[cv::Rect (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_DetectionBasedTracker_IDetector_detect_Mat_VectorOfRect(void* instance, void* image, void* objects) {
    try {
        reinterpret_cast<cv::DetectionBasedTracker::IDetector*>(instance)->detect(*reinterpret_cast<const cv::Mat*>(image), *reinterpret_cast<std::vector<cv::Rect>*>(objects));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DetectionBasedTracker::IDetector::setMinObjectSize
// as:     cv::DetectionBasedTracker::IDetector::setMinObjectSize (method) cv::DetectionBasedTracker::IDetector (trait) . setMinObjectSize
// Arg ARG cv::Size (simple) min= cv::Size (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_DetectionBasedTracker_IDetector_setMinObjectSize_Size(void* instance, SizeWrapper min) {
    try {
        reinterpret_cast<cv::DetectionBasedTracker::IDetector*>(instance)->setMinObjectSize(*reinterpret_cast<const cv::Size*>(&min));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DetectionBasedTracker::IDetector::setMaxObjectSize
// as:     cv::DetectionBasedTracker::IDetector::setMaxObjectSize (method) cv::DetectionBasedTracker::IDetector (trait) . setMaxObjectSize
// Arg ARG cv::Size (simple) max= cv::Size (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_DetectionBasedTracker_IDetector_setMaxObjectSize_Size(void* instance, SizeWrapper max) {
    try {
        reinterpret_cast<cv::DetectionBasedTracker::IDetector*>(instance)->setMaxObjectSize(*reinterpret_cast<const cv::Size*>(&max));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DetectionBasedTracker::IDetector::getMinObjectSize
// as:     cv::DetectionBasedTracker::IDetector::getMinObjectSize (method) cv::DetectionBasedTracker::IDetector (trait) . getMinObjectSize
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_DetectionBasedTracker_IDetector_getMinObjectSize_const(void* instance) {
    try {
        cv::Size ret = reinterpret_cast<cv::DetectionBasedTracker::IDetector*>(instance)->getMinObjectSize();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::DetectionBasedTracker::IDetector::getMaxObjectSize
// as:     cv::DetectionBasedTracker::IDetector::getMaxObjectSize (method) cv::DetectionBasedTracker::IDetector (trait) . getMaxObjectSize
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_DetectionBasedTracker_IDetector_getMaxObjectSize_const(void* instance) {
    try {
        cv::Size ret = reinterpret_cast<cv::DetectionBasedTracker::IDetector*>(instance)->getMaxObjectSize();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::DetectionBasedTracker::IDetector::getScaleFactor
// as:     cv::DetectionBasedTracker::IDetector::getScaleFactor (method) cv::DetectionBasedTracker::IDetector (trait) . getScaleFactor
// Return value: Primitive(float)
cv_return_value_float cv_DetectionBasedTracker_IDetector_getScaleFactor(void* instance) {
    try {
        float ret = reinterpret_cast<cv::DetectionBasedTracker::IDetector*>(instance)->getScaleFactor();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::DetectionBasedTracker::IDetector::setScaleFactor
// as:     cv::DetectionBasedTracker::IDetector::setScaleFactor (method) cv::DetectionBasedTracker::IDetector (trait) . setScaleFactor
// Arg ARG Primitive(float) value= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_DetectionBasedTracker_IDetector_setScaleFactor_float(void* instance, float value) {
    try {
        reinterpret_cast<cv::DetectionBasedTracker::IDetector*>(instance)->setScaleFactor(value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DetectionBasedTracker::IDetector::getMinNeighbours
// as:     cv::DetectionBasedTracker::IDetector::getMinNeighbours (method) cv::DetectionBasedTracker::IDetector (trait) . getMinNeighbours
// Return value: Primitive(int)
cv_return_value_int cv_DetectionBasedTracker_IDetector_getMinNeighbours(void* instance) {
    try {
        int ret = reinterpret_cast<cv::DetectionBasedTracker::IDetector*>(instance)->getMinNeighbours();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::DetectionBasedTracker::IDetector::setMinNeighbours
// as:     cv::DetectionBasedTracker::IDetector::setMinNeighbours (method) cv::DetectionBasedTracker::IDetector (trait) . setMinNeighbours
// Arg ARG Primitive(int) value= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_DetectionBasedTracker_IDetector_setMinNeighbours_int(void* instance, int value) {
    try {
        reinterpret_cast<cv::DetectionBasedTracker::IDetector*>(instance)->setMinNeighbours(value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::DetectionBasedTracker::Parameters
void cv_DetectionBasedTracker_Parameters_delete(void* instance) {
    delete reinterpret_cast<cv::DetectionBasedTracker::Parameters*>(instance);
}
// parsed: cv::DetectionBasedTracker::Parameters::Parameters
// as:     cv::DetectionBasedTracker::Parameters::Parameters (constructor) cv::DetectionBasedTracker::Parameters . default
// Return value: cv::DetectionBasedTracker::Parameters (boxed)
cv_return_value_void_X cv_DetectionBasedTracker_Parameters_Parameters() {
    try {
        cv::DetectionBasedTracker::Parameters* ret = new cv::DetectionBasedTracker::Parameters();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::DetectionROI
void cv_DetectionROI_delete(void* instance) {
    delete reinterpret_cast<cv::DetectionROI*>(instance);
}
// boxed class: cv::HOGDescriptor
void cv_HOGDescriptor_delete(void* instance) {
    delete reinterpret_cast<cv::HOGDescriptor*>(instance);
}
// parsed: cv::HOGDescriptor::winSize
// as:     cv::HOGDescriptor::winSize (method) cv::HOGDescriptor . winSize
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_HOGDescriptor_winSize_const(void* instance) {
    try {
        cv::Size ret = reinterpret_cast<cv::HOGDescriptor*>(instance)->winSize;
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::HOGDescriptor::blockSize
// as:     cv::HOGDescriptor::blockSize (method) cv::HOGDescriptor . blockSize
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_HOGDescriptor_blockSize_const(void* instance) {
    try {
        cv::Size ret = reinterpret_cast<cv::HOGDescriptor*>(instance)->blockSize;
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::HOGDescriptor::blockStride
// as:     cv::HOGDescriptor::blockStride (method) cv::HOGDescriptor . blockStride
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_HOGDescriptor_blockStride_const(void* instance) {
    try {
        cv::Size ret = reinterpret_cast<cv::HOGDescriptor*>(instance)->blockStride;
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::HOGDescriptor::cellSize
// as:     cv::HOGDescriptor::cellSize (method) cv::HOGDescriptor . cellSize
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_HOGDescriptor_cellSize_const(void* instance) {
    try {
        cv::Size ret = reinterpret_cast<cv::HOGDescriptor*>(instance)->cellSize;
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::HOGDescriptor::nbins
// as:     cv::HOGDescriptor::nbins (method) cv::HOGDescriptor . nbins
// Return value: Primitive(int)
cv_return_value_int cv_HOGDescriptor_nbins_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::HOGDescriptor*>(instance)->nbins;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::HOGDescriptor::derivAperture
// as:     cv::HOGDescriptor::derivAperture (method) cv::HOGDescriptor . derivAperture
// Return value: Primitive(int)
cv_return_value_int cv_HOGDescriptor_derivAperture_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::HOGDescriptor*>(instance)->derivAperture;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::HOGDescriptor::winSigma
// as:     cv::HOGDescriptor::winSigma (method) cv::HOGDescriptor . winSigma
// Return value: Primitive(double)
cv_return_value_double cv_HOGDescriptor_winSigma_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::HOGDescriptor*>(instance)->winSigma;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::HOGDescriptor::histogramNormType
// as:     cv::HOGDescriptor::histogramNormType (method) cv::HOGDescriptor . histogramNormType
// Return value: HOGDescriptor::HistogramNormType (enum)
cv_return_value_HOGDescriptor_HistogramNormType cv_HOGDescriptor_histogramNormType_const(void* instance) {
    try {
        HOGDescriptor::HistogramNormType ret = reinterpret_cast<cv::HOGDescriptor*>(instance)->histogramNormType;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_HOGDescriptor_HistogramNormType)
}

// parsed: cv::HOGDescriptor::L2HysThreshold
// as:     cv::HOGDescriptor::L2HysThreshold (method) cv::HOGDescriptor . L2HysThreshold
// Return value: Primitive(double)
cv_return_value_double cv_HOGDescriptor_L2HysThreshold_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::HOGDescriptor*>(instance)->L2HysThreshold;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::HOGDescriptor::gammaCorrection
// as:     cv::HOGDescriptor::gammaCorrection (method) cv::HOGDescriptor . gammaCorrection
// Return value: Primitive(bool)
cv_return_value_bool cv_HOGDescriptor_gammaCorrection_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::HOGDescriptor*>(instance)->gammaCorrection;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::HOGDescriptor::svmDetector
// as:     cv::HOGDescriptor::svmDetector (method) cv::HOGDescriptor . svmDetector
// Return value: Vector[Primitive(float)]
cv_return_value_void_X cv_HOGDescriptor_svmDetector(void* instance) {
    try {
        std::vector<float> ret = reinterpret_cast<cv::HOGDescriptor*>(instance)->svmDetector;
        return { Error::Code::StsOk, NULL, new std::vector<float>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::HOGDescriptor::set_svmDetector
// as:     cv::HOGDescriptor::set_svmDetector (method) cv::HOGDescriptor . set_svmDetector
// Arg ARG Vector[Primitive(float)] val= Vector[Primitive(float)] = 
// Return value: Primitive(void)
cv_return_value_void cv_HOGDescriptor_set_svmDetector_VectorOffloat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::HOGDescriptor*>(instance)->svmDetector = *reinterpret_cast<std::vector<float>*>(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HOGDescriptor::nlevels
// as:     cv::HOGDescriptor::nlevels (method) cv::HOGDescriptor . nlevels
// Return value: Primitive(int)
cv_return_value_int cv_HOGDescriptor_nlevels_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::HOGDescriptor*>(instance)->nlevels;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::HOGDescriptor::signedGradient
// as:     cv::HOGDescriptor::signedGradient (method) cv::HOGDescriptor . signedGradient
// Return value: Primitive(bool)
cv_return_value_bool cv_HOGDescriptor_signedGradient_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::HOGDescriptor*>(instance)->signedGradient;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::HOGDescriptor::HOGDescriptor
// as:     cv::HOGDescriptor::HOGDescriptor (constructor) cv::HOGDescriptor . default
// Return value: cv::HOGDescriptor (boxed)
cv_return_value_void_X cv_HOGDescriptor_HOGDescriptor() {
    try {
        cv::HOGDescriptor* ret = new cv::HOGDescriptor();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::HOGDescriptor::HOGDescriptor
// as:     cv::HOGDescriptor::HOGDescriptor (constructor) cv::HOGDescriptor . new
// Arg ARG cv::Size (simple) _winSize= cv::Size (simple) = 
// Arg ARG cv::Size (simple) _blockSize= cv::Size (simple) = 
// Arg ARG cv::Size (simple) _blockStride= cv::Size (simple) = 
// Arg ARG cv::Size (simple) _cellSize= cv::Size (simple) = 
// Arg ARG Primitive(int) _nbins= Primitive(int) = 
// Arg ARG Primitive(int) _derivAperture= Primitive(int) = 1
// Arg ARG Primitive(double) _winSigma= Primitive(double) = -1
// Arg ARG HOGDescriptor::HistogramNormType (enum) _histogramNormType= HOGDescriptor::HistogramNormType (enum) = HOGDescriptor::L2Hys
// Arg ARG Primitive(double) _L2HysThreshold= Primitive(double) = 0.2
// Arg ARG Primitive(bool) _gammaCorrection= Primitive(bool) = false
// Arg ARG Primitive(int) _nlevels= Primitive(int) = HOGDescriptor::DEFAULT_NLEVELS
// Arg ARG Primitive(bool) _signedGradient= Primitive(bool) = false
// Return value: cv::HOGDescriptor (boxed)
cv_return_value_void_X cv_HOGDescriptor_HOGDescriptor_Size_Size_Size_Size_int_int_double_HOGDescriptor_HistogramNormType_double_bool_int_bool(SizeWrapper _winSize, SizeWrapper _blockSize, SizeWrapper _blockStride, SizeWrapper _cellSize, int _nbins, int _derivAperture, double _winSigma, HOGDescriptor::HistogramNormType _histogramNormType, double _L2HysThreshold, bool _gammaCorrection, int _nlevels, bool _signedGradient) {
    try {
        cv::HOGDescriptor* ret = new cv::HOGDescriptor(*reinterpret_cast<cv::Size*>(&_winSize), *reinterpret_cast<cv::Size*>(&_blockSize), *reinterpret_cast<cv::Size*>(&_blockStride), *reinterpret_cast<cv::Size*>(&_cellSize), _nbins, _derivAperture, _winSigma, *reinterpret_cast<HOGDescriptor::HistogramNormType*>(&_histogramNormType), _L2HysThreshold, _gammaCorrection, _nlevels, _signedGradient);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::HOGDescriptor::HOGDescriptor
// as:     cv::HOGDescriptor::HOGDescriptor (constructor) cv::HOGDescriptor . new
// Arg ARG string filename= string = 
// Return value: cv::HOGDescriptor (boxed)
cv_return_value_void_X cv_HOGDescriptor_HOGDescriptor_String(const char* filename) {
    try {
        cv::HOGDescriptor* ret = new cv::HOGDescriptor(String(filename));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::HOGDescriptor::HOGDescriptor
// as:     cv::HOGDescriptor::HOGDescriptor (constructor) cv::HOGDescriptor . copy
// Arg ARG cv::HOGDescriptor (boxed) d= cv::HOGDescriptor (boxed) = 
// Return value: cv::HOGDescriptor (boxed)
cv_return_value_void_X cv_HOGDescriptor_HOGDescriptor_HOGDescriptor(void* d) {
    try {
        cv::HOGDescriptor* ret = new cv::HOGDescriptor(*reinterpret_cast<const cv::HOGDescriptor*>(d));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::HOGDescriptor::getDescriptorSize
// as:     cv::HOGDescriptor::getDescriptorSize (method) cv::HOGDescriptor . getDescriptorSize
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_HOGDescriptor_getDescriptorSize_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::HOGDescriptor*>(instance)->getDescriptorSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::HOGDescriptor::checkDetectorSize
// as:     cv::HOGDescriptor::checkDetectorSize (method) cv::HOGDescriptor . checkDetectorSize
// Return value: Primitive(bool)
cv_return_value_bool cv_HOGDescriptor_checkDetectorSize_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::HOGDescriptor*>(instance)->checkDetectorSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::HOGDescriptor::getWinSigma
// as:     cv::HOGDescriptor::getWinSigma (method) cv::HOGDescriptor . getWinSigma
// Return value: Primitive(double)
cv_return_value_double cv_HOGDescriptor_getWinSigma_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::HOGDescriptor*>(instance)->getWinSigma();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::HOGDescriptor::setSVMDetector
// as:     cv::HOGDescriptor::setSVMDetector (method) cv::HOGDescriptor . setSVMDetector
// Arg ARG cv::_InputArray (boxed) svmdetector= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_HOGDescriptor_setSVMDetector__InputArray(void* instance, void* svmdetector) {
    try {
        reinterpret_cast<cv::HOGDescriptor*>(instance)->setSVMDetector(*reinterpret_cast<const cv::_InputArray*>(svmdetector));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HOGDescriptor::read
// as:     cv::HOGDescriptor::read (method) cv::HOGDescriptor . read
// Arg ARG cv::FileNode (boxed) fn= cv::FileNode (boxed) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_HOGDescriptor_read_FileNode(void* instance, void* fn) {
    try {
        bool ret = reinterpret_cast<cv::HOGDescriptor*>(instance)->read(*reinterpret_cast<cv::FileNode*>(fn));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::HOGDescriptor::write
// as:     cv::HOGDescriptor::write (method) cv::HOGDescriptor . write
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG string objname= string = 
// Return value: Primitive(void)
cv_return_value_void cv_HOGDescriptor_write_const_FileStorage_String(void* instance, void* fs, const char* objname) {
    try {
        reinterpret_cast<cv::HOGDescriptor*>(instance)->write(*reinterpret_cast<cv::FileStorage*>(fs), String(objname));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HOGDescriptor::load
// as:     cv::HOGDescriptor::load (method) cv::HOGDescriptor . load
// Arg ARG string filename= string = 
// Arg ARG string objname= string = String()
// Return value: Primitive(bool)
cv_return_value_bool cv_HOGDescriptor_load_String_String(void* instance, const char* filename, const char* objname) {
    try {
        bool ret = reinterpret_cast<cv::HOGDescriptor*>(instance)->load(String(filename), String(objname));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::HOGDescriptor::save
// as:     cv::HOGDescriptor::save (method) cv::HOGDescriptor . save
// Arg ARG string filename= string = 
// Arg ARG string objname= string = String()
// Return value: Primitive(void)
cv_return_value_void cv_HOGDescriptor_save_const_String_String(void* instance, const char* filename, const char* objname) {
    try {
        reinterpret_cast<cv::HOGDescriptor*>(instance)->save(String(filename), String(objname));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HOGDescriptor::copyTo
// as:     cv::HOGDescriptor::copyTo (method) cv::HOGDescriptor . copyTo
// Arg ARG cv::HOGDescriptor (boxed) c= cv::HOGDescriptor (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_HOGDescriptor_copyTo_const_HOGDescriptor(void* instance, void* c) {
    try {
        reinterpret_cast<cv::HOGDescriptor*>(instance)->copyTo(*reinterpret_cast<cv::HOGDescriptor*>(c));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HOGDescriptor::compute
// as:     cv::HOGDescriptor::compute (method) cv::HOGDescriptor . compute
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG Vector[Primitive(float)] descriptors= Vector[Primitive(float)] = 
// Arg ARG cv::Size (simple) winStride= cv::Size (simple) = Size()
// Arg ARG cv::Size (simple) padding= cv::Size (simple) = Size()
// Arg ARG Vector[cv::Point (simple)] locations= Vector[cv::Point (simple)] = std::vector<Point>()
// Return value: Primitive(void)
cv_return_value_void cv_HOGDescriptor_compute_const__InputArray_VectorOffloat_Size_Size_VectorOfPoint(void* instance, void* img, void* descriptors, SizeWrapper winStride, SizeWrapper padding, void* locations) {
    try {
        reinterpret_cast<cv::HOGDescriptor*>(instance)->compute(*reinterpret_cast<const cv::_InputArray*>(img), *reinterpret_cast<std::vector<float>*>(descriptors), *reinterpret_cast<cv::Size*>(&winStride), *reinterpret_cast<cv::Size*>(&padding), *reinterpret_cast<const std::vector<cv::Point>*>(locations));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HOGDescriptor::detect
// as:     cv::HOGDescriptor::detect (method) cv::HOGDescriptor . detect
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::Point (simple)] foundLocations= Vector[cv::Point (simple)] = 
// Arg ARG Vector[Primitive(double)] weights= Vector[Primitive(double)] = 
// Arg ARG Primitive(double) hitThreshold= Primitive(double) = 0
// Arg ARG cv::Size (simple) winStride= cv::Size (simple) = Size()
// Arg ARG cv::Size (simple) padding= cv::Size (simple) = Size()
// Arg ARG Vector[cv::Point (simple)] searchLocations= Vector[cv::Point (simple)] = std::vector<Point>()
// Return value: Primitive(void)
cv_return_value_void cv_HOGDescriptor_detect_const__InputArray_VectorOfPoint_VectorOfdouble_double_Size_Size_VectorOfPoint(void* instance, void* img, void* foundLocations, void* weights, double hitThreshold, SizeWrapper winStride, SizeWrapper padding, void* searchLocations) {
    try {
        reinterpret_cast<cv::HOGDescriptor*>(instance)->detect(*reinterpret_cast<const cv::_InputArray*>(img), *reinterpret_cast<std::vector<cv::Point>*>(foundLocations), *reinterpret_cast<std::vector<double>*>(weights), hitThreshold, *reinterpret_cast<cv::Size*>(&winStride), *reinterpret_cast<cv::Size*>(&padding), *reinterpret_cast<const std::vector<cv::Point>*>(searchLocations));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HOGDescriptor::detect
// as:     cv::HOGDescriptor::detect (method) cv::HOGDescriptor . detect
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::Point (simple)] foundLocations= Vector[cv::Point (simple)] = 
// Arg ARG Primitive(double) hitThreshold= Primitive(double) = 0
// Arg ARG cv::Size (simple) winStride= cv::Size (simple) = Size()
// Arg ARG cv::Size (simple) padding= cv::Size (simple) = Size()
// Arg ARG Vector[cv::Point (simple)] searchLocations= Vector[cv::Point (simple)] = std::vector<Point>()
// Return value: Primitive(void)
cv_return_value_void cv_HOGDescriptor_detect_const__InputArray_VectorOfPoint_double_Size_Size_VectorOfPoint(void* instance, void* img, void* foundLocations, double hitThreshold, SizeWrapper winStride, SizeWrapper padding, void* searchLocations) {
    try {
        reinterpret_cast<cv::HOGDescriptor*>(instance)->detect(*reinterpret_cast<const cv::_InputArray*>(img), *reinterpret_cast<std::vector<cv::Point>*>(foundLocations), hitThreshold, *reinterpret_cast<cv::Size*>(&winStride), *reinterpret_cast<cv::Size*>(&padding), *reinterpret_cast<const std::vector<cv::Point>*>(searchLocations));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HOGDescriptor::detectMultiScale
// as:     cv::HOGDescriptor::detectMultiScale (method) cv::HOGDescriptor . detectMultiScale
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::Rect (simple)] foundLocations= Vector[cv::Rect (simple)] = 
// Arg ARG Vector[Primitive(double)] foundWeights= Vector[Primitive(double)] = 
// Arg ARG Primitive(double) hitThreshold= Primitive(double) = 0
// Arg ARG cv::Size (simple) winStride= cv::Size (simple) = Size()
// Arg ARG cv::Size (simple) padding= cv::Size (simple) = Size()
// Arg ARG Primitive(double) scale= Primitive(double) = 1.05
// Arg ARG Primitive(double) finalThreshold= Primitive(double) = 2.0
// Arg ARG Primitive(bool) useMeanshiftGrouping= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_HOGDescriptor_detectMultiScale_const__InputArray_VectorOfRect_VectorOfdouble_double_Size_Size_double_double_bool(void* instance, void* img, void* foundLocations, void* foundWeights, double hitThreshold, SizeWrapper winStride, SizeWrapper padding, double scale, double finalThreshold, bool useMeanshiftGrouping) {
    try {
        reinterpret_cast<cv::HOGDescriptor*>(instance)->detectMultiScale(*reinterpret_cast<const cv::_InputArray*>(img), *reinterpret_cast<std::vector<cv::Rect>*>(foundLocations), *reinterpret_cast<std::vector<double>*>(foundWeights), hitThreshold, *reinterpret_cast<cv::Size*>(&winStride), *reinterpret_cast<cv::Size*>(&padding), scale, finalThreshold, useMeanshiftGrouping);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HOGDescriptor::detectMultiScale
// as:     cv::HOGDescriptor::detectMultiScale (method) cv::HOGDescriptor . detectMultiScale
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::Rect (simple)] foundLocations= Vector[cv::Rect (simple)] = 
// Arg ARG Primitive(double) hitThreshold= Primitive(double) = 0
// Arg ARG cv::Size (simple) winStride= cv::Size (simple) = Size()
// Arg ARG cv::Size (simple) padding= cv::Size (simple) = Size()
// Arg ARG Primitive(double) scale= Primitive(double) = 1.05
// Arg ARG Primitive(double) finalThreshold= Primitive(double) = 2.0
// Arg ARG Primitive(bool) useMeanshiftGrouping= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_HOGDescriptor_detectMultiScale_const__InputArray_VectorOfRect_double_Size_Size_double_double_bool(void* instance, void* img, void* foundLocations, double hitThreshold, SizeWrapper winStride, SizeWrapper padding, double scale, double finalThreshold, bool useMeanshiftGrouping) {
    try {
        reinterpret_cast<cv::HOGDescriptor*>(instance)->detectMultiScale(*reinterpret_cast<const cv::_InputArray*>(img), *reinterpret_cast<std::vector<cv::Rect>*>(foundLocations), hitThreshold, *reinterpret_cast<cv::Size*>(&winStride), *reinterpret_cast<cv::Size*>(&padding), scale, finalThreshold, useMeanshiftGrouping);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HOGDescriptor::computeGradient
// as:     cv::HOGDescriptor::computeGradient (method) cv::HOGDescriptor . computeGradient
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) grad= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) angleOfs= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Size (simple) paddingTL= cv::Size (simple) = Size()
// Arg ARG cv::Size (simple) paddingBR= cv::Size (simple) = Size()
// Return value: Primitive(void)
cv_return_value_void cv_HOGDescriptor_computeGradient_const__InputArray__InputOutputArray__InputOutputArray_Size_Size(void* instance, void* img, void* grad, void* angleOfs, SizeWrapper paddingTL, SizeWrapper paddingBR) {
    try {
        reinterpret_cast<cv::HOGDescriptor*>(instance)->computeGradient(*reinterpret_cast<const cv::_InputArray*>(img), *reinterpret_cast<cv::_InputOutputArray*>(grad), *reinterpret_cast<cv::_InputOutputArray*>(angleOfs), *reinterpret_cast<cv::Size*>(&paddingTL), *reinterpret_cast<cv::Size*>(&paddingBR));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HOGDescriptor::getDefaultPeopleDetector
// as:     cv::HOGDescriptor::getDefaultPeopleDetector (method) cv::HOGDescriptor . getDefaultPeopleDetector
// Return value: Vector[Primitive(float)]
cv_return_value_void_X cv_HOGDescriptor_getDefaultPeopleDetector() {
    try {
        std::vector<float> ret = cv::HOGDescriptor::getDefaultPeopleDetector();
        return { Error::Code::StsOk, NULL, new std::vector<float>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::HOGDescriptor::getDaimlerPeopleDetector
// as:     cv::HOGDescriptor::getDaimlerPeopleDetector (method) cv::HOGDescriptor . getDaimlerPeopleDetector
// Return value: Vector[Primitive(float)]
cv_return_value_void_X cv_HOGDescriptor_getDaimlerPeopleDetector() {
    try {
        std::vector<float> ret = cv::HOGDescriptor::getDaimlerPeopleDetector();
        return { Error::Code::StsOk, NULL, new std::vector<float>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::HOGDescriptor::detectROI
// as:     cv::HOGDescriptor::detectROI (method) cv::HOGDescriptor . detectROI
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::Point (simple)] locations= Vector[cv::Point (simple)] = 
// Arg ARG Vector[cv::Point (simple)] foundLocations= Vector[cv::Point (simple)] = 
// Arg ARG Vector[Primitive(double)] confidences= Vector[Primitive(double)] = 
// Arg ARG Primitive(double) hitThreshold= Primitive(double) = 0
// Arg ARG cv::Size (simple) winStride= cv::Size (simple) = Size()
// Arg ARG cv::Size (simple) padding= cv::Size (simple) = Size()
// Return value: Primitive(void)
cv_return_value_void cv_HOGDescriptor_detectROI_const__InputArray_VectorOfPoint_VectorOfPoint_VectorOfdouble_double_Size_Size(void* instance, void* img, void* locations, void* foundLocations, void* confidences, double hitThreshold, SizeWrapper winStride, SizeWrapper padding) {
    try {
        reinterpret_cast<cv::HOGDescriptor*>(instance)->detectROI(*reinterpret_cast<const cv::_InputArray*>(img), *reinterpret_cast<const std::vector<cv::Point>*>(locations), *reinterpret_cast<std::vector<cv::Point>*>(foundLocations), *reinterpret_cast<std::vector<double>*>(confidences), hitThreshold, *reinterpret_cast<cv::Size*>(&winStride), *reinterpret_cast<cv::Size*>(&padding));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HOGDescriptor::detectMultiScaleROI
// as:     cv::HOGDescriptor::detectMultiScaleROI (method) cv::HOGDescriptor . detectMultiScaleROI
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::Rect (simple)] foundLocations= Vector[cv::Rect (simple)] = 
// Arg ARG Vector[cv::DetectionROI (boxed)] locations= Vector[cv::DetectionROI (boxed)] = 
// Arg ARG Primitive(double) hitThreshold= Primitive(double) = 0
// Arg ARG Primitive(int) groupThreshold= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_HOGDescriptor_detectMultiScaleROI_const__InputArray_VectorOfRect_VectorOfDetectionROI_double_int(void* instance, void* img, void* foundLocations, void* locations, double hitThreshold, int groupThreshold) {
    try {
        reinterpret_cast<cv::HOGDescriptor*>(instance)->detectMultiScaleROI(*reinterpret_cast<const cv::_InputArray*>(img), *reinterpret_cast<std::vector<cv::Rect>*>(foundLocations), *reinterpret_cast<std::vector<cv::DetectionROI>*>(locations), hitThreshold, groupThreshold);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HOGDescriptor::groupRectangles
// as:     cv::HOGDescriptor::groupRectangles (method) cv::HOGDescriptor . groupRectangles
// Arg ARG Vector[cv::Rect (simple)] rectList= Vector[cv::Rect (simple)] = 
// Arg ARG Vector[Primitive(double)] weights= Vector[Primitive(double)] = 
// Arg ARG Primitive(int) groupThreshold= Primitive(int) = 
// Arg ARG Primitive(double) eps= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_HOGDescriptor_groupRectangles_const_VectorOfRect_VectorOfdouble_int_double(void* instance, void* rectList, void* weights, int groupThreshold, double eps) {
    try {
        reinterpret_cast<cv::HOGDescriptor*>(instance)->groupRectangles(*reinterpret_cast<std::vector<cv::Rect>*>(rectList), *reinterpret_cast<std::vector<double>*>(weights), groupThreshold, eps);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::QRCodeDetector
void cv_QRCodeDetector_delete(void* instance) {
    delete reinterpret_cast<cv::QRCodeDetector*>(instance);
}
// parsed: cv::QRCodeDetector::QRCodeDetector
// as:     cv::QRCodeDetector::QRCodeDetector (constructor) cv::QRCodeDetector . default
// Return value: cv::QRCodeDetector (boxed)
cv_return_value_void_X cv_QRCodeDetector_QRCodeDetector() {
    try {
        cv::QRCodeDetector* ret = new cv::QRCodeDetector();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::QRCodeDetector::setEpsX
// as:     cv::QRCodeDetector::setEpsX (method) cv::QRCodeDetector . setEpsX
// Arg ARG Primitive(double) epsX= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_QRCodeDetector_setEpsX_double(void* instance, double epsX) {
    try {
        reinterpret_cast<cv::QRCodeDetector*>(instance)->setEpsX(epsX);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::QRCodeDetector::setEpsY
// as:     cv::QRCodeDetector::setEpsY (method) cv::QRCodeDetector . setEpsY
// Arg ARG Primitive(double) epsY= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_QRCodeDetector_setEpsY_double(void* instance, double epsY) {
    try {
        reinterpret_cast<cv::QRCodeDetector*>(instance)->setEpsY(epsY);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::QRCodeDetector::detect
// as:     cv::QRCodeDetector::detect (method) cv::QRCodeDetector . detect
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) points= cv::_OutputArray (boxed) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_QRCodeDetector_detect_const__InputArray__OutputArray(void* instance, void* img, void* points) {
    try {
        bool ret = reinterpret_cast<cv::QRCodeDetector*>(instance)->detect(*reinterpret_cast<const cv::_InputArray*>(img), *reinterpret_cast<cv::_OutputArray*>(points));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::QRCodeDetector::decode
// as:     cv::QRCodeDetector::decode (method) cv::QRCodeDetector . decode
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) straight_qrcode= cv::_OutputArray (boxed) = noArray()
// Return value: string
cv_return_value_char_X cv_QRCodeDetector_decode__InputArray__InputArray__OutputArray(void* instance, void* img, void* points, void* straight_qrcode) {
    try {
        String ret = reinterpret_cast<cv::QRCodeDetector*>(instance)->decode(*reinterpret_cast<const cv::_InputArray*>(img), *reinterpret_cast<const cv::_InputArray*>(points), *reinterpret_cast<cv::_OutputArray*>(straight_qrcode));
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::QRCodeDetector::detectAndDecode
// as:     cv::QRCodeDetector::detectAndDecode (method) cv::QRCodeDetector . detectAndDecode
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) points= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) straight_qrcode= cv::_OutputArray (boxed) = noArray()
// Return value: string
cv_return_value_char_X cv_QRCodeDetector_detectAndDecode__InputArray__OutputArray__OutputArray(void* instance, void* img, void* points, void* straight_qrcode) {
    try {
        String ret = reinterpret_cast<cv::QRCodeDetector*>(instance)->detectAndDecode(*reinterpret_cast<const cv::_InputArray*>(img), *reinterpret_cast<cv::_OutputArray*>(points), *reinterpret_cast<cv::_OutputArray*>(straight_qrcode));
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// boxed class: cv::SimilarRects
void cv_SimilarRects_delete(void* instance) {
    delete reinterpret_cast<cv::SimilarRects*>(instance);
}
// parsed: cv::SimilarRects::SimilarRects
// as:     cv::SimilarRects::SimilarRects (constructor) cv::SimilarRects . new
// Arg ARG Primitive(double) _eps= Primitive(double) = 
// Return value: cv::SimilarRects (boxed)
cv_return_value_void_X cv_SimilarRects_SimilarRects_double(double _eps) {
    try {
        cv::SimilarRects* ret = new cv::SimilarRects(_eps);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}



} // extern "C"

