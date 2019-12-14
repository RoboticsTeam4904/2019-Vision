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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/sfm.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/sfm/conditioning.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/sfm/fundamental.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/sfm/io.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/sfm/numeric.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/sfm/projection.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/sfm/reconstruct.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/sfm/robust.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/sfm/simple_pipeline.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/sfm/triangulation.hpp"

extern "C" {

// parsed: cv::sfm::KRtFromProjection
// as:     cv::sfm::KRtFromProjection (function)
// Arg ARG cv::_InputArray (boxed) P= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) K= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) R= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) t= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_KRtFromProjection__InputArray__OutputArray__OutputArray__OutputArray(void* P, void* K, void* R, void* t) {
    try {
        cv::sfm::KRtFromProjection(*reinterpret_cast<const cv::_InputArray*>(P), *reinterpret_cast<cv::_OutputArray*>(K), *reinterpret_cast<cv::_OutputArray*>(R), *reinterpret_cast<cv::_OutputArray*>(t));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::applyTransformationToPoints
// as:     cv::sfm::applyTransformationToPoints (function)
// Arg ARG cv::_InputArray (boxed) points= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) T= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) transformed_points= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_applyTransformationToPoints__InputArray__InputArray__OutputArray(void* points, void* T, void* transformed_points) {
    try {
        cv::sfm::applyTransformationToPoints(*reinterpret_cast<const cv::_InputArray*>(points), *reinterpret_cast<const cv::_InputArray*>(T), *reinterpret_cast<cv::_OutputArray*>(transformed_points));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::computeOrientation
// as:     cv::sfm::computeOrientation (function)
// Arg ARG cv::_InputArray (boxed) x1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) x2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) R= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) t= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) s= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_computeOrientation__InputArray__InputArray__OutputArray__OutputArray_double(void* x1, void* x2, void* R, void* t, double s) {
    try {
        cv::sfm::computeOrientation(*reinterpret_cast<const cv::_InputArray*>(x1), *reinterpret_cast<const cv::_InputArray*>(x2), *reinterpret_cast<cv::_OutputArray*>(R), *reinterpret_cast<cv::_OutputArray*>(t), s);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::depth
// as:     cv::sfm::depth (function)
// Arg ARG cv::_InputArray (boxed) R= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) t= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) X= cv::_InputArray (boxed) = 
// Return value: Primitive(double)
cv_return_value_double cv_sfm_depth__InputArray__InputArray__InputArray(void* R, void* t, void* X) {
    try {
        double ret = cv::sfm::depth(*reinterpret_cast<const cv::_InputArray*>(R), *reinterpret_cast<const cv::_InputArray*>(t), *reinterpret_cast<const cv::_InputArray*>(X));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::sfm::essentialFromFundamental
// as:     cv::sfm::essentialFromFundamental (function)
// Arg ARG cv::_InputArray (boxed) F= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) E= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_essentialFromFundamental__InputArray__InputArray__InputArray__OutputArray(void* F, void* K1, void* K2, void* E) {
    try {
        cv::sfm::essentialFromFundamental(*reinterpret_cast<const cv::_InputArray*>(F), *reinterpret_cast<const cv::_InputArray*>(K1), *reinterpret_cast<const cv::_InputArray*>(K2), *reinterpret_cast<cv::_OutputArray*>(E));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::essentialFromRt
// as:     cv::sfm::essentialFromRt (function)
// Arg ARG cv::_InputArray (boxed) R1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) t1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) R2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) t2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) E= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_essentialFromRt__InputArray__InputArray__InputArray__InputArray__OutputArray(void* R1, void* t1, void* R2, void* t2, void* E) {
    try {
        cv::sfm::essentialFromRt(*reinterpret_cast<const cv::_InputArray*>(R1), *reinterpret_cast<const cv::_InputArray*>(t1), *reinterpret_cast<const cv::_InputArray*>(R2), *reinterpret_cast<const cv::_InputArray*>(t2), *reinterpret_cast<cv::_OutputArray*>(E));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::euclideanToHomogeneous
// as:     cv::sfm::euclideanToHomogeneous (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_euclideanToHomogeneous__InputArray__OutputArray(void* src, void* dst) {
    try {
        cv::sfm::euclideanToHomogeneous(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::fundamentalFromCorrespondences7PointRobust
// as:     cv::sfm::fundamentalFromCorrespondences7PointRobust (function)
// Arg ARG cv::_InputArray (boxed) x1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) x2= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) max_error= Primitive(double) = 
// Arg ARG cv::_OutputArray (boxed) F= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) inliers= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) outliers_probability= Primitive(double) = 1e-2
// Return value: Primitive(double)
cv_return_value_double cv_sfm_fundamentalFromCorrespondences7PointRobust__InputArray__InputArray_double__OutputArray__OutputArray_double(void* x1, void* x2, double max_error, void* F, void* inliers, double outliers_probability) {
    try {
        double ret = cv::sfm::fundamentalFromCorrespondences7PointRobust(*reinterpret_cast<const cv::_InputArray*>(x1), *reinterpret_cast<const cv::_InputArray*>(x2), max_error, *reinterpret_cast<cv::_OutputArray*>(F), *reinterpret_cast<cv::_OutputArray*>(inliers), outliers_probability);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::sfm::fundamentalFromCorrespondences8PointRobust
// as:     cv::sfm::fundamentalFromCorrespondences8PointRobust (function)
// Arg ARG cv::_InputArray (boxed) x1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) x2= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) max_error= Primitive(double) = 
// Arg ARG cv::_OutputArray (boxed) F= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) inliers= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) outliers_probability= Primitive(double) = 1e-2
// Return value: Primitive(double)
cv_return_value_double cv_sfm_fundamentalFromCorrespondences8PointRobust__InputArray__InputArray_double__OutputArray__OutputArray_double(void* x1, void* x2, double max_error, void* F, void* inliers, double outliers_probability) {
    try {
        double ret = cv::sfm::fundamentalFromCorrespondences8PointRobust(*reinterpret_cast<const cv::_InputArray*>(x1), *reinterpret_cast<const cv::_InputArray*>(x2), max_error, *reinterpret_cast<cv::_OutputArray*>(F), *reinterpret_cast<cv::_OutputArray*>(inliers), outliers_probability);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::sfm::fundamentalFromEssential
// as:     cv::sfm::fundamentalFromEssential (function)
// Arg ARG cv::_InputArray (boxed) E= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) F= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_fundamentalFromEssential__InputArray__InputArray__InputArray__OutputArray(void* E, void* K1, void* K2, void* F) {
    try {
        cv::sfm::fundamentalFromEssential(*reinterpret_cast<const cv::_InputArray*>(E), *reinterpret_cast<const cv::_InputArray*>(K1), *reinterpret_cast<const cv::_InputArray*>(K2), *reinterpret_cast<cv::_OutputArray*>(F));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::fundamentalFromProjections
// as:     cv::sfm::fundamentalFromProjections (function)
// Arg ARG cv::_InputArray (boxed) P1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) P2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) F= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_fundamentalFromProjections__InputArray__InputArray__OutputArray(void* P1, void* P2, void* F) {
    try {
        cv::sfm::fundamentalFromProjections(*reinterpret_cast<const cv::_InputArray*>(P1), *reinterpret_cast<const cv::_InputArray*>(P2), *reinterpret_cast<cv::_OutputArray*>(F));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::homogeneousToEuclidean
// as:     cv::sfm::homogeneousToEuclidean (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_homogeneousToEuclidean__InputArray__OutputArray(void* src, void* dst) {
    try {
        cv::sfm::homogeneousToEuclidean(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::importReconstruction
// as:     cv::sfm::importReconstruction (function)
// Arg ARG string file= string = 
// Arg ARG cv::_OutputArray (boxed) Rs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Ts= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Ks= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) points3d= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) file_format= Primitive(int) = SFM_IO_BUNDLER
// Return value: Primitive(void)
cv_return_value_void cv_sfm_importReconstruction_String__OutputArray__OutputArray__OutputArray__OutputArray_int(const char* file, void* Rs, void* Ts, void* Ks, void* points3d, int file_format) {
    try {
        cv::sfm::importReconstruction(String(file), *reinterpret_cast<cv::_OutputArray*>(Rs), *reinterpret_cast<cv::_OutputArray*>(Ts), *reinterpret_cast<cv::_OutputArray*>(Ks), *reinterpret_cast<cv::_OutputArray*>(points3d), file_format);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::isotropicPreconditionerFromPoints
// as:     cv::sfm::isotropicPreconditionerFromPoints (function)
// Arg ARG cv::_InputArray (boxed) points= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) T= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_isotropicPreconditionerFromPoints__InputArray__OutputArray(void* points, void* T) {
    try {
        cv::sfm::isotropicPreconditionerFromPoints(*reinterpret_cast<const cv::_InputArray*>(points), *reinterpret_cast<cv::_OutputArray*>(T));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::meanAndVarianceAlongRows
// as:     cv::sfm::meanAndVarianceAlongRows (function)
// Arg ARG cv::_InputArray (boxed) A= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) mean= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) variance= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_meanAndVarianceAlongRows__InputArray__OutputArray__OutputArray(void* A, void* mean, void* variance) {
    try {
        cv::sfm::meanAndVarianceAlongRows(*reinterpret_cast<const cv::_InputArray*>(A), *reinterpret_cast<cv::_OutputArray*>(mean), *reinterpret_cast<cv::_OutputArray*>(variance));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::motionFromEssentialChooseSolution
// as:     cv::sfm::motionFromEssentialChooseSolution (function)
// Arg ARG cv::_InputArray (boxed) Rs= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) ts= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) x1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) x2= cv::_InputArray (boxed) = 
// Return value: Primitive(int)
cv_return_value_int cv_sfm_motionFromEssentialChooseSolution__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray(void* Rs, void* ts, void* K1, void* x1, void* K2, void* x2) {
    try {
        int ret = cv::sfm::motionFromEssentialChooseSolution(*reinterpret_cast<const cv::_InputArray*>(Rs), *reinterpret_cast<const cv::_InputArray*>(ts), *reinterpret_cast<const cv::_InputArray*>(K1), *reinterpret_cast<const cv::_InputArray*>(x1), *reinterpret_cast<const cv::_InputArray*>(K2), *reinterpret_cast<const cv::_InputArray*>(x2));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::sfm::motionFromEssential
// as:     cv::sfm::motionFromEssential (function)
// Arg ARG cv::_InputArray (boxed) E= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Rs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) ts= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_motionFromEssential__InputArray__OutputArray__OutputArray(void* E, void* Rs, void* ts) {
    try {
        cv::sfm::motionFromEssential(*reinterpret_cast<const cv::_InputArray*>(E), *reinterpret_cast<cv::_OutputArray*>(Rs), *reinterpret_cast<cv::_OutputArray*>(ts));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::normalizeFundamental
// as:     cv::sfm::normalizeFundamental (function)
// Arg ARG cv::_InputArray (boxed) F= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) F_normalized= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_normalizeFundamental__InputArray__OutputArray(void* F, void* F_normalized) {
    try {
        cv::sfm::normalizeFundamental(*reinterpret_cast<const cv::_InputArray*>(F), *reinterpret_cast<cv::_OutputArray*>(F_normalized));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::normalizeIsotropicPoints
// as:     cv::sfm::normalizeIsotropicPoints (function)
// Arg ARG cv::_InputArray (boxed) points= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) normalized_points= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) T= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_normalizeIsotropicPoints__InputArray__OutputArray__OutputArray(void* points, void* normalized_points, void* T) {
    try {
        cv::sfm::normalizeIsotropicPoints(*reinterpret_cast<const cv::_InputArray*>(points), *reinterpret_cast<cv::_OutputArray*>(normalized_points), *reinterpret_cast<cv::_OutputArray*>(T));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::normalizePoints
// as:     cv::sfm::normalizePoints (function)
// Arg ARG cv::_InputArray (boxed) points= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) normalized_points= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) T= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_normalizePoints__InputArray__OutputArray__OutputArray(void* points, void* normalized_points, void* T) {
    try {
        cv::sfm::normalizePoints(*reinterpret_cast<const cv::_InputArray*>(points), *reinterpret_cast<cv::_OutputArray*>(normalized_points), *reinterpret_cast<cv::_OutputArray*>(T));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::normalizedEightPointSolver
// as:     cv::sfm::normalizedEightPointSolver (function)
// Arg ARG cv::_InputArray (boxed) x1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) x2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) F= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_normalizedEightPointSolver__InputArray__InputArray__OutputArray(void* x1, void* x2, void* F) {
    try {
        cv::sfm::normalizedEightPointSolver(*reinterpret_cast<const cv::_InputArray*>(x1), *reinterpret_cast<const cv::_InputArray*>(x2), *reinterpret_cast<cv::_OutputArray*>(F));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::preconditionerFromPoints
// as:     cv::sfm::preconditionerFromPoints (function)
// Arg ARG cv::_InputArray (boxed) points= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) T= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_preconditionerFromPoints__InputArray__OutputArray(void* points, void* T) {
    try {
        cv::sfm::preconditionerFromPoints(*reinterpret_cast<const cv::_InputArray*>(points), *reinterpret_cast<cv::_OutputArray*>(T));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::projectionFromKRt
// as:     cv::sfm::projectionFromKRt (function)
// Arg ARG cv::_InputArray (boxed) K= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) R= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) t= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) P= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_projectionFromKRt__InputArray__InputArray__InputArray__OutputArray(void* K, void* R, void* t, void* P) {
    try {
        cv::sfm::projectionFromKRt(*reinterpret_cast<const cv::_InputArray*>(K), *reinterpret_cast<const cv::_InputArray*>(R), *reinterpret_cast<const cv::_InputArray*>(t), *reinterpret_cast<cv::_OutputArray*>(P));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::projectionsFromFundamental
// as:     cv::sfm::projectionsFromFundamental (function)
// Arg ARG cv::_InputArray (boxed) F= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) P1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) P2= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_projectionsFromFundamental__InputArray__OutputArray__OutputArray(void* F, void* P1, void* P2) {
    try {
        cv::sfm::projectionsFromFundamental(*reinterpret_cast<const cv::_InputArray*>(F), *reinterpret_cast<cv::_OutputArray*>(P1), *reinterpret_cast<cv::_OutputArray*>(P2));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::reconstruct
// as:     cv::sfm::reconstruct (function)
// Arg ARG Vector[string] images= Vector[string] = 
// Arg ARG cv::_OutputArray (boxed) Rs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Ts= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) K= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) points3d= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(bool) is_projective= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_sfm_reconstruct_VectorOfString__OutputArray__OutputArray__InputOutputArray__OutputArray_bool(void* images, void* Rs, void* Ts, void* K, void* points3d, bool is_projective) {
    try {
        cv::sfm::reconstruct(*reinterpret_cast<const std::vector<String>*>(images), *reinterpret_cast<cv::_OutputArray*>(Rs), *reinterpret_cast<cv::_OutputArray*>(Ts), *reinterpret_cast<cv::_InputOutputArray*>(K), *reinterpret_cast<cv::_OutputArray*>(points3d), is_projective);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::reconstruct
// as:     cv::sfm::reconstruct (function)
// Arg ARG Vector[string] images= Vector[string] = 
// Arg ARG cv::_OutputArray (boxed) Ps= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) points3d= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) K= cv::_InputOutputArray (boxed) = 
// Arg ARG Primitive(bool) is_projective= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_sfm_reconstruct_VectorOfString__OutputArray__OutputArray__InputOutputArray_bool(void* images, void* Ps, void* points3d, void* K, bool is_projective) {
    try {
        cv::sfm::reconstruct(*reinterpret_cast<const std::vector<String>*>(images), *reinterpret_cast<cv::_OutputArray*>(Ps), *reinterpret_cast<cv::_OutputArray*>(points3d), *reinterpret_cast<cv::_InputOutputArray*>(K), is_projective);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::reconstruct
// as:     cv::sfm::reconstruct (function)
// Arg ARG cv::_InputArray (boxed) points2d= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Rs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Ts= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) K= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) points3d= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(bool) is_projective= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_sfm_reconstruct__InputArray__OutputArray__OutputArray__InputOutputArray__OutputArray_bool(void* points2d, void* Rs, void* Ts, void* K, void* points3d, bool is_projective) {
    try {
        cv::sfm::reconstruct(*reinterpret_cast<const cv::_InputArray*>(points2d), *reinterpret_cast<cv::_OutputArray*>(Rs), *reinterpret_cast<cv::_OutputArray*>(Ts), *reinterpret_cast<cv::_InputOutputArray*>(K), *reinterpret_cast<cv::_OutputArray*>(points3d), is_projective);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::reconstruct
// as:     cv::sfm::reconstruct (function)
// Arg ARG cv::_InputArray (boxed) points2d= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Ps= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) points3d= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) K= cv::_InputOutputArray (boxed) = 
// Arg ARG Primitive(bool) is_projective= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_sfm_reconstruct__InputArray__OutputArray__OutputArray__InputOutputArray_bool(void* points2d, void* Ps, void* points3d, void* K, bool is_projective) {
    try {
        cv::sfm::reconstruct(*reinterpret_cast<const cv::_InputArray*>(points2d), *reinterpret_cast<cv::_OutputArray*>(Ps), *reinterpret_cast<cv::_OutputArray*>(points3d), *reinterpret_cast<cv::_InputOutputArray*>(K), is_projective);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::relativeCameraMotion
// as:     cv::sfm::relativeCameraMotion (function)
// Arg ARG cv::_InputArray (boxed) R1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) t1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) R2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) t2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) R= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) t= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_relativeCameraMotion__InputArray__InputArray__InputArray__InputArray__OutputArray__OutputArray(void* R1, void* t1, void* R2, void* t2, void* R, void* t) {
    try {
        cv::sfm::relativeCameraMotion(*reinterpret_cast<const cv::_InputArray*>(R1), *reinterpret_cast<const cv::_InputArray*>(t1), *reinterpret_cast<const cv::_InputArray*>(R2), *reinterpret_cast<const cv::_InputArray*>(t2), *reinterpret_cast<cv::_OutputArray*>(R), *reinterpret_cast<cv::_OutputArray*>(t));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::skew
// as:     cv::sfm::skew (function)
// Arg ARG cv::_InputArray (boxed) x= cv::_InputArray (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_sfm_skew__InputArray(void* x) {
    try {
        cv::Mat ret = cv::sfm::skew(*reinterpret_cast<const cv::_InputArray*>(x));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::sfm::triangulatePoints
// as:     cv::sfm::triangulatePoints (function)
// Arg ARG cv::_InputArray (boxed) points2d= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) projection_matrices= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) points3d= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_triangulatePoints__InputArray__InputArray__OutputArray(void* points2d, void* projection_matrices, void* points3d) {
    try {
        cv::sfm::triangulatePoints(*reinterpret_cast<const cv::_InputArray*>(points2d), *reinterpret_cast<const cv::_InputArray*>(projection_matrices), *reinterpret_cast<cv::_OutputArray*>(points3d));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::BaseSFM::run
// as:     cv::sfm::BaseSFM::run (method) cv::sfm::BaseSFM (trait) . run
// Arg ARG cv::_InputArray (boxed) points2d= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_BaseSFM_run__InputArray(void* instance, void* points2d) {
    try {
        reinterpret_cast<cv::sfm::BaseSFM*>(instance)->run(*reinterpret_cast<const cv::_InputArray*>(points2d));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::BaseSFM::run
// as:     cv::sfm::BaseSFM::run (method) cv::sfm::BaseSFM (trait) . run
// Arg ARG cv::_InputArray (boxed) points2d= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) K= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Rs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Ts= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) points3d= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_BaseSFM_run__InputArray__InputOutputArray__OutputArray__OutputArray__OutputArray(void* instance, void* points2d, void* K, void* Rs, void* Ts, void* points3d) {
    try {
        reinterpret_cast<cv::sfm::BaseSFM*>(instance)->run(*reinterpret_cast<const cv::_InputArray*>(points2d), *reinterpret_cast<cv::_InputOutputArray*>(K), *reinterpret_cast<cv::_OutputArray*>(Rs), *reinterpret_cast<cv::_OutputArray*>(Ts), *reinterpret_cast<cv::_OutputArray*>(points3d));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::BaseSFM::run
// as:     cv::sfm::BaseSFM::run (method) cv::sfm::BaseSFM (trait) . run
// Arg ARG Vector[string] images= Vector[string] = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_BaseSFM_run_VectorOfString(void* instance, void* images) {
    try {
        reinterpret_cast<cv::sfm::BaseSFM*>(instance)->run(*reinterpret_cast<const std::vector<String>*>(images));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::BaseSFM::run
// as:     cv::sfm::BaseSFM::run (method) cv::sfm::BaseSFM (trait) . run
// Arg ARG Vector[string] images= Vector[string] = 
// Arg ARG cv::_InputOutputArray (boxed) K= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Rs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Ts= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) points3d= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_BaseSFM_run_VectorOfString__InputOutputArray__OutputArray__OutputArray__OutputArray(void* instance, void* images, void* K, void* Rs, void* Ts, void* points3d) {
    try {
        reinterpret_cast<cv::sfm::BaseSFM*>(instance)->run(*reinterpret_cast<const std::vector<String>*>(images), *reinterpret_cast<cv::_InputOutputArray*>(K), *reinterpret_cast<cv::_OutputArray*>(Rs), *reinterpret_cast<cv::_OutputArray*>(Ts), *reinterpret_cast<cv::_OutputArray*>(points3d));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::BaseSFM::getError
// as:     cv::sfm::BaseSFM::getError (method) cv::sfm::BaseSFM (trait) . getError
// Return value: Primitive(double)
cv_return_value_double cv_sfm_BaseSFM_getError_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::sfm::BaseSFM*>(instance)->getError();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::sfm::BaseSFM::getPoints
// as:     cv::sfm::BaseSFM::getPoints (method) cv::sfm::BaseSFM (trait) . getPoints
// Arg ARG cv::_OutputArray (boxed) points3d= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_BaseSFM_getPoints__OutputArray(void* instance, void* points3d) {
    try {
        reinterpret_cast<cv::sfm::BaseSFM*>(instance)->getPoints(*reinterpret_cast<cv::_OutputArray*>(points3d));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::BaseSFM::getIntrinsics
// as:     cv::sfm::BaseSFM::getIntrinsics (method) cv::sfm::BaseSFM (trait) . getIntrinsics
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_sfm_BaseSFM_getIntrinsics_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::sfm::BaseSFM*>(instance)->getIntrinsics();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::sfm::BaseSFM::getCameras
// as:     cv::sfm::BaseSFM::getCameras (method) cv::sfm::BaseSFM (trait) . getCameras
// Arg ARG cv::_OutputArray (boxed) Rs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Ts= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_BaseSFM_getCameras__OutputArray__OutputArray(void* instance, void* Rs, void* Ts) {
    try {
        reinterpret_cast<cv::sfm::BaseSFM*>(instance)->getCameras(*reinterpret_cast<cv::_OutputArray*>(Rs), *reinterpret_cast<cv::_OutputArray*>(Ts));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::BaseSFM::setReconstructionOptions
// as:     cv::sfm::BaseSFM::setReconstructionOptions (method) cv::sfm::BaseSFM (trait) . setReconstructionOptions
// Arg ARG cv::sfm::libmv_ReconstructionOptions (simple) libmv_reconstruction_options= cv::sfm::libmv_ReconstructionOptions (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_BaseSFM_setReconstructionOptions_libmv_ReconstructionOptions(void* instance, cv::sfm::libmv_ReconstructionOptions libmv_reconstruction_options) {
    try {
        reinterpret_cast<cv::sfm::BaseSFM*>(instance)->setReconstructionOptions(*reinterpret_cast<const cv::sfm::libmv_ReconstructionOptions*>(&libmv_reconstruction_options));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::BaseSFM::setCameraIntrinsicOptions
// as:     cv::sfm::BaseSFM::setCameraIntrinsicOptions (method) cv::sfm::BaseSFM (trait) . setCameraIntrinsicOptions
// Arg ARG cv::sfm::libmv_CameraIntrinsicsOptions (simple) libmv_camera_intrinsics_options= cv::sfm::libmv_CameraIntrinsicsOptions (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_BaseSFM_setCameraIntrinsicOptions_libmv_CameraIntrinsicsOptions(void* instance, cv::sfm::libmv_CameraIntrinsicsOptions libmv_camera_intrinsics_options) {
    try {
        reinterpret_cast<cv::sfm::BaseSFM*>(instance)->setCameraIntrinsicOptions(*reinterpret_cast<const cv::sfm::libmv_CameraIntrinsicsOptions*>(&libmv_camera_intrinsics_options));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::sfm::SFMLibmvEuclideanReconstruction
void cv_SFMLibmvEuclideanReconstruction_delete(void* instance) {
    delete reinterpret_cast<cv::sfm::SFMLibmvEuclideanReconstruction*>(instance);
}
// parsed: cv::sfm::SFMLibmvEuclideanReconstruction::run
// as:     cv::sfm::SFMLibmvEuclideanReconstruction::run (method) cv::sfm::SFMLibmvEuclideanReconstruction . run
// Arg ARG cv::_InputArray (boxed) points2d= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_SFMLibmvEuclideanReconstruction_run__InputArray(void* instance, void* points2d) {
    try {
        reinterpret_cast<cv::sfm::SFMLibmvEuclideanReconstruction*>(instance)->run(*reinterpret_cast<const cv::_InputArray*>(points2d));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::SFMLibmvEuclideanReconstruction::run
// as:     cv::sfm::SFMLibmvEuclideanReconstruction::run (method) cv::sfm::SFMLibmvEuclideanReconstruction . run
// Arg ARG cv::_InputArray (boxed) points2d= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) K= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Rs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Ts= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) points3d= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_SFMLibmvEuclideanReconstruction_run__InputArray__InputOutputArray__OutputArray__OutputArray__OutputArray(void* instance, void* points2d, void* K, void* Rs, void* Ts, void* points3d) {
    try {
        reinterpret_cast<cv::sfm::SFMLibmvEuclideanReconstruction*>(instance)->run(*reinterpret_cast<const cv::_InputArray*>(points2d), *reinterpret_cast<cv::_InputOutputArray*>(K), *reinterpret_cast<cv::_OutputArray*>(Rs), *reinterpret_cast<cv::_OutputArray*>(Ts), *reinterpret_cast<cv::_OutputArray*>(points3d));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::SFMLibmvEuclideanReconstruction::run
// as:     cv::sfm::SFMLibmvEuclideanReconstruction::run (method) cv::sfm::SFMLibmvEuclideanReconstruction . run
// Arg ARG Vector[string] images= Vector[string] = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_SFMLibmvEuclideanReconstruction_run_VectorOfString(void* instance, void* images) {
    try {
        reinterpret_cast<cv::sfm::SFMLibmvEuclideanReconstruction*>(instance)->run(*reinterpret_cast<const std::vector<String>*>(images));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::SFMLibmvEuclideanReconstruction::run
// as:     cv::sfm::SFMLibmvEuclideanReconstruction::run (method) cv::sfm::SFMLibmvEuclideanReconstruction . run
// Arg ARG Vector[string] images= Vector[string] = 
// Arg ARG cv::_InputOutputArray (boxed) K= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Rs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Ts= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) points3d= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_SFMLibmvEuclideanReconstruction_run_VectorOfString__InputOutputArray__OutputArray__OutputArray__OutputArray(void* instance, void* images, void* K, void* Rs, void* Ts, void* points3d) {
    try {
        reinterpret_cast<cv::sfm::SFMLibmvEuclideanReconstruction*>(instance)->run(*reinterpret_cast<const std::vector<String>*>(images), *reinterpret_cast<cv::_InputOutputArray*>(K), *reinterpret_cast<cv::_OutputArray*>(Rs), *reinterpret_cast<cv::_OutputArray*>(Ts), *reinterpret_cast<cv::_OutputArray*>(points3d));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::SFMLibmvEuclideanReconstruction::getError
// as:     cv::sfm::SFMLibmvEuclideanReconstruction::getError (method) cv::sfm::SFMLibmvEuclideanReconstruction . getError
// Return value: Primitive(double)
cv_return_value_double cv_sfm_SFMLibmvEuclideanReconstruction_getError_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::sfm::SFMLibmvEuclideanReconstruction*>(instance)->getError();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::sfm::SFMLibmvEuclideanReconstruction::getPoints
// as:     cv::sfm::SFMLibmvEuclideanReconstruction::getPoints (method) cv::sfm::SFMLibmvEuclideanReconstruction . getPoints
// Arg ARG cv::_OutputArray (boxed) points3d= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_SFMLibmvEuclideanReconstruction_getPoints__OutputArray(void* instance, void* points3d) {
    try {
        reinterpret_cast<cv::sfm::SFMLibmvEuclideanReconstruction*>(instance)->getPoints(*reinterpret_cast<cv::_OutputArray*>(points3d));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::SFMLibmvEuclideanReconstruction::getIntrinsics
// as:     cv::sfm::SFMLibmvEuclideanReconstruction::getIntrinsics (method) cv::sfm::SFMLibmvEuclideanReconstruction . getIntrinsics
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_sfm_SFMLibmvEuclideanReconstruction_getIntrinsics_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::sfm::SFMLibmvEuclideanReconstruction*>(instance)->getIntrinsics();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::sfm::SFMLibmvEuclideanReconstruction::getCameras
// as:     cv::sfm::SFMLibmvEuclideanReconstruction::getCameras (method) cv::sfm::SFMLibmvEuclideanReconstruction . getCameras
// Arg ARG cv::_OutputArray (boxed) Rs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Ts= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_SFMLibmvEuclideanReconstruction_getCameras__OutputArray__OutputArray(void* instance, void* Rs, void* Ts) {
    try {
        reinterpret_cast<cv::sfm::SFMLibmvEuclideanReconstruction*>(instance)->getCameras(*reinterpret_cast<cv::_OutputArray*>(Rs), *reinterpret_cast<cv::_OutputArray*>(Ts));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::SFMLibmvEuclideanReconstruction::setReconstructionOptions
// as:     cv::sfm::SFMLibmvEuclideanReconstruction::setReconstructionOptions (method) cv::sfm::SFMLibmvEuclideanReconstruction . setReconstructionOptions
// Arg ARG cv::sfm::libmv_ReconstructionOptions (simple) libmv_reconstruction_options= cv::sfm::libmv_ReconstructionOptions (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_SFMLibmvEuclideanReconstruction_setReconstructionOptions_libmv_ReconstructionOptions(void* instance, cv::sfm::libmv_ReconstructionOptions libmv_reconstruction_options) {
    try {
        reinterpret_cast<cv::sfm::SFMLibmvEuclideanReconstruction*>(instance)->setReconstructionOptions(*reinterpret_cast<const cv::sfm::libmv_ReconstructionOptions*>(&libmv_reconstruction_options));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::SFMLibmvEuclideanReconstruction::setCameraIntrinsicOptions
// as:     cv::sfm::SFMLibmvEuclideanReconstruction::setCameraIntrinsicOptions (method) cv::sfm::SFMLibmvEuclideanReconstruction . setCameraIntrinsicOptions
// Arg ARG cv::sfm::libmv_CameraIntrinsicsOptions (simple) libmv_camera_intrinsics_options= cv::sfm::libmv_CameraIntrinsicsOptions (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_sfm_SFMLibmvEuclideanReconstruction_setCameraIntrinsicOptions_libmv_CameraIntrinsicsOptions(void* instance, cv::sfm::libmv_CameraIntrinsicsOptions libmv_camera_intrinsics_options) {
    try {
        reinterpret_cast<cv::sfm::SFMLibmvEuclideanReconstruction*>(instance)->setCameraIntrinsicOptions(*reinterpret_cast<const cv::sfm::libmv_CameraIntrinsicsOptions*>(&libmv_camera_intrinsics_options));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sfm::SFMLibmvEuclideanReconstruction::create
// as:     cv::sfm::SFMLibmvEuclideanReconstruction::create (method) cv::sfm::SFMLibmvEuclideanReconstruction . create
// Arg ARG cv::sfm::libmv_CameraIntrinsicsOptions (simple) camera_instrinsic_options= cv::sfm::libmv_CameraIntrinsicsOptions (simple) = libmv_CameraIntrinsicsOptions()
// Arg ARG cv::sfm::libmv_ReconstructionOptions (simple) reconstruction_options= cv::sfm::libmv_ReconstructionOptions (simple) = libmv_ReconstructionOptions()
// Return value: SmartPtr[cv::sfm::SFMLibmvEuclideanReconstruction (boxed)]
cv_return_value_void_X cv_sfm_SFMLibmvEuclideanReconstruction_create_libmv_CameraIntrinsicsOptions_libmv_ReconstructionOptions(cv::sfm::libmv_CameraIntrinsicsOptions camera_instrinsic_options, cv::sfm::libmv_ReconstructionOptions reconstruction_options) {
    try {
        Ptr<cv::sfm::SFMLibmvEuclideanReconstruction> ret = cv::sfm::SFMLibmvEuclideanReconstruction::create(*reinterpret_cast<const cv::sfm::libmv_CameraIntrinsicsOptions*>(&camera_instrinsic_options), *reinterpret_cast<const cv::sfm::libmv_ReconstructionOptions*>(&reconstruction_options));
        return { Error::Code::StsOk, NULL, new Ptr<cv::sfm::SFMLibmvEuclideanReconstruction>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::sfm::libmv_CameraIntrinsicsOptions::libmv_CameraIntrinsicsOptions
// as:     cv::sfm::libmv_CameraIntrinsicsOptions::libmv_CameraIntrinsicsOptions (constructor) cv::sfm::libmv_CameraIntrinsicsOptions (simple) . new
// Arg ARG Primitive(int) _distortion_model= Primitive(int) = 0
// Arg ARG Primitive(double) _focal_length_x= Primitive(double) = 0
// Arg ARG Primitive(double) _focal_length_y= Primitive(double) = 0
// Arg ARG Primitive(double) _principal_point_x= Primitive(double) = 0
// Arg ARG Primitive(double) _principal_point_y= Primitive(double) = 0
// Arg ARG Primitive(double) _polynomial_k1= Primitive(double) = 0
// Arg ARG Primitive(double) _polynomial_k2= Primitive(double) = 0
// Arg ARG Primitive(double) _polynomial_k3= Primitive(double) = 0
// Arg ARG Primitive(double) _polynomial_p1= Primitive(double) = 0
// Arg ARG Primitive(double) _polynomial_p2= Primitive(double) = 0
// Return value: cv::sfm::libmv_CameraIntrinsicsOptions (simple)
cv_return_value_libmv_CameraIntrinsicsOptions cv_sfm_libmv_CameraIntrinsicsOptions_libmv_CameraIntrinsicsOptions_int_double_double_double_double_double_double_double_double_double(int _distortion_model, double _focal_length_x, double _focal_length_y, double _principal_point_x, double _principal_point_y, double _polynomial_k1, double _polynomial_k2, double _polynomial_k3, double _polynomial_p1, double _polynomial_p2) {
    try {
        cv::sfm::libmv_CameraIntrinsicsOptions ret(_distortion_model, _focal_length_x, _focal_length_y, _principal_point_x, _principal_point_y, _polynomial_k1, _polynomial_k2, _polynomial_k3, _polynomial_p1, _polynomial_p2);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_libmv_CameraIntrinsicsOptions)
}

// parsed: cv::sfm::libmv_ReconstructionOptions::libmv_ReconstructionOptions
// as:     cv::sfm::libmv_ReconstructionOptions::libmv_ReconstructionOptions (constructor) cv::sfm::libmv_ReconstructionOptions (simple) . new
// Arg ARG Primitive(int) _keyframe1= Primitive(int) = 1
// Arg ARG Primitive(int) _keyframe2= Primitive(int) = 2
// Arg ARG Primitive(int) _refine_intrinsics= Primitive(int) = 1
// Arg ARG Primitive(int) _select_keyframes= Primitive(int) = 1
// Arg ARG Primitive(int) _verbosity_level= Primitive(int) = -1
// Return value: cv::sfm::libmv_ReconstructionOptions (simple)
cv_return_value_libmv_ReconstructionOptions cv_sfm_libmv_ReconstructionOptions_libmv_ReconstructionOptions_int_int_int_int_int(int _keyframe1, int _keyframe2, int _refine_intrinsics, int _select_keyframes, int _verbosity_level) {
    try {
        cv::sfm::libmv_ReconstructionOptions ret(_keyframe1, _keyframe2, _refine_intrinsics, _select_keyframes, _verbosity_level);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_libmv_ReconstructionOptions)
}



} // extern "C"

