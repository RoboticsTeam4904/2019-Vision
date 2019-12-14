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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/calib3d.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/calib3d/calib3d.hpp"

extern "C" {

// parsed: cv::RQDecomp3x3
// as:     cv::RQDecomp3x3 (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) mtxR= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) mtxQ= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Qx= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) Qy= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) Qz= cv::_OutputArray (boxed) = noArray()
// Return value: cv::Vec3d (simple)
cv_return_value_Vec3dWrapper cv_RQDecomp3x3__InputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray(void* src, void* mtxR, void* mtxQ, void* Qx, void* Qy, void* Qz) {
    try {
        cv::Vec3d ret = cv::RQDecomp3x3(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(mtxR), *reinterpret_cast<cv::_OutputArray*>(mtxQ), *reinterpret_cast<cv::_OutputArray*>(Qx), *reinterpret_cast<cv::_OutputArray*>(Qy), *reinterpret_cast<cv::_OutputArray*>(Qz));
        return { Error::Code::StsOk, NULL, *reinterpret_cast<Vec3dWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_Vec3dWrapper)
}

// parsed: cv::Rodrigues
// as:     cv::Rodrigues (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) jacobian= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_Rodrigues__InputArray__OutputArray__OutputArray(void* src, void* dst, void* jacobian) {
    try {
        cv::Rodrigues(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<cv::_OutputArray*>(jacobian));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::calibrateCameraRO
// as:     cv::calibrateCameraRO (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG Primitive(int) iFixedPoint= Primitive(int) = 
// Arg ARG cv::_InputOutputArray (boxed) cameraMatrix= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) distCoeffs= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rvecs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tvecs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) newObjPoints= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) stdDeviationsIntrinsics= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) stdDeviationsExtrinsics= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) stdDeviationsObjPoints= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) perViewErrors= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON)
// Return value: Primitive(double)
cv_return_value_double cv_calibrateCameraRO__InputArray__InputArray_Size_int__InputOutputArray__InputOutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray_int_TermCriteria(void* objectPoints, void* imagePoints, SizeWrapper imageSize, int iFixedPoint, void* cameraMatrix, void* distCoeffs, void* rvecs, void* tvecs, void* newObjPoints, void* stdDeviationsIntrinsics, void* stdDeviationsExtrinsics, void* stdDeviationsObjPoints, void* perViewErrors, int flags, void* criteria) {
    try {
        double ret = cv::calibrateCameraRO(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<cv::Size*>(&imageSize), iFixedPoint, *reinterpret_cast<cv::_InputOutputArray*>(cameraMatrix), *reinterpret_cast<cv::_InputOutputArray*>(distCoeffs), *reinterpret_cast<cv::_OutputArray*>(rvecs), *reinterpret_cast<cv::_OutputArray*>(tvecs), *reinterpret_cast<cv::_OutputArray*>(newObjPoints), *reinterpret_cast<cv::_OutputArray*>(stdDeviationsIntrinsics), *reinterpret_cast<cv::_OutputArray*>(stdDeviationsExtrinsics), *reinterpret_cast<cv::_OutputArray*>(stdDeviationsObjPoints), *reinterpret_cast<cv::_OutputArray*>(perViewErrors), flags, *reinterpret_cast<cv::TermCriteria*>(criteria));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::calibrateCameraRO
// as:     cv::calibrateCameraRO (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG Primitive(int) iFixedPoint= Primitive(int) = 
// Arg ARG cv::_InputOutputArray (boxed) cameraMatrix= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) distCoeffs= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rvecs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tvecs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) newObjPoints= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON)
// Return value: Primitive(double)
cv_return_value_double cv_calibrateCameraRO__InputArray__InputArray_Size_int__InputOutputArray__InputOutputArray__OutputArray__OutputArray__OutputArray_int_TermCriteria(void* objectPoints, void* imagePoints, SizeWrapper imageSize, int iFixedPoint, void* cameraMatrix, void* distCoeffs, void* rvecs, void* tvecs, void* newObjPoints, int flags, void* criteria) {
    try {
        double ret = cv::calibrateCameraRO(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<cv::Size*>(&imageSize), iFixedPoint, *reinterpret_cast<cv::_InputOutputArray*>(cameraMatrix), *reinterpret_cast<cv::_InputOutputArray*>(distCoeffs), *reinterpret_cast<cv::_OutputArray*>(rvecs), *reinterpret_cast<cv::_OutputArray*>(tvecs), *reinterpret_cast<cv::_OutputArray*>(newObjPoints), flags, *reinterpret_cast<cv::TermCriteria*>(criteria));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::calibrateCamera
// as:     cv::calibrateCamera (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG cv::_InputOutputArray (boxed) cameraMatrix= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) distCoeffs= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rvecs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tvecs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) stdDeviationsIntrinsics= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) stdDeviationsExtrinsics= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) perViewErrors= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON)
// Return value: Primitive(double)
cv_return_value_double cv_calibrateCamera__InputArray__InputArray_Size__InputOutputArray__InputOutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray_int_TermCriteria(void* objectPoints, void* imagePoints, SizeWrapper imageSize, void* cameraMatrix, void* distCoeffs, void* rvecs, void* tvecs, void* stdDeviationsIntrinsics, void* stdDeviationsExtrinsics, void* perViewErrors, int flags, void* criteria) {
    try {
        double ret = cv::calibrateCamera(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<cv::Size*>(&imageSize), *reinterpret_cast<cv::_InputOutputArray*>(cameraMatrix), *reinterpret_cast<cv::_InputOutputArray*>(distCoeffs), *reinterpret_cast<cv::_OutputArray*>(rvecs), *reinterpret_cast<cv::_OutputArray*>(tvecs), *reinterpret_cast<cv::_OutputArray*>(stdDeviationsIntrinsics), *reinterpret_cast<cv::_OutputArray*>(stdDeviationsExtrinsics), *reinterpret_cast<cv::_OutputArray*>(perViewErrors), flags, *reinterpret_cast<cv::TermCriteria*>(criteria));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::calibrateCamera
// as:     cv::calibrateCamera (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG cv::_InputOutputArray (boxed) cameraMatrix= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) distCoeffs= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rvecs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tvecs= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = TermCriteria( TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON)
// Return value: Primitive(double)
cv_return_value_double cv_calibrateCamera__InputArray__InputArray_Size__InputOutputArray__InputOutputArray__OutputArray__OutputArray_int_TermCriteria(void* objectPoints, void* imagePoints, SizeWrapper imageSize, void* cameraMatrix, void* distCoeffs, void* rvecs, void* tvecs, int flags, void* criteria) {
    try {
        double ret = cv::calibrateCamera(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<cv::Size*>(&imageSize), *reinterpret_cast<cv::_InputOutputArray*>(cameraMatrix), *reinterpret_cast<cv::_InputOutputArray*>(distCoeffs), *reinterpret_cast<cv::_OutputArray*>(rvecs), *reinterpret_cast<cv::_OutputArray*>(tvecs), flags, *reinterpret_cast<cv::TermCriteria*>(criteria));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::calibrateHandEye
// as:     cv::calibrateHandEye (function)
// Arg ARG cv::_InputArray (boxed) R_gripper2base= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) t_gripper2base= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) R_target2cam= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) t_target2cam= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) R_cam2gripper= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) t_cam2gripper= cv::_OutputArray (boxed) = 
// Arg ARG HandEyeCalibrationMethod (enum) method= HandEyeCalibrationMethod (enum) = CALIB_HAND_EYE_TSAI
// Return value: Primitive(void)
cv_return_value_void cv_calibrateHandEye__InputArray__InputArray__InputArray__InputArray__OutputArray__OutputArray_HandEyeCalibrationMethod(void* R_gripper2base, void* t_gripper2base, void* R_target2cam, void* t_target2cam, void* R_cam2gripper, void* t_cam2gripper, HandEyeCalibrationMethod method) {
    try {
        cv::calibrateHandEye(*reinterpret_cast<const cv::_InputArray*>(R_gripper2base), *reinterpret_cast<const cv::_InputArray*>(t_gripper2base), *reinterpret_cast<const cv::_InputArray*>(R_target2cam), *reinterpret_cast<const cv::_InputArray*>(t_target2cam), *reinterpret_cast<cv::_OutputArray*>(R_cam2gripper), *reinterpret_cast<cv::_OutputArray*>(t_cam2gripper), *reinterpret_cast<HandEyeCalibrationMethod*>(&method));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::calibrationMatrixValues
// as:     cv::calibrationMatrixValues (function)
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG Primitive(double) apertureWidth= Primitive(double) = 
// Arg ARG Primitive(double) apertureHeight= Primitive(double) = 
// Arg ARG Primitive(double) fovx= Primitive(double) = 
// Arg ARG Primitive(double) fovy= Primitive(double) = 
// Arg ARG Primitive(double) focalLength= Primitive(double) = 
// Arg ARG cv::Point2d (simple) principalPoint= cv::Point2d (simple) = 
// Arg ARG Primitive(double) aspectRatio= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_calibrationMatrixValues__InputArray_Size_double_double_double_double_double_Point2d_double(void* cameraMatrix, SizeWrapper imageSize, double apertureWidth, double apertureHeight, double& fovx, double& fovy, double& focalLength, Point2dWrapper& principalPoint, double& aspectRatio) {
    try {
        cv::calibrationMatrixValues(*reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<cv::Size*>(&imageSize), apertureWidth, apertureHeight, fovx, fovy, focalLength, *reinterpret_cast<cv::Point2d*>(&principalPoint), aspectRatio);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::checkChessboard
// as:     cv::checkChessboard (function)
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_checkChessboard__InputArray_Size(void* img, SizeWrapper size) {
    try {
        bool ret = cv::checkChessboard(*reinterpret_cast<const cv::_InputArray*>(img), *reinterpret_cast<cv::Size*>(&size));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::composeRT
// as:     cv::composeRT (function)
// Arg ARG cv::_InputArray (boxed) rvec1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) tvec1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) rvec2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) tvec2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rvec3= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tvec3= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dr3dr1= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) dr3dt1= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) dr3dr2= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) dr3dt2= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) dt3dr1= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) dt3dt1= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) dt3dr2= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) dt3dt2= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_composeRT__InputArray__InputArray__InputArray__InputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray(void* rvec1, void* tvec1, void* rvec2, void* tvec2, void* rvec3, void* tvec3, void* dr3dr1, void* dr3dt1, void* dr3dr2, void* dr3dt2, void* dt3dr1, void* dt3dt1, void* dt3dr2, void* dt3dt2) {
    try {
        cv::composeRT(*reinterpret_cast<const cv::_InputArray*>(rvec1), *reinterpret_cast<const cv::_InputArray*>(tvec1), *reinterpret_cast<const cv::_InputArray*>(rvec2), *reinterpret_cast<const cv::_InputArray*>(tvec2), *reinterpret_cast<cv::_OutputArray*>(rvec3), *reinterpret_cast<cv::_OutputArray*>(tvec3), *reinterpret_cast<cv::_OutputArray*>(dr3dr1), *reinterpret_cast<cv::_OutputArray*>(dr3dt1), *reinterpret_cast<cv::_OutputArray*>(dr3dr2), *reinterpret_cast<cv::_OutputArray*>(dr3dt2), *reinterpret_cast<cv::_OutputArray*>(dt3dr1), *reinterpret_cast<cv::_OutputArray*>(dt3dt1), *reinterpret_cast<cv::_OutputArray*>(dt3dr2), *reinterpret_cast<cv::_OutputArray*>(dt3dt2));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::computeCorrespondEpilines
// as:     cv::computeCorrespondEpilines (function)
// Arg ARG cv::_InputArray (boxed) points= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) whichImage= Primitive(int) = 
// Arg ARG cv::_InputArray (boxed) F= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) lines= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_computeCorrespondEpilines__InputArray_int__InputArray__OutputArray(void* points, int whichImage, void* F, void* lines) {
    try {
        cv::computeCorrespondEpilines(*reinterpret_cast<const cv::_InputArray*>(points), whichImage, *reinterpret_cast<const cv::_InputArray*>(F), *reinterpret_cast<cv::_OutputArray*>(lines));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::convertPointsFromHomogeneous
// as:     cv::convertPointsFromHomogeneous (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_convertPointsFromHomogeneous__InputArray__OutputArray(void* src, void* dst) {
    try {
        cv::convertPointsFromHomogeneous(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::convertPointsHomogeneous
// as:     cv::convertPointsHomogeneous (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_convertPointsHomogeneous__InputArray__OutputArray(void* src, void* dst) {
    try {
        cv::convertPointsHomogeneous(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::convertPointsToHomogeneous
// as:     cv::convertPointsToHomogeneous (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_convertPointsToHomogeneous__InputArray__OutputArray(void* src, void* dst) {
    try {
        cv::convertPointsToHomogeneous(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::correctMatches
// as:     cv::correctMatches (function)
// Arg ARG cv::_InputArray (boxed) F= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) newPoints1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) newPoints2= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_correctMatches__InputArray__InputArray__InputArray__OutputArray__OutputArray(void* F, void* points1, void* points2, void* newPoints1, void* newPoints2) {
    try {
        cv::correctMatches(*reinterpret_cast<const cv::_InputArray*>(F), *reinterpret_cast<const cv::_InputArray*>(points1), *reinterpret_cast<const cv::_InputArray*>(points2), *reinterpret_cast<cv::_OutputArray*>(newPoints1), *reinterpret_cast<cv::_OutputArray*>(newPoints2));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::decomposeEssentialMat
// as:     cv::decomposeEssentialMat (function)
// Arg ARG cv::_InputArray (boxed) E= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) R1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) R2= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) t= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_decomposeEssentialMat__InputArray__OutputArray__OutputArray__OutputArray(void* E, void* R1, void* R2, void* t) {
    try {
        cv::decomposeEssentialMat(*reinterpret_cast<const cv::_InputArray*>(E), *reinterpret_cast<cv::_OutputArray*>(R1), *reinterpret_cast<cv::_OutputArray*>(R2), *reinterpret_cast<cv::_OutputArray*>(t));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::decomposeHomographyMat
// as:     cv::decomposeHomographyMat (function)
// Arg ARG cv::_InputArray (boxed) H= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rotations= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) translations= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) normals= cv::_OutputArray (boxed) = 
// Return value: Primitive(int)
cv_return_value_int cv_decomposeHomographyMat__InputArray__InputArray__OutputArray__OutputArray__OutputArray(void* H, void* K, void* rotations, void* translations, void* normals) {
    try {
        int ret = cv::decomposeHomographyMat(*reinterpret_cast<const cv::_InputArray*>(H), *reinterpret_cast<const cv::_InputArray*>(K), *reinterpret_cast<cv::_OutputArray*>(rotations), *reinterpret_cast<cv::_OutputArray*>(translations), *reinterpret_cast<cv::_OutputArray*>(normals));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::decomposeProjectionMatrix
// as:     cv::decomposeProjectionMatrix (function)
// Arg ARG cv::_InputArray (boxed) projMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) cameraMatrix= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rotMatrix= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) transVect= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rotMatrixX= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) rotMatrixY= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) rotMatrixZ= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) eulerAngles= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_decomposeProjectionMatrix__InputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray(void* projMatrix, void* cameraMatrix, void* rotMatrix, void* transVect, void* rotMatrixX, void* rotMatrixY, void* rotMatrixZ, void* eulerAngles) {
    try {
        cv::decomposeProjectionMatrix(*reinterpret_cast<const cv::_InputArray*>(projMatrix), *reinterpret_cast<cv::_OutputArray*>(cameraMatrix), *reinterpret_cast<cv::_OutputArray*>(rotMatrix), *reinterpret_cast<cv::_OutputArray*>(transVect), *reinterpret_cast<cv::_OutputArray*>(rotMatrixX), *reinterpret_cast<cv::_OutputArray*>(rotMatrixY), *reinterpret_cast<cv::_OutputArray*>(rotMatrixZ), *reinterpret_cast<cv::_OutputArray*>(eulerAngles));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::drawChessboardCorners
// as:     cv::drawChessboardCorners (function)
// Arg ARG cv::_InputOutputArray (boxed) image= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Size (simple) patternSize= cv::Size (simple) = 
// Arg ARG cv::_InputArray (boxed) corners= cv::_InputArray (boxed) = 
// Arg ARG Primitive(bool) patternWasFound= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_drawChessboardCorners__InputOutputArray_Size__InputArray_bool(void* image, SizeWrapper patternSize, void* corners, bool patternWasFound) {
    try {
        cv::drawChessboardCorners(*reinterpret_cast<cv::_InputOutputArray*>(image), *reinterpret_cast<cv::Size*>(&patternSize), *reinterpret_cast<const cv::_InputArray*>(corners), patternWasFound);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::drawFrameAxes
// as:     cv::drawFrameAxes (function)
// Arg ARG cv::_InputOutputArray (boxed) image= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) rvec= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) tvec= cv::_InputArray (boxed) = 
// Arg ARG Primitive(float) length= Primitive(float) = 
// Arg ARG Primitive(int) thickness= Primitive(int) = 3
// Return value: Primitive(void)
cv_return_value_void cv_drawFrameAxes__InputOutputArray__InputArray__InputArray__InputArray__InputArray_float_int(void* image, void* cameraMatrix, void* distCoeffs, void* rvec, void* tvec, float length, int thickness) {
    try {
        cv::drawFrameAxes(*reinterpret_cast<cv::_InputOutputArray*>(image), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<const cv::_InputArray*>(rvec), *reinterpret_cast<const cv::_InputArray*>(tvec), length, thickness);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::estimateAffine2D
// as:     cv::estimateAffine2D (function)
// Arg ARG cv::_InputArray (boxed) from= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) to= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) inliers= cv::_OutputArray (boxed) = noArray()
// Arg ARG Primitive(int) method= Primitive(int) = RANSAC
// Arg ARG Primitive(double) ransacReprojThreshold= Primitive(double) = 3
// Arg ARG Primitive(size_t) maxIters= Primitive(size_t) = 2000
// Arg ARG Primitive(double) confidence= Primitive(double) = 0.99
// Arg ARG Primitive(size_t) refineIters= Primitive(size_t) = 10
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_estimateAffine2D__InputArray__InputArray__OutputArray_int_double_size_t_double_size_t(void* from, void* to, void* inliers, int method, double ransacReprojThreshold, std::size_t maxIters, double confidence, std::size_t refineIters) {
    try {
        cv::Mat ret = cv::estimateAffine2D(*reinterpret_cast<const cv::_InputArray*>(from), *reinterpret_cast<const cv::_InputArray*>(to), *reinterpret_cast<cv::_OutputArray*>(inliers), method, ransacReprojThreshold, maxIters, confidence, refineIters);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::estimateAffine3D
// as:     cv::estimateAffine3D (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) dst= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) out= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) inliers= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) ransacThreshold= Primitive(double) = 3
// Arg ARG Primitive(double) confidence= Primitive(double) = 0.99
// Return value: Primitive(int)
cv_return_value_int cv_estimateAffine3D__InputArray__InputArray__OutputArray__OutputArray_double_double(void* src, void* dst, void* out, void* inliers, double ransacThreshold, double confidence) {
    try {
        int ret = cv::estimateAffine3D(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<const cv::_InputArray*>(dst), *reinterpret_cast<cv::_OutputArray*>(out), *reinterpret_cast<cv::_OutputArray*>(inliers), ransacThreshold, confidence);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::estimateAffinePartial2D
// as:     cv::estimateAffinePartial2D (function)
// Arg ARG cv::_InputArray (boxed) from= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) to= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) inliers= cv::_OutputArray (boxed) = noArray()
// Arg ARG Primitive(int) method= Primitive(int) = RANSAC
// Arg ARG Primitive(double) ransacReprojThreshold= Primitive(double) = 3
// Arg ARG Primitive(size_t) maxIters= Primitive(size_t) = 2000
// Arg ARG Primitive(double) confidence= Primitive(double) = 0.99
// Arg ARG Primitive(size_t) refineIters= Primitive(size_t) = 10
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_estimateAffinePartial2D__InputArray__InputArray__OutputArray_int_double_size_t_double_size_t(void* from, void* to, void* inliers, int method, double ransacReprojThreshold, std::size_t maxIters, double confidence, std::size_t refineIters) {
    try {
        cv::Mat ret = cv::estimateAffinePartial2D(*reinterpret_cast<const cv::_InputArray*>(from), *reinterpret_cast<const cv::_InputArray*>(to), *reinterpret_cast<cv::_OutputArray*>(inliers), method, ransacReprojThreshold, maxIters, confidence, refineIters);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::filterHomographyDecompByVisibleRefpoints
// as:     cv::filterHomographyDecompByVisibleRefpoints (function)
// Arg ARG cv::_InputArray (boxed) rotations= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) normals= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) beforePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) afterPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) possibleSolutions= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) pointsMask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_filterHomographyDecompByVisibleRefpoints__InputArray__InputArray__InputArray__InputArray__OutputArray__InputArray(void* rotations, void* normals, void* beforePoints, void* afterPoints, void* possibleSolutions, void* pointsMask) {
    try {
        cv::filterHomographyDecompByVisibleRefpoints(*reinterpret_cast<const cv::_InputArray*>(rotations), *reinterpret_cast<const cv::_InputArray*>(normals), *reinterpret_cast<const cv::_InputArray*>(beforePoints), *reinterpret_cast<const cv::_InputArray*>(afterPoints), *reinterpret_cast<cv::_OutputArray*>(possibleSolutions), *reinterpret_cast<const cv::_InputArray*>(pointsMask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::filterSpeckles
// as:     cv::filterSpeckles (function)
// Arg ARG cv::_InputOutputArray (boxed) img= cv::_InputOutputArray (boxed) = 
// Arg ARG Primitive(double) newVal= Primitive(double) = 
// Arg ARG Primitive(int) maxSpeckleSize= Primitive(int) = 
// Arg ARG Primitive(double) maxDiff= Primitive(double) = 
// Arg ARG cv::_InputOutputArray (boxed) buf= cv::_InputOutputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_filterSpeckles__InputOutputArray_double_int_double__InputOutputArray(void* img, double newVal, int maxSpeckleSize, double maxDiff, void* buf) {
    try {
        cv::filterSpeckles(*reinterpret_cast<cv::_InputOutputArray*>(img), newVal, maxSpeckleSize, maxDiff, *reinterpret_cast<cv::_InputOutputArray*>(buf));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::find4QuadCornerSubpix
// as:     cv::find4QuadCornerSubpix (function)
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) corners= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Size (simple) region_size= cv::Size (simple) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_find4QuadCornerSubpix__InputArray__InputOutputArray_Size(void* img, void* corners, SizeWrapper region_size) {
    try {
        bool ret = cv::find4QuadCornerSubpix(*reinterpret_cast<const cv::_InputArray*>(img), *reinterpret_cast<cv::_InputOutputArray*>(corners), *reinterpret_cast<cv::Size*>(&region_size));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::findChessboardCornersSB
// as:     cv::findChessboardCornersSB (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) patternSize= cv::Size (simple) = 
// Arg ARG cv::_OutputArray (boxed) corners= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Return value: Primitive(bool)
cv_return_value_bool cv_findChessboardCornersSB__InputArray_Size__OutputArray_int(void* image, SizeWrapper patternSize, void* corners, int flags) {
    try {
        bool ret = cv::findChessboardCornersSB(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::Size*>(&patternSize), *reinterpret_cast<cv::_OutputArray*>(corners), flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::findChessboardCorners
// as:     cv::findChessboardCorners (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) patternSize= cv::Size (simple) = 
// Arg ARG cv::_OutputArray (boxed) corners= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = CALIB_CB_ADAPTIVE_THRESH + CALIB_CB_NORMALIZE_IMAGE
// Return value: Primitive(bool)
cv_return_value_bool cv_findChessboardCorners__InputArray_Size__OutputArray_int(void* image, SizeWrapper patternSize, void* corners, int flags) {
    try {
        bool ret = cv::findChessboardCorners(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::Size*>(&patternSize), *reinterpret_cast<cv::_OutputArray*>(corners), flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::findCirclesGrid
// as:     cv::findCirclesGrid (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) patternSize= cv::Size (simple) = 
// Arg ARG cv::_OutputArray (boxed) centers= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = CALIB_CB_SYMMETRIC_GRID
// Arg ARG SmartPtr[cv::Feature2D (boxed)] blobDetector= SmartPtr[cv::Feature2D (boxed)] = SimpleBlobDetector::create()
// Return value: Primitive(bool)
cv_return_value_bool cv_findCirclesGrid__InputArray_Size__OutputArray_int_PtrOfFeature2D(void* image, SizeWrapper patternSize, void* centers, int flags, void* blobDetector) {
    try {
        bool ret = cv::findCirclesGrid(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::Size*>(&patternSize), *reinterpret_cast<cv::_OutputArray*>(centers), flags, *reinterpret_cast<const Ptr<cv::Feature2D>*>(blobDetector));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::findCirclesGrid
// as:     cv::findCirclesGrid (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) patternSize= cv::Size (simple) = 
// Arg ARG cv::_OutputArray (boxed) centers= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG SmartPtr[cv::Feature2D (boxed)] blobDetector= SmartPtr[cv::Feature2D (boxed)] = 
// Arg ARG cv::CirclesGridFinderParameters (simple) parameters= cv::CirclesGridFinderParameters (simple) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_findCirclesGrid__InputArray_Size__OutputArray_int_PtrOfFeature2D_CirclesGridFinderParameters(void* image, SizeWrapper patternSize, void* centers, int flags, void* blobDetector, cv::CirclesGridFinderParameters parameters) {
    try {
        bool ret = cv::findCirclesGrid(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::Size*>(&patternSize), *reinterpret_cast<cv::_OutputArray*>(centers), flags, *reinterpret_cast<const Ptr<cv::Feature2D>*>(blobDetector), *reinterpret_cast<const cv::CirclesGridFinderParameters*>(&parameters));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::findEssentialMat
// as:     cv::findEssentialMat (function)
// Arg ARG cv::_InputArray (boxed) points1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) method= Primitive(int) = RANSAC
// Arg ARG Primitive(double) prob= Primitive(double) = 0.999
// Arg ARG Primitive(double) threshold= Primitive(double) = 1.0
// Arg ARG cv::_OutputArray (boxed) mask= cv::_OutputArray (boxed) = noArray()
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_findEssentialMat__InputArray__InputArray__InputArray_int_double_double__OutputArray(void* points1, void* points2, void* cameraMatrix, int method, double prob, double threshold, void* mask) {
    try {
        cv::Mat ret = cv::findEssentialMat(*reinterpret_cast<const cv::_InputArray*>(points1), *reinterpret_cast<const cv::_InputArray*>(points2), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), method, prob, threshold, *reinterpret_cast<cv::_OutputArray*>(mask));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::findEssentialMat
// as:     cv::findEssentialMat (function)
// Arg ARG cv::_InputArray (boxed) points1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points2= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) focal= Primitive(double) = 1.0
// Arg ARG cv::Point2d (simple) pp= cv::Point2d (simple) = Point2d(0, 0)
// Arg ARG Primitive(int) method= Primitive(int) = RANSAC
// Arg ARG Primitive(double) prob= Primitive(double) = 0.999
// Arg ARG Primitive(double) threshold= Primitive(double) = 1.0
// Arg ARG cv::_OutputArray (boxed) mask= cv::_OutputArray (boxed) = noArray()
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_findEssentialMat__InputArray__InputArray_double_Point2d_int_double_double__OutputArray(void* points1, void* points2, double focal, Point2dWrapper pp, int method, double prob, double threshold, void* mask) {
    try {
        cv::Mat ret = cv::findEssentialMat(*reinterpret_cast<const cv::_InputArray*>(points1), *reinterpret_cast<const cv::_InputArray*>(points2), focal, *reinterpret_cast<cv::Point2d*>(&pp), method, prob, threshold, *reinterpret_cast<cv::_OutputArray*>(mask));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::findFundamentalMat
// as:     cv::findFundamentalMat (function)
// Arg ARG cv::_InputArray (boxed) points1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) mask= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) method= Primitive(int) = FM_RANSAC
// Arg ARG Primitive(double) ransacReprojThreshold= Primitive(double) = 3.
// Arg ARG Primitive(double) confidence= Primitive(double) = 0.99
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_findFundamentalMat__InputArray__InputArray__OutputArray_int_double_double(void* points1, void* points2, void* mask, int method, double ransacReprojThreshold, double confidence) {
    try {
        cv::Mat ret = cv::findFundamentalMat(*reinterpret_cast<const cv::_InputArray*>(points1), *reinterpret_cast<const cv::_InputArray*>(points2), *reinterpret_cast<cv::_OutputArray*>(mask), method, ransacReprojThreshold, confidence);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::findHomography
// as:     cv::findHomography (function)
// Arg ARG cv::_InputArray (boxed) srcPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) dstPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) mask= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) method= Primitive(int) = 0
// Arg ARG Primitive(double) ransacReprojThreshold= Primitive(double) = 3
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_findHomography__InputArray__InputArray__OutputArray_int_double(void* srcPoints, void* dstPoints, void* mask, int method, double ransacReprojThreshold) {
    try {
        cv::Mat ret = cv::findHomography(*reinterpret_cast<const cv::_InputArray*>(srcPoints), *reinterpret_cast<const cv::_InputArray*>(dstPoints), *reinterpret_cast<cv::_OutputArray*>(mask), method, ransacReprojThreshold);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::findHomography
// as:     cv::findHomography (function)
// Arg ARG cv::_InputArray (boxed) srcPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) dstPoints= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) method= Primitive(int) = 0
// Arg ARG Primitive(double) ransacReprojThreshold= Primitive(double) = 3
// Arg ARG cv::_OutputArray (boxed) mask= cv::_OutputArray (boxed) = noArray()
// Arg ARG Primitive(int) maxIters= Primitive(int) = 2000
// Arg ARG Primitive(double) confidence= Primitive(double) = 0.995
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_findHomography__InputArray__InputArray_int_double__OutputArray_int_double(void* srcPoints, void* dstPoints, int method, double ransacReprojThreshold, void* mask, int maxIters, double confidence) {
    try {
        cv::Mat ret = cv::findHomography(*reinterpret_cast<const cv::_InputArray*>(srcPoints), *reinterpret_cast<const cv::_InputArray*>(dstPoints), method, ransacReprojThreshold, *reinterpret_cast<cv::_OutputArray*>(mask), maxIters, confidence);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::fisheye::calibrate
// as:     cv::fisheye::calibrate (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) image_size= cv::Size (simple) = 
// Arg ARG cv::_InputOutputArray (boxed) K= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) D= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rvecs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tvecs= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 100, DBL_EPSILON)
// Return value: Primitive(double)
cv_return_value_double cv_fisheye_calibrate__InputArray__InputArray_Size__InputOutputArray__InputOutputArray__OutputArray__OutputArray_int_TermCriteria(void* objectPoints, void* imagePoints, SizeWrapper image_size, void* K, void* D, void* rvecs, void* tvecs, int flags, void* criteria) {
    try {
        double ret = cv::fisheye::calibrate(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<const cv::Size*>(&image_size), *reinterpret_cast<cv::_InputOutputArray*>(K), *reinterpret_cast<cv::_InputOutputArray*>(D), *reinterpret_cast<cv::_OutputArray*>(rvecs), *reinterpret_cast<cv::_OutputArray*>(tvecs), flags, *reinterpret_cast<cv::TermCriteria*>(criteria));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::fisheye::distortPoints
// as:     cv::fisheye::distortPoints (function)
// Arg ARG cv::_InputArray (boxed) undistorted= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) distorted= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) D= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) alpha= Primitive(double) = 0
// Return value: Primitive(void)
cv_return_value_void cv_fisheye_distortPoints__InputArray__OutputArray__InputArray__InputArray_double(void* undistorted, void* distorted, void* K, void* D, double alpha) {
    try {
        cv::fisheye::distortPoints(*reinterpret_cast<const cv::_InputArray*>(undistorted), *reinterpret_cast<cv::_OutputArray*>(distorted), *reinterpret_cast<const cv::_InputArray*>(K), *reinterpret_cast<const cv::_InputArray*>(D), alpha);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::fisheye::estimateNewCameraMatrixForUndistortRectify
// as:     cv::fisheye::estimateNewCameraMatrixForUndistortRectify (function)
// Arg ARG cv::_InputArray (boxed) K= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) D= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) image_size= cv::Size (simple) = 
// Arg ARG cv::_InputArray (boxed) R= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) P= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) balance= Primitive(double) = 0.0
// Arg ARG cv::Size (simple) new_size= cv::Size (simple) = Size()
// Arg ARG Primitive(double) fov_scale= Primitive(double) = 1.0
// Return value: Primitive(void)
cv_return_value_void cv_fisheye_estimateNewCameraMatrixForUndistortRectify__InputArray__InputArray_Size__InputArray__OutputArray_double_Size_double(void* K, void* D, SizeWrapper image_size, void* R, void* P, double balance, SizeWrapper new_size, double fov_scale) {
    try {
        cv::fisheye::estimateNewCameraMatrixForUndistortRectify(*reinterpret_cast<const cv::_InputArray*>(K), *reinterpret_cast<const cv::_InputArray*>(D), *reinterpret_cast<const cv::Size*>(&image_size), *reinterpret_cast<const cv::_InputArray*>(R), *reinterpret_cast<cv::_OutputArray*>(P), balance, *reinterpret_cast<const cv::Size*>(&new_size), fov_scale);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::fisheye::initUndistortRectifyMap
// as:     cv::fisheye::initUndistortRectifyMap (function)
// Arg ARG cv::_InputArray (boxed) K= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) D= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) R= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) P= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG Primitive(int) m1type= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) map1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) map2= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_fisheye_initUndistortRectifyMap__InputArray__InputArray__InputArray__InputArray_Size_int__OutputArray__OutputArray(void* K, void* D, void* R, void* P, SizeWrapper size, int m1type, void* map1, void* map2) {
    try {
        cv::fisheye::initUndistortRectifyMap(*reinterpret_cast<const cv::_InputArray*>(K), *reinterpret_cast<const cv::_InputArray*>(D), *reinterpret_cast<const cv::_InputArray*>(R), *reinterpret_cast<const cv::_InputArray*>(P), *reinterpret_cast<const cv::Size*>(&size), m1type, *reinterpret_cast<cv::_OutputArray*>(map1), *reinterpret_cast<cv::_OutputArray*>(map2));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::fisheye::projectPoints
// as:     cv::fisheye::projectPoints (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) imagePoints= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) rvec= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) tvec= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) D= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) alpha= Primitive(double) = 0
// Arg ARG cv::_OutputArray (boxed) jacobian= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_fisheye_projectPoints__InputArray__OutputArray__InputArray__InputArray__InputArray__InputArray_double__OutputArray(void* objectPoints, void* imagePoints, void* rvec, void* tvec, void* K, void* D, double alpha, void* jacobian) {
    try {
        cv::fisheye::projectPoints(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<cv::_OutputArray*>(imagePoints), *reinterpret_cast<const cv::_InputArray*>(rvec), *reinterpret_cast<const cv::_InputArray*>(tvec), *reinterpret_cast<const cv::_InputArray*>(K), *reinterpret_cast<const cv::_InputArray*>(D), alpha, *reinterpret_cast<cv::_OutputArray*>(jacobian));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::fisheye::stereoCalibrate
// as:     cv::fisheye::stereoCalibrate (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) K1= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) D1= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) K2= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) D2= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG cv::_OutputArray (boxed) R= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) T= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = fisheye::CALIB_FIX_INTRINSIC
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 100, DBL_EPSILON)
// Return value: Primitive(double)
cv_return_value_double cv_fisheye_stereoCalibrate__InputArray__InputArray__InputArray__InputOutputArray__InputOutputArray__InputOutputArray__InputOutputArray_Size__OutputArray__OutputArray_int_TermCriteria(void* objectPoints, void* imagePoints1, void* imagePoints2, void* K1, void* D1, void* K2, void* D2, SizeWrapper imageSize, void* R, void* T, int flags, void* criteria) {
    try {
        double ret = cv::fisheye::stereoCalibrate(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints1), *reinterpret_cast<const cv::_InputArray*>(imagePoints2), *reinterpret_cast<cv::_InputOutputArray*>(K1), *reinterpret_cast<cv::_InputOutputArray*>(D1), *reinterpret_cast<cv::_InputOutputArray*>(K2), *reinterpret_cast<cv::_InputOutputArray*>(D2), *reinterpret_cast<cv::Size*>(&imageSize), *reinterpret_cast<cv::_OutputArray*>(R), *reinterpret_cast<cv::_OutputArray*>(T), flags, *reinterpret_cast<cv::TermCriteria*>(criteria));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::fisheye::stereoRectify
// as:     cv::fisheye::stereoRectify (function)
// Arg ARG cv::_InputArray (boxed) K1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) D1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) D2= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG cv::_InputArray (boxed) R= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) tvec= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) R1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) R2= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) P1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) P2= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Q= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG cv::Size (simple) newImageSize= cv::Size (simple) = Size()
// Arg ARG Primitive(double) balance= Primitive(double) = 0.0
// Arg ARG Primitive(double) fov_scale= Primitive(double) = 1.0
// Return value: Primitive(void)
cv_return_value_void cv_fisheye_stereoRectify__InputArray__InputArray__InputArray__InputArray_Size__InputArray__InputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray_int_Size_double_double(void* K1, void* D1, void* K2, void* D2, SizeWrapper imageSize, void* R, void* tvec, void* R1, void* R2, void* P1, void* P2, void* Q, int flags, SizeWrapper newImageSize, double balance, double fov_scale) {
    try {
        cv::fisheye::stereoRectify(*reinterpret_cast<const cv::_InputArray*>(K1), *reinterpret_cast<const cv::_InputArray*>(D1), *reinterpret_cast<const cv::_InputArray*>(K2), *reinterpret_cast<const cv::_InputArray*>(D2), *reinterpret_cast<const cv::Size*>(&imageSize), *reinterpret_cast<const cv::_InputArray*>(R), *reinterpret_cast<const cv::_InputArray*>(tvec), *reinterpret_cast<cv::_OutputArray*>(R1), *reinterpret_cast<cv::_OutputArray*>(R2), *reinterpret_cast<cv::_OutputArray*>(P1), *reinterpret_cast<cv::_OutputArray*>(P2), *reinterpret_cast<cv::_OutputArray*>(Q), flags, *reinterpret_cast<const cv::Size*>(&newImageSize), balance, fov_scale);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::fisheye::undistortImage
// as:     cv::fisheye::undistortImage (function)
// Arg ARG cv::_InputArray (boxed) distorted= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) undistorted= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) D= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) Knew= cv::_InputArray (boxed) = cv::noArray()
// Arg ARG cv::Size (simple) new_size= cv::Size (simple) = Size()
// Return value: Primitive(void)
cv_return_value_void cv_fisheye_undistortImage__InputArray__OutputArray__InputArray__InputArray__InputArray_Size(void* distorted, void* undistorted, void* K, void* D, void* Knew, SizeWrapper new_size) {
    try {
        cv::fisheye::undistortImage(*reinterpret_cast<const cv::_InputArray*>(distorted), *reinterpret_cast<cv::_OutputArray*>(undistorted), *reinterpret_cast<const cv::_InputArray*>(K), *reinterpret_cast<const cv::_InputArray*>(D), *reinterpret_cast<const cv::_InputArray*>(Knew), *reinterpret_cast<const cv::Size*>(&new_size));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::fisheye::undistortPoints
// as:     cv::fisheye::undistortPoints (function)
// Arg ARG cv::_InputArray (boxed) distorted= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) undistorted= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) D= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) R= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) P= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_fisheye_undistortPoints__InputArray__OutputArray__InputArray__InputArray__InputArray__InputArray(void* distorted, void* undistorted, void* K, void* D, void* R, void* P) {
    try {
        cv::fisheye::undistortPoints(*reinterpret_cast<const cv::_InputArray*>(distorted), *reinterpret_cast<cv::_OutputArray*>(undistorted), *reinterpret_cast<const cv::_InputArray*>(K), *reinterpret_cast<const cv::_InputArray*>(D), *reinterpret_cast<const cv::_InputArray*>(R), *reinterpret_cast<const cv::_InputArray*>(P));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::getDefaultNewCameraMatrix
// as:     cv::getDefaultNewCameraMatrix (function)
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) imgsize= cv::Size (simple) = Size()
// Arg ARG Primitive(bool) centerPrincipalPoint= Primitive(bool) = false
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_getDefaultNewCameraMatrix__InputArray_Size_bool(void* cameraMatrix, SizeWrapper imgsize, bool centerPrincipalPoint) {
    try {
        cv::Mat ret = cv::getDefaultNewCameraMatrix(*reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<cv::Size*>(&imgsize), centerPrincipalPoint);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::getOptimalNewCameraMatrix
// as:     cv::getOptimalNewCameraMatrix (function)
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG Primitive(double) alpha= Primitive(double) = 
// Arg ARG cv::Size (simple) newImgSize= cv::Size (simple) = Size()
// Arg ARG RawPtr[cv::Rect (simple)] * validPixROI= (ptr) RawPtr[cv::Rect (simple)] = 0
// Arg ARG Primitive(bool) centerPrincipalPoint= Primitive(bool) = false
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_getOptimalNewCameraMatrix__InputArray__InputArray_Size_double_Size_Rect_X_bool(void* cameraMatrix, void* distCoeffs, SizeWrapper imageSize, double alpha, SizeWrapper newImgSize, cv::Rect* validPixROI, bool centerPrincipalPoint) {
    try {
        cv::Mat ret = cv::getOptimalNewCameraMatrix(*reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<cv::Size*>(&imageSize), alpha, *reinterpret_cast<cv::Size*>(&newImgSize), reinterpret_cast<cv::Rect*>(validPixROI), centerPrincipalPoint);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::getValidDisparityROI
// as:     cv::getValidDisparityROI (function)
// Arg ARG cv::Rect (simple) roi1= cv::Rect (simple) = 
// Arg ARG cv::Rect (simple) roi2= cv::Rect (simple) = 
// Arg ARG Primitive(int) minDisparity= Primitive(int) = 
// Arg ARG Primitive(int) numberOfDisparities= Primitive(int) = 
// Arg ARG Primitive(int) SADWindowSize= Primitive(int) = 
// Return value: cv::Rect (simple)
cv_return_value_RectWrapper cv_getValidDisparityROI_Rect_Rect_int_int_int(RectWrapper roi1, RectWrapper roi2, int minDisparity, int numberOfDisparities, int SADWindowSize) {
    try {
        cv::Rect ret = cv::getValidDisparityROI(*reinterpret_cast<cv::Rect*>(&roi1), *reinterpret_cast<cv::Rect*>(&roi2), minDisparity, numberOfDisparities, SADWindowSize);
        return { Error::Code::StsOk, NULL, *reinterpret_cast<RectWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_RectWrapper)
}

// parsed: cv::initCameraMatrix2D
// as:     cv::initCameraMatrix2D (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG Primitive(double) aspectRatio= Primitive(double) = 1.0
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_initCameraMatrix2D__InputArray__InputArray_Size_double(void* objectPoints, void* imagePoints, SizeWrapper imageSize, double aspectRatio) {
    try {
        cv::Mat ret = cv::initCameraMatrix2D(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<cv::Size*>(&imageSize), aspectRatio);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::initUndistortRectifyMap
// as:     cv::initUndistortRectifyMap (function)
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) R= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) newCameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG Primitive(int) m1type= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) map1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) map2= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_initUndistortRectifyMap__InputArray__InputArray__InputArray__InputArray_Size_int__OutputArray__OutputArray(void* cameraMatrix, void* distCoeffs, void* R, void* newCameraMatrix, SizeWrapper size, int m1type, void* map1, void* map2) {
    try {
        cv::initUndistortRectifyMap(*reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<const cv::_InputArray*>(R), *reinterpret_cast<const cv::_InputArray*>(newCameraMatrix), *reinterpret_cast<cv::Size*>(&size), m1type, *reinterpret_cast<cv::_OutputArray*>(map1), *reinterpret_cast<cv::_OutputArray*>(map2));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::initWideAngleProjMap
// as:     cv::initWideAngleProjMap (function)
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG Primitive(int) destImageWidth= Primitive(int) = 
// Arg ARG Primitive(int) m1type= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) map1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) map2= cv::_OutputArray (boxed) = 
// Arg ARG UndistortTypes (enum) projType= UndistortTypes (enum) = PROJ_SPHERICAL_EQRECT
// Arg ARG Primitive(double) alpha= Primitive(double) = 0
// Return value: Primitive(float)
cv_return_value_float cv_initWideAngleProjMap__InputArray__InputArray_Size_int_int__OutputArray__OutputArray_UndistortTypes_double(void* cameraMatrix, void* distCoeffs, SizeWrapper imageSize, int destImageWidth, int m1type, void* map1, void* map2, UndistortTypes projType, double alpha) {
    try {
        float ret = cv::initWideAngleProjMap(*reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<cv::Size*>(&imageSize), destImageWidth, m1type, *reinterpret_cast<cv::_OutputArray*>(map1), *reinterpret_cast<cv::_OutputArray*>(map2), *reinterpret_cast<UndistortTypes*>(&projType), alpha);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::initWideAngleProjMap
// as:     cv::initWideAngleProjMap (function)
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG Primitive(int) destImageWidth= Primitive(int) = 
// Arg ARG Primitive(int) m1type= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) map1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) map2= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) projType= Primitive(int) = 
// Arg ARG Primitive(double) alpha= Primitive(double) = 0
// Return value: Primitive(float)
cv_return_value_float cv_initWideAngleProjMap__InputArray__InputArray_Size_int_int__OutputArray__OutputArray_int_double(void* cameraMatrix, void* distCoeffs, SizeWrapper imageSize, int destImageWidth, int m1type, void* map1, void* map2, int projType, double alpha) {
    try {
        float ret = cv::initWideAngleProjMap(*reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<cv::Size*>(&imageSize), destImageWidth, m1type, *reinterpret_cast<cv::_OutputArray*>(map1), *reinterpret_cast<cv::_OutputArray*>(map2), projType, alpha);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::matMulDeriv
// as:     cv::matMulDeriv (function)
// Arg ARG cv::_InputArray (boxed) A= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) B= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dABdA= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dABdB= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_matMulDeriv__InputArray__InputArray__OutputArray__OutputArray(void* A, void* B, void* dABdA, void* dABdB) {
    try {
        cv::matMulDeriv(*reinterpret_cast<const cv::_InputArray*>(A), *reinterpret_cast<const cv::_InputArray*>(B), *reinterpret_cast<cv::_OutputArray*>(dABdA), *reinterpret_cast<cv::_OutputArray*>(dABdB));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::projectPoints
// as:     cv::projectPoints (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) rvec= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) tvec= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) imagePoints= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) jacobian= cv::_OutputArray (boxed) = noArray()
// Arg ARG Primitive(double) aspectRatio= Primitive(double) = 0
// Return value: Primitive(void)
cv_return_value_void cv_projectPoints__InputArray__InputArray__InputArray__InputArray__InputArray__OutputArray__OutputArray_double(void* objectPoints, void* rvec, void* tvec, void* cameraMatrix, void* distCoeffs, void* imagePoints, void* jacobian, double aspectRatio) {
    try {
        cv::projectPoints(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(rvec), *reinterpret_cast<const cv::_InputArray*>(tvec), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<cv::_OutputArray*>(imagePoints), *reinterpret_cast<cv::_OutputArray*>(jacobian), aspectRatio);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::recoverPose
// as:     cv::recoverPose (function)
// Arg ARG cv::_InputArray (boxed) E= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) R= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) t= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) mask= cv::_InputOutputArray (boxed) = noArray()
// Return value: Primitive(int)
cv_return_value_int cv_recoverPose__InputArray__InputArray__InputArray__InputArray__OutputArray__OutputArray__InputOutputArray(void* E, void* points1, void* points2, void* cameraMatrix, void* R, void* t, void* mask) {
    try {
        int ret = cv::recoverPose(*reinterpret_cast<const cv::_InputArray*>(E), *reinterpret_cast<const cv::_InputArray*>(points1), *reinterpret_cast<const cv::_InputArray*>(points2), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<cv::_OutputArray*>(R), *reinterpret_cast<cv::_OutputArray*>(t), *reinterpret_cast<cv::_InputOutputArray*>(mask));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::recoverPose
// as:     cv::recoverPose (function)
// Arg ARG cv::_InputArray (boxed) E= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) R= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) t= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) distanceThresh= Primitive(double) = 
// Arg ARG cv::_InputOutputArray (boxed) mask= cv::_InputOutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) triangulatedPoints= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(int)
cv_return_value_int cv_recoverPose__InputArray__InputArray__InputArray__InputArray__OutputArray__OutputArray_double__InputOutputArray__OutputArray(void* E, void* points1, void* points2, void* cameraMatrix, void* R, void* t, double distanceThresh, void* mask, void* triangulatedPoints) {
    try {
        int ret = cv::recoverPose(*reinterpret_cast<const cv::_InputArray*>(E), *reinterpret_cast<const cv::_InputArray*>(points1), *reinterpret_cast<const cv::_InputArray*>(points2), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<cv::_OutputArray*>(R), *reinterpret_cast<cv::_OutputArray*>(t), distanceThresh, *reinterpret_cast<cv::_InputOutputArray*>(mask), *reinterpret_cast<cv::_OutputArray*>(triangulatedPoints));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::recoverPose
// as:     cv::recoverPose (function)
// Arg ARG cv::_InputArray (boxed) E= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) R= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) t= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) focal= Primitive(double) = 1.0
// Arg ARG cv::Point2d (simple) pp= cv::Point2d (simple) = Point2d(0, 0)
// Arg ARG cv::_InputOutputArray (boxed) mask= cv::_InputOutputArray (boxed) = noArray()
// Return value: Primitive(int)
cv_return_value_int cv_recoverPose__InputArray__InputArray__InputArray__OutputArray__OutputArray_double_Point2d__InputOutputArray(void* E, void* points1, void* points2, void* R, void* t, double focal, Point2dWrapper pp, void* mask) {
    try {
        int ret = cv::recoverPose(*reinterpret_cast<const cv::_InputArray*>(E), *reinterpret_cast<const cv::_InputArray*>(points1), *reinterpret_cast<const cv::_InputArray*>(points2), *reinterpret_cast<cv::_OutputArray*>(R), *reinterpret_cast<cv::_OutputArray*>(t), focal, *reinterpret_cast<cv::Point2d*>(&pp), *reinterpret_cast<cv::_InputOutputArray*>(mask));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::rectify3Collinear
// as:     cv::rectify3Collinear (function)
// Arg ARG cv::_InputArray (boxed) cameraMatrix1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix3= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs3= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imgpt1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imgpt3= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG cv::_InputArray (boxed) R12= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) T12= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) R13= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) T13= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) R1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) R2= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) R3= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) P1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) P2= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) P3= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Q= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) alpha= Primitive(double) = 
// Arg ARG cv::Size (simple) newImgSize= cv::Size (simple) = 
// Arg ARG RawPtr[cv::Rect (simple)] * roi1= (ptr) RawPtr[cv::Rect (simple)] = 
// Arg ARG RawPtr[cv::Rect (simple)] * roi2= (ptr) RawPtr[cv::Rect (simple)] = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(float)
cv_return_value_float cv_rectify3Collinear__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray_Size__InputArray__InputArray__InputArray__InputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray_double_Size_Rect_X_Rect_X_int(void* cameraMatrix1, void* distCoeffs1, void* cameraMatrix2, void* distCoeffs2, void* cameraMatrix3, void* distCoeffs3, void* imgpt1, void* imgpt3, SizeWrapper imageSize, void* R12, void* T12, void* R13, void* T13, void* R1, void* R2, void* R3, void* P1, void* P2, void* P3, void* Q, double alpha, SizeWrapper newImgSize, cv::Rect* roi1, cv::Rect* roi2, int flags) {
    try {
        float ret = cv::rectify3Collinear(*reinterpret_cast<const cv::_InputArray*>(cameraMatrix1), *reinterpret_cast<const cv::_InputArray*>(distCoeffs1), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix2), *reinterpret_cast<const cv::_InputArray*>(distCoeffs2), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix3), *reinterpret_cast<const cv::_InputArray*>(distCoeffs3), *reinterpret_cast<const cv::_InputArray*>(imgpt1), *reinterpret_cast<const cv::_InputArray*>(imgpt3), *reinterpret_cast<cv::Size*>(&imageSize), *reinterpret_cast<const cv::_InputArray*>(R12), *reinterpret_cast<const cv::_InputArray*>(T12), *reinterpret_cast<const cv::_InputArray*>(R13), *reinterpret_cast<const cv::_InputArray*>(T13), *reinterpret_cast<cv::_OutputArray*>(R1), *reinterpret_cast<cv::_OutputArray*>(R2), *reinterpret_cast<cv::_OutputArray*>(R3), *reinterpret_cast<cv::_OutputArray*>(P1), *reinterpret_cast<cv::_OutputArray*>(P2), *reinterpret_cast<cv::_OutputArray*>(P3), *reinterpret_cast<cv::_OutputArray*>(Q), alpha, *reinterpret_cast<cv::Size*>(&newImgSize), reinterpret_cast<cv::Rect*>(roi1), reinterpret_cast<cv::Rect*>(roi2), flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::reprojectImageTo3D
// as:     cv::reprojectImageTo3D (function)
// Arg ARG cv::_InputArray (boxed) disparity= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) _3dImage= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) Q= cv::_InputArray (boxed) = 
// Arg ARG Primitive(bool) handleMissingValues= Primitive(bool) = false
// Arg ARG Primitive(int) ddepth= Primitive(int) = -1
// Return value: Primitive(void)
cv_return_value_void cv_reprojectImageTo3D__InputArray__OutputArray__InputArray_bool_int(void* disparity, void* _3dImage, void* Q, bool handleMissingValues, int ddepth) {
    try {
        cv::reprojectImageTo3D(*reinterpret_cast<const cv::_InputArray*>(disparity), *reinterpret_cast<cv::_OutputArray*>(_3dImage), *reinterpret_cast<const cv::_InputArray*>(Q), handleMissingValues, ddepth);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sampsonDistance
// as:     cv::sampsonDistance (function)
// Arg ARG cv::_InputArray (boxed) pt1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) pt2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) F= cv::_InputArray (boxed) = 
// Return value: Primitive(double)
cv_return_value_double cv_sampsonDistance__InputArray__InputArray__InputArray(void* pt1, void* pt2, void* F) {
    try {
        double ret = cv::sampsonDistance(*reinterpret_cast<const cv::_InputArray*>(pt1), *reinterpret_cast<const cv::_InputArray*>(pt2), *reinterpret_cast<const cv::_InputArray*>(F));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::solveP3P
// as:     cv::solveP3P (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rvecs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tvecs= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(int)
cv_return_value_int cv_solveP3P__InputArray__InputArray__InputArray__InputArray__OutputArray__OutputArray_int(void* objectPoints, void* imagePoints, void* cameraMatrix, void* distCoeffs, void* rvecs, void* tvecs, int flags) {
    try {
        int ret = cv::solveP3P(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<cv::_OutputArray*>(rvecs), *reinterpret_cast<cv::_OutputArray*>(tvecs), flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::solvePnPGeneric
// as:     cv::solvePnPGeneric (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rvecs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tvecs= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(bool) useExtrinsicGuess= Primitive(bool) = false
// Arg ARG SolvePnPMethod (enum) flags= SolvePnPMethod (enum) = SOLVEPNP_ITERATIVE
// Arg ARG cv::_InputArray (boxed) rvec= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) tvec= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) reprojectionError= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(int)
cv_return_value_int cv_solvePnPGeneric__InputArray__InputArray__InputArray__InputArray__OutputArray__OutputArray_bool_SolvePnPMethod__InputArray__InputArray__OutputArray(void* objectPoints, void* imagePoints, void* cameraMatrix, void* distCoeffs, void* rvecs, void* tvecs, bool useExtrinsicGuess, SolvePnPMethod flags, void* rvec, void* tvec, void* reprojectionError) {
    try {
        int ret = cv::solvePnPGeneric(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<cv::_OutputArray*>(rvecs), *reinterpret_cast<cv::_OutputArray*>(tvecs), useExtrinsicGuess, *reinterpret_cast<SolvePnPMethod*>(&flags), *reinterpret_cast<const cv::_InputArray*>(rvec), *reinterpret_cast<const cv::_InputArray*>(tvec), *reinterpret_cast<cv::_OutputArray*>(reprojectionError));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::solvePnPRansac
// as:     cv::solvePnPRansac (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rvec= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tvec= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(bool) useExtrinsicGuess= Primitive(bool) = false
// Arg ARG Primitive(int) iterationsCount= Primitive(int) = 100
// Arg ARG Primitive(float) reprojectionError= Primitive(float) = 8.0
// Arg ARG Primitive(double) confidence= Primitive(double) = 0.99
// Arg ARG cv::_OutputArray (boxed) inliers= cv::_OutputArray (boxed) = noArray()
// Arg ARG Primitive(int) flags= Primitive(int) = SOLVEPNP_ITERATIVE
// Return value: Primitive(bool)
cv_return_value_bool cv_solvePnPRansac__InputArray__InputArray__InputArray__InputArray__OutputArray__OutputArray_bool_int_float_double__OutputArray_int(void* objectPoints, void* imagePoints, void* cameraMatrix, void* distCoeffs, void* rvec, void* tvec, bool useExtrinsicGuess, int iterationsCount, float reprojectionError, double confidence, void* inliers, int flags) {
    try {
        bool ret = cv::solvePnPRansac(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<cv::_OutputArray*>(rvec), *reinterpret_cast<cv::_OutputArray*>(tvec), useExtrinsicGuess, iterationsCount, reprojectionError, confidence, *reinterpret_cast<cv::_OutputArray*>(inliers), flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::solvePnPRefineLM
// as:     cv::solvePnPRefineLM (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) rvec= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) tvec= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = TermCriteria(TermCriteria::EPS + TermCriteria::COUNT, 20, FLT_EPSILON)
// Return value: Primitive(void)
cv_return_value_void cv_solvePnPRefineLM__InputArray__InputArray__InputArray__InputArray__InputOutputArray__InputOutputArray_TermCriteria(void* objectPoints, void* imagePoints, void* cameraMatrix, void* distCoeffs, void* rvec, void* tvec, void* criteria) {
    try {
        cv::solvePnPRefineLM(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<cv::_InputOutputArray*>(rvec), *reinterpret_cast<cv::_InputOutputArray*>(tvec), *reinterpret_cast<cv::TermCriteria*>(criteria));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::solvePnPRefineVVS
// as:     cv::solvePnPRefineVVS (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) rvec= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) tvec= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = TermCriteria(TermCriteria::EPS + TermCriteria::COUNT, 20, FLT_EPSILON)
// Arg ARG Primitive(double) VVSlambda= Primitive(double) = 1
// Return value: Primitive(void)
cv_return_value_void cv_solvePnPRefineVVS__InputArray__InputArray__InputArray__InputArray__InputOutputArray__InputOutputArray_TermCriteria_double(void* objectPoints, void* imagePoints, void* cameraMatrix, void* distCoeffs, void* rvec, void* tvec, void* criteria, double VVSlambda) {
    try {
        cv::solvePnPRefineVVS(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<cv::_InputOutputArray*>(rvec), *reinterpret_cast<cv::_InputOutputArray*>(tvec), *reinterpret_cast<cv::TermCriteria*>(criteria), VVSlambda);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::solvePnP
// as:     cv::solvePnP (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rvec= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tvec= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(bool) useExtrinsicGuess= Primitive(bool) = false
// Arg ARG Primitive(int) flags= Primitive(int) = SOLVEPNP_ITERATIVE
// Return value: Primitive(bool)
cv_return_value_bool cv_solvePnP__InputArray__InputArray__InputArray__InputArray__OutputArray__OutputArray_bool_int(void* objectPoints, void* imagePoints, void* cameraMatrix, void* distCoeffs, void* rvec, void* tvec, bool useExtrinsicGuess, int flags) {
    try {
        bool ret = cv::solvePnP(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<cv::_OutputArray*>(rvec), *reinterpret_cast<cv::_OutputArray*>(tvec), useExtrinsicGuess, flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::stereoCalibrate
// as:     cv::stereoCalibrate (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) cameraMatrix1= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) distCoeffs1= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) cameraMatrix2= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) distCoeffs2= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG cv::_InputOutputArray (boxed) R= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) T= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) E= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) F= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) perViewErrors= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = CALIB_FIX_INTRINSIC
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 1e-6)
// Return value: Primitive(double)
cv_return_value_double cv_stereoCalibrate__InputArray__InputArray__InputArray__InputOutputArray__InputOutputArray__InputOutputArray__InputOutputArray_Size__InputOutputArray__InputOutputArray__OutputArray__OutputArray__OutputArray_int_TermCriteria(void* objectPoints, void* imagePoints1, void* imagePoints2, void* cameraMatrix1, void* distCoeffs1, void* cameraMatrix2, void* distCoeffs2, SizeWrapper imageSize, void* R, void* T, void* E, void* F, void* perViewErrors, int flags, void* criteria) {
    try {
        double ret = cv::stereoCalibrate(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints1), *reinterpret_cast<const cv::_InputArray*>(imagePoints2), *reinterpret_cast<cv::_InputOutputArray*>(cameraMatrix1), *reinterpret_cast<cv::_InputOutputArray*>(distCoeffs1), *reinterpret_cast<cv::_InputOutputArray*>(cameraMatrix2), *reinterpret_cast<cv::_InputOutputArray*>(distCoeffs2), *reinterpret_cast<cv::Size*>(&imageSize), *reinterpret_cast<cv::_InputOutputArray*>(R), *reinterpret_cast<cv::_InputOutputArray*>(T), *reinterpret_cast<cv::_OutputArray*>(E), *reinterpret_cast<cv::_OutputArray*>(F), *reinterpret_cast<cv::_OutputArray*>(perViewErrors), flags, *reinterpret_cast<cv::TermCriteria*>(criteria));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::stereoCalibrate
// as:     cv::stereoCalibrate (function)
// Arg ARG cv::_InputArray (boxed) objectPoints= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) imagePoints2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) cameraMatrix1= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) distCoeffs1= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) cameraMatrix2= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) distCoeffs2= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG cv::_OutputArray (boxed) R= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) T= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) E= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) F= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = CALIB_FIX_INTRINSIC
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 1e-6)
// Return value: Primitive(double)
cv_return_value_double cv_stereoCalibrate__InputArray__InputArray__InputArray__InputOutputArray__InputOutputArray__InputOutputArray__InputOutputArray_Size__OutputArray__OutputArray__OutputArray__OutputArray_int_TermCriteria(void* objectPoints, void* imagePoints1, void* imagePoints2, void* cameraMatrix1, void* distCoeffs1, void* cameraMatrix2, void* distCoeffs2, SizeWrapper imageSize, void* R, void* T, void* E, void* F, int flags, void* criteria) {
    try {
        double ret = cv::stereoCalibrate(*reinterpret_cast<const cv::_InputArray*>(objectPoints), *reinterpret_cast<const cv::_InputArray*>(imagePoints1), *reinterpret_cast<const cv::_InputArray*>(imagePoints2), *reinterpret_cast<cv::_InputOutputArray*>(cameraMatrix1), *reinterpret_cast<cv::_InputOutputArray*>(distCoeffs1), *reinterpret_cast<cv::_InputOutputArray*>(cameraMatrix2), *reinterpret_cast<cv::_InputOutputArray*>(distCoeffs2), *reinterpret_cast<cv::Size*>(&imageSize), *reinterpret_cast<cv::_OutputArray*>(R), *reinterpret_cast<cv::_OutputArray*>(T), *reinterpret_cast<cv::_OutputArray*>(E), *reinterpret_cast<cv::_OutputArray*>(F), flags, *reinterpret_cast<cv::TermCriteria*>(criteria));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::stereoRectifyUncalibrated
// as:     cv::stereoRectifyUncalibrated (function)
// Arg ARG cv::_InputArray (boxed) points1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) points2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) F= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) imgSize= cv::Size (simple) = 
// Arg ARG cv::_OutputArray (boxed) H1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) H2= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) threshold= Primitive(double) = 5
// Return value: Primitive(bool)
cv_return_value_bool cv_stereoRectifyUncalibrated__InputArray__InputArray__InputArray_Size__OutputArray__OutputArray_double(void* points1, void* points2, void* F, SizeWrapper imgSize, void* H1, void* H2, double threshold) {
    try {
        bool ret = cv::stereoRectifyUncalibrated(*reinterpret_cast<const cv::_InputArray*>(points1), *reinterpret_cast<const cv::_InputArray*>(points2), *reinterpret_cast<const cv::_InputArray*>(F), *reinterpret_cast<cv::Size*>(&imgSize), *reinterpret_cast<cv::_OutputArray*>(H1), *reinterpret_cast<cv::_OutputArray*>(H2), threshold);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::stereoRectify
// as:     cv::stereoRectify (function)
// Arg ARG cv::_InputArray (boxed) cameraMatrix1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs2= cv::_InputArray (boxed) = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG cv::_InputArray (boxed) R= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) T= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) R1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) R2= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) P1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) P2= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) Q= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = CALIB_ZERO_DISPARITY
// Arg ARG Primitive(double) alpha= Primitive(double) = -1
// Arg ARG cv::Size (simple) newImageSize= cv::Size (simple) = Size()
// Arg ARG RawPtr[cv::Rect (simple)] * validPixROI1= (ptr) RawPtr[cv::Rect (simple)] = 0
// Arg ARG RawPtr[cv::Rect (simple)] * validPixROI2= (ptr) RawPtr[cv::Rect (simple)] = 0
// Return value: Primitive(void)
cv_return_value_void cv_stereoRectify__InputArray__InputArray__InputArray__InputArray_Size__InputArray__InputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray_int_double_Size_Rect_X_Rect_X(void* cameraMatrix1, void* distCoeffs1, void* cameraMatrix2, void* distCoeffs2, SizeWrapper imageSize, void* R, void* T, void* R1, void* R2, void* P1, void* P2, void* Q, int flags, double alpha, SizeWrapper newImageSize, cv::Rect* validPixROI1, cv::Rect* validPixROI2) {
    try {
        cv::stereoRectify(*reinterpret_cast<const cv::_InputArray*>(cameraMatrix1), *reinterpret_cast<const cv::_InputArray*>(distCoeffs1), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix2), *reinterpret_cast<const cv::_InputArray*>(distCoeffs2), *reinterpret_cast<cv::Size*>(&imageSize), *reinterpret_cast<const cv::_InputArray*>(R), *reinterpret_cast<const cv::_InputArray*>(T), *reinterpret_cast<cv::_OutputArray*>(R1), *reinterpret_cast<cv::_OutputArray*>(R2), *reinterpret_cast<cv::_OutputArray*>(P1), *reinterpret_cast<cv::_OutputArray*>(P2), *reinterpret_cast<cv::_OutputArray*>(Q), flags, alpha, *reinterpret_cast<cv::Size*>(&newImageSize), reinterpret_cast<cv::Rect*>(validPixROI1), reinterpret_cast<cv::Rect*>(validPixROI2));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::triangulatePoints
// as:     cv::triangulatePoints (function)
// Arg ARG cv::_InputArray (boxed) projMatr1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) projMatr2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) projPoints1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) projPoints2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) points4D= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_triangulatePoints__InputArray__InputArray__InputArray__InputArray__OutputArray(void* projMatr1, void* projMatr2, void* projPoints1, void* projPoints2, void* points4D) {
    try {
        cv::triangulatePoints(*reinterpret_cast<const cv::_InputArray*>(projMatr1), *reinterpret_cast<const cv::_InputArray*>(projMatr2), *reinterpret_cast<const cv::_InputArray*>(projPoints1), *reinterpret_cast<const cv::_InputArray*>(projPoints2), *reinterpret_cast<cv::_OutputArray*>(points4D));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::undistortPoints
// as:     cv::undistortPoints (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) R= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) P= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_undistortPoints__InputArray__OutputArray__InputArray__InputArray__InputArray__InputArray(void* src, void* dst, void* cameraMatrix, void* distCoeffs, void* R, void* P) {
    try {
        cv::undistortPoints(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<const cv::_InputArray*>(R), *reinterpret_cast<const cv::_InputArray*>(P));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::undistortPoints
// as:     cv::undistortPoints (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) R= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) P= cv::_InputArray (boxed) = 
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_undistortPoints__InputArray__OutputArray__InputArray__InputArray__InputArray__InputArray_TermCriteria(void* src, void* dst, void* cameraMatrix, void* distCoeffs, void* R, void* P, void* criteria) {
    try {
        cv::undistortPoints(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<const cv::_InputArray*>(R), *reinterpret_cast<const cv::_InputArray*>(P), *reinterpret_cast<cv::TermCriteria*>(criteria));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::undistort
// as:     cv::undistort (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) newCameraMatrix= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_undistort__InputArray__OutputArray__InputArray__InputArray__InputArray(void* src, void* dst, void* cameraMatrix, void* distCoeffs, void* newCameraMatrix) {
    try {
        cv::undistort(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<const cv::_InputArray*>(newCameraMatrix));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::validateDisparity
// as:     cv::validateDisparity (function)
// Arg ARG cv::_InputOutputArray (boxed) disparity= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cost= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) minDisparity= Primitive(int) = 
// Arg ARG Primitive(int) numberOfDisparities= Primitive(int) = 
// Arg ARG Primitive(int) disp12MaxDisp= Primitive(int) = 1
// Return value: Primitive(void)
cv_return_value_void cv_validateDisparity__InputOutputArray__InputArray_int_int_int(void* disparity, void* cost, int minDisparity, int numberOfDisparities, int disp12MaxDisp) {
    try {
        cv::validateDisparity(*reinterpret_cast<cv::_InputOutputArray*>(disparity), *reinterpret_cast<const cv::_InputArray*>(cost), minDisparity, numberOfDisparities, disp12MaxDisp);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::CirclesGridFinderParameters::CirclesGridFinderParameters
// as:     cv::CirclesGridFinderParameters::CirclesGridFinderParameters (constructor) cv::CirclesGridFinderParameters (simple) . default
// Return value: cv::CirclesGridFinderParameters (simple)
cv_return_value_CirclesGridFinderParameters cv_CirclesGridFinderParameters_CirclesGridFinderParameters() {
    try {
        cv::CirclesGridFinderParameters ret;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_CirclesGridFinderParameters)
}

// parsed: cv::LMSolver::run
// as:     cv::LMSolver::run (method) cv::LMSolver (trait) . run
// Arg ARG cv::_InputOutputArray (boxed) param= cv::_InputOutputArray (boxed) = 
// Return value: Primitive(int)
cv_return_value_int cv_LMSolver_run_const__InputOutputArray(void* instance, void* param) {
    try {
        int ret = reinterpret_cast<cv::LMSolver*>(instance)->run(*reinterpret_cast<cv::_InputOutputArray*>(param));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::LMSolver::setMaxIters
// as:     cv::LMSolver::setMaxIters (method) cv::LMSolver (trait) . setMaxIters
// Arg ARG Primitive(int) maxIters= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_LMSolver_setMaxIters_int(void* instance, int maxIters) {
    try {
        reinterpret_cast<cv::LMSolver*>(instance)->setMaxIters(maxIters);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::LMSolver::getMaxIters
// as:     cv::LMSolver::getMaxIters (method) cv::LMSolver (trait) . getMaxIters
// Return value: Primitive(int)
cv_return_value_int cv_LMSolver_getMaxIters_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::LMSolver*>(instance)->getMaxIters();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::LMSolver::create
// as:     cv::LMSolver::create (method) cv::LMSolver (trait) . create
// Arg ARG SmartPtr[cv::LMSolver::Callback (boxed)] cb= SmartPtr[cv::LMSolver::Callback (boxed)] = 
// Arg ARG Primitive(int) maxIters= Primitive(int) = 
// Return value: SmartPtr[cv::LMSolver (boxed)]
cv_return_value_void_X cv_LMSolver_create_PtrOfCallback_int(void* cb, int maxIters) {
    try {
        Ptr<cv::LMSolver> ret = cv::LMSolver::create(*reinterpret_cast<const Ptr<cv::LMSolver::Callback>*>(cb), maxIters);
        return { Error::Code::StsOk, NULL, new Ptr<cv::LMSolver>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::LMSolver::create
// as:     cv::LMSolver::create (method) cv::LMSolver (trait) . create
// Arg ARG SmartPtr[cv::LMSolver::Callback (boxed)] cb= SmartPtr[cv::LMSolver::Callback (boxed)] = 
// Arg ARG Primitive(int) maxIters= Primitive(int) = 
// Arg ARG Primitive(double) eps= Primitive(double) = 
// Return value: SmartPtr[cv::LMSolver (boxed)]
cv_return_value_void_X cv_LMSolver_create_PtrOfCallback_int_double(void* cb, int maxIters, double eps) {
    try {
        Ptr<cv::LMSolver> ret = cv::LMSolver::create(*reinterpret_cast<const Ptr<cv::LMSolver::Callback>*>(cb), maxIters, eps);
        return { Error::Code::StsOk, NULL, new Ptr<cv::LMSolver>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::LMSolver::Callback::compute
// as:     cv::LMSolver::Callback::compute (method) cv::LMSolver::Callback (trait) . compute
// Arg ARG cv::_InputArray (boxed) param= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) err= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) J= cv::_OutputArray (boxed) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_LMSolver_Callback_compute_const__InputArray__OutputArray__OutputArray(void* instance, void* param, void* err, void* J) {
    try {
        bool ret = reinterpret_cast<cv::LMSolver::Callback*>(instance)->compute(*reinterpret_cast<const cv::_InputArray*>(param), *reinterpret_cast<cv::_OutputArray*>(err), *reinterpret_cast<cv::_OutputArray*>(J));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::StereoBM::getPreFilterType
// as:     cv::StereoBM::getPreFilterType (method) cv::StereoBM (trait) . getPreFilterType
// Return value: Primitive(int)
cv_return_value_int cv_StereoBM_getPreFilterType_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::StereoBM*>(instance)->getPreFilterType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::StereoBM::setPreFilterType
// as:     cv::StereoBM::setPreFilterType (method) cv::StereoBM (trait) . setPreFilterType
// Arg ARG Primitive(int) preFilterType= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_StereoBM_setPreFilterType_int(void* instance, int preFilterType) {
    try {
        reinterpret_cast<cv::StereoBM*>(instance)->setPreFilterType(preFilterType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::StereoBM::getPreFilterSize
// as:     cv::StereoBM::getPreFilterSize (method) cv::StereoBM (trait) . getPreFilterSize
// Return value: Primitive(int)
cv_return_value_int cv_StereoBM_getPreFilterSize_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::StereoBM*>(instance)->getPreFilterSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::StereoBM::setPreFilterSize
// as:     cv::StereoBM::setPreFilterSize (method) cv::StereoBM (trait) . setPreFilterSize
// Arg ARG Primitive(int) preFilterSize= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_StereoBM_setPreFilterSize_int(void* instance, int preFilterSize) {
    try {
        reinterpret_cast<cv::StereoBM*>(instance)->setPreFilterSize(preFilterSize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::StereoBM::getPreFilterCap
// as:     cv::StereoBM::getPreFilterCap (method) cv::StereoBM (trait) . getPreFilterCap
// Return value: Primitive(int)
cv_return_value_int cv_StereoBM_getPreFilterCap_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::StereoBM*>(instance)->getPreFilterCap();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::StereoBM::setPreFilterCap
// as:     cv::StereoBM::setPreFilterCap (method) cv::StereoBM (trait) . setPreFilterCap
// Arg ARG Primitive(int) preFilterCap= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_StereoBM_setPreFilterCap_int(void* instance, int preFilterCap) {
    try {
        reinterpret_cast<cv::StereoBM*>(instance)->setPreFilterCap(preFilterCap);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::StereoBM::getTextureThreshold
// as:     cv::StereoBM::getTextureThreshold (method) cv::StereoBM (trait) . getTextureThreshold
// Return value: Primitive(int)
cv_return_value_int cv_StereoBM_getTextureThreshold_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::StereoBM*>(instance)->getTextureThreshold();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::StereoBM::setTextureThreshold
// as:     cv::StereoBM::setTextureThreshold (method) cv::StereoBM (trait) . setTextureThreshold
// Arg ARG Primitive(int) textureThreshold= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_StereoBM_setTextureThreshold_int(void* instance, int textureThreshold) {
    try {
        reinterpret_cast<cv::StereoBM*>(instance)->setTextureThreshold(textureThreshold);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::StereoBM::getUniquenessRatio
// as:     cv::StereoBM::getUniquenessRatio (method) cv::StereoBM (trait) . getUniquenessRatio
// Return value: Primitive(int)
cv_return_value_int cv_StereoBM_getUniquenessRatio_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::StereoBM*>(instance)->getUniquenessRatio();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::StereoBM::setUniquenessRatio
// as:     cv::StereoBM::setUniquenessRatio (method) cv::StereoBM (trait) . setUniquenessRatio
// Arg ARG Primitive(int) uniquenessRatio= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_StereoBM_setUniquenessRatio_int(void* instance, int uniquenessRatio) {
    try {
        reinterpret_cast<cv::StereoBM*>(instance)->setUniquenessRatio(uniquenessRatio);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::StereoBM::getSmallerBlockSize
// as:     cv::StereoBM::getSmallerBlockSize (method) cv::StereoBM (trait) . getSmallerBlockSize
// Return value: Primitive(int)
cv_return_value_int cv_StereoBM_getSmallerBlockSize_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::StereoBM*>(instance)->getSmallerBlockSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::StereoBM::setSmallerBlockSize
// as:     cv::StereoBM::setSmallerBlockSize (method) cv::StereoBM (trait) . setSmallerBlockSize
// Arg ARG Primitive(int) blockSize= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_StereoBM_setSmallerBlockSize_int(void* instance, int blockSize) {
    try {
        reinterpret_cast<cv::StereoBM*>(instance)->setSmallerBlockSize(blockSize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::StereoBM::getROI1
// as:     cv::StereoBM::getROI1 (method) cv::StereoBM (trait) . getROI1
// Return value: cv::Rect (simple)
cv_return_value_RectWrapper cv_StereoBM_getROI1_const(void* instance) {
    try {
        cv::Rect ret = reinterpret_cast<cv::StereoBM*>(instance)->getROI1();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<RectWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_RectWrapper)
}

// parsed: cv::StereoBM::setROI1
// as:     cv::StereoBM::setROI1 (method) cv::StereoBM (trait) . setROI1
// Arg ARG cv::Rect (simple) roi1= cv::Rect (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_StereoBM_setROI1_Rect(void* instance, RectWrapper roi1) {
    try {
        reinterpret_cast<cv::StereoBM*>(instance)->setROI1(*reinterpret_cast<cv::Rect*>(&roi1));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::StereoBM::getROI2
// as:     cv::StereoBM::getROI2 (method) cv::StereoBM (trait) . getROI2
// Return value: cv::Rect (simple)
cv_return_value_RectWrapper cv_StereoBM_getROI2_const(void* instance) {
    try {
        cv::Rect ret = reinterpret_cast<cv::StereoBM*>(instance)->getROI2();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<RectWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_RectWrapper)
}

// parsed: cv::StereoBM::setROI2
// as:     cv::StereoBM::setROI2 (method) cv::StereoBM (trait) . setROI2
// Arg ARG cv::Rect (simple) roi2= cv::Rect (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_StereoBM_setROI2_Rect(void* instance, RectWrapper roi2) {
    try {
        reinterpret_cast<cv::StereoBM*>(instance)->setROI2(*reinterpret_cast<cv::Rect*>(&roi2));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::StereoBM::create
// as:     cv::StereoBM::create (method) cv::StereoBM (trait) . create
// Arg ARG Primitive(int) numDisparities= Primitive(int) = 0
// Arg ARG Primitive(int) blockSize= Primitive(int) = 21
// Return value: SmartPtr[cv::StereoBM (boxed)]
cv_return_value_void_X cv_StereoBM_create_int_int(int numDisparities, int blockSize) {
    try {
        Ptr<cv::StereoBM> ret = cv::StereoBM::create(numDisparities, blockSize);
        return { Error::Code::StsOk, NULL, new Ptr<cv::StereoBM>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::StereoMatcher::compute
// as:     cv::StereoMatcher::compute (method) cv::StereoMatcher (trait) . compute
// Arg ARG cv::_InputArray (boxed) left= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) right= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) disparity= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_StereoMatcher_compute__InputArray__InputArray__OutputArray(void* instance, void* left, void* right, void* disparity) {
    try {
        reinterpret_cast<cv::StereoMatcher*>(instance)->compute(*reinterpret_cast<const cv::_InputArray*>(left), *reinterpret_cast<const cv::_InputArray*>(right), *reinterpret_cast<cv::_OutputArray*>(disparity));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::StereoMatcher::getMinDisparity
// as:     cv::StereoMatcher::getMinDisparity (method) cv::StereoMatcher (trait) . getMinDisparity
// Return value: Primitive(int)
cv_return_value_int cv_StereoMatcher_getMinDisparity_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::StereoMatcher*>(instance)->getMinDisparity();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::StereoMatcher::setMinDisparity
// as:     cv::StereoMatcher::setMinDisparity (method) cv::StereoMatcher (trait) . setMinDisparity
// Arg ARG Primitive(int) minDisparity= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_StereoMatcher_setMinDisparity_int(void* instance, int minDisparity) {
    try {
        reinterpret_cast<cv::StereoMatcher*>(instance)->setMinDisparity(minDisparity);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::StereoMatcher::getNumDisparities
// as:     cv::StereoMatcher::getNumDisparities (method) cv::StereoMatcher (trait) . getNumDisparities
// Return value: Primitive(int)
cv_return_value_int cv_StereoMatcher_getNumDisparities_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::StereoMatcher*>(instance)->getNumDisparities();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::StereoMatcher::setNumDisparities
// as:     cv::StereoMatcher::setNumDisparities (method) cv::StereoMatcher (trait) . setNumDisparities
// Arg ARG Primitive(int) numDisparities= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_StereoMatcher_setNumDisparities_int(void* instance, int numDisparities) {
    try {
        reinterpret_cast<cv::StereoMatcher*>(instance)->setNumDisparities(numDisparities);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::StereoMatcher::getBlockSize
// as:     cv::StereoMatcher::getBlockSize (method) cv::StereoMatcher (trait) . getBlockSize
// Return value: Primitive(int)
cv_return_value_int cv_StereoMatcher_getBlockSize_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::StereoMatcher*>(instance)->getBlockSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::StereoMatcher::setBlockSize
// as:     cv::StereoMatcher::setBlockSize (method) cv::StereoMatcher (trait) . setBlockSize
// Arg ARG Primitive(int) blockSize= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_StereoMatcher_setBlockSize_int(void* instance, int blockSize) {
    try {
        reinterpret_cast<cv::StereoMatcher*>(instance)->setBlockSize(blockSize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::StereoMatcher::getSpeckleWindowSize
// as:     cv::StereoMatcher::getSpeckleWindowSize (method) cv::StereoMatcher (trait) . getSpeckleWindowSize
// Return value: Primitive(int)
cv_return_value_int cv_StereoMatcher_getSpeckleWindowSize_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::StereoMatcher*>(instance)->getSpeckleWindowSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::StereoMatcher::setSpeckleWindowSize
// as:     cv::StereoMatcher::setSpeckleWindowSize (method) cv::StereoMatcher (trait) . setSpeckleWindowSize
// Arg ARG Primitive(int) speckleWindowSize= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_StereoMatcher_setSpeckleWindowSize_int(void* instance, int speckleWindowSize) {
    try {
        reinterpret_cast<cv::StereoMatcher*>(instance)->setSpeckleWindowSize(speckleWindowSize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::StereoMatcher::getSpeckleRange
// as:     cv::StereoMatcher::getSpeckleRange (method) cv::StereoMatcher (trait) . getSpeckleRange
// Return value: Primitive(int)
cv_return_value_int cv_StereoMatcher_getSpeckleRange_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::StereoMatcher*>(instance)->getSpeckleRange();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::StereoMatcher::setSpeckleRange
// as:     cv::StereoMatcher::setSpeckleRange (method) cv::StereoMatcher (trait) . setSpeckleRange
// Arg ARG Primitive(int) speckleRange= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_StereoMatcher_setSpeckleRange_int(void* instance, int speckleRange) {
    try {
        reinterpret_cast<cv::StereoMatcher*>(instance)->setSpeckleRange(speckleRange);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::StereoMatcher::getDisp12MaxDiff
// as:     cv::StereoMatcher::getDisp12MaxDiff (method) cv::StereoMatcher (trait) . getDisp12MaxDiff
// Return value: Primitive(int)
cv_return_value_int cv_StereoMatcher_getDisp12MaxDiff_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::StereoMatcher*>(instance)->getDisp12MaxDiff();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::StereoMatcher::setDisp12MaxDiff
// as:     cv::StereoMatcher::setDisp12MaxDiff (method) cv::StereoMatcher (trait) . setDisp12MaxDiff
// Arg ARG Primitive(int) disp12MaxDiff= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_StereoMatcher_setDisp12MaxDiff_int(void* instance, int disp12MaxDiff) {
    try {
        reinterpret_cast<cv::StereoMatcher*>(instance)->setDisp12MaxDiff(disp12MaxDiff);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::StereoSGBM::getPreFilterCap
// as:     cv::StereoSGBM::getPreFilterCap (method) cv::StereoSGBM (trait) . getPreFilterCap
// Return value: Primitive(int)
cv_return_value_int cv_StereoSGBM_getPreFilterCap_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::StereoSGBM*>(instance)->getPreFilterCap();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::StereoSGBM::setPreFilterCap
// as:     cv::StereoSGBM::setPreFilterCap (method) cv::StereoSGBM (trait) . setPreFilterCap
// Arg ARG Primitive(int) preFilterCap= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_StereoSGBM_setPreFilterCap_int(void* instance, int preFilterCap) {
    try {
        reinterpret_cast<cv::StereoSGBM*>(instance)->setPreFilterCap(preFilterCap);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::StereoSGBM::getUniquenessRatio
// as:     cv::StereoSGBM::getUniquenessRatio (method) cv::StereoSGBM (trait) . getUniquenessRatio
// Return value: Primitive(int)
cv_return_value_int cv_StereoSGBM_getUniquenessRatio_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::StereoSGBM*>(instance)->getUniquenessRatio();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::StereoSGBM::setUniquenessRatio
// as:     cv::StereoSGBM::setUniquenessRatio (method) cv::StereoSGBM (trait) . setUniquenessRatio
// Arg ARG Primitive(int) uniquenessRatio= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_StereoSGBM_setUniquenessRatio_int(void* instance, int uniquenessRatio) {
    try {
        reinterpret_cast<cv::StereoSGBM*>(instance)->setUniquenessRatio(uniquenessRatio);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::StereoSGBM::getP1
// as:     cv::StereoSGBM::getP1 (method) cv::StereoSGBM (trait) . getP1
// Return value: Primitive(int)
cv_return_value_int cv_StereoSGBM_getP1_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::StereoSGBM*>(instance)->getP1();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::StereoSGBM::setP1
// as:     cv::StereoSGBM::setP1 (method) cv::StereoSGBM (trait) . setP1
// Arg ARG Primitive(int) P1= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_StereoSGBM_setP1_int(void* instance, int P1) {
    try {
        reinterpret_cast<cv::StereoSGBM*>(instance)->setP1(P1);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::StereoSGBM::getP2
// as:     cv::StereoSGBM::getP2 (method) cv::StereoSGBM (trait) . getP2
// Return value: Primitive(int)
cv_return_value_int cv_StereoSGBM_getP2_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::StereoSGBM*>(instance)->getP2();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::StereoSGBM::setP2
// as:     cv::StereoSGBM::setP2 (method) cv::StereoSGBM (trait) . setP2
// Arg ARG Primitive(int) P2= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_StereoSGBM_setP2_int(void* instance, int P2) {
    try {
        reinterpret_cast<cv::StereoSGBM*>(instance)->setP2(P2);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::StereoSGBM::getMode
// as:     cv::StereoSGBM::getMode (method) cv::StereoSGBM (trait) . getMode
// Return value: Primitive(int)
cv_return_value_int cv_StereoSGBM_getMode_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::StereoSGBM*>(instance)->getMode();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::StereoSGBM::setMode
// as:     cv::StereoSGBM::setMode (method) cv::StereoSGBM (trait) . setMode
// Arg ARG Primitive(int) mode= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_StereoSGBM_setMode_int(void* instance, int mode) {
    try {
        reinterpret_cast<cv::StereoSGBM*>(instance)->setMode(mode);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::StereoSGBM::create
// as:     cv::StereoSGBM::create (method) cv::StereoSGBM (trait) . create
// Arg ARG Primitive(int) minDisparity= Primitive(int) = 0
// Arg ARG Primitive(int) numDisparities= Primitive(int) = 16
// Arg ARG Primitive(int) blockSize= Primitive(int) = 3
// Arg ARG Primitive(int) P1= Primitive(int) = 0
// Arg ARG Primitive(int) P2= Primitive(int) = 0
// Arg ARG Primitive(int) disp12MaxDiff= Primitive(int) = 0
// Arg ARG Primitive(int) preFilterCap= Primitive(int) = 0
// Arg ARG Primitive(int) uniquenessRatio= Primitive(int) = 0
// Arg ARG Primitive(int) speckleWindowSize= Primitive(int) = 0
// Arg ARG Primitive(int) speckleRange= Primitive(int) = 0
// Arg ARG Primitive(int) mode= Primitive(int) = StereoSGBM::MODE_SGBM
// Return value: SmartPtr[cv::StereoSGBM (boxed)]
cv_return_value_void_X cv_StereoSGBM_create_int_int_int_int_int_int_int_int_int_int_int(int minDisparity, int numDisparities, int blockSize, int P1, int P2, int disp12MaxDiff, int preFilterCap, int uniquenessRatio, int speckleWindowSize, int speckleRange, int mode) {
    try {
        Ptr<cv::StereoSGBM> ret = cv::StereoSGBM::create(minDisparity, numDisparities, blockSize, P1, P2, disp12MaxDiff, preFilterCap, uniquenessRatio, speckleWindowSize, speckleRange, mode);
        return { Error::Code::StsOk, NULL, new Ptr<cv::StereoSGBM>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}



} // extern "C"

