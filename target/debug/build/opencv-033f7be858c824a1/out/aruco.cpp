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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/aruco/dictionary.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/aruco.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/aruco/charuco.hpp"

extern "C" {

// parsed: cv::aruco::_drawPlanarBoardImpl
// as:     cv::aruco::_drawPlanarBoardImpl (function)
// Arg ARG RawPtr[cv::aruco::Board (boxed)] * board= (ptr) RawPtr[cv::aruco::Board (boxed)] = 
// Arg ARG cv::Size (simple) outSize= cv::Size (simple) = 
// Arg ARG cv::_OutputArray (boxed) img= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) marginSize= Primitive(int) = 0
// Arg ARG Primitive(int) borderBits= Primitive(int) = 1
// Return value: Primitive(void)
cv_return_value_void cv_aruco__drawPlanarBoardImpl_Board_Size__OutputArray_int_int(void* board, SizeWrapper outSize, void* img, int marginSize, int borderBits) {
    try {
        cv::aruco::_drawPlanarBoardImpl(reinterpret_cast<cv::aruco::Board*>(board), *reinterpret_cast<cv::Size*>(&outSize), *reinterpret_cast<cv::_OutputArray*>(img), marginSize, borderBits);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::aruco::calibrateCameraAruco
// as:     cv::aruco::calibrateCameraAruco (function)
// Arg ARG cv::_InputArray (boxed) corners= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) ids= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) counter= cv::_InputArray (boxed) = 
// Arg ARG SmartPtr[cv::aruco::Board (boxed)] board= SmartPtr[cv::aruco::Board (boxed)] = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG cv::_InputOutputArray (boxed) cameraMatrix= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) distCoeffs= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rvecs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tvecs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) stdDeviationsIntrinsics= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) stdDeviationsExtrinsics= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) perViewErrors= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON)
// Return value: Primitive(double)
cv_return_value_double cv_aruco_calibrateCameraAruco__InputArray__InputArray__InputArray_PtrOfBoard_Size__InputOutputArray__InputOutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray_int_TermCriteria(void* corners, void* ids, void* counter, void* board, SizeWrapper imageSize, void* cameraMatrix, void* distCoeffs, void* rvecs, void* tvecs, void* stdDeviationsIntrinsics, void* stdDeviationsExtrinsics, void* perViewErrors, int flags, void* criteria) {
    try {
        double ret = cv::aruco::calibrateCameraAruco(*reinterpret_cast<const cv::_InputArray*>(corners), *reinterpret_cast<const cv::_InputArray*>(ids), *reinterpret_cast<const cv::_InputArray*>(counter), *reinterpret_cast<const Ptr<cv::aruco::Board>*>(board), *reinterpret_cast<cv::Size*>(&imageSize), *reinterpret_cast<cv::_InputOutputArray*>(cameraMatrix), *reinterpret_cast<cv::_InputOutputArray*>(distCoeffs), *reinterpret_cast<cv::_OutputArray*>(rvecs), *reinterpret_cast<cv::_OutputArray*>(tvecs), *reinterpret_cast<cv::_OutputArray*>(stdDeviationsIntrinsics), *reinterpret_cast<cv::_OutputArray*>(stdDeviationsExtrinsics), *reinterpret_cast<cv::_OutputArray*>(perViewErrors), flags, *reinterpret_cast<cv::TermCriteria*>(criteria));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::aruco::calibrateCameraAruco
// as:     cv::aruco::calibrateCameraAruco (function)
// Arg ARG cv::_InputArray (boxed) corners= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) ids= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) counter= cv::_InputArray (boxed) = 
// Arg ARG SmartPtr[cv::aruco::Board (boxed)] board= SmartPtr[cv::aruco::Board (boxed)] = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG cv::_InputOutputArray (boxed) cameraMatrix= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) distCoeffs= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rvecs= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) tvecs= cv::_OutputArray (boxed) = noArray()
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON)
// Return value: Primitive(double)
cv_return_value_double cv_aruco_calibrateCameraAruco__InputArray__InputArray__InputArray_PtrOfBoard_Size__InputOutputArray__InputOutputArray__OutputArray__OutputArray_int_TermCriteria(void* corners, void* ids, void* counter, void* board, SizeWrapper imageSize, void* cameraMatrix, void* distCoeffs, void* rvecs, void* tvecs, int flags, void* criteria) {
    try {
        double ret = cv::aruco::calibrateCameraAruco(*reinterpret_cast<const cv::_InputArray*>(corners), *reinterpret_cast<const cv::_InputArray*>(ids), *reinterpret_cast<const cv::_InputArray*>(counter), *reinterpret_cast<const Ptr<cv::aruco::Board>*>(board), *reinterpret_cast<cv::Size*>(&imageSize), *reinterpret_cast<cv::_InputOutputArray*>(cameraMatrix), *reinterpret_cast<cv::_InputOutputArray*>(distCoeffs), *reinterpret_cast<cv::_OutputArray*>(rvecs), *reinterpret_cast<cv::_OutputArray*>(tvecs), flags, *reinterpret_cast<cv::TermCriteria*>(criteria));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::aruco::calibrateCameraCharuco
// as:     cv::aruco::calibrateCameraCharuco (function)
// Arg ARG cv::_InputArray (boxed) charucoCorners= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) charucoIds= cv::_InputArray (boxed) = 
// Arg ARG SmartPtr[cv::aruco::CharucoBoard (boxed)] board= SmartPtr[cv::aruco::CharucoBoard (boxed)] = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG cv::_InputOutputArray (boxed) cameraMatrix= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) distCoeffs= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rvecs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tvecs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) stdDeviationsIntrinsics= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) stdDeviationsExtrinsics= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) perViewErrors= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON)
// Return value: Primitive(double)
cv_return_value_double cv_aruco_calibrateCameraCharuco__InputArray__InputArray_PtrOfCharucoBoard_Size__InputOutputArray__InputOutputArray__OutputArray__OutputArray__OutputArray__OutputArray__OutputArray_int_TermCriteria(void* charucoCorners, void* charucoIds, void* board, SizeWrapper imageSize, void* cameraMatrix, void* distCoeffs, void* rvecs, void* tvecs, void* stdDeviationsIntrinsics, void* stdDeviationsExtrinsics, void* perViewErrors, int flags, void* criteria) {
    try {
        double ret = cv::aruco::calibrateCameraCharuco(*reinterpret_cast<const cv::_InputArray*>(charucoCorners), *reinterpret_cast<const cv::_InputArray*>(charucoIds), *reinterpret_cast<const Ptr<cv::aruco::CharucoBoard>*>(board), *reinterpret_cast<cv::Size*>(&imageSize), *reinterpret_cast<cv::_InputOutputArray*>(cameraMatrix), *reinterpret_cast<cv::_InputOutputArray*>(distCoeffs), *reinterpret_cast<cv::_OutputArray*>(rvecs), *reinterpret_cast<cv::_OutputArray*>(tvecs), *reinterpret_cast<cv::_OutputArray*>(stdDeviationsIntrinsics), *reinterpret_cast<cv::_OutputArray*>(stdDeviationsExtrinsics), *reinterpret_cast<cv::_OutputArray*>(perViewErrors), flags, *reinterpret_cast<cv::TermCriteria*>(criteria));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::aruco::calibrateCameraCharuco
// as:     cv::aruco::calibrateCameraCharuco (function)
// Arg ARG cv::_InputArray (boxed) charucoCorners= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) charucoIds= cv::_InputArray (boxed) = 
// Arg ARG SmartPtr[cv::aruco::CharucoBoard (boxed)] board= SmartPtr[cv::aruco::CharucoBoard (boxed)] = 
// Arg ARG cv::Size (simple) imageSize= cv::Size (simple) = 
// Arg ARG cv::_InputOutputArray (boxed) cameraMatrix= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) distCoeffs= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rvecs= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_OutputArray (boxed) tvecs= cv::_OutputArray (boxed) = noArray()
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON)
// Return value: Primitive(double)
cv_return_value_double cv_aruco_calibrateCameraCharuco__InputArray__InputArray_PtrOfCharucoBoard_Size__InputOutputArray__InputOutputArray__OutputArray__OutputArray_int_TermCriteria(void* charucoCorners, void* charucoIds, void* board, SizeWrapper imageSize, void* cameraMatrix, void* distCoeffs, void* rvecs, void* tvecs, int flags, void* criteria) {
    try {
        double ret = cv::aruco::calibrateCameraCharuco(*reinterpret_cast<const cv::_InputArray*>(charucoCorners), *reinterpret_cast<const cv::_InputArray*>(charucoIds), *reinterpret_cast<const Ptr<cv::aruco::CharucoBoard>*>(board), *reinterpret_cast<cv::Size*>(&imageSize), *reinterpret_cast<cv::_InputOutputArray*>(cameraMatrix), *reinterpret_cast<cv::_InputOutputArray*>(distCoeffs), *reinterpret_cast<cv::_OutputArray*>(rvecs), *reinterpret_cast<cv::_OutputArray*>(tvecs), flags, *reinterpret_cast<cv::TermCriteria*>(criteria));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::aruco::detectCharucoDiamond
// as:     cv::aruco::detectCharucoDiamond (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) markerCorners= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) markerIds= cv::_InputArray (boxed) = 
// Arg ARG Primitive(float) squareMarkerLengthRate= Primitive(float) = 
// Arg ARG cv::_OutputArray (boxed) diamondCorners= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) diamondIds= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_aruco_detectCharucoDiamond__InputArray__InputArray__InputArray_float__OutputArray__OutputArray__InputArray__InputArray(void* image, void* markerCorners, void* markerIds, float squareMarkerLengthRate, void* diamondCorners, void* diamondIds, void* cameraMatrix, void* distCoeffs) {
    try {
        cv::aruco::detectCharucoDiamond(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<const cv::_InputArray*>(markerCorners), *reinterpret_cast<const cv::_InputArray*>(markerIds), squareMarkerLengthRate, *reinterpret_cast<cv::_OutputArray*>(diamondCorners), *reinterpret_cast<cv::_OutputArray*>(diamondIds), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::aruco::detectMarkers
// as:     cv::aruco::detectMarkers (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG SmartPtr[cv::aruco::Dictionary (boxed)] dictionary= SmartPtr[cv::aruco::Dictionary (boxed)] = 
// Arg ARG cv::_OutputArray (boxed) corners= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) ids= cv::_OutputArray (boxed) = 
// Arg ARG SmartPtr[cv::aruco::DetectorParameters (boxed)] parameters= SmartPtr[cv::aruco::DetectorParameters (boxed)] = DetectorParameters::create()
// Arg ARG cv::_OutputArray (boxed) rejectedImgPoints= cv::_OutputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) distCoeff= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_aruco_detectMarkers__InputArray_PtrOfDictionary__OutputArray__OutputArray_PtrOfDetectorParameters__OutputArray__InputArray__InputArray(void* image, void* dictionary, void* corners, void* ids, void* parameters, void* rejectedImgPoints, void* cameraMatrix, void* distCoeff) {
    try {
        cv::aruco::detectMarkers(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<const Ptr<cv::aruco::Dictionary>*>(dictionary), *reinterpret_cast<cv::_OutputArray*>(corners), *reinterpret_cast<cv::_OutputArray*>(ids), *reinterpret_cast<const Ptr<cv::aruco::DetectorParameters>*>(parameters), *reinterpret_cast<cv::_OutputArray*>(rejectedImgPoints), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeff));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::aruco::drawAxis
// as:     cv::aruco::drawAxis (function)
// Arg ARG cv::_InputOutputArray (boxed) image= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) rvec= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) tvec= cv::_InputArray (boxed) = 
// Arg ARG Primitive(float) length= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_aruco_drawAxis__InputOutputArray__InputArray__InputArray__InputArray__InputArray_float(void* image, void* cameraMatrix, void* distCoeffs, void* rvec, void* tvec, float length) {
    try {
        cv::aruco::drawAxis(*reinterpret_cast<cv::_InputOutputArray*>(image), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<const cv::_InputArray*>(rvec), *reinterpret_cast<const cv::_InputArray*>(tvec), length);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::aruco::drawCharucoDiamond
// as:     cv::aruco::drawCharucoDiamond (function)
// Arg ARG SmartPtr[cv::aruco::Dictionary (boxed)] dictionary= SmartPtr[cv::aruco::Dictionary (boxed)] = 
// Arg ARG cv::Vec4i (simple) ids= cv::Vec4i (simple) = 
// Arg ARG Primitive(int) squareLength= Primitive(int) = 
// Arg ARG Primitive(int) markerLength= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) img= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) marginSize= Primitive(int) = 0
// Arg ARG Primitive(int) borderBits= Primitive(int) = 1
// Return value: Primitive(void)
cv_return_value_void cv_aruco_drawCharucoDiamond_PtrOfDictionary_Vec4i_int_int__OutputArray_int_int(void* dictionary, Vec4iWrapper ids, int squareLength, int markerLength, void* img, int marginSize, int borderBits) {
    try {
        cv::aruco::drawCharucoDiamond(*reinterpret_cast<const Ptr<cv::aruco::Dictionary>*>(dictionary), *reinterpret_cast<cv::Vec4i*>(&ids), squareLength, markerLength, *reinterpret_cast<cv::_OutputArray*>(img), marginSize, borderBits);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::aruco::drawDetectedCornersCharuco
// as:     cv::aruco::drawDetectedCornersCharuco (function)
// Arg ARG cv::_InputOutputArray (boxed) image= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) charucoCorners= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) charucoIds= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::Scalar (simple) cornerColor= cv::Scalar (simple) = Scalar(255, 0, 0)
// Return value: Primitive(void)
cv_return_value_void cv_aruco_drawDetectedCornersCharuco__InputOutputArray__InputArray__InputArray_Scalar(void* image, void* charucoCorners, void* charucoIds, ScalarWrapper cornerColor) {
    try {
        cv::aruco::drawDetectedCornersCharuco(*reinterpret_cast<cv::_InputOutputArray*>(image), *reinterpret_cast<const cv::_InputArray*>(charucoCorners), *reinterpret_cast<const cv::_InputArray*>(charucoIds), *reinterpret_cast<cv::Scalar*>(&cornerColor));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::aruco::drawDetectedDiamonds
// as:     cv::aruco::drawDetectedDiamonds (function)
// Arg ARG cv::_InputOutputArray (boxed) image= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) diamondCorners= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) diamondIds= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::Scalar (simple) borderColor= cv::Scalar (simple) = Scalar(0, 0, 255)
// Return value: Primitive(void)
cv_return_value_void cv_aruco_drawDetectedDiamonds__InputOutputArray__InputArray__InputArray_Scalar(void* image, void* diamondCorners, void* diamondIds, ScalarWrapper borderColor) {
    try {
        cv::aruco::drawDetectedDiamonds(*reinterpret_cast<cv::_InputOutputArray*>(image), *reinterpret_cast<const cv::_InputArray*>(diamondCorners), *reinterpret_cast<const cv::_InputArray*>(diamondIds), *reinterpret_cast<cv::Scalar*>(&borderColor));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::aruco::drawDetectedMarkers
// as:     cv::aruco::drawDetectedMarkers (function)
// Arg ARG cv::_InputOutputArray (boxed) image= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) corners= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) ids= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::Scalar (simple) borderColor= cv::Scalar (simple) = Scalar(0, 255, 0)
// Return value: Primitive(void)
cv_return_value_void cv_aruco_drawDetectedMarkers__InputOutputArray__InputArray__InputArray_Scalar(void* image, void* corners, void* ids, ScalarWrapper borderColor) {
    try {
        cv::aruco::drawDetectedMarkers(*reinterpret_cast<cv::_InputOutputArray*>(image), *reinterpret_cast<const cv::_InputArray*>(corners), *reinterpret_cast<const cv::_InputArray*>(ids), *reinterpret_cast<cv::Scalar*>(&borderColor));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::aruco::drawMarker
// as:     cv::aruco::drawMarker (function)
// Arg ARG SmartPtr[cv::aruco::Dictionary (boxed)] dictionary= SmartPtr[cv::aruco::Dictionary (boxed)] = 
// Arg ARG Primitive(int) id= Primitive(int) = 
// Arg ARG Primitive(int) sidePixels= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) img= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) borderBits= Primitive(int) = 1
// Return value: Primitive(void)
cv_return_value_void cv_aruco_drawMarker_PtrOfDictionary_int_int__OutputArray_int(void* dictionary, int id, int sidePixels, void* img, int borderBits) {
    try {
        cv::aruco::drawMarker(*reinterpret_cast<const Ptr<cv::aruco::Dictionary>*>(dictionary), id, sidePixels, *reinterpret_cast<cv::_OutputArray*>(img), borderBits);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::aruco::drawPlanarBoard
// as:     cv::aruco::drawPlanarBoard (function)
// Arg ARG SmartPtr[cv::aruco::Board (boxed)] board= SmartPtr[cv::aruco::Board (boxed)] = 
// Arg ARG cv::Size (simple) outSize= cv::Size (simple) = 
// Arg ARG cv::_OutputArray (boxed) img= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) marginSize= Primitive(int) = 0
// Arg ARG Primitive(int) borderBits= Primitive(int) = 1
// Return value: Primitive(void)
cv_return_value_void cv_aruco_drawPlanarBoard_PtrOfBoard_Size__OutputArray_int_int(void* board, SizeWrapper outSize, void* img, int marginSize, int borderBits) {
    try {
        cv::aruco::drawPlanarBoard(*reinterpret_cast<const Ptr<cv::aruco::Board>*>(board), *reinterpret_cast<cv::Size*>(&outSize), *reinterpret_cast<cv::_OutputArray*>(img), marginSize, borderBits);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::aruco::estimatePoseBoard
// as:     cv::aruco::estimatePoseBoard (function)
// Arg ARG cv::_InputArray (boxed) corners= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) ids= cv::_InputArray (boxed) = 
// Arg ARG SmartPtr[cv::aruco::Board (boxed)] board= SmartPtr[cv::aruco::Board (boxed)] = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) rvec= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) tvec= cv::_InputOutputArray (boxed) = 
// Arg ARG Primitive(bool) useExtrinsicGuess= Primitive(bool) = false
// Return value: Primitive(int)
cv_return_value_int cv_aruco_estimatePoseBoard__InputArray__InputArray_PtrOfBoard__InputArray__InputArray__InputOutputArray__InputOutputArray_bool(void* corners, void* ids, void* board, void* cameraMatrix, void* distCoeffs, void* rvec, void* tvec, bool useExtrinsicGuess) {
    try {
        int ret = cv::aruco::estimatePoseBoard(*reinterpret_cast<const cv::_InputArray*>(corners), *reinterpret_cast<const cv::_InputArray*>(ids), *reinterpret_cast<const Ptr<cv::aruco::Board>*>(board), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<cv::_InputOutputArray*>(rvec), *reinterpret_cast<cv::_InputOutputArray*>(tvec), useExtrinsicGuess);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::aruco::estimatePoseCharucoBoard
// as:     cv::aruco::estimatePoseCharucoBoard (function)
// Arg ARG cv::_InputArray (boxed) charucoCorners= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) charucoIds= cv::_InputArray (boxed) = 
// Arg ARG SmartPtr[cv::aruco::CharucoBoard (boxed)] board= SmartPtr[cv::aruco::CharucoBoard (boxed)] = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) rvec= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) tvec= cv::_InputOutputArray (boxed) = 
// Arg ARG Primitive(bool) useExtrinsicGuess= Primitive(bool) = false
// Return value: Primitive(bool)
cv_return_value_bool cv_aruco_estimatePoseCharucoBoard__InputArray__InputArray_PtrOfCharucoBoard__InputArray__InputArray__InputOutputArray__InputOutputArray_bool(void* charucoCorners, void* charucoIds, void* board, void* cameraMatrix, void* distCoeffs, void* rvec, void* tvec, bool useExtrinsicGuess) {
    try {
        bool ret = cv::aruco::estimatePoseCharucoBoard(*reinterpret_cast<const cv::_InputArray*>(charucoCorners), *reinterpret_cast<const cv::_InputArray*>(charucoIds), *reinterpret_cast<const Ptr<cv::aruco::CharucoBoard>*>(board), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<cv::_InputOutputArray*>(rvec), *reinterpret_cast<cv::_InputOutputArray*>(tvec), useExtrinsicGuess);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::aruco::estimatePoseSingleMarkers
// as:     cv::aruco::estimatePoseSingleMarkers (function)
// Arg ARG cv::_InputArray (boxed) corners= cv::_InputArray (boxed) = 
// Arg ARG Primitive(float) markerLength= Primitive(float) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) rvecs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) tvecs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) _objPoints= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_aruco_estimatePoseSingleMarkers__InputArray_float__InputArray__InputArray__OutputArray__OutputArray__OutputArray(void* corners, float markerLength, void* cameraMatrix, void* distCoeffs, void* rvecs, void* tvecs, void* _objPoints) {
    try {
        cv::aruco::estimatePoseSingleMarkers(*reinterpret_cast<const cv::_InputArray*>(corners), markerLength, *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), *reinterpret_cast<cv::_OutputArray*>(rvecs), *reinterpret_cast<cv::_OutputArray*>(tvecs), *reinterpret_cast<cv::_OutputArray*>(_objPoints));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::aruco::generateCustomDictionary
// as:     cv::aruco::generateCustomDictionary (function)
// Arg ARG Primitive(int) nMarkers= Primitive(int) = 
// Arg ARG Primitive(int) markerSize= Primitive(int) = 
// Arg ARG SmartPtr[cv::aruco::Dictionary (boxed)] baseDictionary= SmartPtr[cv::aruco::Dictionary (boxed)] = 
// Arg ARG Primitive(int) randomSeed= Primitive(int) = 0
// Return value: SmartPtr[cv::aruco::Dictionary (boxed)]
cv_return_value_void_X cv_aruco_generateCustomDictionary_int_int_PtrOfDictionary_int(int nMarkers, int markerSize, void* baseDictionary, int randomSeed) {
    try {
        Ptr<cv::aruco::Dictionary> ret = cv::aruco::generateCustomDictionary(nMarkers, markerSize, *reinterpret_cast<const Ptr<cv::aruco::Dictionary>*>(baseDictionary), randomSeed);
        return { Error::Code::StsOk, NULL, new Ptr<cv::aruco::Dictionary>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::aruco::generateCustomDictionary
// as:     cv::aruco::generateCustomDictionary (function)
// Arg ARG Primitive(int) nMarkers= Primitive(int) = 
// Arg ARG Primitive(int) markerSize= Primitive(int) = 
// Arg ARG Primitive(int) randomSeed= Primitive(int) = 0
// Return value: SmartPtr[cv::aruco::Dictionary (boxed)]
cv_return_value_void_X cv_aruco_generateCustomDictionary_int_int_int(int nMarkers, int markerSize, int randomSeed) {
    try {
        Ptr<cv::aruco::Dictionary> ret = cv::aruco::generateCustomDictionary(nMarkers, markerSize, randomSeed);
        return { Error::Code::StsOk, NULL, new Ptr<cv::aruco::Dictionary>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::aruco::getBoardObjectAndImagePoints
// as:     cv::aruco::getBoardObjectAndImagePoints (function)
// Arg ARG SmartPtr[cv::aruco::Board (boxed)] board= SmartPtr[cv::aruco::Board (boxed)] = 
// Arg ARG cv::_InputArray (boxed) detectedCorners= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) detectedIds= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) objPoints= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) imgPoints= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_aruco_getBoardObjectAndImagePoints_PtrOfBoard__InputArray__InputArray__OutputArray__OutputArray(void* board, void* detectedCorners, void* detectedIds, void* objPoints, void* imgPoints) {
    try {
        cv::aruco::getBoardObjectAndImagePoints(*reinterpret_cast<const Ptr<cv::aruco::Board>*>(board), *reinterpret_cast<const cv::_InputArray*>(detectedCorners), *reinterpret_cast<const cv::_InputArray*>(detectedIds), *reinterpret_cast<cv::_OutputArray*>(objPoints), *reinterpret_cast<cv::_OutputArray*>(imgPoints));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::aruco::getPredefinedDictionary
// as:     cv::aruco::getPredefinedDictionary (function)
// Arg ARG aruco::PREDEFINED_DICTIONARY_NAME (enum) name= aruco::PREDEFINED_DICTIONARY_NAME (enum) = 
// Return value: SmartPtr[cv::aruco::Dictionary (boxed)]
cv_return_value_void_X cv_aruco_getPredefinedDictionary_PREDEFINED_DICTIONARY_NAME(aruco::PREDEFINED_DICTIONARY_NAME name) {
    try {
        Ptr<cv::aruco::Dictionary> ret = cv::aruco::getPredefinedDictionary(*reinterpret_cast<aruco::PREDEFINED_DICTIONARY_NAME*>(&name));
        return { Error::Code::StsOk, NULL, new Ptr<cv::aruco::Dictionary>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::aruco::getPredefinedDictionary
// as:     cv::aruco::getPredefinedDictionary (function)
// Arg ARG Primitive(int) dict= Primitive(int) = 
// Return value: SmartPtr[cv::aruco::Dictionary (boxed)]
cv_return_value_void_X cv_aruco_getPredefinedDictionary_int(int dict) {
    try {
        Ptr<cv::aruco::Dictionary> ret = cv::aruco::getPredefinedDictionary(dict);
        return { Error::Code::StsOk, NULL, new Ptr<cv::aruco::Dictionary>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::aruco::interpolateCornersCharuco
// as:     cv::aruco::interpolateCornersCharuco (function)
// Arg ARG cv::_InputArray (boxed) markerCorners= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) markerIds= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG SmartPtr[cv::aruco::CharucoBoard (boxed)] board= SmartPtr[cv::aruco::CharucoBoard (boxed)] = 
// Arg ARG cv::_OutputArray (boxed) charucoCorners= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) charucoIds= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = noArray()
// Arg ARG Primitive(int) minMarkers= Primitive(int) = 2
// Return value: Primitive(int)
cv_return_value_int cv_aruco_interpolateCornersCharuco__InputArray__InputArray__InputArray_PtrOfCharucoBoard__OutputArray__OutputArray__InputArray__InputArray_int(void* markerCorners, void* markerIds, void* image, void* board, void* charucoCorners, void* charucoIds, void* cameraMatrix, void* distCoeffs, int minMarkers) {
    try {
        int ret = cv::aruco::interpolateCornersCharuco(*reinterpret_cast<const cv::_InputArray*>(markerCorners), *reinterpret_cast<const cv::_InputArray*>(markerIds), *reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<const Ptr<cv::aruco::CharucoBoard>*>(board), *reinterpret_cast<cv::_OutputArray*>(charucoCorners), *reinterpret_cast<cv::_OutputArray*>(charucoIds), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), minMarkers);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::aruco::refineDetectedMarkers
// as:     cv::aruco::refineDetectedMarkers (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG SmartPtr[cv::aruco::Board (boxed)] board= SmartPtr[cv::aruco::Board (boxed)] = 
// Arg ARG cv::_InputOutputArray (boxed) detectedCorners= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) detectedIds= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) rejectedCorners= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) cameraMatrix= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) distCoeffs= cv::_InputArray (boxed) = noArray()
// Arg ARG Primitive(float) minRepDistance= Primitive(float) = 10.f
// Arg ARG Primitive(float) errorCorrectionRate= Primitive(float) = 3.f
// Arg ARG Primitive(bool) checkAllOrders= Primitive(bool) = true
// Arg ARG cv::_OutputArray (boxed) recoveredIdxs= cv::_OutputArray (boxed) = noArray()
// Arg ARG SmartPtr[cv::aruco::DetectorParameters (boxed)] parameters= SmartPtr[cv::aruco::DetectorParameters (boxed)] = DetectorParameters::create()
// Return value: Primitive(void)
cv_return_value_void cv_aruco_refineDetectedMarkers__InputArray_PtrOfBoard__InputOutputArray__InputOutputArray__InputOutputArray__InputArray__InputArray_float_float_bool__OutputArray_PtrOfDetectorParameters(void* image, void* board, void* detectedCorners, void* detectedIds, void* rejectedCorners, void* cameraMatrix, void* distCoeffs, float minRepDistance, float errorCorrectionRate, bool checkAllOrders, void* recoveredIdxs, void* parameters) {
    try {
        cv::aruco::refineDetectedMarkers(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<const Ptr<cv::aruco::Board>*>(board), *reinterpret_cast<cv::_InputOutputArray*>(detectedCorners), *reinterpret_cast<cv::_InputOutputArray*>(detectedIds), *reinterpret_cast<cv::_InputOutputArray*>(rejectedCorners), *reinterpret_cast<const cv::_InputArray*>(cameraMatrix), *reinterpret_cast<const cv::_InputArray*>(distCoeffs), minRepDistance, errorCorrectionRate, checkAllOrders, *reinterpret_cast<cv::_OutputArray*>(recoveredIdxs), *reinterpret_cast<const Ptr<cv::aruco::DetectorParameters>*>(parameters));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::aruco::Board
void cv_Board_delete(void* instance) {
    delete reinterpret_cast<cv::aruco::Board*>(instance);
}
// parsed: cv::aruco::Board::create
// as:     cv::aruco::Board::create (method) cv::aruco::Board (trait) . create
// Arg ARG cv::_InputArray (boxed) objPoints= cv::_InputArray (boxed) = 
// Arg ARG SmartPtr[cv::aruco::Dictionary (boxed)] dictionary= SmartPtr[cv::aruco::Dictionary (boxed)] = 
// Arg ARG cv::_InputArray (boxed) ids= cv::_InputArray (boxed) = 
// Return value: SmartPtr[cv::aruco::Board (boxed)]
cv_return_value_void_X cv_aruco_Board_create__InputArray_PtrOfDictionary__InputArray(void* objPoints, void* dictionary, void* ids) {
    try {
        Ptr<cv::aruco::Board> ret = cv::aruco::Board::create(*reinterpret_cast<const cv::_InputArray*>(objPoints), *reinterpret_cast<const Ptr<cv::aruco::Dictionary>*>(dictionary), *reinterpret_cast<const cv::_InputArray*>(ids));
        return { Error::Code::StsOk, NULL, new Ptr<cv::aruco::Board>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::aruco::CharucoBoard
void cv_CharucoBoard_delete(void* instance) {
    delete reinterpret_cast<cv::aruco::CharucoBoard*>(instance);
}
// parsed: cv::aruco::CharucoBoard::draw
// as:     cv::aruco::CharucoBoard::draw (method) cv::aruco::CharucoBoard . draw
// Arg ARG cv::Size (simple) outSize= cv::Size (simple) = 
// Arg ARG cv::_OutputArray (boxed) img= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) marginSize= Primitive(int) = 0
// Arg ARG Primitive(int) borderBits= Primitive(int) = 1
// Return value: Primitive(void)
cv_return_value_void cv_aruco_CharucoBoard_draw_Size__OutputArray_int_int(void* instance, SizeWrapper outSize, void* img, int marginSize, int borderBits) {
    try {
        reinterpret_cast<cv::aruco::CharucoBoard*>(instance)->draw(*reinterpret_cast<cv::Size*>(&outSize), *reinterpret_cast<cv::_OutputArray*>(img), marginSize, borderBits);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::aruco::CharucoBoard::create
// as:     cv::aruco::CharucoBoard::create (method) cv::aruco::CharucoBoard . create
// Arg ARG Primitive(int) squaresX= Primitive(int) = 
// Arg ARG Primitive(int) squaresY= Primitive(int) = 
// Arg ARG Primitive(float) squareLength= Primitive(float) = 
// Arg ARG Primitive(float) markerLength= Primitive(float) = 
// Arg ARG SmartPtr[cv::aruco::Dictionary (boxed)] dictionary= SmartPtr[cv::aruco::Dictionary (boxed)] = 
// Return value: SmartPtr[cv::aruco::CharucoBoard (boxed)]
cv_return_value_void_X cv_aruco_CharucoBoard_create_int_int_float_float_PtrOfDictionary(int squaresX, int squaresY, float squareLength, float markerLength, void* dictionary) {
    try {
        Ptr<cv::aruco::CharucoBoard> ret = cv::aruco::CharucoBoard::create(squaresX, squaresY, squareLength, markerLength, *reinterpret_cast<const Ptr<cv::aruco::Dictionary>*>(dictionary));
        return { Error::Code::StsOk, NULL, new Ptr<cv::aruco::CharucoBoard>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::aruco::CharucoBoard::getChessboardSize
// as:     cv::aruco::CharucoBoard::getChessboardSize (method) cv::aruco::CharucoBoard . getChessboardSize
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_aruco_CharucoBoard_getChessboardSize_const(void* instance) {
    try {
        cv::Size ret = reinterpret_cast<cv::aruco::CharucoBoard*>(instance)->getChessboardSize();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::aruco::CharucoBoard::getSquareLength
// as:     cv::aruco::CharucoBoard::getSquareLength (method) cv::aruco::CharucoBoard . getSquareLength
// Return value: Primitive(float)
cv_return_value_float cv_aruco_CharucoBoard_getSquareLength_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::aruco::CharucoBoard*>(instance)->getSquareLength();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::aruco::CharucoBoard::getMarkerLength
// as:     cv::aruco::CharucoBoard::getMarkerLength (method) cv::aruco::CharucoBoard . getMarkerLength
// Return value: Primitive(float)
cv_return_value_float cv_aruco_CharucoBoard_getMarkerLength_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::aruco::CharucoBoard*>(instance)->getMarkerLength();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// boxed class: cv::aruco::DetectorParameters
void cv_DetectorParameters_delete(void* instance) {
    delete reinterpret_cast<cv::aruco::DetectorParameters*>(instance);
}
// parsed: cv::aruco::DetectorParameters::adaptiveThreshWinSizeMin
// as:     cv::aruco::DetectorParameters::adaptiveThreshWinSizeMin (method) cv::aruco::DetectorParameters . adaptiveThreshWinSizeMin
// Return value: Primitive(int)
cv_return_value_int cv_aruco_DetectorParameters_adaptiveThreshWinSizeMin_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->adaptiveThreshWinSizeMin;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::aruco::DetectorParameters::adaptiveThreshWinSizeMax
// as:     cv::aruco::DetectorParameters::adaptiveThreshWinSizeMax (method) cv::aruco::DetectorParameters . adaptiveThreshWinSizeMax
// Return value: Primitive(int)
cv_return_value_int cv_aruco_DetectorParameters_adaptiveThreshWinSizeMax_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->adaptiveThreshWinSizeMax;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::aruco::DetectorParameters::adaptiveThreshWinSizeStep
// as:     cv::aruco::DetectorParameters::adaptiveThreshWinSizeStep (method) cv::aruco::DetectorParameters . adaptiveThreshWinSizeStep
// Return value: Primitive(int)
cv_return_value_int cv_aruco_DetectorParameters_adaptiveThreshWinSizeStep_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->adaptiveThreshWinSizeStep;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::aruco::DetectorParameters::adaptiveThreshConstant
// as:     cv::aruco::DetectorParameters::adaptiveThreshConstant (method) cv::aruco::DetectorParameters . adaptiveThreshConstant
// Return value: Primitive(double)
cv_return_value_double cv_aruco_DetectorParameters_adaptiveThreshConstant_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->adaptiveThreshConstant;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::aruco::DetectorParameters::minMarkerPerimeterRate
// as:     cv::aruco::DetectorParameters::minMarkerPerimeterRate (method) cv::aruco::DetectorParameters . minMarkerPerimeterRate
// Return value: Primitive(double)
cv_return_value_double cv_aruco_DetectorParameters_minMarkerPerimeterRate_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->minMarkerPerimeterRate;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::aruco::DetectorParameters::maxMarkerPerimeterRate
// as:     cv::aruco::DetectorParameters::maxMarkerPerimeterRate (method) cv::aruco::DetectorParameters . maxMarkerPerimeterRate
// Return value: Primitive(double)
cv_return_value_double cv_aruco_DetectorParameters_maxMarkerPerimeterRate_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->maxMarkerPerimeterRate;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::aruco::DetectorParameters::polygonalApproxAccuracyRate
// as:     cv::aruco::DetectorParameters::polygonalApproxAccuracyRate (method) cv::aruco::DetectorParameters . polygonalApproxAccuracyRate
// Return value: Primitive(double)
cv_return_value_double cv_aruco_DetectorParameters_polygonalApproxAccuracyRate_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->polygonalApproxAccuracyRate;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::aruco::DetectorParameters::minCornerDistanceRate
// as:     cv::aruco::DetectorParameters::minCornerDistanceRate (method) cv::aruco::DetectorParameters . minCornerDistanceRate
// Return value: Primitive(double)
cv_return_value_double cv_aruco_DetectorParameters_minCornerDistanceRate_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->minCornerDistanceRate;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::aruco::DetectorParameters::minDistanceToBorder
// as:     cv::aruco::DetectorParameters::minDistanceToBorder (method) cv::aruco::DetectorParameters . minDistanceToBorder
// Return value: Primitive(int)
cv_return_value_int cv_aruco_DetectorParameters_minDistanceToBorder_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->minDistanceToBorder;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::aruco::DetectorParameters::minMarkerDistanceRate
// as:     cv::aruco::DetectorParameters::minMarkerDistanceRate (method) cv::aruco::DetectorParameters . minMarkerDistanceRate
// Return value: Primitive(double)
cv_return_value_double cv_aruco_DetectorParameters_minMarkerDistanceRate_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->minMarkerDistanceRate;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::aruco::DetectorParameters::cornerRefinementMethod
// as:     cv::aruco::DetectorParameters::cornerRefinementMethod (method) cv::aruco::DetectorParameters . cornerRefinementMethod
// Return value: Primitive(int)
cv_return_value_int cv_aruco_DetectorParameters_cornerRefinementMethod_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->cornerRefinementMethod;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::aruco::DetectorParameters::cornerRefinementWinSize
// as:     cv::aruco::DetectorParameters::cornerRefinementWinSize (method) cv::aruco::DetectorParameters . cornerRefinementWinSize
// Return value: Primitive(int)
cv_return_value_int cv_aruco_DetectorParameters_cornerRefinementWinSize_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->cornerRefinementWinSize;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::aruco::DetectorParameters::cornerRefinementMaxIterations
// as:     cv::aruco::DetectorParameters::cornerRefinementMaxIterations (method) cv::aruco::DetectorParameters . cornerRefinementMaxIterations
// Return value: Primitive(int)
cv_return_value_int cv_aruco_DetectorParameters_cornerRefinementMaxIterations_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->cornerRefinementMaxIterations;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::aruco::DetectorParameters::cornerRefinementMinAccuracy
// as:     cv::aruco::DetectorParameters::cornerRefinementMinAccuracy (method) cv::aruco::DetectorParameters . cornerRefinementMinAccuracy
// Return value: Primitive(double)
cv_return_value_double cv_aruco_DetectorParameters_cornerRefinementMinAccuracy_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->cornerRefinementMinAccuracy;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::aruco::DetectorParameters::markerBorderBits
// as:     cv::aruco::DetectorParameters::markerBorderBits (method) cv::aruco::DetectorParameters . markerBorderBits
// Return value: Primitive(int)
cv_return_value_int cv_aruco_DetectorParameters_markerBorderBits_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->markerBorderBits;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::aruco::DetectorParameters::perspectiveRemovePixelPerCell
// as:     cv::aruco::DetectorParameters::perspectiveRemovePixelPerCell (method) cv::aruco::DetectorParameters . perspectiveRemovePixelPerCell
// Return value: Primitive(int)
cv_return_value_int cv_aruco_DetectorParameters_perspectiveRemovePixelPerCell_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->perspectiveRemovePixelPerCell;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::aruco::DetectorParameters::perspectiveRemoveIgnoredMarginPerCell
// as:     cv::aruco::DetectorParameters::perspectiveRemoveIgnoredMarginPerCell (method) cv::aruco::DetectorParameters . perspectiveRemoveIgnoredMarginPerCell
// Return value: Primitive(double)
cv_return_value_double cv_aruco_DetectorParameters_perspectiveRemoveIgnoredMarginPerCell_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->perspectiveRemoveIgnoredMarginPerCell;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::aruco::DetectorParameters::maxErroneousBitsInBorderRate
// as:     cv::aruco::DetectorParameters::maxErroneousBitsInBorderRate (method) cv::aruco::DetectorParameters . maxErroneousBitsInBorderRate
// Return value: Primitive(double)
cv_return_value_double cv_aruco_DetectorParameters_maxErroneousBitsInBorderRate_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->maxErroneousBitsInBorderRate;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::aruco::DetectorParameters::minOtsuStdDev
// as:     cv::aruco::DetectorParameters::minOtsuStdDev (method) cv::aruco::DetectorParameters . minOtsuStdDev
// Return value: Primitive(double)
cv_return_value_double cv_aruco_DetectorParameters_minOtsuStdDev_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->minOtsuStdDev;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::aruco::DetectorParameters::errorCorrectionRate
// as:     cv::aruco::DetectorParameters::errorCorrectionRate (method) cv::aruco::DetectorParameters . errorCorrectionRate
// Return value: Primitive(double)
cv_return_value_double cv_aruco_DetectorParameters_errorCorrectionRate_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->errorCorrectionRate;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::aruco::DetectorParameters::aprilTagQuadDecimate
// as:     cv::aruco::DetectorParameters::aprilTagQuadDecimate (method) cv::aruco::DetectorParameters . aprilTagQuadDecimate
// Return value: Primitive(float)
cv_return_value_float cv_aruco_DetectorParameters_aprilTagQuadDecimate_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->aprilTagQuadDecimate;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::aruco::DetectorParameters::aprilTagQuadSigma
// as:     cv::aruco::DetectorParameters::aprilTagQuadSigma (method) cv::aruco::DetectorParameters . aprilTagQuadSigma
// Return value: Primitive(float)
cv_return_value_float cv_aruco_DetectorParameters_aprilTagQuadSigma_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->aprilTagQuadSigma;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::aruco::DetectorParameters::aprilTagMinClusterPixels
// as:     cv::aruco::DetectorParameters::aprilTagMinClusterPixels (method) cv::aruco::DetectorParameters . aprilTagMinClusterPixels
// Return value: Primitive(int)
cv_return_value_int cv_aruco_DetectorParameters_aprilTagMinClusterPixels_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->aprilTagMinClusterPixels;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::aruco::DetectorParameters::aprilTagMaxNmaxima
// as:     cv::aruco::DetectorParameters::aprilTagMaxNmaxima (method) cv::aruco::DetectorParameters . aprilTagMaxNmaxima
// Return value: Primitive(int)
cv_return_value_int cv_aruco_DetectorParameters_aprilTagMaxNmaxima_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->aprilTagMaxNmaxima;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::aruco::DetectorParameters::aprilTagCriticalRad
// as:     cv::aruco::DetectorParameters::aprilTagCriticalRad (method) cv::aruco::DetectorParameters . aprilTagCriticalRad
// Return value: Primitive(float)
cv_return_value_float cv_aruco_DetectorParameters_aprilTagCriticalRad_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->aprilTagCriticalRad;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::aruco::DetectorParameters::aprilTagMaxLineFitMse
// as:     cv::aruco::DetectorParameters::aprilTagMaxLineFitMse (method) cv::aruco::DetectorParameters . aprilTagMaxLineFitMse
// Return value: Primitive(float)
cv_return_value_float cv_aruco_DetectorParameters_aprilTagMaxLineFitMse_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->aprilTagMaxLineFitMse;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::aruco::DetectorParameters::aprilTagMinWhiteBlackDiff
// as:     cv::aruco::DetectorParameters::aprilTagMinWhiteBlackDiff (method) cv::aruco::DetectorParameters . aprilTagMinWhiteBlackDiff
// Return value: Primitive(int)
cv_return_value_int cv_aruco_DetectorParameters_aprilTagMinWhiteBlackDiff_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->aprilTagMinWhiteBlackDiff;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::aruco::DetectorParameters::aprilTagDeglitch
// as:     cv::aruco::DetectorParameters::aprilTagDeglitch (method) cv::aruco::DetectorParameters . aprilTagDeglitch
// Return value: Primitive(int)
cv_return_value_int cv_aruco_DetectorParameters_aprilTagDeglitch_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->aprilTagDeglitch;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::aruco::DetectorParameters::detectInvertedMarker
// as:     cv::aruco::DetectorParameters::detectInvertedMarker (method) cv::aruco::DetectorParameters . detectInvertedMarker
// Return value: Primitive(bool)
cv_return_value_bool cv_aruco_DetectorParameters_detectInvertedMarker_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::aruco::DetectorParameters*>(instance)->detectInvertedMarker;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::aruco::DetectorParameters::DetectorParameters
// as:     cv::aruco::DetectorParameters::DetectorParameters (constructor) cv::aruco::DetectorParameters . default
// Return value: cv::aruco::DetectorParameters (boxed)
cv_return_value_void_X cv_aruco_DetectorParameters_DetectorParameters() {
    try {
        cv::aruco::DetectorParameters* ret = new cv::aruco::DetectorParameters();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::aruco::DetectorParameters::create
// as:     cv::aruco::DetectorParameters::create (method) cv::aruco::DetectorParameters . create
// Return value: SmartPtr[cv::aruco::DetectorParameters (boxed)]
cv_return_value_void_X cv_aruco_DetectorParameters_create() {
    try {
        Ptr<cv::aruco::DetectorParameters> ret = cv::aruco::DetectorParameters::create();
        return { Error::Code::StsOk, NULL, new Ptr<cv::aruco::DetectorParameters>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::aruco::Dictionary
void cv_Dictionary_delete(void* instance) {
    delete reinterpret_cast<cv::aruco::Dictionary*>(instance);
}
// parsed: cv::aruco::Dictionary::bytesList
// as:     cv::aruco::Dictionary::bytesList (method) cv::aruco::Dictionary . bytesList
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_aruco_Dictionary_bytesList(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::aruco::Dictionary*>(instance)->bytesList;
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::aruco::Dictionary::set_bytesList
// as:     cv::aruco::Dictionary::set_bytesList (method) cv::aruco::Dictionary . set_bytesList
// Arg ARG cv::Mat (boxed) val= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_aruco_Dictionary_set_bytesList_Mat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::aruco::Dictionary*>(instance)->bytesList = *reinterpret_cast<cv::Mat*>(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::aruco::Dictionary::markerSize
// as:     cv::aruco::Dictionary::markerSize (method) cv::aruco::Dictionary . markerSize
// Return value: Primitive(int)
cv_return_value_int cv_aruco_Dictionary_markerSize_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::aruco::Dictionary*>(instance)->markerSize;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::aruco::Dictionary::maxCorrectionBits
// as:     cv::aruco::Dictionary::maxCorrectionBits (method) cv::aruco::Dictionary . maxCorrectionBits
// Return value: Primitive(int)
cv_return_value_int cv_aruco_Dictionary_maxCorrectionBits_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::aruco::Dictionary*>(instance)->maxCorrectionBits;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::aruco::Dictionary::Dictionary
// as:     cv::aruco::Dictionary::Dictionary (constructor) cv::aruco::Dictionary . new
// Arg ARG cv::Mat (boxed) _bytesList= cv::Mat (boxed) = Mat()
// Arg ARG Primitive(int) _markerSize= Primitive(int) = 0
// Arg ARG Primitive(int) _maxcorr= Primitive(int) = 0
// Return value: cv::aruco::Dictionary (boxed)
cv_return_value_void_X cv_aruco_Dictionary_Dictionary_Mat_int_int(void* _bytesList, int _markerSize, int _maxcorr) {
    try {
        cv::aruco::Dictionary* ret = new cv::aruco::Dictionary(*reinterpret_cast<const cv::Mat*>(_bytesList), _markerSize, _maxcorr);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::aruco::Dictionary::Dictionary
// as:     cv::aruco::Dictionary::Dictionary (constructor) cv::aruco::Dictionary . new
// Arg ARG SmartPtr[cv::aruco::Dictionary (boxed)] _dictionary= SmartPtr[cv::aruco::Dictionary (boxed)] = 
// Return value: cv::aruco::Dictionary (boxed)
cv_return_value_void_X cv_aruco_Dictionary_Dictionary_PtrOfDictionary(void* _dictionary) {
    try {
        cv::aruco::Dictionary* ret = new cv::aruco::Dictionary(*reinterpret_cast<const Ptr<cv::aruco::Dictionary>*>(_dictionary));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::aruco::Dictionary::create
// as:     cv::aruco::Dictionary::create (method) cv::aruco::Dictionary . create
// Arg ARG Primitive(int) nMarkers= Primitive(int) = 
// Arg ARG Primitive(int) markerSize= Primitive(int) = 
// Arg ARG Primitive(int) randomSeed= Primitive(int) = 0
// Return value: SmartPtr[cv::aruco::Dictionary (boxed)]
cv_return_value_void_X cv_aruco_Dictionary_create_int_int_int(int nMarkers, int markerSize, int randomSeed) {
    try {
        Ptr<cv::aruco::Dictionary> ret = cv::aruco::Dictionary::create(nMarkers, markerSize, randomSeed);
        return { Error::Code::StsOk, NULL, new Ptr<cv::aruco::Dictionary>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::aruco::Dictionary::create
// as:     cv::aruco::Dictionary::create (method) cv::aruco::Dictionary . create
// Arg ARG Primitive(int) nMarkers= Primitive(int) = 
// Arg ARG Primitive(int) markerSize= Primitive(int) = 
// Arg ARG SmartPtr[cv::aruco::Dictionary (boxed)] baseDictionary= SmartPtr[cv::aruco::Dictionary (boxed)] = 
// Arg ARG Primitive(int) randomSeed= Primitive(int) = 0
// Return value: SmartPtr[cv::aruco::Dictionary (boxed)]
cv_return_value_void_X cv_aruco_Dictionary_create_int_int_PtrOfDictionary_int(int nMarkers, int markerSize, void* baseDictionary, int randomSeed) {
    try {
        Ptr<cv::aruco::Dictionary> ret = cv::aruco::Dictionary::create(nMarkers, markerSize, *reinterpret_cast<const Ptr<cv::aruco::Dictionary>*>(baseDictionary), randomSeed);
        return { Error::Code::StsOk, NULL, new Ptr<cv::aruco::Dictionary>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::aruco::Dictionary::get
// as:     cv::aruco::Dictionary::get (method) cv::aruco::Dictionary . get
// Arg ARG Primitive(int) dict= Primitive(int) = 
// Return value: SmartPtr[cv::aruco::Dictionary (boxed)]
cv_return_value_void_X cv_aruco_Dictionary_get_int(int dict) {
    try {
        Ptr<cv::aruco::Dictionary> ret = cv::aruco::Dictionary::get(dict);
        return { Error::Code::StsOk, NULL, new Ptr<cv::aruco::Dictionary>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::aruco::Dictionary::identify
// as:     cv::aruco::Dictionary::identify (method) cv::aruco::Dictionary . identify
// Arg ARG cv::Mat (boxed) onlyBits= cv::Mat (boxed) = 
// Arg ARG Primitive(int) idx= Primitive(int) = 
// Arg ARG Primitive(int) rotation= Primitive(int) = 
// Arg ARG Primitive(double) maxCorrectionRate= Primitive(double) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_aruco_Dictionary_identify_const_Mat_int_int_double(void* instance, void* onlyBits, int& idx, int& rotation, double maxCorrectionRate) {
    try {
        bool ret = reinterpret_cast<cv::aruco::Dictionary*>(instance)->identify(*reinterpret_cast<const cv::Mat*>(onlyBits), idx, rotation, maxCorrectionRate);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::aruco::Dictionary::getDistanceToId
// as:     cv::aruco::Dictionary::getDistanceToId (method) cv::aruco::Dictionary . getDistanceToId
// Arg ARG cv::_InputArray (boxed) bits= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) id= Primitive(int) = 
// Arg ARG Primitive(bool) allRotations= Primitive(bool) = true
// Return value: Primitive(int)
cv_return_value_int cv_aruco_Dictionary_getDistanceToId_const__InputArray_int_bool(void* instance, void* bits, int id, bool allRotations) {
    try {
        int ret = reinterpret_cast<cv::aruco::Dictionary*>(instance)->getDistanceToId(*reinterpret_cast<const cv::_InputArray*>(bits), id, allRotations);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::aruco::Dictionary::drawMarker
// as:     cv::aruco::Dictionary::drawMarker (method) cv::aruco::Dictionary . drawMarker
// Arg ARG Primitive(int) id= Primitive(int) = 
// Arg ARG Primitive(int) sidePixels= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) _img= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) borderBits= Primitive(int) = 1
// Return value: Primitive(void)
cv_return_value_void cv_aruco_Dictionary_drawMarker_const_int_int__OutputArray_int(void* instance, int id, int sidePixels, void* _img, int borderBits) {
    try {
        reinterpret_cast<cv::aruco::Dictionary*>(instance)->drawMarker(id, sidePixels, *reinterpret_cast<cv::_OutputArray*>(_img), borderBits);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::aruco::Dictionary::getByteListFromBits
// as:     cv::aruco::Dictionary::getByteListFromBits (method) cv::aruco::Dictionary . getByteListFromBits
// Arg ARG cv::Mat (boxed) bits= cv::Mat (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_aruco_Dictionary_getByteListFromBits_Mat(void* bits) {
    try {
        cv::Mat ret = cv::aruco::Dictionary::getByteListFromBits(*reinterpret_cast<const cv::Mat*>(bits));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::aruco::Dictionary::getBitsFromByteList
// as:     cv::aruco::Dictionary::getBitsFromByteList (method) cv::aruco::Dictionary . getBitsFromByteList
// Arg ARG cv::Mat (boxed) byteList= cv::Mat (boxed) = 
// Arg ARG Primitive(int) markerSize= Primitive(int) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_aruco_Dictionary_getBitsFromByteList_Mat_int(void* byteList, int markerSize) {
    try {
        cv::Mat ret = cv::aruco::Dictionary::getBitsFromByteList(*reinterpret_cast<const cv::Mat*>(byteList), markerSize);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::aruco::GridBoard
void cv_GridBoard_delete(void* instance) {
    delete reinterpret_cast<cv::aruco::GridBoard*>(instance);
}
// parsed: cv::aruco::GridBoard::draw
// as:     cv::aruco::GridBoard::draw (method) cv::aruco::GridBoard . draw
// Arg ARG cv::Size (simple) outSize= cv::Size (simple) = 
// Arg ARG cv::_OutputArray (boxed) img= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) marginSize= Primitive(int) = 0
// Arg ARG Primitive(int) borderBits= Primitive(int) = 1
// Return value: Primitive(void)
cv_return_value_void cv_aruco_GridBoard_draw_Size__OutputArray_int_int(void* instance, SizeWrapper outSize, void* img, int marginSize, int borderBits) {
    try {
        reinterpret_cast<cv::aruco::GridBoard*>(instance)->draw(*reinterpret_cast<cv::Size*>(&outSize), *reinterpret_cast<cv::_OutputArray*>(img), marginSize, borderBits);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::aruco::GridBoard::create
// as:     cv::aruco::GridBoard::create (method) cv::aruco::GridBoard . create
// Arg ARG Primitive(int) markersX= Primitive(int) = 
// Arg ARG Primitive(int) markersY= Primitive(int) = 
// Arg ARG Primitive(float) markerLength= Primitive(float) = 
// Arg ARG Primitive(float) markerSeparation= Primitive(float) = 
// Arg ARG SmartPtr[cv::aruco::Dictionary (boxed)] dictionary= SmartPtr[cv::aruco::Dictionary (boxed)] = 
// Arg ARG Primitive(int) firstMarker= Primitive(int) = 0
// Return value: SmartPtr[cv::aruco::GridBoard (boxed)]
cv_return_value_void_X cv_aruco_GridBoard_create_int_int_float_float_PtrOfDictionary_int(int markersX, int markersY, float markerLength, float markerSeparation, void* dictionary, int firstMarker) {
    try {
        Ptr<cv::aruco::GridBoard> ret = cv::aruco::GridBoard::create(markersX, markersY, markerLength, markerSeparation, *reinterpret_cast<const Ptr<cv::aruco::Dictionary>*>(dictionary), firstMarker);
        return { Error::Code::StsOk, NULL, new Ptr<cv::aruco::GridBoard>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::aruco::GridBoard::getGridSize
// as:     cv::aruco::GridBoard::getGridSize (method) cv::aruco::GridBoard . getGridSize
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_aruco_GridBoard_getGridSize_const(void* instance) {
    try {
        cv::Size ret = reinterpret_cast<cv::aruco::GridBoard*>(instance)->getGridSize();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::aruco::GridBoard::getMarkerLength
// as:     cv::aruco::GridBoard::getMarkerLength (method) cv::aruco::GridBoard . getMarkerLength
// Return value: Primitive(float)
cv_return_value_float cv_aruco_GridBoard_getMarkerLength_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::aruco::GridBoard*>(instance)->getMarkerLength();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::aruco::GridBoard::getMarkerSeparation
// as:     cv::aruco::GridBoard::getMarkerSeparation (method) cv::aruco::GridBoard . getMarkerSeparation
// Return value: Primitive(float)
cv_return_value_float cv_aruco_GridBoard_getMarkerSeparation_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::aruco::GridBoard*>(instance)->getMarkerSeparation();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}



} // extern "C"

