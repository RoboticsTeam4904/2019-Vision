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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/line_descriptor.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/line_descriptor/descriptor.hpp"

extern "C" {

// parsed: cv::line_descriptor::drawKeylines
// as:     cv::line_descriptor::drawKeylines (function)
// Arg ARG cv::Mat (boxed) image= cv::Mat (boxed) = 
// Arg ARG Vector[cv::line_descriptor::KeyLine (simple)] keylines= Vector[cv::line_descriptor::KeyLine (simple)] = 
// Arg ARG cv::Mat (boxed) outImage= cv::Mat (boxed) = 
// Arg ARG cv::Scalar (simple) color= cv::Scalar (simple) = Scalar::all( -1 )
// Arg ARG Primitive(int) flags= Primitive(int) = DrawLinesMatchesFlags::DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_drawKeylines_Mat_VectorOfKeyLine_Mat_Scalar_int(void* image, void* keylines, void* outImage, ScalarWrapper color, int flags) {
    try {
        cv::line_descriptor::drawKeylines(*reinterpret_cast<const cv::Mat*>(image), *reinterpret_cast<const std::vector<cv::line_descriptor::KeyLine>*>(keylines), *reinterpret_cast<cv::Mat*>(outImage), *reinterpret_cast<const cv::Scalar*>(&color), flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::drawLineMatches
// as:     cv::line_descriptor::drawLineMatches (function)
// Arg ARG cv::Mat (boxed) img1= cv::Mat (boxed) = 
// Arg ARG Vector[cv::line_descriptor::KeyLine (simple)] keylines1= Vector[cv::line_descriptor::KeyLine (simple)] = 
// Arg ARG cv::Mat (boxed) img2= cv::Mat (boxed) = 
// Arg ARG Vector[cv::line_descriptor::KeyLine (simple)] keylines2= Vector[cv::line_descriptor::KeyLine (simple)] = 
// Arg ARG Vector[cv::DMatch (simple)] matches1to2= Vector[cv::DMatch (simple)] = 
// Arg ARG cv::Mat (boxed) outImg= cv::Mat (boxed) = 
// Arg ARG cv::Scalar (simple) matchColor= cv::Scalar (simple) = Scalar::all( -1 )
// Arg ARG cv::Scalar (simple) singleLineColor= cv::Scalar (simple) = Scalar::all( -1 )
// Arg ARG Vector[Primitive(char)] matchesMask= Vector[Primitive(char)] = std::vector<char>()
// Arg ARG Primitive(int) flags= Primitive(int) = DrawLinesMatchesFlags::DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_drawLineMatches_Mat_VectorOfKeyLine_Mat_VectorOfKeyLine_VectorOfDMatch_Mat_Scalar_Scalar_VectorOfchar_int(void* img1, void* keylines1, void* img2, void* keylines2, void* matches1to2, void* outImg, ScalarWrapper matchColor, ScalarWrapper singleLineColor, void* matchesMask, int flags) {
    try {
        cv::line_descriptor::drawLineMatches(*reinterpret_cast<const cv::Mat*>(img1), *reinterpret_cast<const std::vector<cv::line_descriptor::KeyLine>*>(keylines1), *reinterpret_cast<const cv::Mat*>(img2), *reinterpret_cast<const std::vector<cv::line_descriptor::KeyLine>*>(keylines2), *reinterpret_cast<const std::vector<cv::DMatch>*>(matches1to2), *reinterpret_cast<cv::Mat*>(outImg), *reinterpret_cast<const cv::Scalar*>(&matchColor), *reinterpret_cast<const cv::Scalar*>(&singleLineColor), *reinterpret_cast<const std::vector<char>*>(matchesMask), flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::line_descriptor::BinaryDescriptor
void cv_BinaryDescriptor_delete(void* instance) {
    delete reinterpret_cast<cv::line_descriptor::BinaryDescriptor*>(instance);
}
// parsed: cv::line_descriptor::BinaryDescriptor::BinaryDescriptor
// as:     cv::line_descriptor::BinaryDescriptor::BinaryDescriptor (constructor) cv::line_descriptor::BinaryDescriptor . new
// Arg ARG cv::line_descriptor::BinaryDescriptor::Params (boxed) parameters= cv::line_descriptor::BinaryDescriptor::Params (boxed) = BinaryDescriptor::Params()
// Return value: cv::line_descriptor::BinaryDescriptor (boxed)
cv_return_value_void_X cv_line_descriptor_BinaryDescriptor_BinaryDescriptor_Params(void* parameters) {
    try {
        cv::line_descriptor::BinaryDescriptor* ret = new cv::line_descriptor::BinaryDescriptor(*reinterpret_cast<const cv::line_descriptor::BinaryDescriptor::Params*>(parameters));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::line_descriptor::BinaryDescriptor::createBinaryDescriptor
// as:     cv::line_descriptor::BinaryDescriptor::createBinaryDescriptor (method) cv::line_descriptor::BinaryDescriptor . createBinaryDescriptor
// Return value: SmartPtr[cv::line_descriptor::BinaryDescriptor (boxed)]
cv_return_value_void_X cv_line_descriptor_BinaryDescriptor_createBinaryDescriptor() {
    try {
        Ptr<cv::line_descriptor::BinaryDescriptor> ret = cv::line_descriptor::BinaryDescriptor::createBinaryDescriptor();
        return { Error::Code::StsOk, NULL, new Ptr<cv::line_descriptor::BinaryDescriptor>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::line_descriptor::BinaryDescriptor::createBinaryDescriptor
// as:     cv::line_descriptor::BinaryDescriptor::createBinaryDescriptor (method) cv::line_descriptor::BinaryDescriptor . createBinaryDescriptor
// Arg ARG cv::line_descriptor::BinaryDescriptor::Params (boxed) parameters= cv::line_descriptor::BinaryDescriptor::Params (boxed) = 
// Return value: SmartPtr[cv::line_descriptor::BinaryDescriptor (boxed)]
cv_return_value_void_X cv_line_descriptor_BinaryDescriptor_createBinaryDescriptor_Params(void* parameters) {
    try {
        Ptr<cv::line_descriptor::BinaryDescriptor> ret = cv::line_descriptor::BinaryDescriptor::createBinaryDescriptor(*reinterpret_cast<cv::line_descriptor::BinaryDescriptor::Params*>(parameters));
        return { Error::Code::StsOk, NULL, new Ptr<cv::line_descriptor::BinaryDescriptor>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::line_descriptor::BinaryDescriptor::getNumOfOctaves
// as:     cv::line_descriptor::BinaryDescriptor::getNumOfOctaves (method) cv::line_descriptor::BinaryDescriptor . getNumOfOctaves
// Return value: Primitive(int)
cv_return_value_int cv_line_descriptor_BinaryDescriptor_getNumOfOctaves(void* instance) {
    try {
        int ret = reinterpret_cast<cv::line_descriptor::BinaryDescriptor*>(instance)->getNumOfOctaves();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::line_descriptor::BinaryDescriptor::setNumOfOctaves
// as:     cv::line_descriptor::BinaryDescriptor::setNumOfOctaves (method) cv::line_descriptor::BinaryDescriptor . setNumOfOctaves
// Arg ARG Primitive(int) octaves= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_BinaryDescriptor_setNumOfOctaves_int(void* instance, int octaves) {
    try {
        reinterpret_cast<cv::line_descriptor::BinaryDescriptor*>(instance)->setNumOfOctaves(octaves);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::BinaryDescriptor::getWidthOfBand
// as:     cv::line_descriptor::BinaryDescriptor::getWidthOfBand (method) cv::line_descriptor::BinaryDescriptor . getWidthOfBand
// Return value: Primitive(int)
cv_return_value_int cv_line_descriptor_BinaryDescriptor_getWidthOfBand(void* instance) {
    try {
        int ret = reinterpret_cast<cv::line_descriptor::BinaryDescriptor*>(instance)->getWidthOfBand();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::line_descriptor::BinaryDescriptor::setWidthOfBand
// as:     cv::line_descriptor::BinaryDescriptor::setWidthOfBand (method) cv::line_descriptor::BinaryDescriptor . setWidthOfBand
// Arg ARG Primitive(int) width= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_BinaryDescriptor_setWidthOfBand_int(void* instance, int width) {
    try {
        reinterpret_cast<cv::line_descriptor::BinaryDescriptor*>(instance)->setWidthOfBand(width);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::BinaryDescriptor::getReductionRatio
// as:     cv::line_descriptor::BinaryDescriptor::getReductionRatio (method) cv::line_descriptor::BinaryDescriptor . getReductionRatio
// Return value: Primitive(int)
cv_return_value_int cv_line_descriptor_BinaryDescriptor_getReductionRatio(void* instance) {
    try {
        int ret = reinterpret_cast<cv::line_descriptor::BinaryDescriptor*>(instance)->getReductionRatio();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::line_descriptor::BinaryDescriptor::setReductionRatio
// as:     cv::line_descriptor::BinaryDescriptor::setReductionRatio (method) cv::line_descriptor::BinaryDescriptor . setReductionRatio
// Arg ARG Primitive(int) rRatio= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_BinaryDescriptor_setReductionRatio_int(void* instance, int rRatio) {
    try {
        reinterpret_cast<cv::line_descriptor::BinaryDescriptor*>(instance)->setReductionRatio(rRatio);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::BinaryDescriptor::read
// as:     cv::line_descriptor::BinaryDescriptor::read (method) cv::line_descriptor::BinaryDescriptor . read
// Arg ARG cv::FileNode (boxed) fn= cv::FileNode (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_BinaryDescriptor_read_FileNode(void* instance, void* fn) {
    try {
        reinterpret_cast<cv::line_descriptor::BinaryDescriptor*>(instance)->read(*reinterpret_cast<const cv::FileNode*>(fn));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::BinaryDescriptor::write
// as:     cv::line_descriptor::BinaryDescriptor::write (method) cv::line_descriptor::BinaryDescriptor . write
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_BinaryDescriptor_write_const_FileStorage(void* instance, void* fs) {
    try {
        reinterpret_cast<cv::line_descriptor::BinaryDescriptor*>(instance)->write(*reinterpret_cast<cv::FileStorage*>(fs));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::BinaryDescriptor::detect
// as:     cv::line_descriptor::BinaryDescriptor::detect (method) cv::line_descriptor::BinaryDescriptor . detect
// Arg ARG cv::Mat (boxed) image= cv::Mat (boxed) = 
// Arg ARG Vector[cv::line_descriptor::KeyLine (simple)] keypoints= Vector[cv::line_descriptor::KeyLine (simple)] = 
// Arg ARG cv::Mat (boxed) mask= cv::Mat (boxed) = Mat()
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_BinaryDescriptor_detect_Mat_VectorOfKeyLine_Mat(void* instance, void* image, void* keypoints, void* mask) {
    try {
        reinterpret_cast<cv::line_descriptor::BinaryDescriptor*>(instance)->detect(*reinterpret_cast<const cv::Mat*>(image), *reinterpret_cast<std::vector<cv::line_descriptor::KeyLine>*>(keypoints), *reinterpret_cast<const cv::Mat*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::BinaryDescriptor::detect
// as:     cv::line_descriptor::BinaryDescriptor::detect (method) cv::line_descriptor::BinaryDescriptor . detect
// Arg ARG Vector[cv::Mat (boxed)] images= Vector[cv::Mat (boxed)] = 
// Arg ARG Vector[Vector[cv::line_descriptor::KeyLine (simple)]] keylines= Vector[Vector[cv::line_descriptor::KeyLine (simple)]] = 
// Arg ARG Vector[cv::Mat (boxed)] masks= Vector[cv::Mat (boxed)] = std::vector<Mat>()
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_BinaryDescriptor_detect_const_VectorOfMat_VectorOfVectorOfKeyLine_VectorOfMat(void* instance, void* images, void* keylines, void* masks) {
    try {
        reinterpret_cast<cv::line_descriptor::BinaryDescriptor*>(instance)->detect(*reinterpret_cast<const std::vector<cv::Mat>*>(images), *reinterpret_cast<std::vector<std::vector<cv::line_descriptor::KeyLine>>*>(keylines), *reinterpret_cast<const std::vector<cv::Mat>*>(masks));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::BinaryDescriptor::compute
// as:     cv::line_descriptor::BinaryDescriptor::compute (method) cv::line_descriptor::BinaryDescriptor . compute
// Arg ARG cv::Mat (boxed) image= cv::Mat (boxed) = 
// Arg ARG Vector[cv::line_descriptor::KeyLine (simple)] keylines= Vector[cv::line_descriptor::KeyLine (simple)] = 
// Arg ARG cv::Mat (boxed) descriptors= cv::Mat (boxed) = 
// Arg ARG Primitive(bool) returnFloatDescr= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_BinaryDescriptor_compute_const_Mat_VectorOfKeyLine_Mat_bool(void* instance, void* image, void* keylines, void* descriptors, bool returnFloatDescr) {
    try {
        reinterpret_cast<cv::line_descriptor::BinaryDescriptor*>(instance)->compute(*reinterpret_cast<const cv::Mat*>(image), *reinterpret_cast<std::vector<cv::line_descriptor::KeyLine>*>(keylines), *reinterpret_cast<cv::Mat*>(descriptors), returnFloatDescr);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::BinaryDescriptor::compute
// as:     cv::line_descriptor::BinaryDescriptor::compute (method) cv::line_descriptor::BinaryDescriptor . compute
// Arg ARG Vector[cv::Mat (boxed)] images= Vector[cv::Mat (boxed)] = 
// Arg ARG Vector[Vector[cv::line_descriptor::KeyLine (simple)]] keylines= Vector[Vector[cv::line_descriptor::KeyLine (simple)]] = 
// Arg ARG Vector[cv::Mat (boxed)] descriptors= Vector[cv::Mat (boxed)] = 
// Arg ARG Primitive(bool) returnFloatDescr= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_BinaryDescriptor_compute_const_VectorOfMat_VectorOfVectorOfKeyLine_VectorOfMat_bool(void* instance, void* images, void* keylines, void* descriptors, bool returnFloatDescr) {
    try {
        reinterpret_cast<cv::line_descriptor::BinaryDescriptor*>(instance)->compute(*reinterpret_cast<const std::vector<cv::Mat>*>(images), *reinterpret_cast<std::vector<std::vector<cv::line_descriptor::KeyLine>>*>(keylines), *reinterpret_cast<std::vector<cv::Mat>*>(descriptors), returnFloatDescr);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::BinaryDescriptor::descriptorSize
// as:     cv::line_descriptor::BinaryDescriptor::descriptorSize (method) cv::line_descriptor::BinaryDescriptor . descriptorSize
// Return value: Primitive(int)
cv_return_value_int cv_line_descriptor_BinaryDescriptor_descriptorSize_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::line_descriptor::BinaryDescriptor*>(instance)->descriptorSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::line_descriptor::BinaryDescriptor::descriptorType
// as:     cv::line_descriptor::BinaryDescriptor::descriptorType (method) cv::line_descriptor::BinaryDescriptor . descriptorType
// Return value: Primitive(int)
cv_return_value_int cv_line_descriptor_BinaryDescriptor_descriptorType_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::line_descriptor::BinaryDescriptor*>(instance)->descriptorType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::line_descriptor::BinaryDescriptor::defaultNorm
// as:     cv::line_descriptor::BinaryDescriptor::defaultNorm (method) cv::line_descriptor::BinaryDescriptor . defaultNorm
// Return value: Primitive(int)
cv_return_value_int cv_line_descriptor_BinaryDescriptor_defaultNorm_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::line_descriptor::BinaryDescriptor*>(instance)->defaultNorm();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// boxed class: cv::line_descriptor::BinaryDescriptor::Params
void cv_BinaryDescriptor_Params_delete(void* instance) {
    delete reinterpret_cast<cv::line_descriptor::BinaryDescriptor::Params*>(instance);
}
// parsed: cv::line_descriptor::BinaryDescriptor::Params::Params
// as:     cv::line_descriptor::BinaryDescriptor::Params::Params (constructor) cv::line_descriptor::BinaryDescriptor::Params . default
// Return value: cv::line_descriptor::BinaryDescriptor::Params (boxed)
cv_return_value_void_X cv_line_descriptor_BinaryDescriptor_Params_Params() {
    try {
        cv::line_descriptor::BinaryDescriptor::Params* ret = new cv::line_descriptor::BinaryDescriptor::Params();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::line_descriptor::BinaryDescriptor::Params::read
// as:     cv::line_descriptor::BinaryDescriptor::Params::read (method) cv::line_descriptor::BinaryDescriptor::Params . read
// Arg ARG cv::FileNode (boxed) fn= cv::FileNode (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_BinaryDescriptor_Params_read_FileNode(void* instance, void* fn) {
    try {
        reinterpret_cast<cv::line_descriptor::BinaryDescriptor::Params*>(instance)->read(*reinterpret_cast<const cv::FileNode*>(fn));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::BinaryDescriptor::Params::write
// as:     cv::line_descriptor::BinaryDescriptor::Params::write (method) cv::line_descriptor::BinaryDescriptor::Params . write
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_BinaryDescriptor_Params_write_const_FileStorage(void* instance, void* fs) {
    try {
        reinterpret_cast<cv::line_descriptor::BinaryDescriptor::Params*>(instance)->write(*reinterpret_cast<cv::FileStorage*>(fs));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::line_descriptor::BinaryDescriptorMatcher
void cv_BinaryDescriptorMatcher_delete(void* instance) {
    delete reinterpret_cast<cv::line_descriptor::BinaryDescriptorMatcher*>(instance);
}
// parsed: cv::line_descriptor::BinaryDescriptorMatcher::match
// as:     cv::line_descriptor::BinaryDescriptorMatcher::match (method) cv::line_descriptor::BinaryDescriptorMatcher . match
// Arg ARG cv::Mat (boxed) queryDescriptors= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) trainDescriptors= cv::Mat (boxed) = 
// Arg ARG Vector[cv::DMatch (simple)] matches= Vector[cv::DMatch (simple)] = 
// Arg ARG cv::Mat (boxed) mask= cv::Mat (boxed) = Mat()
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_BinaryDescriptorMatcher_match_const_Mat_Mat_VectorOfDMatch_Mat(void* instance, void* queryDescriptors, void* trainDescriptors, void* matches, void* mask) {
    try {
        reinterpret_cast<cv::line_descriptor::BinaryDescriptorMatcher*>(instance)->match(*reinterpret_cast<const cv::Mat*>(queryDescriptors), *reinterpret_cast<const cv::Mat*>(trainDescriptors), *reinterpret_cast<std::vector<cv::DMatch>*>(matches), *reinterpret_cast<const cv::Mat*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::BinaryDescriptorMatcher::match
// as:     cv::line_descriptor::BinaryDescriptorMatcher::match (method) cv::line_descriptor::BinaryDescriptorMatcher . match
// Arg ARG cv::Mat (boxed) queryDescriptors= cv::Mat (boxed) = 
// Arg ARG Vector[cv::DMatch (simple)] matches= Vector[cv::DMatch (simple)] = 
// Arg ARG Vector[cv::Mat (boxed)] masks= Vector[cv::Mat (boxed)] = std::vector<Mat>()
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_BinaryDescriptorMatcher_match_Mat_VectorOfDMatch_VectorOfMat(void* instance, void* queryDescriptors, void* matches, void* masks) {
    try {
        reinterpret_cast<cv::line_descriptor::BinaryDescriptorMatcher*>(instance)->match(*reinterpret_cast<const cv::Mat*>(queryDescriptors), *reinterpret_cast<std::vector<cv::DMatch>*>(matches), *reinterpret_cast<const std::vector<cv::Mat>*>(masks));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::BinaryDescriptorMatcher::knnMatch
// as:     cv::line_descriptor::BinaryDescriptorMatcher::knnMatch (method) cv::line_descriptor::BinaryDescriptorMatcher . knnMatch
// Arg ARG cv::Mat (boxed) queryDescriptors= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) trainDescriptors= cv::Mat (boxed) = 
// Arg ARG Vector[Vector[cv::DMatch (simple)]] matches= Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG Primitive(int) k= Primitive(int) = 
// Arg ARG cv::Mat (boxed) mask= cv::Mat (boxed) = Mat()
// Arg ARG Primitive(bool) compactResult= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_BinaryDescriptorMatcher_knnMatch_const_Mat_Mat_VectorOfVectorOfDMatch_int_Mat_bool(void* instance, void* queryDescriptors, void* trainDescriptors, void* matches, int k, void* mask, bool compactResult) {
    try {
        reinterpret_cast<cv::line_descriptor::BinaryDescriptorMatcher*>(instance)->knnMatch(*reinterpret_cast<const cv::Mat*>(queryDescriptors), *reinterpret_cast<const cv::Mat*>(trainDescriptors), *reinterpret_cast<std::vector<std::vector<cv::DMatch>>*>(matches), k, *reinterpret_cast<const cv::Mat*>(mask), compactResult);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::BinaryDescriptorMatcher::knnMatch
// as:     cv::line_descriptor::BinaryDescriptorMatcher::knnMatch (method) cv::line_descriptor::BinaryDescriptorMatcher . knnMatch
// Arg ARG cv::Mat (boxed) queryDescriptors= cv::Mat (boxed) = 
// Arg ARG Vector[Vector[cv::DMatch (simple)]] matches= Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG Primitive(int) k= Primitive(int) = 
// Arg ARG Vector[cv::Mat (boxed)] masks= Vector[cv::Mat (boxed)] = std::vector<Mat>()
// Arg ARG Primitive(bool) compactResult= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_BinaryDescriptorMatcher_knnMatch_Mat_VectorOfVectorOfDMatch_int_VectorOfMat_bool(void* instance, void* queryDescriptors, void* matches, int k, void* masks, bool compactResult) {
    try {
        reinterpret_cast<cv::line_descriptor::BinaryDescriptorMatcher*>(instance)->knnMatch(*reinterpret_cast<const cv::Mat*>(queryDescriptors), *reinterpret_cast<std::vector<std::vector<cv::DMatch>>*>(matches), k, *reinterpret_cast<const std::vector<cv::Mat>*>(masks), compactResult);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::BinaryDescriptorMatcher::radiusMatch
// as:     cv::line_descriptor::BinaryDescriptorMatcher::radiusMatch (method) cv::line_descriptor::BinaryDescriptorMatcher . radiusMatch
// Arg ARG cv::Mat (boxed) queryDescriptors= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) trainDescriptors= cv::Mat (boxed) = 
// Arg ARG Vector[Vector[cv::DMatch (simple)]] matches= Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG Primitive(float) maxDistance= Primitive(float) = 
// Arg ARG cv::Mat (boxed) mask= cv::Mat (boxed) = Mat()
// Arg ARG Primitive(bool) compactResult= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_BinaryDescriptorMatcher_radiusMatch_const_Mat_Mat_VectorOfVectorOfDMatch_float_Mat_bool(void* instance, void* queryDescriptors, void* trainDescriptors, void* matches, float maxDistance, void* mask, bool compactResult) {
    try {
        reinterpret_cast<cv::line_descriptor::BinaryDescriptorMatcher*>(instance)->radiusMatch(*reinterpret_cast<const cv::Mat*>(queryDescriptors), *reinterpret_cast<const cv::Mat*>(trainDescriptors), *reinterpret_cast<std::vector<std::vector<cv::DMatch>>*>(matches), maxDistance, *reinterpret_cast<const cv::Mat*>(mask), compactResult);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::BinaryDescriptorMatcher::radiusMatch
// as:     cv::line_descriptor::BinaryDescriptorMatcher::radiusMatch (method) cv::line_descriptor::BinaryDescriptorMatcher . radiusMatch
// Arg ARG cv::Mat (boxed) queryDescriptors= cv::Mat (boxed) = 
// Arg ARG Vector[Vector[cv::DMatch (simple)]] matches= Vector[Vector[cv::DMatch (simple)]] = 
// Arg ARG Primitive(float) maxDistance= Primitive(float) = 
// Arg ARG Vector[cv::Mat (boxed)] masks= Vector[cv::Mat (boxed)] = std::vector<Mat>()
// Arg ARG Primitive(bool) compactResult= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_BinaryDescriptorMatcher_radiusMatch_Mat_VectorOfVectorOfDMatch_float_VectorOfMat_bool(void* instance, void* queryDescriptors, void* matches, float maxDistance, void* masks, bool compactResult) {
    try {
        reinterpret_cast<cv::line_descriptor::BinaryDescriptorMatcher*>(instance)->radiusMatch(*reinterpret_cast<const cv::Mat*>(queryDescriptors), *reinterpret_cast<std::vector<std::vector<cv::DMatch>>*>(matches), maxDistance, *reinterpret_cast<const std::vector<cv::Mat>*>(masks), compactResult);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::BinaryDescriptorMatcher::add
// as:     cv::line_descriptor::BinaryDescriptorMatcher::add (method) cv::line_descriptor::BinaryDescriptorMatcher . add
// Arg ARG Vector[cv::Mat (boxed)] descriptors= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_BinaryDescriptorMatcher_add_VectorOfMat(void* instance, void* descriptors) {
    try {
        reinterpret_cast<cv::line_descriptor::BinaryDescriptorMatcher*>(instance)->add(*reinterpret_cast<const std::vector<cv::Mat>*>(descriptors));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::BinaryDescriptorMatcher::train
// as:     cv::line_descriptor::BinaryDescriptorMatcher::train (method) cv::line_descriptor::BinaryDescriptorMatcher . train
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_BinaryDescriptorMatcher_train(void* instance) {
    try {
        reinterpret_cast<cv::line_descriptor::BinaryDescriptorMatcher*>(instance)->train();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::BinaryDescriptorMatcher::createBinaryDescriptorMatcher
// as:     cv::line_descriptor::BinaryDescriptorMatcher::createBinaryDescriptorMatcher (method) cv::line_descriptor::BinaryDescriptorMatcher . createBinaryDescriptorMatcher
// Return value: SmartPtr[cv::line_descriptor::BinaryDescriptorMatcher (boxed)]
cv_return_value_void_X cv_line_descriptor_BinaryDescriptorMatcher_createBinaryDescriptorMatcher() {
    try {
        Ptr<cv::line_descriptor::BinaryDescriptorMatcher> ret = cv::line_descriptor::BinaryDescriptorMatcher::createBinaryDescriptorMatcher();
        return { Error::Code::StsOk, NULL, new Ptr<cv::line_descriptor::BinaryDescriptorMatcher>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::line_descriptor::BinaryDescriptorMatcher::clear
// as:     cv::line_descriptor::BinaryDescriptorMatcher::clear (method) cv::line_descriptor::BinaryDescriptorMatcher . clear
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_BinaryDescriptorMatcher_clear(void* instance) {
    try {
        reinterpret_cast<cv::line_descriptor::BinaryDescriptorMatcher*>(instance)->clear();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::BinaryDescriptorMatcher::BinaryDescriptorMatcher
// as:     cv::line_descriptor::BinaryDescriptorMatcher::BinaryDescriptorMatcher (constructor) cv::line_descriptor::BinaryDescriptorMatcher . default
// Return value: cv::line_descriptor::BinaryDescriptorMatcher (boxed)
cv_return_value_void_X cv_line_descriptor_BinaryDescriptorMatcher_BinaryDescriptorMatcher() {
    try {
        cv::line_descriptor::BinaryDescriptorMatcher* ret = new cv::line_descriptor::BinaryDescriptorMatcher();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::line_descriptor::KeyLine::getStartPoint
// as:     cv::line_descriptor::KeyLine::getStartPoint (method) cv::line_descriptor::KeyLine (simple) . getStartPoint
// Return value: cv::Point2f (simple)
cv_return_value_Point2fWrapper cv_line_descriptor_KeyLine_getStartPoint_const(cv::line_descriptor::KeyLine instance) {
    try {
        cv::Point2f ret = reinterpret_cast<cv::line_descriptor::KeyLine*>(&instance)->getStartPoint();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<Point2fWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_Point2fWrapper)
}

// parsed: cv::line_descriptor::KeyLine::getEndPoint
// as:     cv::line_descriptor::KeyLine::getEndPoint (method) cv::line_descriptor::KeyLine (simple) . getEndPoint
// Return value: cv::Point2f (simple)
cv_return_value_Point2fWrapper cv_line_descriptor_KeyLine_getEndPoint_const(cv::line_descriptor::KeyLine instance) {
    try {
        cv::Point2f ret = reinterpret_cast<cv::line_descriptor::KeyLine*>(&instance)->getEndPoint();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<Point2fWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_Point2fWrapper)
}

// parsed: cv::line_descriptor::KeyLine::getStartPointInOctave
// as:     cv::line_descriptor::KeyLine::getStartPointInOctave (method) cv::line_descriptor::KeyLine (simple) . getStartPointInOctave
// Return value: cv::Point2f (simple)
cv_return_value_Point2fWrapper cv_line_descriptor_KeyLine_getStartPointInOctave_const(cv::line_descriptor::KeyLine instance) {
    try {
        cv::Point2f ret = reinterpret_cast<cv::line_descriptor::KeyLine*>(&instance)->getStartPointInOctave();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<Point2fWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_Point2fWrapper)
}

// parsed: cv::line_descriptor::KeyLine::getEndPointInOctave
// as:     cv::line_descriptor::KeyLine::getEndPointInOctave (method) cv::line_descriptor::KeyLine (simple) . getEndPointInOctave
// Return value: cv::Point2f (simple)
cv_return_value_Point2fWrapper cv_line_descriptor_KeyLine_getEndPointInOctave_const(cv::line_descriptor::KeyLine instance) {
    try {
        cv::Point2f ret = reinterpret_cast<cv::line_descriptor::KeyLine*>(&instance)->getEndPointInOctave();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<Point2fWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_Point2fWrapper)
}

// parsed: cv::line_descriptor::KeyLine::KeyLine
// as:     cv::line_descriptor::KeyLine::KeyLine (constructor) cv::line_descriptor::KeyLine (simple) . default
// Return value: cv::line_descriptor::KeyLine (simple)
cv_return_value_KeyLine cv_line_descriptor_KeyLine_KeyLine() {
    try {
        cv::line_descriptor::KeyLine ret;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_KeyLine)
}

// boxed class: cv::line_descriptor::LSDDetector
void cv_LSDDetector_delete(void* instance) {
    delete reinterpret_cast<cv::line_descriptor::LSDDetector*>(instance);
}
// parsed: cv::line_descriptor::LSDDetector::LSDDetector
// as:     cv::line_descriptor::LSDDetector::LSDDetector (constructor) cv::line_descriptor::LSDDetector . default
// Return value: cv::line_descriptor::LSDDetector (boxed)
cv_return_value_void_X cv_line_descriptor_LSDDetector_LSDDetector() {
    try {
        cv::line_descriptor::LSDDetector* ret = new cv::line_descriptor::LSDDetector();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::line_descriptor::LSDDetector::LSDDetector
// as:     cv::line_descriptor::LSDDetector::LSDDetector (constructor) cv::line_descriptor::LSDDetector . new
// Arg ARG cv::line_descriptor::LSDParam (simple) _params= cv::line_descriptor::LSDParam (simple) = 
// Return value: cv::line_descriptor::LSDDetector (boxed)
cv_return_value_void_X cv_line_descriptor_LSDDetector_LSDDetector_LSDParam(cv::line_descriptor::LSDParam _params) {
    try {
        cv::line_descriptor::LSDDetector* ret = new cv::line_descriptor::LSDDetector(*reinterpret_cast<cv::line_descriptor::LSDParam*>(&_params));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::line_descriptor::LSDDetector::createLSDDetector
// as:     cv::line_descriptor::LSDDetector::createLSDDetector (method) cv::line_descriptor::LSDDetector . createLSDDetector
// Return value: SmartPtr[cv::line_descriptor::LSDDetector (boxed)]
cv_return_value_void_X cv_line_descriptor_LSDDetector_createLSDDetector() {
    try {
        Ptr<cv::line_descriptor::LSDDetector> ret = cv::line_descriptor::LSDDetector::createLSDDetector();
        return { Error::Code::StsOk, NULL, new Ptr<cv::line_descriptor::LSDDetector>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::line_descriptor::LSDDetector::createLSDDetector
// as:     cv::line_descriptor::LSDDetector::createLSDDetector (method) cv::line_descriptor::LSDDetector . createLSDDetector
// Arg ARG cv::line_descriptor::LSDParam (simple) params= cv::line_descriptor::LSDParam (simple) = 
// Return value: SmartPtr[cv::line_descriptor::LSDDetector (boxed)]
cv_return_value_void_X cv_line_descriptor_LSDDetector_createLSDDetector_LSDParam(cv::line_descriptor::LSDParam params) {
    try {
        Ptr<cv::line_descriptor::LSDDetector> ret = cv::line_descriptor::LSDDetector::createLSDDetector(*reinterpret_cast<cv::line_descriptor::LSDParam*>(&params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::line_descriptor::LSDDetector>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::line_descriptor::LSDDetector::detect
// as:     cv::line_descriptor::LSDDetector::detect (method) cv::line_descriptor::LSDDetector . detect
// Arg ARG cv::Mat (boxed) image= cv::Mat (boxed) = 
// Arg ARG Vector[cv::line_descriptor::KeyLine (simple)] keypoints= Vector[cv::line_descriptor::KeyLine (simple)] = 
// Arg ARG Primitive(int) scale= Primitive(int) = 
// Arg ARG Primitive(int) numOctaves= Primitive(int) = 
// Arg ARG cv::Mat (boxed) mask= cv::Mat (boxed) = Mat()
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_LSDDetector_detect_Mat_VectorOfKeyLine_int_int_Mat(void* instance, void* image, void* keypoints, int scale, int numOctaves, void* mask) {
    try {
        reinterpret_cast<cv::line_descriptor::LSDDetector*>(instance)->detect(*reinterpret_cast<const cv::Mat*>(image), *reinterpret_cast<std::vector<cv::line_descriptor::KeyLine>*>(keypoints), scale, numOctaves, *reinterpret_cast<const cv::Mat*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::LSDDetector::detect
// as:     cv::line_descriptor::LSDDetector::detect (method) cv::line_descriptor::LSDDetector . detect
// Arg ARG Vector[cv::Mat (boxed)] images= Vector[cv::Mat (boxed)] = 
// Arg ARG Vector[Vector[cv::line_descriptor::KeyLine (simple)]] keylines= Vector[Vector[cv::line_descriptor::KeyLine (simple)]] = 
// Arg ARG Primitive(int) scale= Primitive(int) = 
// Arg ARG Primitive(int) numOctaves= Primitive(int) = 
// Arg ARG Vector[cv::Mat (boxed)] masks= Vector[cv::Mat (boxed)] = std::vector<Mat>()
// Return value: Primitive(void)
cv_return_value_void cv_line_descriptor_LSDDetector_detect_const_VectorOfMat_VectorOfVectorOfKeyLine_int_int_VectorOfMat(void* instance, void* images, void* keylines, int scale, int numOctaves, void* masks) {
    try {
        reinterpret_cast<cv::line_descriptor::LSDDetector*>(instance)->detect(*reinterpret_cast<const std::vector<cv::Mat>*>(images), *reinterpret_cast<std::vector<std::vector<cv::line_descriptor::KeyLine>>*>(keylines), scale, numOctaves, *reinterpret_cast<const std::vector<cv::Mat>*>(masks));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::line_descriptor::LSDParam::LSDParam
// as:     cv::line_descriptor::LSDParam::LSDParam (constructor) cv::line_descriptor::LSDParam (simple) . default
// Return value: cv::line_descriptor::LSDParam (simple)
cv_return_value_LSDParam cv_line_descriptor_LSDParam_LSDParam() {
    try {
        cv::line_descriptor::LSDParam ret;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_LSDParam)
}



} // extern "C"

