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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/stitching.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/stitching/warpers.hpp"

extern "C" {

// parsed: cv::createStitcherScans
// as:     cv::createStitcherScans (function)
// Arg ARG Primitive(bool) try_use_gpu= Primitive(bool) = false
// Return value: SmartPtr[cv::Stitcher (boxed)]
cv_return_value_void_X cv_createStitcherScans_bool(bool try_use_gpu) {
    try {
        Ptr<cv::Stitcher> ret = cv::createStitcherScans(try_use_gpu);
        return { Error::Code::StsOk, NULL, new Ptr<cv::Stitcher>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::createStitcher
// as:     cv::createStitcher (function)
// Arg ARG Primitive(bool) try_use_gpu= Primitive(bool) = false
// Return value: SmartPtr[cv::Stitcher (boxed)]
cv_return_value_void_X cv_createStitcher_bool(bool try_use_gpu) {
    try {
        Ptr<cv::Stitcher> ret = cv::createStitcher(try_use_gpu);
        return { Error::Code::StsOk, NULL, new Ptr<cv::Stitcher>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::AffineWarper
void cv_AffineWarper_delete(void* instance) {
    delete reinterpret_cast<cv::AffineWarper*>(instance);
}
// boxed class: cv::CompressedRectilinearPortraitWarper
void cv_CompressedRectilinearPortraitWarper_delete(void* instance) {
    delete reinterpret_cast<cv::CompressedRectilinearPortraitWarper*>(instance);
}
// parsed: cv::CompressedRectilinearPortraitWarper::CompressedRectilinearPortraitWarper
// as:     cv::CompressedRectilinearPortraitWarper::CompressedRectilinearPortraitWarper (constructor) cv::CompressedRectilinearPortraitWarper . new
// Arg ARG Primitive(float) A= Primitive(float) = 1
// Arg ARG Primitive(float) B= Primitive(float) = 1
// Return value: cv::CompressedRectilinearPortraitWarper (boxed)
cv_return_value_void_X cv_CompressedRectilinearPortraitWarper_CompressedRectilinearPortraitWarper_float_float(float A, float B) {
    try {
        cv::CompressedRectilinearPortraitWarper* ret = new cv::CompressedRectilinearPortraitWarper(A, B);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::CompressedRectilinearWarper
void cv_CompressedRectilinearWarper_delete(void* instance) {
    delete reinterpret_cast<cv::CompressedRectilinearWarper*>(instance);
}
// parsed: cv::CompressedRectilinearWarper::CompressedRectilinearWarper
// as:     cv::CompressedRectilinearWarper::CompressedRectilinearWarper (constructor) cv::CompressedRectilinearWarper . new
// Arg ARG Primitive(float) A= Primitive(float) = 1
// Arg ARG Primitive(float) B= Primitive(float) = 1
// Return value: cv::CompressedRectilinearWarper (boxed)
cv_return_value_void_X cv_CompressedRectilinearWarper_CompressedRectilinearWarper_float_float(float A, float B) {
    try {
        cv::CompressedRectilinearWarper* ret = new cv::CompressedRectilinearWarper(A, B);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::CylindricalWarper
void cv_CylindricalWarper_delete(void* instance) {
    delete reinterpret_cast<cv::CylindricalWarper*>(instance);
}
// boxed class: cv::FisheyeWarper
void cv_FisheyeWarper_delete(void* instance) {
    delete reinterpret_cast<cv::FisheyeWarper*>(instance);
}
// boxed class: cv::MercatorWarper
void cv_MercatorWarper_delete(void* instance) {
    delete reinterpret_cast<cv::MercatorWarper*>(instance);
}
// boxed class: cv::PaniniPortraitWarper
void cv_PaniniPortraitWarper_delete(void* instance) {
    delete reinterpret_cast<cv::PaniniPortraitWarper*>(instance);
}
// parsed: cv::PaniniPortraitWarper::PaniniPortraitWarper
// as:     cv::PaniniPortraitWarper::PaniniPortraitWarper (constructor) cv::PaniniPortraitWarper . new
// Arg ARG Primitive(float) A= Primitive(float) = 1
// Arg ARG Primitive(float) B= Primitive(float) = 1
// Return value: cv::PaniniPortraitWarper (boxed)
cv_return_value_void_X cv_PaniniPortraitWarper_PaniniPortraitWarper_float_float(float A, float B) {
    try {
        cv::PaniniPortraitWarper* ret = new cv::PaniniPortraitWarper(A, B);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::PaniniWarper
void cv_PaniniWarper_delete(void* instance) {
    delete reinterpret_cast<cv::PaniniWarper*>(instance);
}
// parsed: cv::PaniniWarper::PaniniWarper
// as:     cv::PaniniWarper::PaniniWarper (constructor) cv::PaniniWarper . new
// Arg ARG Primitive(float) A= Primitive(float) = 1
// Arg ARG Primitive(float) B= Primitive(float) = 1
// Return value: cv::PaniniWarper (boxed)
cv_return_value_void_X cv_PaniniWarper_PaniniWarper_float_float(float A, float B) {
    try {
        cv::PaniniWarper* ret = new cv::PaniniWarper(A, B);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::PlaneWarper
void cv_PlaneWarper_delete(void* instance) {
    delete reinterpret_cast<cv::PlaneWarper*>(instance);
}
// boxed class: cv::PyRotationWarper
void cv_PyRotationWarper_delete(void* instance) {
    delete reinterpret_cast<cv::PyRotationWarper*>(instance);
}
// parsed: cv::PyRotationWarper::PyRotationWarper
// as:     cv::PyRotationWarper::PyRotationWarper (constructor) cv::PyRotationWarper . new
// Arg ARG string type= string = 
// Arg ARG Primitive(float) scale= Primitive(float) = 
// Return value: cv::PyRotationWarper (boxed)
cv_return_value_void_X cv_PyRotationWarper_PyRotationWarper_String_float(const char* type, float scale) {
    try {
        cv::PyRotationWarper* ret = new cv::PyRotationWarper(String(type), scale);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::PyRotationWarper::PyRotationWarper
// as:     cv::PyRotationWarper::PyRotationWarper (constructor) cv::PyRotationWarper . default
// Return value: cv::PyRotationWarper (boxed)
cv_return_value_void_X cv_PyRotationWarper_PyRotationWarper() {
    try {
        cv::PyRotationWarper* ret = new cv::PyRotationWarper();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::PyRotationWarper::warpPoint
// as:     cv::PyRotationWarper::warpPoint (method) cv::PyRotationWarper . warpPoint
// Arg ARG cv::Point2f (simple) pt= cv::Point2f (simple) = 
// Arg ARG cv::_InputArray (boxed) K= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) R= cv::_InputArray (boxed) = 
// Return value: cv::Point2f (simple)
cv_return_value_Point2fWrapper cv_PyRotationWarper_warpPoint_Point2f__InputArray__InputArray(void* instance, Point2fWrapper pt, void* K, void* R) {
    try {
        cv::Point2f ret = reinterpret_cast<cv::PyRotationWarper*>(instance)->warpPoint(*reinterpret_cast<const cv::Point2f*>(&pt), *reinterpret_cast<const cv::_InputArray*>(K), *reinterpret_cast<const cv::_InputArray*>(R));
        return { Error::Code::StsOk, NULL, *reinterpret_cast<Point2fWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_Point2fWrapper)
}

// parsed: cv::PyRotationWarper::buildMaps
// as:     cv::PyRotationWarper::buildMaps (method) cv::PyRotationWarper . buildMaps
// Arg ARG cv::Size (simple) src_size= cv::Size (simple) = 
// Arg ARG cv::_InputArray (boxed) K= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) R= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) xmap= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) ymap= cv::_OutputArray (boxed) = 
// Return value: cv::Rect (simple)
cv_return_value_RectWrapper cv_PyRotationWarper_buildMaps_Size__InputArray__InputArray__OutputArray__OutputArray(void* instance, SizeWrapper src_size, void* K, void* R, void* xmap, void* ymap) {
    try {
        cv::Rect ret = reinterpret_cast<cv::PyRotationWarper*>(instance)->buildMaps(*reinterpret_cast<cv::Size*>(&src_size), *reinterpret_cast<const cv::_InputArray*>(K), *reinterpret_cast<const cv::_InputArray*>(R), *reinterpret_cast<cv::_OutputArray*>(xmap), *reinterpret_cast<cv::_OutputArray*>(ymap));
        return { Error::Code::StsOk, NULL, *reinterpret_cast<RectWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_RectWrapper)
}

// parsed: cv::PyRotationWarper::warp
// as:     cv::PyRotationWarper::warp (method) cv::PyRotationWarper . warp
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) R= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) interp_mode= Primitive(int) = 
// Arg ARG Primitive(int) border_mode= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: cv::Point (simple)
cv_return_value_PointWrapper cv_PyRotationWarper_warp__InputArray__InputArray__InputArray_int_int__OutputArray(void* instance, void* src, void* K, void* R, int interp_mode, int border_mode, void* dst) {
    try {
        cv::Point ret = reinterpret_cast<cv::PyRotationWarper*>(instance)->warp(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<const cv::_InputArray*>(K), *reinterpret_cast<const cv::_InputArray*>(R), interp_mode, border_mode, *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL, *reinterpret_cast<PointWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_PointWrapper)
}

// parsed: cv::PyRotationWarper::warpBackward
// as:     cv::PyRotationWarper::warpBackward (method) cv::PyRotationWarper . warpBackward
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) K= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) R= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) interp_mode= Primitive(int) = 
// Arg ARG Primitive(int) border_mode= Primitive(int) = 
// Arg ARG cv::Size (simple) dst_size= cv::Size (simple) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_PyRotationWarper_warpBackward__InputArray__InputArray__InputArray_int_int_Size__OutputArray(void* instance, void* src, void* K, void* R, int interp_mode, int border_mode, SizeWrapper dst_size, void* dst) {
    try {
        reinterpret_cast<cv::PyRotationWarper*>(instance)->warpBackward(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<const cv::_InputArray*>(K), *reinterpret_cast<const cv::_InputArray*>(R), interp_mode, border_mode, *reinterpret_cast<cv::Size*>(&dst_size), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::PyRotationWarper::warpRoi
// as:     cv::PyRotationWarper::warpRoi (method) cv::PyRotationWarper . warpRoi
// Arg ARG cv::Size (simple) src_size= cv::Size (simple) = 
// Arg ARG cv::_InputArray (boxed) K= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) R= cv::_InputArray (boxed) = 
// Return value: cv::Rect (simple)
cv_return_value_RectWrapper cv_PyRotationWarper_warpRoi_Size__InputArray__InputArray(void* instance, SizeWrapper src_size, void* K, void* R) {
    try {
        cv::Rect ret = reinterpret_cast<cv::PyRotationWarper*>(instance)->warpRoi(*reinterpret_cast<cv::Size*>(&src_size), *reinterpret_cast<const cv::_InputArray*>(K), *reinterpret_cast<const cv::_InputArray*>(R));
        return { Error::Code::StsOk, NULL, *reinterpret_cast<RectWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_RectWrapper)
}

// parsed: cv::PyRotationWarper::getScale
// as:     cv::PyRotationWarper::getScale (method) cv::PyRotationWarper . getScale
// Return value: Primitive(float)
cv_return_value_float cv_PyRotationWarper_getScale_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::PyRotationWarper*>(instance)->getScale();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::PyRotationWarper::setScale
// as:     cv::PyRotationWarper::setScale (method) cv::PyRotationWarper . setScale
// Arg ARG Primitive(float) unnamed_arg= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_PyRotationWarper_setScale_float(void* instance, float unnamed_arg) {
    try {
        reinterpret_cast<cv::PyRotationWarper*>(instance)->setScale(unnamed_arg);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::SphericalWarper
void cv_SphericalWarper_delete(void* instance) {
    delete reinterpret_cast<cv::SphericalWarper*>(instance);
}
// boxed class: cv::StereographicWarper
void cv_StereographicWarper_delete(void* instance) {
    delete reinterpret_cast<cv::StereographicWarper*>(instance);
}
// boxed class: cv::Stitcher
void cv_Stitcher_delete(void* instance) {
    delete reinterpret_cast<cv::Stitcher*>(instance);
}
// parsed: cv::Stitcher::create
// as:     cv::Stitcher::create (method) cv::Stitcher . create
// Arg ARG Stitcher::Mode (enum) mode= Stitcher::Mode (enum) = Stitcher::PANORAMA
// Return value: SmartPtr[cv::Stitcher (boxed)]
cv_return_value_void_X cv_Stitcher_create_Stitcher_Mode(Stitcher::Mode mode) {
    try {
        Ptr<cv::Stitcher> ret = cv::Stitcher::create(*reinterpret_cast<Stitcher::Mode*>(&mode));
        return { Error::Code::StsOk, NULL, new Ptr<cv::Stitcher>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Stitcher::registrationResol
// as:     cv::Stitcher::registrationResol (method) cv::Stitcher . registrationResol
// Return value: Primitive(double)
cv_return_value_double cv_Stitcher_registrationResol_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::Stitcher*>(instance)->registrationResol();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::Stitcher::setRegistrationResol
// as:     cv::Stitcher::setRegistrationResol (method) cv::Stitcher . setRegistrationResol
// Arg ARG Primitive(double) resol_mpx= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_Stitcher_setRegistrationResol_double(void* instance, double resol_mpx) {
    try {
        reinterpret_cast<cv::Stitcher*>(instance)->setRegistrationResol(resol_mpx);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Stitcher::seamEstimationResol
// as:     cv::Stitcher::seamEstimationResol (method) cv::Stitcher . seamEstimationResol
// Return value: Primitive(double)
cv_return_value_double cv_Stitcher_seamEstimationResol_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::Stitcher*>(instance)->seamEstimationResol();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::Stitcher::setSeamEstimationResol
// as:     cv::Stitcher::setSeamEstimationResol (method) cv::Stitcher . setSeamEstimationResol
// Arg ARG Primitive(double) resol_mpx= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_Stitcher_setSeamEstimationResol_double(void* instance, double resol_mpx) {
    try {
        reinterpret_cast<cv::Stitcher*>(instance)->setSeamEstimationResol(resol_mpx);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Stitcher::compositingResol
// as:     cv::Stitcher::compositingResol (method) cv::Stitcher . compositingResol
// Return value: Primitive(double)
cv_return_value_double cv_Stitcher_compositingResol_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::Stitcher*>(instance)->compositingResol();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::Stitcher::setCompositingResol
// as:     cv::Stitcher::setCompositingResol (method) cv::Stitcher . setCompositingResol
// Arg ARG Primitive(double) resol_mpx= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_Stitcher_setCompositingResol_double(void* instance, double resol_mpx) {
    try {
        reinterpret_cast<cv::Stitcher*>(instance)->setCompositingResol(resol_mpx);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Stitcher::panoConfidenceThresh
// as:     cv::Stitcher::panoConfidenceThresh (method) cv::Stitcher . panoConfidenceThresh
// Return value: Primitive(double)
cv_return_value_double cv_Stitcher_panoConfidenceThresh_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::Stitcher*>(instance)->panoConfidenceThresh();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::Stitcher::setPanoConfidenceThresh
// as:     cv::Stitcher::setPanoConfidenceThresh (method) cv::Stitcher . setPanoConfidenceThresh
// Arg ARG Primitive(double) conf_thresh= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_Stitcher_setPanoConfidenceThresh_double(void* instance, double conf_thresh) {
    try {
        reinterpret_cast<cv::Stitcher*>(instance)->setPanoConfidenceThresh(conf_thresh);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Stitcher::waveCorrection
// as:     cv::Stitcher::waveCorrection (method) cv::Stitcher . waveCorrection
// Return value: Primitive(bool)
cv_return_value_bool cv_Stitcher_waveCorrection_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::Stitcher*>(instance)->waveCorrection();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::Stitcher::setWaveCorrection
// as:     cv::Stitcher::setWaveCorrection (method) cv::Stitcher . setWaveCorrection
// Arg ARG Primitive(bool) flag= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_Stitcher_setWaveCorrection_bool(void* instance, bool flag) {
    try {
        reinterpret_cast<cv::Stitcher*>(instance)->setWaveCorrection(flag);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Stitcher::interpolationFlags
// as:     cv::Stitcher::interpolationFlags (method) cv::Stitcher . interpolationFlags
// Return value: InterpolationFlags (enum)
cv_return_value_InterpolationFlags cv_Stitcher_interpolationFlags_const(void* instance) {
    try {
        InterpolationFlags ret = reinterpret_cast<cv::Stitcher*>(instance)->interpolationFlags();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_InterpolationFlags)
}

// parsed: cv::Stitcher::setInterpolationFlags
// as:     cv::Stitcher::setInterpolationFlags (method) cv::Stitcher . setInterpolationFlags
// Arg ARG InterpolationFlags (enum) interp_flags= InterpolationFlags (enum) = 
// Return value: Primitive(void)
cv_return_value_void cv_Stitcher_setInterpolationFlags_InterpolationFlags(void* instance, InterpolationFlags interp_flags) {
    try {
        reinterpret_cast<cv::Stitcher*>(instance)->setInterpolationFlags(*reinterpret_cast<InterpolationFlags*>(&interp_flags));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Stitcher::featuresFinder
// as:     cv::Stitcher::featuresFinder (method) cv::Stitcher . featuresFinder
// Return value: SmartPtr[cv::Feature2D (boxed)]
cv_return_value_void_X cv_Stitcher_featuresFinder(void* instance) {
    try {
        Ptr<cv::Feature2D> ret = reinterpret_cast<cv::Stitcher*>(instance)->featuresFinder();
        return { Error::Code::StsOk, NULL, new Ptr<cv::Feature2D>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Stitcher::featuresFinder
// as:     cv::Stitcher::featuresFinder (method) cv::Stitcher . featuresFinder
// Return value: SmartPtr[cv::Feature2D (boxed)]
cv_return_value_void_X cv_Stitcher_featuresFinder_const(void* instance) {
    try {
        Ptr<cv::Feature2D> ret = reinterpret_cast<cv::Stitcher*>(instance)->featuresFinder();
        return { Error::Code::StsOk, NULL, new Ptr<cv::Feature2D>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Stitcher::setFeaturesFinder
// as:     cv::Stitcher::setFeaturesFinder (method) cv::Stitcher . setFeaturesFinder
// Arg ARG SmartPtr[cv::Feature2D (boxed)] features_finder= SmartPtr[cv::Feature2D (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_Stitcher_setFeaturesFinder_PtrOfFeature2D(void* instance, void* features_finder) {
    try {
        reinterpret_cast<cv::Stitcher*>(instance)->setFeaturesFinder(*reinterpret_cast<Ptr<cv::Feature2D>*>(features_finder));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Stitcher::matchingMask
// as:     cv::Stitcher::matchingMask (method) cv::Stitcher . matchingMask
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_Stitcher_matchingMask_const(void* instance) {
    try {
        cv::UMat ret = reinterpret_cast<cv::Stitcher*>(instance)->matchingMask();
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Stitcher::setMatchingMask
// as:     cv::Stitcher::setMatchingMask (method) cv::Stitcher . setMatchingMask
// Arg ARG cv::UMat (boxed) mask= cv::UMat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_Stitcher_setMatchingMask_UMat(void* instance, void* mask) {
    try {
        reinterpret_cast<cv::Stitcher*>(instance)->setMatchingMask(*reinterpret_cast<const cv::UMat*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Stitcher::estimateTransform
// as:     cv::Stitcher::estimateTransform (method) cv::Stitcher . estimateTransform
// Arg ARG cv::_InputArray (boxed) images= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) masks= cv::_InputArray (boxed) = noArray()
// Return value: Stitcher::Status (enum)
cv_return_value_Stitcher_Status cv_Stitcher_estimateTransform__InputArray__InputArray(void* instance, void* images, void* masks) {
    try {
        Stitcher::Status ret = reinterpret_cast<cv::Stitcher*>(instance)->estimateTransform(*reinterpret_cast<const cv::_InputArray*>(images), *reinterpret_cast<const cv::_InputArray*>(masks));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_Stitcher_Status)
}

// parsed: cv::Stitcher::composePanorama
// as:     cv::Stitcher::composePanorama (method) cv::Stitcher . composePanorama
// Arg ARG cv::_OutputArray (boxed) pano= cv::_OutputArray (boxed) = 
// Return value: Stitcher::Status (enum)
cv_return_value_Stitcher_Status cv_Stitcher_composePanorama__OutputArray(void* instance, void* pano) {
    try {
        Stitcher::Status ret = reinterpret_cast<cv::Stitcher*>(instance)->composePanorama(*reinterpret_cast<cv::_OutputArray*>(pano));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_Stitcher_Status)
}

// parsed: cv::Stitcher::composePanorama
// as:     cv::Stitcher::composePanorama (method) cv::Stitcher . composePanorama
// Arg ARG cv::_InputArray (boxed) images= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) pano= cv::_OutputArray (boxed) = 
// Return value: Stitcher::Status (enum)
cv_return_value_Stitcher_Status cv_Stitcher_composePanorama__InputArray__OutputArray(void* instance, void* images, void* pano) {
    try {
        Stitcher::Status ret = reinterpret_cast<cv::Stitcher*>(instance)->composePanorama(*reinterpret_cast<const cv::_InputArray*>(images), *reinterpret_cast<cv::_OutputArray*>(pano));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_Stitcher_Status)
}

// parsed: cv::Stitcher::stitch
// as:     cv::Stitcher::stitch (method) cv::Stitcher . stitch
// Arg ARG cv::_InputArray (boxed) images= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) pano= cv::_OutputArray (boxed) = 
// Return value: Stitcher::Status (enum)
cv_return_value_Stitcher_Status cv_Stitcher_stitch__InputArray__OutputArray(void* instance, void* images, void* pano) {
    try {
        Stitcher::Status ret = reinterpret_cast<cv::Stitcher*>(instance)->stitch(*reinterpret_cast<const cv::_InputArray*>(images), *reinterpret_cast<cv::_OutputArray*>(pano));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_Stitcher_Status)
}

// parsed: cv::Stitcher::stitch
// as:     cv::Stitcher::stitch (method) cv::Stitcher . stitch
// Arg ARG cv::_InputArray (boxed) images= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) masks= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) pano= cv::_OutputArray (boxed) = 
// Return value: Stitcher::Status (enum)
cv_return_value_Stitcher_Status cv_Stitcher_stitch__InputArray__InputArray__OutputArray(void* instance, void* images, void* masks, void* pano) {
    try {
        Stitcher::Status ret = reinterpret_cast<cv::Stitcher*>(instance)->stitch(*reinterpret_cast<const cv::_InputArray*>(images), *reinterpret_cast<const cv::_InputArray*>(masks), *reinterpret_cast<cv::_OutputArray*>(pano));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_Stitcher_Status)
}

// parsed: cv::Stitcher::component
// as:     cv::Stitcher::component (method) cv::Stitcher . component
// Return value: Vector[Primitive(int)]
cv_return_value_void_X cv_Stitcher_component_const(void* instance) {
    try {
        std::vector<int> ret = reinterpret_cast<cv::Stitcher*>(instance)->component();
        return { Error::Code::StsOk, NULL, new std::vector<int>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Stitcher::workScale
// as:     cv::Stitcher::workScale (method) cv::Stitcher . workScale
// Return value: Primitive(double)
cv_return_value_double cv_Stitcher_workScale_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::Stitcher*>(instance)->workScale();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::Stitcher::resultMask
// as:     cv::Stitcher::resultMask (method) cv::Stitcher . resultMask
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_Stitcher_resultMask_const(void* instance) {
    try {
        cv::UMat ret = reinterpret_cast<cv::Stitcher*>(instance)->resultMask();
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::TransverseMercatorWarper
void cv_TransverseMercatorWarper_delete(void* instance) {
    delete reinterpret_cast<cv::TransverseMercatorWarper*>(instance);
}


} // extern "C"

