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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/ccalib.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/ccalib/multicalib.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/ccalib/omnidir.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/ccalib/randpattern.hpp"

extern "C" {

// parsed: cv::omnidir::calibrate
// as:     cv::omnidir::calibrate (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG cv::_InputOutputArray (boxed) K= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) xi= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) D= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rvecs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tvecs= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = 
// Arg ARG cv::_OutputArray (boxed) idx= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(double)
cv_return_value_double cv_omnidir_calibrate__InputArray__InputArray_Size__InputOutputArray__InputOutputArray__InputOutputArray__OutputArray__OutputArray_int_TermCriteria__OutputArray(void* objectPoints, void* imagePoints, SizeWrapper size, void* K, void* xi, void* D, void* rvecs, void* tvecs, int flags, void* criteria, void* idx) {
    try {
        double ret = cv::omnidir::calibrate(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<cv::Size*>(&size), *reinterpret_cast<cv::_InputOutputArray*>(K), *reinterpret_cast<cv::_InputOutputArray*>(xi), *reinterpret_cast<cv::_InputOutputArray*>(D), *reinterpret_cast<cv::_OutputArray*>(rvecs), *reinterpret_cast<cv::_OutputArray*>(tvecs), flags, *reinterpret_cast<cv::TermCriteria*>(criteria), *reinterpret_cast<cv::_OutputArray*>(idx));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::omnidir::initUndistortRectifyMap
// as:     cv::omnidir::initUndistortRectifyMap (function)
// Arg ARG cv::_InputArray (boxed) K= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) D= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) xi= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) R= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) P= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG Primitive(int) mltype= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) map1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) map2= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_initUndistortRectifyMap__InputArray__InputArray__InputArray__InputArray__InputArray_Size_int__OutputArray__OutputArray_int(void* K, void* D, void* xi, void* R, void* P, SizeWrapper size, int mltype, void* map1, void* map2, int flags) {
    try {
        cv::omnidir::initUndistortRectifyMap(*reinterpret_cast<const cv::_InputArray*>(K), *reinterpret_cast<const cv::_InputArray*>(D), *reinterpret_cast<const cv::_InputArray*>(xi), *reinterpret_cast<const cv::_InputArray*>(R), *reinterpret_cast<const cv::_InputArray*>(P), *reinterpret_cast<const cv::Size*>(&size), mltype, *reinterpret_cast<cv::_OutputArray*>(map1), *reinterpret_cast<cv::_OutputArray*>(map2), flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::internal::compose_motion
// as:     cv::omnidir::internal::compose_motion (function)
// Arg ARG cv::_InputArray (boxed) _om1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) _T1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) _om2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) _T2= cv::_InputArray (boxed) = 
// Arg ARG cv::Mat (boxed) om3= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) T3= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dom3dom1= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dom3dT1= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dom3dom2= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dom3dT2= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dT3dom1= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dT3dT1= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dT3dom2= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dT3dT2= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_internal_compose_motion__InputArray__InputArray__InputArray__InputArray_Mat_Mat_Mat_Mat_Mat_Mat_Mat_Mat_Mat_Mat(void* _om1, void* _T1, void* _om2, void* _T2, void* om3, void* T3, void* dom3dom1, void* dom3dT1, void* dom3dom2, void* dom3dT2, void* dT3dom1, void* dT3dT1, void* dT3dom2, void* dT3dT2) {
    try {
        cv::omnidir::internal::compose_motion(*reinterpret_cast<const cv::_InputArray*>(_om1), *reinterpret_cast<const cv::_InputArray*>(_T1), *reinterpret_cast<const cv::_InputArray*>(_om2), *reinterpret_cast<const cv::_InputArray*>(_T2), *reinterpret_cast<cv::Mat*>(om3), *reinterpret_cast<cv::Mat*>(T3), *reinterpret_cast<cv::Mat*>(dom3dom1), *reinterpret_cast<cv::Mat*>(dom3dT1), *reinterpret_cast<cv::Mat*>(dom3dom2), *reinterpret_cast<cv::Mat*>(dom3dT2), *reinterpret_cast<cv::Mat*>(dT3dom1), *reinterpret_cast<cv::Mat*>(dT3dT1), *reinterpret_cast<cv::Mat*>(dT3dom2), *reinterpret_cast<cv::Mat*>(dT3dT2));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::internal::computeJacobianStereo
// as:     cv::omnidir::internal::computeJacobianStereo (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) parameters= cv::_InputArray (boxed) = 
// Arg ARG cv::Mat (boxed) JTJ_inv= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) JTE= cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG Primitive(double) epsilon= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_internal_computeJacobianStereo__InputArray__InputArray__InputArray__InputArray_Mat_Mat_int_double(void* objectPoints, void* imagePoints1, void* imagePoints2, void* parameters, void* JTJ_inv, void* JTE, int flags, double epsilon) {
    try {
        cv::omnidir::internal::computeJacobianStereo(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints1), *reinterpret_cast<const cv::_InputArray*>(imagePoints2), *reinterpret_cast<const cv::_InputArray*>(parameters), *reinterpret_cast<cv::Mat*>(JTJ_inv), *reinterpret_cast<cv::Mat*>(JTE), flags, epsilon);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::internal::computeJacobian
// as:     cv::omnidir::internal::computeJacobian (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) parameters= cv::_InputArray (boxed) = 
// Arg ARG cv::Mat (boxed) JTJ_inv= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) JTE= cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG Primitive(double) epsilon= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_internal_computeJacobian__InputArray__InputArray__InputArray_Mat_Mat_int_double(void* objectPoints, void* imagePoints, void* parameters, void* JTJ_inv, void* JTE, int flags, double epsilon) {
    try {
        cv::omnidir::internal::computeJacobian(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<const cv::_InputArray*>(parameters), *reinterpret_cast<cv::Mat*>(JTJ_inv), *reinterpret_cast<cv::Mat*>(JTE), flags, epsilon);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::internal::computeMeanReproErrStereo
// as:     cv::omnidir::internal::computeMeanReproErrStereo (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) D1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) D2= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) xi1= Primitive(double) = 
// Arg ARG Primitive(double) xi2= Primitive(double) = 
// Arg ARG cv::_InputArray (boxed) om= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) T= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) omL= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) TL= cv::_InputArray (boxed) = 
// Return value: Primitive(double)
cv_return_value_double cv_omnidir_internal_computeMeanReproErrStereo__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray_double_double__InputArray__InputArray__InputArray__InputArray(void* objectPoints, void* imagePoints1, void* imagePoints2, void* K1, void* K2, void* D1, void* D2, double xi1, double xi2, void* om, void* T, void* omL, void* TL) {
    try {
        double ret = cv::omnidir::internal::computeMeanReproErrStereo(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints1), *reinterpret_cast<const cv::_InputArray*>(imagePoints2), *reinterpret_cast<const cv::_InputArray*>(K1), *reinterpret_cast<const cv::_InputArray*>(K2), *reinterpret_cast<const cv::_InputArray*>(D1), *reinterpret_cast<const cv::_InputArray*>(D2), xi1, xi2, *reinterpret_cast<const cv::_InputArray*>(om), *reinterpret_cast<const cv::_InputArray*>(T), *reinterpret_cast<const cv::_InputArray*>(omL), *reinterpret_cast<const cv::_InputArray*>(TL));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::omnidir::internal::computeMeanReproErr
// as:     cv::omnidir::internal::computeMeanReproErr (function)
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) proImagePoints= cv::_InputArray (boxed) = 
// Return value: Primitive(double)
cv_return_value_double cv_omnidir_internal_computeMeanReproErr__InputArray__InputArray(void* imagePoints, void* proImagePoints) {
    try {
        double ret = cv::omnidir::internal::computeMeanReproErr(*reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<const cv::_InputArray*>(proImagePoints));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::omnidir::internal::computeMeanReproErr
// as:     cv::omnidir::internal::computeMeanReproErr (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) D= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) xi= Primitive(double) = 
// Arg ARG cv::_InputArray (boxed) omAll= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) tAll= cv::_InputArray (boxed) = 
// Return value: Primitive(double)
cv_return_value_double cv_omnidir_internal_computeMeanReproErr__InputArray__InputArray__InputArray__InputArray_double__InputArray__InputArray(void* objectPoints, void* imagePoints, void* K, void* D, double xi, void* omAll, void* tAll) {
    try {
        double ret = cv::omnidir::internal::computeMeanReproErr(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<const cv::_InputArray*>(K), *reinterpret_cast<const cv::_InputArray*>(D), xi, *reinterpret_cast<const cv::_InputArray*>(omAll), *reinterpret_cast<const cv::_InputArray*>(tAll));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::omnidir::internal::decodeParametersStereo
// as:     cv::omnidir::internal::decodeParametersStereo (function)
// Arg ARG cv::_InputArray (boxed) parameters= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) K1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) K2= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) om= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) T= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) omL= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tL= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) D1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) D2= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) xi1= Primitive(double) = 
// Arg ARG Primitive(double) xi2= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_internal_decodeParametersStereo__InputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray_double_double(void* parameters, void* K1, void* K2, void* om, void* T, void* omL, void* tL, void* D1, void* D2, double& xi1, double& xi2) {
    try {
        cv::omnidir::internal::decodeParametersStereo(*reinterpret_cast<const cv::_InputArray*>(parameters), *reinterpret_cast<cv::_OutputArray*>(K1), *reinterpret_cast<cv::_OutputArray*>(K2), *reinterpret_cast<cv::_OutputArray*>(om), *reinterpret_cast<cv::_OutputArray*>(T), *reinterpret_cast<cv::_OutputArray*>(omL), *reinterpret_cast<cv::_OutputArray*>(tL), *reinterpret_cast<cv::_OutputArray*>(D1), *reinterpret_cast<cv::_OutputArray*>(D2), xi1, xi2);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::internal::decodeParameters
// as:     cv::omnidir::internal::decodeParameters (function)
// Arg ARG cv::_InputArray (boxed) paramsters= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) K= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) omAll= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tAll= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) distoration= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) xi= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_internal_decodeParameters__InputArray__OutputArray__OutputArray__OutputArray__OutputArray_double(void* paramsters, void* K, void* omAll, void* tAll, void* distoration, double& xi) {
    try {
        cv::omnidir::internal::decodeParameters(*reinterpret_cast<const cv::_InputArray*>(paramsters), *reinterpret_cast<cv::_OutputArray*>(K), *reinterpret_cast<cv::_OutputArray*>(omAll), *reinterpret_cast<cv::_OutputArray*>(tAll), *reinterpret_cast<cv::_OutputArray*>(distoration), xi);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::internal::encodeParametersStereo
// as:     cv::omnidir::internal::encodeParametersStereo (function)
// Arg ARG cv::_InputArray (boxed) K1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) om= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) T= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) omL= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) tL= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) D1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) D2= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) xi1= Primitive(double) = 
// Arg ARG Primitive(double) xi2= Primitive(double) = 
// Arg ARG cv::_OutputArray (boxed) parameters= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_internal_encodeParametersStereo__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray_double_double__OutputArray(void* K1, void* K2, void* om, void* T, void* omL, void* tL, void* D1, void* D2, double xi1, double xi2, void* parameters) {
    try {
        cv::omnidir::internal::encodeParametersStereo(*reinterpret_cast<const cv::_InputArray*>(K1), *reinterpret_cast<const cv::_InputArray*>(K2), *reinterpret_cast<const cv::_InputArray*>(om), *reinterpret_cast<const cv::_InputArray*>(T), *reinterpret_cast<const cv::_InputArray*>(omL), *reinterpret_cast<const cv::_InputArray*>(tL), *reinterpret_cast<const cv::_InputArray*>(D1), *reinterpret_cast<const cv::_InputArray*>(D2), xi1, xi2, *reinterpret_cast<cv::_OutputArray*>(parameters));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::internal::encodeParameters
// as:     cv::omnidir::internal::encodeParameters (function)
// Arg ARG cv::_InputArray (boxed) K= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) omAll= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) tAll= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distoaration= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) xi= Primitive(double) = 
// Arg ARG cv::_OutputArray (boxed) parameters= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_internal_encodeParameters__InputArray__InputArray__InputArray__InputArray_double__OutputArray(void* K, void* omAll, void* tAll, void* distoaration, double xi, void* parameters) {
    try {
        cv::omnidir::internal::encodeParameters(*reinterpret_cast<const cv::_InputArray*>(K), *reinterpret_cast<const cv::_InputArray*>(omAll), *reinterpret_cast<const cv::_InputArray*>(tAll), *reinterpret_cast<const cv::_InputArray*>(distoaration), xi, *reinterpret_cast<cv::_OutputArray*>(parameters));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::internal::estimateUncertaintiesStereo
// as:     cv::omnidir::internal::estimateUncertaintiesStereo (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) parameters= cv::_InputArray (boxed) = 
// Arg ARG cv::Mat (boxed) errors= cv::Mat (boxed) = 
// Arg ARG cv::Vec2d (simple) std_error= cv::Vec2d (simple) = 
// Arg ARG Primitive(double) rms= Primitive(double) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_internal_estimateUncertaintiesStereo__InputArray__InputArray__InputArray__InputArray_Mat_Vec2d_double_int(void* objectPoints, void* imagePoints1, void* imagePoints2, void* parameters, void* errors, Vec2dWrapper& std_error, double& rms, int flags) {
    try {
        cv::omnidir::internal::estimateUncertaintiesStereo(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints1), *reinterpret_cast<const cv::_InputArray*>(imagePoints2), *reinterpret_cast<const cv::_InputArray*>(parameters), *reinterpret_cast<cv::Mat*>(errors), *reinterpret_cast<cv::Vec2d*>(&std_error), rms, flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::internal::estimateUncertainties
// as:     cv::omnidir::internal::estimateUncertainties (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) parameters= cv::_InputArray (boxed) = 
// Arg ARG cv::Mat (boxed) errors= cv::Mat (boxed) = 
// Arg ARG cv::Vec2d (simple) std_error= cv::Vec2d (simple) = 
// Arg ARG Primitive(double) rms= Primitive(double) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_internal_estimateUncertainties__InputArray__InputArray__InputArray_Mat_Vec2d_double_int(void* objectPoints, void* imagePoints, void* parameters, void* errors, Vec2dWrapper& std_error, double& rms, int flags) {
    try {
        cv::omnidir::internal::estimateUncertainties(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<const cv::_InputArray*>(parameters), *reinterpret_cast<cv::Mat*>(errors), *reinterpret_cast<cv::Vec2d*>(&std_error), rms, flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::internal::fillFixedStereo
// as:     cv::omnidir::internal::fillFixedStereo (function)
// Arg ARG cv::Mat (boxed) G= cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG Primitive(int) n= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_internal_fillFixedStereo_Mat_int_int(void* G, int flags, int n) {
    try {
        cv::omnidir::internal::fillFixedStereo(*reinterpret_cast<cv::Mat*>(G), flags, n);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::internal::fillFixed
// as:     cv::omnidir::internal::fillFixed (function)
// Arg ARG cv::Mat (boxed) G= cv::Mat (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG Primitive(int) n= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_internal_fillFixed_Mat_int_int(void* G, int flags, int n) {
    try {
        cv::omnidir::internal::fillFixed(*reinterpret_cast<cv::Mat*>(G), flags, n);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::internal::findMedian3
// as:     cv::omnidir::internal::findMedian3 (function)
// Arg ARG cv::_InputArray (boxed) mat= cv::_InputArray (boxed) = 
// Return value: cv::Vec3d (simple)
cv_return_value_Vec3dWrapper cv_omnidir_internal_findMedian3__InputArray(void* mat) {
    try {
        cv::Vec3d ret = cv::omnidir::internal::findMedian3(*reinterpret_cast<const cv::_InputArray*>(mat));
        return { Error::Code::StsOk, NULL, *reinterpret_cast<Vec3dWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_Vec3dWrapper)
}

// parsed: cv::omnidir::internal::findMedian
// as:     cv::omnidir::internal::findMedian (function)
// Arg ARG cv::Mat (boxed) row= cv::Mat (boxed) = 
// Return value: Primitive(double)
cv_return_value_double cv_omnidir_internal_findMedian_Mat(void* row) {
    try {
        double ret = cv::omnidir::internal::findMedian(*reinterpret_cast<const cv::Mat*>(row));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::omnidir::internal::flags2idxStereo
// as:     cv::omnidir::internal::flags2idxStereo (function)
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG Vector[Primitive(int)] idx= Vector[Primitive(int)] = 
// Arg ARG Primitive(int) n= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_internal_flags2idxStereo_int_VectorOfint_int(int flags, void* idx, int n) {
    try {
        cv::omnidir::internal::flags2idxStereo(flags, *reinterpret_cast<std::vector<int>*>(idx), n);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::internal::flags2idx
// as:     cv::omnidir::internal::flags2idx (function)
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG Vector[Primitive(int)] idx= Vector[Primitive(int)] = 
// Arg ARG Primitive(int) n= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_internal_flags2idx_int_VectorOfint_int(int flags, void* idx, int n) {
    try {
        cv::omnidir::internal::flags2idx(flags, *reinterpret_cast<std::vector<int>*>(idx), n);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::internal::getInterset
// as:     cv::omnidir::internal::getInterset (function)
// Arg ARG cv::_InputArray (boxed) idx1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) idx2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) inter1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) inter2= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) inter_ori= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_internal_getInterset__InputArray__InputArray__OutputArray__OutputArray__OutputArray(void* idx1, void* idx2, void* inter1, void* inter2, void* inter_ori) {
    try {
        cv::omnidir::internal::getInterset(*reinterpret_cast<const cv::_InputArray*>(idx1), *reinterpret_cast<const cv::_InputArray*>(idx2), *reinterpret_cast<cv::_OutputArray*>(inter1), *reinterpret_cast<cv::_OutputArray*>(inter2), *reinterpret_cast<cv::_OutputArray*>(inter_ori));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::internal::initializeCalibration
// as:     cv::omnidir::internal::initializeCalibration (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG cv::_OutputArray (boxed) omAll= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tAll= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) K= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) xi= Primitive(double) = 
// Arg ARG cv::_OutputArray (boxed) idx= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_internal_initializeCalibration__InputArray__InputArray_Size__OutputArray__OutputArray__OutputArray_double__OutputArray(void* objectPoints, void* imagePoints, SizeWrapper size, void* omAll, void* tAll, void* K, double& xi, void* idx) {
    try {
        cv::omnidir::internal::initializeCalibration(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<cv::Size*>(&size), *reinterpret_cast<cv::_OutputArray*>(omAll), *reinterpret_cast<cv::_OutputArray*>(tAll), *reinterpret_cast<cv::_OutputArray*>(K), xi, *reinterpret_cast<cv::_OutputArray*>(idx));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::internal::initializeStereoCalibration
// as:     cv::omnidir::internal::initializeStereoCalibration (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints2= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) size1= cv::Size (simple) = 
// Arg ARG cv::Size (simple) size2= cv::Size (simple) = 
// Arg ARG cv::_OutputArray (boxed) om= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) T= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) omL= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tL= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) K1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) D1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) K2= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) D2= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) xi1= Primitive(double) = 
// Arg ARG Primitive(double) xi2= Primitive(double) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) idx= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_internal_initializeStereoCalibration__InputArray__InputArray__InputArray_Size_Size__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray_double_double_int__OutputArray(void* objectPoints, void* imagePoints1, void* imagePoints2, SizeWrapper size1, SizeWrapper size2, void* om, void* T, void* omL, void* tL, void* K1, void* D1, void* K2, void* D2, double& xi1, double& xi2, int flags, void* idx) {
    try {
        cv::omnidir::internal::initializeStereoCalibration(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints1), *reinterpret_cast<const cv::_InputArray*>(imagePoints2), *reinterpret_cast<const cv::Size*>(&size1), *reinterpret_cast<const cv::Size*>(&size2), *reinterpret_cast<cv::_OutputArray*>(om), *reinterpret_cast<cv::_OutputArray*>(T), *reinterpret_cast<cv::_OutputArray*>(omL), *reinterpret_cast<cv::_OutputArray*>(tL), *reinterpret_cast<cv::_OutputArray*>(K1), *reinterpret_cast<cv::_OutputArray*>(D1), *reinterpret_cast<cv::_OutputArray*>(K2), *reinterpret_cast<cv::_OutputArray*>(D2), xi1, xi2, flags, *reinterpret_cast<cv::_OutputArray*>(idx));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::internal::subMatrix
// as:     cv::omnidir::internal::subMatrix (function)
// Arg ARG cv::Mat (boxed) src= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst= cv::Mat (boxed) = 
// Arg ARG Vector[Primitive(int)] cols= Vector[Primitive(int)] = 
// Arg ARG Vector[Primitive(int)] rows= Vector[Primitive(int)] = 
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_internal_subMatrix_Mat_Mat_VectorOfint_VectorOfint(void* src, void* dst, void* cols, void* rows) {
    try {
        cv::omnidir::internal::subMatrix(*reinterpret_cast<const cv::Mat*>(src), *reinterpret_cast<cv::Mat*>(dst), *reinterpret_cast<const std::vector<int>*>(cols), *reinterpret_cast<const std::vector<int>*>(rows));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::projectPoints
// as:     cv::omnidir::projectPoints (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) imagePoints= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) rvec= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) tvec= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) xi= Primitive(double) = 
// Arg ARG cv::_InputArray (boxed) D= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) jacobian= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_projectPoints__InputArray__OutputArray__InputArray__InputArray__InputArray_double__InputArray__OutputArray(void* objectPoints, void* imagePoints, void* rvec, void* tvec, void* K, double xi, void* D, void* jacobian) {
    try {
        cv::omnidir::projectPoints(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<cv::_OutputArray*>(imagePoints), *reinterpret_cast<const cv::_InputArray*>(rvec), *reinterpret_cast<const cv::_InputArray*>(tvec), *reinterpret_cast<const cv::_InputArray*>(K), xi, *reinterpret_cast<const cv::_InputArray*>(D), *reinterpret_cast<cv::_OutputArray*>(jacobian));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::stereoCalibrate
// as:     cv::omnidir::stereoCalibrate (function)
// Arg ARG cv::_InputOutputArray (boxed) objectPoints= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) imagePoints1= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) imagePoints2= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Size (simple) imageSize1= cv::Size (simple) = 
// Arg ARG cv::Size (simple) imageSize2= cv::Size (simple) = 
// Arg ARG cv::_InputOutputArray (boxed) K1= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) xi1= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) D1= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) K2= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) xi2= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) D2= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rvec= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tvec= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rvecsL= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tvecsL= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = 
// Arg ARG cv::_OutputArray (boxed) idx= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(double)
cv_return_value_double cv_omnidir_stereoCalibrate__InputOutputArray__InputOutputArray__InputOutputArray_Size_Size__InputOutputArray__InputOutputArray__InputOutputArray__InputOutputArray__InputOutputArray__InputOutputArray__OutputArray__OutputArray__OutputArray__OutputArray_int_TermCriteria__OutputArray(void* objectPoints, void* imagePoints1, void* imagePoints2, SizeWrapper imageSize1, SizeWrapper imageSize2, void* K1, void* xi1, void* D1, void* K2, void* xi2, void* D2, void* rvec, void* tvec, void* rvecsL, void* tvecsL, int flags, void* criteria, void* idx) {
    try {
        double ret = cv::omnidir::stereoCalibrate(*reinterpret_cast<cv::_InputOutputArray*>(objectPoints), *reinterpret_cast<cv::_InputOutputArray*>(imagePoints1), *reinterpret_cast<cv::_InputOutputArray*>(imagePoints2), *reinterpret_cast<const cv::Size*>(&imageSize1), *reinterpret_cast<const cv::Size*>(&imageSize2), *reinterpret_cast<cv::_InputOutputArray*>(K1), *reinterpret_cast<cv::_InputOutputArray*>(xi1), *reinterpret_cast<cv::_InputOutputArray*>(D1), *reinterpret_cast<cv::_InputOutputArray*>(K2), *reinterpret_cast<cv::_InputOutputArray*>(xi2), *reinterpret_cast<cv::_InputOutputArray*>(D2), *reinterpret_cast<cv::_OutputArray*>(rvec), *reinterpret_cast<cv::_OutputArray*>(tvec), *reinterpret_cast<cv::_OutputArray*>(rvecsL), *reinterpret_cast<cv::_OutputArray*>(tvecsL), flags, *reinterpret_cast<cv::TermCriteria*>(criteria), *reinterpret_cast<cv::_OutputArray*>(idx));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::omnidir::stereoReconstruct
// as:     cv::omnidir::stereoReconstruct (function)
// Arg ARG cv::_InputArray (boxed) image1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) image2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) D1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) xi1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) D2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) xi2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) R= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) T= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) flag= Primitive(int) = 
// Arg ARG Primitive(int) numDisparities= Primitive(int) = 
// Arg ARG Primitive(int) SADWindowSize= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) disparity= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) image1Rec= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) image2Rec= cv::_OutputArray (boxed) = 
// Arg ARG cv::Size (simple) newSize= cv::Size (simple) = Size()
// Arg ARG cv::_InputArray (boxed) Knew= cv::_InputArray (boxed) = cv::noArray()
// Arg ARG cv::_OutputArray (boxed) pointCloud= cv::_OutputArray (boxed) = cv::noArray()
// Arg ARG Primitive(int) pointType= Primitive(int) = XYZRGB
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_stereoReconstruct__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray_int_int_int__OutputArray__OutputArray__OutputArray_Size__InputArray__OutputArray_int(void* image1, void* image2, void* K1, void* D1, void* xi1, void* K2, void* D2, void* xi2, void* R, void* T, int flag, int numDisparities, int SADWindowSize, void* disparity, void* image1Rec, void* image2Rec, SizeWrapper newSize, void* Knew, void* pointCloud, int pointType) {
    try {
        cv::omnidir::stereoReconstruct(*reinterpret_cast<const cv::_InputArray*>(image1), *reinterpret_cast<const cv::_InputArray*>(image2), *reinterpret_cast<const cv::_InputArray*>(K1), *reinterpret_cast<const cv::_InputArray*>(D1), *reinterpret_cast<const cv::_InputArray*>(xi1), *reinterpret_cast<const cv::_InputArray*>(K2), *reinterpret_cast<const cv::_InputArray*>(D2), *reinterpret_cast<const cv::_InputArray*>(xi2), *reinterpret_cast<const cv::_InputArray*>(R), *reinterpret_cast<const cv::_InputArray*>(T), flag, numDisparities, SADWindowSize, *reinterpret_cast<cv::_OutputArray*>(disparity), *reinterpret_cast<cv::_OutputArray*>(image1Rec), *reinterpret_cast<cv::_OutputArray*>(image2Rec), *reinterpret_cast<const cv::Size*>(&newSize), *reinterpret_cast<const cv::_InputArray*>(Knew), *reinterpret_cast<cv::_OutputArray*>(pointCloud), pointType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::stereoRectify
// as:     cv::omnidir::stereoRectify (function)
// Arg ARG cv::_InputArray (boxed) R= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) T= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) R1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) R2= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_stereoRectify__InputArray__InputArray__OutputArray__OutputArray(void* R, void* T, void* R1, void* R2) {
    try {
        cv::omnidir::stereoRectify(*reinterpret_cast<const cv::_InputArray*>(R), *reinterpret_cast<const cv::_InputArray*>(T), *reinterpret_cast<cv::_OutputArray*>(R1), *reinterpret_cast<cv::_OutputArray*>(R2));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::undistortImage
// as:     cv::omnidir::undistortImage (function)
// Arg ARG cv::_InputArray (boxed) distorted= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) undistorted= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) D= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) xi= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG cv::_InputArray (boxed) Knew= cv::_InputArray (boxed) = cv::noArray()
// Arg ARG cv::Size (simple) new_size= cv::Size (simple) = Size()
// Arg ARG cv::_InputArray (boxed) R= cv::_InputArray (boxed) = Mat::eye(3, 3, CV_64F)
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_undistortImage__InputArray__OutputArray__InputArray__InputArray__InputArray_int__InputArray_Size__InputArray(void* distorted, void* undistorted, void* K, void* D, void* xi, int flags, void* Knew, SizeWrapper new_size, void* R) {
    try {
        cv::omnidir::undistortImage(*reinterpret_cast<const cv::_InputArray*>(distorted), *reinterpret_cast<cv::_OutputArray*>(undistorted), *reinterpret_cast<const cv::_InputArray*>(K), *reinterpret_cast<const cv::_InputArray*>(D), *reinterpret_cast<const cv::_InputArray*>(xi), flags, *reinterpret_cast<const cv::_InputArray*>(Knew), *reinterpret_cast<const cv::Size*>(&new_size), *reinterpret_cast<const cv::_InputArray*>(R));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::omnidir::undistortPoints
// as:     cv::omnidir::undistortPoints (function)
// Arg ARG cv::_InputArray (boxed) distorted= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) undistorted= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) D= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) xi= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) R= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_omnidir_undistortPoints__InputArray__OutputArray__InputArray__InputArray__InputArray__InputArray(void* distorted, void* undistorted, void* K, void* D, void* xi, void* R) {
    try {
        cv::omnidir::undistortPoints(*reinterpret_cast<const cv::_InputArray*>(distorted), *reinterpret_cast<cv::_OutputArray*>(undistorted), *reinterpret_cast<const cv::_InputArray*>(K), *reinterpret_cast<const cv::_InputArray*>(D), *reinterpret_cast<const cv::_InputArray*>(xi), *reinterpret_cast<const cv::_InputArray*>(R));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::ccalib::CustomPattern
void cv_CustomPattern_delete(void* instance) {
    delete reinterpret_cast<cv::ccalib::CustomPattern*>(instance);
}
// parsed: cv::ccalib::CustomPattern::CustomPattern
// as:     cv::ccalib::CustomPattern::CustomPattern (constructor) cv::ccalib::CustomPattern . default
// Return value: cv::ccalib::CustomPattern (boxed)
cv_return_value_void_X cv_ccalib_CustomPattern_CustomPattern() {
    try {
        cv::ccalib::CustomPattern* ret = new cv::ccalib::CustomPattern();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ccalib::CustomPattern::create
// as:     cv::ccalib::CustomPattern::create (method) cv::ccalib::CustomPattern . create
// Arg ARG cv::_InputArray (boxed) pattern= cv::_InputArray (boxed) = 
// Arg ARG cv::Size2f (simple) boardSize= cv::Size2f (simple) = 
// Arg ARG cv::_OutputArray (boxed) output= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(bool)
cv_return_value_bool cv_ccalib_CustomPattern_create__InputArray_Size2f__OutputArray(void* instance, void* pattern, Size2fWrapper boardSize, void* output) {
    try {
        bool ret = reinterpret_cast<cv::ccalib::CustomPattern*>(instance)->create(*reinterpret_cast<const cv::_InputArray*>(pattern), *reinterpret_cast<const cv::Size2f*>(&boardSize), *reinterpret_cast<cv::_OutputArray*>(output));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ccalib::CustomPattern::findPattern
// as:     cv::ccalib::CustomPattern::findPattern (method) cv::ccalib::CustomPattern . findPattern
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) matched_features= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) pattern_points= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) ratio= Primitive(double) = 0.7
// Arg ARG Primitive(double) proj_error= Primitive(double) = 8.0
// Arg ARG Primitive(bool) refine_position= Primitive(bool) = false
// Arg ARG cv::_OutputArray (boxed) out= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) H= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) pattern_corners= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(bool)
cv_return_value_bool cv_ccalib_CustomPattern_findPattern__InputArray__OutputArray__OutputArray_double_double_bool__OutputArray__OutputArray__OutputArray(void* instance, void* image, void* matched_features, void* pattern_points, double ratio, double proj_error, bool refine_position, void* out, void* H, void* pattern_corners) {
    try {
        bool ret = reinterpret_cast<cv::ccalib::CustomPattern*>(instance)->findPattern(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(matched_features), *reinterpret_cast<cv::_OutputArray*>(pattern_points), ratio, proj_error, refine_position, *reinterpret_cast<cv::_OutputArray*>(out), *reinterpret_cast<cv::_OutputArray*>(H), *reinterpret_cast<cv::_OutputArray*>(pattern_corners));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ccalib::CustomPattern::isInitialized
// as:     cv::ccalib::CustomPattern::isInitialized (method) cv::ccalib::CustomPattern . isInitialized
// Return value: Primitive(bool)
cv_return_value_bool cv_ccalib_CustomPattern_isInitialized(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ccalib::CustomPattern*>(instance)->isInitialized();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ccalib::CustomPattern::getPatternPoints
// as:     cv::ccalib::CustomPattern::getPatternPoints (method) cv::ccalib::CustomPattern . getPatternPoints
// Arg ARG Vector[cv::KeyPoint (simple)] original_points= Vector[cv::KeyPoint (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_ccalib_CustomPattern_getPatternPoints_VectorOfKeyPoint(void* instance, void* original_points) {
    try {
        reinterpret_cast<cv::ccalib::CustomPattern*>(instance)->getPatternPoints(*reinterpret_cast<std::vector<cv::KeyPoint>*>(original_points));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ccalib::CustomPattern::getPixelSize
// as:     cv::ccalib::CustomPattern::getPixelSize (method) cv::ccalib::CustomPattern . getPixelSize
// Return value: Primitive(double)
cv_return_value_double cv_ccalib_CustomPattern_getPixelSize(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ccalib::CustomPattern*>(instance)->getPixelSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ccalib::CustomPattern::setFeatureDetector
// as:     cv::ccalib::CustomPattern::setFeatureDetector (method) cv::ccalib::CustomPattern . setFeatureDetector
// Arg ARG SmartPtr[cv::Feature2D (boxed)] featureDetector= SmartPtr[cv::Feature2D (boxed)] = 
// Return value: Primitive(bool)
cv_return_value_bool cv_ccalib_CustomPattern_setFeatureDetector_PtrOfFeature2D(void* instance, void* featureDetector) {
    try {
        bool ret = reinterpret_cast<cv::ccalib::CustomPattern*>(instance)->setFeatureDetector(*reinterpret_cast<Ptr<cv::Feature2D>*>(featureDetector));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ccalib::CustomPattern::setDescriptorExtractor
// as:     cv::ccalib::CustomPattern::setDescriptorExtractor (method) cv::ccalib::CustomPattern . setDescriptorExtractor
// Arg ARG SmartPtr[cv::Feature2D (boxed)] extractor= SmartPtr[cv::Feature2D (boxed)] = 
// Return value: Primitive(bool)
cv_return_value_bool cv_ccalib_CustomPattern_setDescriptorExtractor_PtrOfFeature2D(void* instance, void* extractor) {
    try {
        bool ret = reinterpret_cast<cv::ccalib::CustomPattern*>(instance)->setDescriptorExtractor(*reinterpret_cast<Ptr<cv::Feature2D>*>(extractor));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ccalib::CustomPattern::setDescriptorMatcher
// as:     cv::ccalib::CustomPattern::setDescriptorMatcher (method) cv::ccalib::CustomPattern . setDescriptorMatcher
// Arg ARG SmartPtr[cv::DescriptorMatcher (boxed)] matcher= SmartPtr[cv::DescriptorMatcher (boxed)] = 
// Return value: Primitive(bool)
cv_return_value_bool cv_ccalib_CustomPattern_setDescriptorMatcher_PtrOfDescriptorMatcher(void* instance, void* matcher) {
    try {
        bool ret = reinterpret_cast<cv::ccalib::CustomPattern*>(instance)->setDescriptorMatcher(*reinterpret_cast<Ptr<cv::DescriptorMatcher>*>(matcher));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ccalib::CustomPattern::getFeatureDetector
// as:     cv::ccalib::CustomPattern::getFeatureDetector (method) cv::ccalib::CustomPattern . getFeatureDetector
// Return value: SmartPtr[cv::Feature2D (boxed)]
cv_return_value_void_X cv_ccalib_CustomPattern_getFeatureDetector(void* instance) {
    try {
        Ptr<cv::Feature2D> ret = reinterpret_cast<cv::ccalib::CustomPattern*>(instance)->getFeatureDetector();
        return { Error::Code::StsOk, NULL, new Ptr<cv::Feature2D>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ccalib::CustomPattern::getDescriptorExtractor
// as:     cv::ccalib::CustomPattern::getDescriptorExtractor (method) cv::ccalib::CustomPattern . getDescriptorExtractor
// Return value: SmartPtr[cv::Feature2D (boxed)]
cv_return_value_void_X cv_ccalib_CustomPattern_getDescriptorExtractor(void* instance) {
    try {
        Ptr<cv::Feature2D> ret = reinterpret_cast<cv::ccalib::CustomPattern*>(instance)->getDescriptorExtractor();
        return { Error::Code::StsOk, NULL, new Ptr<cv::Feature2D>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ccalib::CustomPattern::getDescriptorMatcher
// as:     cv::ccalib::CustomPattern::getDescriptorMatcher (method) cv::ccalib::CustomPattern . getDescriptorMatcher
// Return value: SmartPtr[cv::DescriptorMatcher (boxed)]
cv_return_value_void_X cv_ccalib_CustomPattern_getDescriptorMatcher(void* instance) {
    try {
        Ptr<cv::DescriptorMatcher> ret = reinterpret_cast<cv::ccalib::CustomPattern*>(instance)->getDescriptorMatcher();
        return { Error::Code::StsOk, NULL, new Ptr<cv::DescriptorMatcher>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ccalib::CustomPattern::calibrate
// as:     cv::ccalib::CustomPattern::calibrate (method) cv::ccalib::CustomPattern . calibrate
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG cv::_InputOutputArray (boxed) cameraMatrix= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) distCoeffs= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rvecs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tvecs= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON)
// Return value: Primitive(double)
cv_return_value_double cv_ccalib_CustomPattern_calibrate__InputArray__InputArray_Size__InputOutputArray__InputOutputArray__OutputArray__OutputArray_int_TermCriteria(void* instance, void* objectPoints, void* imagePoints, SizeWrapper imageSize, void* cameraMatrix, void* distCoeffs, void* rvecs, void* tvecs, int flags, void* criteria) {
    try {
        double ret = reinterpret_cast<cv::ccalib::CustomPattern*>(instance)->calibrate(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<cv::Size*>(&imageSize), *reinterpret_cast<cv::_InputOutputArray*>(cameraMatrix), *reinterpret_cast<cv::_InputOutputArray*>(distCoeffs), *reinterpret_cast<cv::_OutputArray*>(rvecs), *reinterpret_cast<cv::_OutputArray*>(tvecs), flags, *reinterpret_cast<cv::TermCriteria*>(criteria));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ccalib::CustomPattern::findRt
// as:     cv::ccalib::CustomPattern::findRt (method) cv::ccalib::CustomPattern . findRt
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) rvec= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) tvec= cv::_InputOutputArray (boxed) = 
// Arg ARG Primitive(bool) useExtrinsicGuess= Primitive(bool) = false
// Arg ARG Primitive(int) flags= Primitive(int) = SOLVEPNP_ITERATIVE
// Return value: Primitive(bool)
cv_return_value_bool cv_ccalib_CustomPattern_findRt__InputArray__InputArray__InputArray__InputArray__InputOutputArray__InputOutputArray_bool_int(void* instance, void* objectPoints, void* imagePoints, void* cameraMatrix, void* distCoeffs, void* rvec, void* tvec, bool useExtrinsicGuess, int flags) {
    try {
        bool ret = reinterpret_cast<cv::ccalib::CustomPattern*>(instance)->findRt(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<cv::_InputOutputArray*>(rvec), *reinterpret_cast<cv::_InputOutputArray*>(tvec), useExtrinsicGuess, flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ccalib::CustomPattern::findRt
// as:     cv::ccalib::CustomPattern::findRt (method) cv::ccalib::CustomPattern . findRt
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) rvec= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) tvec= cv::_InputOutputArray (boxed) = 
// Arg ARG Primitive(bool) useExtrinsicGuess= Primitive(bool) = false
// Arg ARG Primitive(int) flags= Primitive(int) = SOLVEPNP_ITERATIVE
// Return value: Primitive(bool)
cv_return_value_bool cv_ccalib_CustomPattern_findRt__InputArray__InputArray__InputArray__InputOutputArray__InputOutputArray_bool_int(void* instance, void* image, void* cameraMatrix, void* distCoeffs, void* rvec, void* tvec, bool useExtrinsicGuess, int flags) {
    try {
        bool ret = reinterpret_cast<cv::ccalib::CustomPattern*>(instance)->findRt(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<cv::_InputOutputArray*>(rvec), *reinterpret_cast<cv::_InputOutputArray*>(tvec), useExtrinsicGuess, flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ccalib::CustomPattern::findRtRANSAC
// as:     cv::ccalib::CustomPattern::findRtRANSAC (method) cv::ccalib::CustomPattern . findRtRANSAC
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) rvec= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) tvec= cv::_InputOutputArray (boxed) = 
// Arg ARG Primitive(bool) useExtrinsicGuess= Primitive(bool) = false
// Arg ARG Primitive(int) iterationsCount= Primitive(int) = 100
// Arg ARG Primitive(float) reprojectionError= Primitive(float) = 8.0
// Arg ARG Primitive(int) minInliersCount= Primitive(int) = 100
// Arg ARG cv::_OutputArray (boxed) inliers= cv::_OutputArray (boxed) = noArray()
// Arg ARG Primitive(int) flags= Primitive(int) = SOLVEPNP_ITERATIVE
// Return value: Primitive(bool)
cv_return_value_bool cv_ccalib_CustomPattern_findRtRANSAC__InputArray__InputArray__InputArray__InputArray__InputOutputArray__InputOutputArray_bool_int_float_int__OutputArray_int(void* instance, void* objectPoints, void* imagePoints, void* cameraMatrix, void* distCoeffs, void* rvec, void* tvec, bool useExtrinsicGuess, int iterationsCount, float reprojectionError, int minInliersCount, void* inliers, int flags) {
    try {
        bool ret = reinterpret_cast<cv::ccalib::CustomPattern*>(instance)->findRtRANSAC(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<cv::_InputOutputArray*>(rvec), *reinterpret_cast<cv::_InputOutputArray*>(tvec), useExtrinsicGuess, iterationsCount, reprojectionError, minInliersCount, *reinterpret_cast<cv::_OutputArray*>(inliers), flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ccalib::CustomPattern::findRtRANSAC
// as:     cv::ccalib::CustomPattern::findRtRANSAC (method) cv::ccalib::CustomPattern . findRtRANSAC
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) rvec= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) tvec= cv::_InputOutputArray (boxed) = 
// Arg ARG Primitive(bool) useExtrinsicGuess= Primitive(bool) = false
// Arg ARG Primitive(int) iterationsCount= Primitive(int) = 100
// Arg ARG Primitive(float) reprojectionError= Primitive(float) = 8.0
// Arg ARG Primitive(int) minInliersCount= Primitive(int) = 100
// Arg ARG cv::_OutputArray (boxed) inliers= cv::_OutputArray (boxed) = noArray()
// Arg ARG Primitive(int) flags= Primitive(int) = SOLVEPNP_ITERATIVE
// Return value: Primitive(bool)
cv_return_value_bool cv_ccalib_CustomPattern_findRtRANSAC__InputArray__InputArray__InputArray__InputOutputArray__InputOutputArray_bool_int_float_int__OutputArray_int(void* instance, void* image, void* cameraMatrix, void* distCoeffs, void* rvec, void* tvec, bool useExtrinsicGuess, int iterationsCount, float reprojectionError, int minInliersCount, void* inliers, int flags) {
    try {
        bool ret = reinterpret_cast<cv::ccalib::CustomPattern*>(instance)->findRtRANSAC(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<cv::_InputOutputArray*>(rvec), *reinterpret_cast<cv::_InputOutputArray*>(tvec), useExtrinsicGuess, iterationsCount, reprojectionError, minInliersCount, *reinterpret_cast<cv::_OutputArray*>(inliers), flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ccalib::CustomPattern::drawOrientation
// as:     cv::ccalib::CustomPattern::drawOrientation (method) cv::ccalib::CustomPattern . drawOrientation
// Arg ARG cv::_InputOutputArray (boxed) image= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) tvec= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) rvec= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) axis_length= Primitive(double) = 3
// Arg ARG Primitive(int) axis_width= Primitive(int) = 2
// Return value: Primitive(void)
cv_return_value_void cv_ccalib_CustomPattern_drawOrientation__InputOutputArray__InputArray__InputArray__InputArray__InputArray_double_int(void* instance, void* image, void* tvec, void* rvec, void* cameraMatrix, void* distCoeffs, double axis_length, int axis_width) {
    try {
        reinterpret_cast<cv::ccalib::CustomPattern*>(instance)->drawOrientation(*reinterpret_cast<cv::_InputOutputArray*>(image), *reinterpret_cast<const cv::_InputArray*>(tvec), *reinterpret_cast<const cv::_InputArray*>(rvec), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), axis_length, axis_width);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::multicalib::MultiCameraCalibration
void cv_MultiCameraCalibration_delete(void* instance) {
    delete reinterpret_cast<cv::multicalib::MultiCameraCalibration*>(instance);
}
// parsed: cv::multicalib::MultiCameraCalibration::MultiCameraCalibration
// as:     cv::multicalib::MultiCameraCalibration::MultiCameraCalibration (constructor) cv::multicalib::MultiCameraCalibration . new
// Arg ARG Primitive(int) cameraType= Primitive(int) = 
// Arg ARG Primitive(int) nCameras= Primitive(int) = 
// Arg ARG string fileName= string = 
// Arg ARG Primitive(float) patternWidth= Primitive(float) = 
// Arg ARG Primitive(float) patternHeight= Primitive(float) = 
// Arg ARG Primitive(int) verbose= Primitive(int) = 0
// Arg ARG Primitive(int) showExtration= Primitive(int) = 0
// Arg ARG Primitive(int) nMiniMatches= Primitive(int) = 20
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 200, 1e-7)
// Arg ARG SmartPtr[cv::Feature2D (boxed)] detector= SmartPtr[cv::Feature2D (boxed)] = AKAZE::create(AKAZE::DESCRIPTOR_MLDB, 0, 3, 0.006f)
// Arg ARG SmartPtr[cv::Feature2D (boxed)] descriptor= SmartPtr[cv::Feature2D (boxed)] = AKAZE::create(AKAZE::DESCRIPTOR_MLDB,0, 3, 0.006f)
// Arg ARG SmartPtr[cv::DescriptorMatcher (boxed)] matcher= SmartPtr[cv::DescriptorMatcher (boxed)] = DescriptorMatcher::create("BruteForce-L1" )
// Return value: cv::multicalib::MultiCameraCalibration (boxed)
cv_return_value_void_X cv_multicalib_MultiCameraCalibration_MultiCameraCalibration_int_int_std_string_float_float_int_int_int_int_TermCriteria_PtrOfFeature2D_PtrOfFeature2D_PtrOfDescriptorMatcher(int cameraType, int nCameras, const char* fileName, float patternWidth, float patternHeight, int verbose, int showExtration, int nMiniMatches, int flags, void* criteria, void* detector, void* descriptor, void* matcher) {
    try {
        cv::multicalib::MultiCameraCalibration* ret = new cv::multicalib::MultiCameraCalibration(cameraType, nCameras, String(fileName), patternWidth, patternHeight, verbose, showExtration, nMiniMatches, flags, *reinterpret_cast<cv::TermCriteria*>(criteria), *reinterpret_cast<Ptr<cv::Feature2D>*>(detector), *reinterpret_cast<Ptr<cv::Feature2D>*>(descriptor), *reinterpret_cast<Ptr<cv::DescriptorMatcher>*>(matcher));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::multicalib::MultiCameraCalibration::loadImages
// as:     cv::multicalib::MultiCameraCalibration::loadImages (method) cv::multicalib::MultiCameraCalibration . loadImages
// Return value: Primitive(void)
cv_return_value_void cv_multicalib_MultiCameraCalibration_loadImages(void* instance) {
    try {
        reinterpret_cast<cv::multicalib::MultiCameraCalibration*>(instance)->loadImages();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::multicalib::MultiCameraCalibration::initialize
// as:     cv::multicalib::MultiCameraCalibration::initialize (method) cv::multicalib::MultiCameraCalibration . initialize
// Return value: Primitive(void)
cv_return_value_void cv_multicalib_MultiCameraCalibration_initialize(void* instance) {
    try {
        reinterpret_cast<cv::multicalib::MultiCameraCalibration*>(instance)->initialize();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::multicalib::MultiCameraCalibration::optimizeExtrinsics
// as:     cv::multicalib::MultiCameraCalibration::optimizeExtrinsics (method) cv::multicalib::MultiCameraCalibration . optimizeExtrinsics
// Return value: Primitive(double)
cv_return_value_double cv_multicalib_MultiCameraCalibration_optimizeExtrinsics(void* instance) {
    try {
        double ret = reinterpret_cast<cv::multicalib::MultiCameraCalibration*>(instance)->optimizeExtrinsics();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::multicalib::MultiCameraCalibration::run
// as:     cv::multicalib::MultiCameraCalibration::run (method) cv::multicalib::MultiCameraCalibration . run
// Return value: Primitive(double)
cv_return_value_double cv_multicalib_MultiCameraCalibration_run(void* instance) {
    try {
        double ret = reinterpret_cast<cv::multicalib::MultiCameraCalibration*>(instance)->run();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::multicalib::MultiCameraCalibration::writeParameters
// as:     cv::multicalib::MultiCameraCalibration::writeParameters (method) cv::multicalib::MultiCameraCalibration . writeParameters
// Arg ARG string filename= string = 
// Return value: Primitive(void)
cv_return_value_void cv_multicalib_MultiCameraCalibration_writeParameters_std_string(void* instance, const char* filename) {
    try {
        reinterpret_cast<cv::multicalib::MultiCameraCalibration*>(instance)->writeParameters(String(filename));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::multicalib::MultiCameraCalibration::edge
void cv_MultiCameraCalibration_edge_delete(void* instance) {
    delete reinterpret_cast<cv::multicalib::MultiCameraCalibration::edge*>(instance);
}
// parsed: cv::multicalib::MultiCameraCalibration::edge::edge
// as:     cv::multicalib::MultiCameraCalibration::edge::edge (constructor) cv::multicalib::MultiCameraCalibration::edge . new
// Arg ARG Primitive(int) cv= Primitive(int) = 
// Arg ARG Primitive(int) pv= Primitive(int) = 
// Arg ARG Primitive(int) pi= Primitive(int) = 
// Arg ARG cv::Mat (boxed) trans= cv::Mat (boxed) = 
// Return value: cv::multicalib::MultiCameraCalibration::edge (boxed)
cv_return_value_void_X cv_multicalib_MultiCameraCalibration_edge_edge_int_int_int_Mat(int cv, int pv, int pi, void* trans) {
    try {
        cv::multicalib::MultiCameraCalibration::edge* ret = new cv::multicalib::MultiCameraCalibration::edge(cv, pv, pi, *reinterpret_cast<cv::Mat*>(trans));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::multicalib::MultiCameraCalibration::vertex
void cv_MultiCameraCalibration_vertex_delete(void* instance) {
    delete reinterpret_cast<cv::multicalib::MultiCameraCalibration::vertex*>(instance);
}
// parsed: cv::multicalib::MultiCameraCalibration::vertex::vertex
// as:     cv::multicalib::MultiCameraCalibration::vertex::vertex (constructor) cv::multicalib::MultiCameraCalibration::vertex . new
// Arg ARG cv::Mat (boxed) po= cv::Mat (boxed) = 
// Arg ARG Primitive(int) ts= Primitive(int) = 
// Return value: cv::multicalib::MultiCameraCalibration::vertex (boxed)
cv_return_value_void_X cv_multicalib_MultiCameraCalibration_vertex_vertex_Mat_int(void* po, int ts) {
    try {
        cv::multicalib::MultiCameraCalibration::vertex* ret = new cv::multicalib::MultiCameraCalibration::vertex(*reinterpret_cast<cv::Mat*>(po), ts);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::multicalib::MultiCameraCalibration::vertex::vertex
// as:     cv::multicalib::MultiCameraCalibration::vertex::vertex (constructor) cv::multicalib::MultiCameraCalibration::vertex . default
// Return value: cv::multicalib::MultiCameraCalibration::vertex (boxed)
cv_return_value_void_X cv_multicalib_MultiCameraCalibration_vertex_vertex() {
    try {
        cv::multicalib::MultiCameraCalibration::vertex* ret = new cv::multicalib::MultiCameraCalibration::vertex();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::randpattern::RandomPatternCornerFinder
void cv_RandomPatternCornerFinder_delete(void* instance) {
    delete reinterpret_cast<cv::randpattern::RandomPatternCornerFinder*>(instance);
}
// parsed: cv::randpattern::RandomPatternCornerFinder::RandomPatternCornerFinder
// as:     cv::randpattern::RandomPatternCornerFinder::RandomPatternCornerFinder (constructor) cv::randpattern::RandomPatternCornerFinder . new
// Arg ARG Primitive(float) patternWidth= Primitive(float) = 
// Arg ARG Primitive(float) patternHeight= Primitive(float) = 
// Arg ARG Primitive(int) nminiMatch= Primitive(int) = 20
// Arg ARG Primitive(int) depth= Primitive(int) = CV_32F
// Arg ARG Primitive(int) verbose= Primitive(int) = 0
// Arg ARG Primitive(int) showExtraction= Primitive(int) = 0
// Arg ARG SmartPtr[cv::Feature2D (boxed)] detector= SmartPtr[cv::Feature2D (boxed)] = AKAZE::create(AKAZE::DESCRIPTOR_MLDB, 0, 3, 0.005f)
// Arg ARG SmartPtr[cv::Feature2D (boxed)] descriptor= SmartPtr[cv::Feature2D (boxed)] = AKAZE::create(AKAZE::DESCRIPTOR_MLDB,0, 3, 0.005f)
// Arg ARG SmartPtr[cv::DescriptorMatcher (boxed)] matcher= SmartPtr[cv::DescriptorMatcher (boxed)] = DescriptorMatcher::create("BruteForce-L1" )
// Return value: cv::randpattern::RandomPatternCornerFinder (boxed)
cv_return_value_void_X cv_randpattern_RandomPatternCornerFinder_RandomPatternCornerFinder_float_float_int_int_int_int_PtrOfFeature2D_PtrOfFeature2D_PtrOfDescriptorMatcher(float patternWidth, float patternHeight, int nminiMatch, int depth, int verbose, int showExtraction, void* detector, void* descriptor, void* matcher) {
    try {
        cv::randpattern::RandomPatternCornerFinder* ret = new cv::randpattern::RandomPatternCornerFinder(patternWidth, patternHeight, nminiMatch, depth, verbose, showExtraction, *reinterpret_cast<Ptr<cv::Feature2D>*>(detector), *reinterpret_cast<Ptr<cv::Feature2D>*>(descriptor), *reinterpret_cast<Ptr<cv::DescriptorMatcher>*>(matcher));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::randpattern::RandomPatternCornerFinder::loadPattern
// as:     cv::randpattern::RandomPatternCornerFinder::loadPattern (method) cv::randpattern::RandomPatternCornerFinder . loadPattern
// Arg ARG cv::Mat (boxed) patternImage= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_randpattern_RandomPatternCornerFinder_loadPattern_Mat(void* instance, void* patternImage) {
    try {
        reinterpret_cast<cv::randpattern::RandomPatternCornerFinder*>(instance)->loadPattern(*reinterpret_cast<const cv::Mat*>(patternImage));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::randpattern::RandomPatternCornerFinder::loadPattern
// as:     cv::randpattern::RandomPatternCornerFinder::loadPattern (method) cv::randpattern::RandomPatternCornerFinder . loadPattern
// Arg ARG cv::Mat (boxed) patternImage= cv::Mat (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] patternKeyPoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG cv::Mat (boxed) patternDescriptors= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_randpattern_RandomPatternCornerFinder_loadPattern_Mat_VectorOfKeyPoint_Mat(void* instance, void* patternImage, void* patternKeyPoints, void* patternDescriptors) {
    try {
        reinterpret_cast<cv::randpattern::RandomPatternCornerFinder*>(instance)->loadPattern(*reinterpret_cast<const cv::Mat*>(patternImage), *reinterpret_cast<const std::vector<cv::KeyPoint>*>(patternKeyPoints), *reinterpret_cast<const cv::Mat*>(patternDescriptors));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::randpattern::RandomPatternCornerFinder::computeObjectImagePoints
// as:     cv::randpattern::RandomPatternCornerFinder::computeObjectImagePoints (method) cv::randpattern::RandomPatternCornerFinder . computeObjectImagePoints
// Arg ARG Vector[cv::Mat (boxed)] inputImages= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_randpattern_RandomPatternCornerFinder_computeObjectImagePoints_VectorOfMat(void* instance, void* inputImages) {
    try {
        reinterpret_cast<cv::randpattern::RandomPatternCornerFinder*>(instance)->computeObjectImagePoints(*reinterpret_cast<std::vector<cv::Mat>*>(inputImages));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::randpattern::RandomPatternCornerFinder::computeObjectImagePointsForSingle
// as:     cv::randpattern::RandomPatternCornerFinder::computeObjectImagePointsForSingle (method) cv::randpattern::RandomPatternCornerFinder . computeObjectImagePointsForSingle
// Arg ARG cv::Mat (boxed) inputImage= cv::Mat (boxed) = 
// Return value: Vector[cv::Mat (boxed)]
cv_return_value_void_X cv_randpattern_RandomPatternCornerFinder_computeObjectImagePointsForSingle_Mat(void* instance, void* inputImage) {
    try {
        std::vector<cv::Mat> ret = reinterpret_cast<cv::randpattern::RandomPatternCornerFinder*>(instance)->computeObjectImagePointsForSingle(*reinterpret_cast<cv::Mat*>(inputImage));
        return { Error::Code::StsOk, NULL, new std::vector<cv::Mat>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::randpattern::RandomPatternCornerFinder::getObjectPoints
// as:     cv::randpattern::RandomPatternCornerFinder::getObjectPoints (method) cv::randpattern::RandomPatternCornerFinder . getObjectPoints
// Return value: Vector[cv::Mat (boxed)]
cv_return_value_void_X cv_randpattern_RandomPatternCornerFinder_getObjectPoints(void* instance) {
    try {
        std::vector<cv::Mat> ret = reinterpret_cast<cv::randpattern::RandomPatternCornerFinder*>(instance)->getObjectPoints();
        return { Error::Code::StsOk, NULL, new std::vector<cv::Mat>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::randpattern::RandomPatternCornerFinder::getImagePoints
// as:     cv::randpattern::RandomPatternCornerFinder::getImagePoints (method) cv::randpattern::RandomPatternCornerFinder . getImagePoints
// Return value: Vector[cv::Mat (boxed)]
cv_return_value_void_X cv_randpattern_RandomPatternCornerFinder_getImagePoints(void* instance) {
    try {
        std::vector<cv::Mat> ret = reinterpret_cast<cv::randpattern::RandomPatternCornerFinder*>(instance)->getImagePoints();
        return { Error::Code::StsOk, NULL, new std::vector<cv::Mat>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::randpattern::RandomPatternGenerator
void cv_RandomPatternGenerator_delete(void* instance) {
    delete reinterpret_cast<cv::randpattern::RandomPatternGenerator*>(instance);
}
// parsed: cv::randpattern::RandomPatternGenerator::RandomPatternGenerator
// as:     cv::randpattern::RandomPatternGenerator::RandomPatternGenerator (constructor) cv::randpattern::RandomPatternGenerator . new
// Arg ARG Primitive(int) imageWidth= Primitive(int) = 
// Arg ARG Primitive(int) imageHeight= Primitive(int) = 
// Return value: cv::randpattern::RandomPatternGenerator (boxed)
cv_return_value_void_X cv_randpattern_RandomPatternGenerator_RandomPatternGenerator_int_int(int imageWidth, int imageHeight) {
    try {
        cv::randpattern::RandomPatternGenerator* ret = new cv::randpattern::RandomPatternGenerator(imageWidth, imageHeight);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::randpattern::RandomPatternGenerator::generatePattern
// as:     cv::randpattern::RandomPatternGenerator::generatePattern (method) cv::randpattern::RandomPatternGenerator . generatePattern
// Return value: Primitive(void)
cv_return_value_void cv_randpattern_RandomPatternGenerator_generatePattern(void* instance) {
    try {
        reinterpret_cast<cv::randpattern::RandomPatternGenerator*>(instance)->generatePattern();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::randpattern::RandomPatternGenerator::getPattern
// as:     cv::randpattern::RandomPatternGenerator::getPattern (method) cv::randpattern::RandomPatternGenerator . getPattern
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_randpattern_RandomPatternGenerator_getPattern(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::randpattern::RandomPatternGenerator*>(instance)->getPattern();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}



} // extern "C"

