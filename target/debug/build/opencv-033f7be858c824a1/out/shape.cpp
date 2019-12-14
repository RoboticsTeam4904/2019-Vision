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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/shape.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/shape/emdL1.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/shape/hist_cost.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/shape/shape.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/shape/shape_distance.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/shape/shape_transformer.hpp"

extern "C" {

// parsed: cv::EMDL1
// as:     cv::EMDL1 (function)
// Arg ARG cv::_InputArray (boxed) signature1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) signature2= cv::_InputArray (boxed) = 
// Return value: Primitive(float)
cv_return_value_float cv_EMDL1__InputArray__InputArray(void* signature1, void* signature2) {
    try {
        float ret = cv::EMDL1(*reinterpret_cast<const cv::_InputArray*>(signature1), *reinterpret_cast<const cv::_InputArray*>(signature2));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::createAffineTransformer
// as:     cv::createAffineTransformer (function)
// Arg ARG Primitive(bool) fullAffine= Primitive(bool) = 
// Return value: SmartPtr[cv::AffineTransformer (boxed)]
cv_return_value_void_X cv_createAffineTransformer_bool(bool fullAffine) {
    try {
        Ptr<cv::AffineTransformer> ret = cv::createAffineTransformer(fullAffine);
        return { Error::Code::StsOk, NULL, new Ptr<cv::AffineTransformer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::createChiHistogramCostExtractor
// as:     cv::createChiHistogramCostExtractor (function)
// Arg ARG Primitive(int) nDummies= Primitive(int) = 25
// Arg ARG Primitive(float) defaultCost= Primitive(float) = 0.2f
// Return value: SmartPtr[cv::HistogramCostExtractor (boxed)]
cv_return_value_void_X cv_createChiHistogramCostExtractor_int_float(int nDummies, float defaultCost) {
    try {
        Ptr<cv::HistogramCostExtractor> ret = cv::createChiHistogramCostExtractor(nDummies, defaultCost);
        return { Error::Code::StsOk, NULL, new Ptr<cv::HistogramCostExtractor>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::createEMDHistogramCostExtractor
// as:     cv::createEMDHistogramCostExtractor (function)
// Arg ARG Primitive(int) flag= Primitive(int) = DIST_L2
// Arg ARG Primitive(int) nDummies= Primitive(int) = 25
// Arg ARG Primitive(float) defaultCost= Primitive(float) = 0.2f
// Return value: SmartPtr[cv::HistogramCostExtractor (boxed)]
cv_return_value_void_X cv_createEMDHistogramCostExtractor_int_int_float(int flag, int nDummies, float defaultCost) {
    try {
        Ptr<cv::HistogramCostExtractor> ret = cv::createEMDHistogramCostExtractor(flag, nDummies, defaultCost);
        return { Error::Code::StsOk, NULL, new Ptr<cv::HistogramCostExtractor>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::createEMDL1HistogramCostExtractor
// as:     cv::createEMDL1HistogramCostExtractor (function)
// Arg ARG Primitive(int) nDummies= Primitive(int) = 25
// Arg ARG Primitive(float) defaultCost= Primitive(float) = 0.2f
// Return value: SmartPtr[cv::HistogramCostExtractor (boxed)]
cv_return_value_void_X cv_createEMDL1HistogramCostExtractor_int_float(int nDummies, float defaultCost) {
    try {
        Ptr<cv::HistogramCostExtractor> ret = cv::createEMDL1HistogramCostExtractor(nDummies, defaultCost);
        return { Error::Code::StsOk, NULL, new Ptr<cv::HistogramCostExtractor>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::createHausdorffDistanceExtractor
// as:     cv::createHausdorffDistanceExtractor (function)
// Arg ARG Primitive(int) distanceFlag= Primitive(int) = cv::NORM_L2
// Arg ARG Primitive(float) rankProp= Primitive(float) = 0.6f
// Return value: SmartPtr[cv::HausdorffDistanceExtractor (boxed)]
cv_return_value_void_X cv_createHausdorffDistanceExtractor_int_float(int distanceFlag, float rankProp) {
    try {
        Ptr<cv::HausdorffDistanceExtractor> ret = cv::createHausdorffDistanceExtractor(distanceFlag, rankProp);
        return { Error::Code::StsOk, NULL, new Ptr<cv::HausdorffDistanceExtractor>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::createNormHistogramCostExtractor
// as:     cv::createNormHistogramCostExtractor (function)
// Arg ARG Primitive(int) flag= Primitive(int) = DIST_L2
// Arg ARG Primitive(int) nDummies= Primitive(int) = 25
// Arg ARG Primitive(float) defaultCost= Primitive(float) = 0.2f
// Return value: SmartPtr[cv::HistogramCostExtractor (boxed)]
cv_return_value_void_X cv_createNormHistogramCostExtractor_int_int_float(int flag, int nDummies, float defaultCost) {
    try {
        Ptr<cv::HistogramCostExtractor> ret = cv::createNormHistogramCostExtractor(flag, nDummies, defaultCost);
        return { Error::Code::StsOk, NULL, new Ptr<cv::HistogramCostExtractor>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::createThinPlateSplineShapeTransformer
// as:     cv::createThinPlateSplineShapeTransformer (function)
// Arg ARG Primitive(double) regularizationParameter= Primitive(double) = 0
// Return value: SmartPtr[cv::ThinPlateSplineShapeTransformer (boxed)]
cv_return_value_void_X cv_createThinPlateSplineShapeTransformer_double(double regularizationParameter) {
    try {
        Ptr<cv::ThinPlateSplineShapeTransformer> ret = cv::createThinPlateSplineShapeTransformer(regularizationParameter);
        return { Error::Code::StsOk, NULL, new Ptr<cv::ThinPlateSplineShapeTransformer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::AffineTransformer::setFullAffine
// as:     cv::AffineTransformer::setFullAffine (method) cv::AffineTransformer (trait) . setFullAffine
// Arg ARG Primitive(bool) fullAffine= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_AffineTransformer_setFullAffine_bool(void* instance, bool fullAffine) {
    try {
        reinterpret_cast<cv::AffineTransformer*>(instance)->setFullAffine(fullAffine);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AffineTransformer::getFullAffine
// as:     cv::AffineTransformer::getFullAffine (method) cv::AffineTransformer (trait) . getFullAffine
// Return value: Primitive(bool)
cv_return_value_bool cv_AffineTransformer_getFullAffine_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::AffineTransformer*>(instance)->getFullAffine();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// boxed class: cv::ChiHistogramCostExtractor
void cv_ChiHistogramCostExtractor_delete(void* instance) {
    delete reinterpret_cast<cv::ChiHistogramCostExtractor*>(instance);
}
// parsed: cv::EMDHistogramCostExtractor::setNormFlag
// as:     cv::EMDHistogramCostExtractor::setNormFlag (method) cv::EMDHistogramCostExtractor (trait) . setNormFlag
// Arg ARG Primitive(int) flag= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_EMDHistogramCostExtractor_setNormFlag_int(void* instance, int flag) {
    try {
        reinterpret_cast<cv::EMDHistogramCostExtractor*>(instance)->setNormFlag(flag);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::EMDHistogramCostExtractor::getNormFlag
// as:     cv::EMDHistogramCostExtractor::getNormFlag (method) cv::EMDHistogramCostExtractor (trait) . getNormFlag
// Return value: Primitive(int)
cv_return_value_int cv_EMDHistogramCostExtractor_getNormFlag_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::EMDHistogramCostExtractor*>(instance)->getNormFlag();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// boxed class: cv::EMDL1HistogramCostExtractor
void cv_EMDL1HistogramCostExtractor_delete(void* instance) {
    delete reinterpret_cast<cv::EMDL1HistogramCostExtractor*>(instance);
}
// parsed: cv::HausdorffDistanceExtractor::setDistanceFlag
// as:     cv::HausdorffDistanceExtractor::setDistanceFlag (method) cv::HausdorffDistanceExtractor (trait) . setDistanceFlag
// Arg ARG Primitive(int) distanceFlag= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_HausdorffDistanceExtractor_setDistanceFlag_int(void* instance, int distanceFlag) {
    try {
        reinterpret_cast<cv::HausdorffDistanceExtractor*>(instance)->setDistanceFlag(distanceFlag);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HausdorffDistanceExtractor::getDistanceFlag
// as:     cv::HausdorffDistanceExtractor::getDistanceFlag (method) cv::HausdorffDistanceExtractor (trait) . getDistanceFlag
// Return value: Primitive(int)
cv_return_value_int cv_HausdorffDistanceExtractor_getDistanceFlag_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::HausdorffDistanceExtractor*>(instance)->getDistanceFlag();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::HausdorffDistanceExtractor::setRankProportion
// as:     cv::HausdorffDistanceExtractor::setRankProportion (method) cv::HausdorffDistanceExtractor (trait) . setRankProportion
// Arg ARG Primitive(float) rankProportion= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_HausdorffDistanceExtractor_setRankProportion_float(void* instance, float rankProportion) {
    try {
        reinterpret_cast<cv::HausdorffDistanceExtractor*>(instance)->setRankProportion(rankProportion);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HausdorffDistanceExtractor::getRankProportion
// as:     cv::HausdorffDistanceExtractor::getRankProportion (method) cv::HausdorffDistanceExtractor (trait) . getRankProportion
// Return value: Primitive(float)
cv_return_value_float cv_HausdorffDistanceExtractor_getRankProportion_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::HausdorffDistanceExtractor*>(instance)->getRankProportion();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::HistogramCostExtractor::buildCostMatrix
// as:     cv::HistogramCostExtractor::buildCostMatrix (method) cv::HistogramCostExtractor (trait) . buildCostMatrix
// Arg ARG cv::_InputArray (boxed) descriptors1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) descriptors2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) costMatrix= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_HistogramCostExtractor_buildCostMatrix__InputArray__InputArray__OutputArray(void* instance, void* descriptors1, void* descriptors2, void* costMatrix) {
    try {
        reinterpret_cast<cv::HistogramCostExtractor*>(instance)->buildCostMatrix(*reinterpret_cast<const cv::_InputArray*>(descriptors1), *reinterpret_cast<const cv::_InputArray*>(descriptors2), *reinterpret_cast<cv::_OutputArray*>(costMatrix));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HistogramCostExtractor::setNDummies
// as:     cv::HistogramCostExtractor::setNDummies (method) cv::HistogramCostExtractor (trait) . setNDummies
// Arg ARG Primitive(int) nDummies= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_HistogramCostExtractor_setNDummies_int(void* instance, int nDummies) {
    try {
        reinterpret_cast<cv::HistogramCostExtractor*>(instance)->setNDummies(nDummies);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HistogramCostExtractor::getNDummies
// as:     cv::HistogramCostExtractor::getNDummies (method) cv::HistogramCostExtractor (trait) . getNDummies
// Return value: Primitive(int)
cv_return_value_int cv_HistogramCostExtractor_getNDummies_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::HistogramCostExtractor*>(instance)->getNDummies();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::HistogramCostExtractor::setDefaultCost
// as:     cv::HistogramCostExtractor::setDefaultCost (method) cv::HistogramCostExtractor (trait) . setDefaultCost
// Arg ARG Primitive(float) defaultCost= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_HistogramCostExtractor_setDefaultCost_float(void* instance, float defaultCost) {
    try {
        reinterpret_cast<cv::HistogramCostExtractor*>(instance)->setDefaultCost(defaultCost);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::HistogramCostExtractor::getDefaultCost
// as:     cv::HistogramCostExtractor::getDefaultCost (method) cv::HistogramCostExtractor (trait) . getDefaultCost
// Return value: Primitive(float)
cv_return_value_float cv_HistogramCostExtractor_getDefaultCost_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::HistogramCostExtractor*>(instance)->getDefaultCost();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::NormHistogramCostExtractor::setNormFlag
// as:     cv::NormHistogramCostExtractor::setNormFlag (method) cv::NormHistogramCostExtractor (trait) . setNormFlag
// Arg ARG Primitive(int) flag= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_NormHistogramCostExtractor_setNormFlag_int(void* instance, int flag) {
    try {
        reinterpret_cast<cv::NormHistogramCostExtractor*>(instance)->setNormFlag(flag);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::NormHistogramCostExtractor::getNormFlag
// as:     cv::NormHistogramCostExtractor::getNormFlag (method) cv::NormHistogramCostExtractor (trait) . getNormFlag
// Return value: Primitive(int)
cv_return_value_int cv_NormHistogramCostExtractor_getNormFlag_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::NormHistogramCostExtractor*>(instance)->getNormFlag();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ShapeContextDistanceExtractor::setAngularBins
// as:     cv::ShapeContextDistanceExtractor::setAngularBins (method) cv::ShapeContextDistanceExtractor (trait) . setAngularBins
// Arg ARG Primitive(int) nAngularBins= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ShapeContextDistanceExtractor_setAngularBins_int(void* instance, int nAngularBins) {
    try {
        reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->setAngularBins(nAngularBins);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ShapeContextDistanceExtractor::getAngularBins
// as:     cv::ShapeContextDistanceExtractor::getAngularBins (method) cv::ShapeContextDistanceExtractor (trait) . getAngularBins
// Return value: Primitive(int)
cv_return_value_int cv_ShapeContextDistanceExtractor_getAngularBins_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->getAngularBins();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ShapeContextDistanceExtractor::setRadialBins
// as:     cv::ShapeContextDistanceExtractor::setRadialBins (method) cv::ShapeContextDistanceExtractor (trait) . setRadialBins
// Arg ARG Primitive(int) nRadialBins= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ShapeContextDistanceExtractor_setRadialBins_int(void* instance, int nRadialBins) {
    try {
        reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->setRadialBins(nRadialBins);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ShapeContextDistanceExtractor::getRadialBins
// as:     cv::ShapeContextDistanceExtractor::getRadialBins (method) cv::ShapeContextDistanceExtractor (trait) . getRadialBins
// Return value: Primitive(int)
cv_return_value_int cv_ShapeContextDistanceExtractor_getRadialBins_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->getRadialBins();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ShapeContextDistanceExtractor::setInnerRadius
// as:     cv::ShapeContextDistanceExtractor::setInnerRadius (method) cv::ShapeContextDistanceExtractor (trait) . setInnerRadius
// Arg ARG Primitive(float) innerRadius= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_ShapeContextDistanceExtractor_setInnerRadius_float(void* instance, float innerRadius) {
    try {
        reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->setInnerRadius(innerRadius);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ShapeContextDistanceExtractor::getInnerRadius
// as:     cv::ShapeContextDistanceExtractor::getInnerRadius (method) cv::ShapeContextDistanceExtractor (trait) . getInnerRadius
// Return value: Primitive(float)
cv_return_value_float cv_ShapeContextDistanceExtractor_getInnerRadius_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->getInnerRadius();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::ShapeContextDistanceExtractor::setOuterRadius
// as:     cv::ShapeContextDistanceExtractor::setOuterRadius (method) cv::ShapeContextDistanceExtractor (trait) . setOuterRadius
// Arg ARG Primitive(float) outerRadius= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_ShapeContextDistanceExtractor_setOuterRadius_float(void* instance, float outerRadius) {
    try {
        reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->setOuterRadius(outerRadius);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ShapeContextDistanceExtractor::getOuterRadius
// as:     cv::ShapeContextDistanceExtractor::getOuterRadius (method) cv::ShapeContextDistanceExtractor (trait) . getOuterRadius
// Return value: Primitive(float)
cv_return_value_float cv_ShapeContextDistanceExtractor_getOuterRadius_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->getOuterRadius();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::ShapeContextDistanceExtractor::setRotationInvariant
// as:     cv::ShapeContextDistanceExtractor::setRotationInvariant (method) cv::ShapeContextDistanceExtractor (trait) . setRotationInvariant
// Arg ARG Primitive(bool) rotationInvariant= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_ShapeContextDistanceExtractor_setRotationInvariant_bool(void* instance, bool rotationInvariant) {
    try {
        reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->setRotationInvariant(rotationInvariant);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ShapeContextDistanceExtractor::getRotationInvariant
// as:     cv::ShapeContextDistanceExtractor::getRotationInvariant (method) cv::ShapeContextDistanceExtractor (trait) . getRotationInvariant
// Return value: Primitive(bool)
cv_return_value_bool cv_ShapeContextDistanceExtractor_getRotationInvariant_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->getRotationInvariant();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ShapeContextDistanceExtractor::setShapeContextWeight
// as:     cv::ShapeContextDistanceExtractor::setShapeContextWeight (method) cv::ShapeContextDistanceExtractor (trait) . setShapeContextWeight
// Arg ARG Primitive(float) shapeContextWeight= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_ShapeContextDistanceExtractor_setShapeContextWeight_float(void* instance, float shapeContextWeight) {
    try {
        reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->setShapeContextWeight(shapeContextWeight);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ShapeContextDistanceExtractor::getShapeContextWeight
// as:     cv::ShapeContextDistanceExtractor::getShapeContextWeight (method) cv::ShapeContextDistanceExtractor (trait) . getShapeContextWeight
// Return value: Primitive(float)
cv_return_value_float cv_ShapeContextDistanceExtractor_getShapeContextWeight_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->getShapeContextWeight();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::ShapeContextDistanceExtractor::setImageAppearanceWeight
// as:     cv::ShapeContextDistanceExtractor::setImageAppearanceWeight (method) cv::ShapeContextDistanceExtractor (trait) . setImageAppearanceWeight
// Arg ARG Primitive(float) imageAppearanceWeight= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_ShapeContextDistanceExtractor_setImageAppearanceWeight_float(void* instance, float imageAppearanceWeight) {
    try {
        reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->setImageAppearanceWeight(imageAppearanceWeight);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ShapeContextDistanceExtractor::getImageAppearanceWeight
// as:     cv::ShapeContextDistanceExtractor::getImageAppearanceWeight (method) cv::ShapeContextDistanceExtractor (trait) . getImageAppearanceWeight
// Return value: Primitive(float)
cv_return_value_float cv_ShapeContextDistanceExtractor_getImageAppearanceWeight_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->getImageAppearanceWeight();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::ShapeContextDistanceExtractor::setBendingEnergyWeight
// as:     cv::ShapeContextDistanceExtractor::setBendingEnergyWeight (method) cv::ShapeContextDistanceExtractor (trait) . setBendingEnergyWeight
// Arg ARG Primitive(float) bendingEnergyWeight= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_ShapeContextDistanceExtractor_setBendingEnergyWeight_float(void* instance, float bendingEnergyWeight) {
    try {
        reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->setBendingEnergyWeight(bendingEnergyWeight);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ShapeContextDistanceExtractor::getBendingEnergyWeight
// as:     cv::ShapeContextDistanceExtractor::getBendingEnergyWeight (method) cv::ShapeContextDistanceExtractor (trait) . getBendingEnergyWeight
// Return value: Primitive(float)
cv_return_value_float cv_ShapeContextDistanceExtractor_getBendingEnergyWeight_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->getBendingEnergyWeight();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::ShapeContextDistanceExtractor::setImages
// as:     cv::ShapeContextDistanceExtractor::setImages (method) cv::ShapeContextDistanceExtractor (trait) . setImages
// Arg ARG cv::_InputArray (boxed) image1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) image2= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_ShapeContextDistanceExtractor_setImages__InputArray__InputArray(void* instance, void* image1, void* image2) {
    try {
        reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->setImages(*reinterpret_cast<const cv::_InputArray*>(image1), *reinterpret_cast<const cv::_InputArray*>(image2));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ShapeContextDistanceExtractor::getImages
// as:     cv::ShapeContextDistanceExtractor::getImages (method) cv::ShapeContextDistanceExtractor (trait) . getImages
// Arg ARG cv::_OutputArray (boxed) image1= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) image2= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_ShapeContextDistanceExtractor_getImages_const__OutputArray__OutputArray(void* instance, void* image1, void* image2) {
    try {
        reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->getImages(*reinterpret_cast<cv::_OutputArray*>(image1), *reinterpret_cast<cv::_OutputArray*>(image2));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ShapeContextDistanceExtractor::setIterations
// as:     cv::ShapeContextDistanceExtractor::setIterations (method) cv::ShapeContextDistanceExtractor (trait) . setIterations
// Arg ARG Primitive(int) iterations= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ShapeContextDistanceExtractor_setIterations_int(void* instance, int iterations) {
    try {
        reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->setIterations(iterations);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ShapeContextDistanceExtractor::getIterations
// as:     cv::ShapeContextDistanceExtractor::getIterations (method) cv::ShapeContextDistanceExtractor (trait) . getIterations
// Return value: Primitive(int)
cv_return_value_int cv_ShapeContextDistanceExtractor_getIterations_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->getIterations();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ShapeContextDistanceExtractor::setCostExtractor
// as:     cv::ShapeContextDistanceExtractor::setCostExtractor (method) cv::ShapeContextDistanceExtractor (trait) . setCostExtractor
// Arg ARG SmartPtr[cv::HistogramCostExtractor (boxed)] comparer= SmartPtr[cv::HistogramCostExtractor (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_ShapeContextDistanceExtractor_setCostExtractor_PtrOfHistogramCostExtractor(void* instance, void* comparer) {
    try {
        reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->setCostExtractor(*reinterpret_cast<Ptr<cv::HistogramCostExtractor>*>(comparer));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ShapeContextDistanceExtractor::getCostExtractor
// as:     cv::ShapeContextDistanceExtractor::getCostExtractor (method) cv::ShapeContextDistanceExtractor (trait) . getCostExtractor
// Return value: SmartPtr[cv::HistogramCostExtractor (boxed)]
cv_return_value_void_X cv_ShapeContextDistanceExtractor_getCostExtractor_const(void* instance) {
    try {
        Ptr<cv::HistogramCostExtractor> ret = reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->getCostExtractor();
        return { Error::Code::StsOk, NULL, new Ptr<cv::HistogramCostExtractor>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ShapeContextDistanceExtractor::setStdDev
// as:     cv::ShapeContextDistanceExtractor::setStdDev (method) cv::ShapeContextDistanceExtractor (trait) . setStdDev
// Arg ARG Primitive(float) sigma= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_ShapeContextDistanceExtractor_setStdDev_float(void* instance, float sigma) {
    try {
        reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->setStdDev(sigma);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ShapeContextDistanceExtractor::getStdDev
// as:     cv::ShapeContextDistanceExtractor::getStdDev (method) cv::ShapeContextDistanceExtractor (trait) . getStdDev
// Return value: Primitive(float)
cv_return_value_float cv_ShapeContextDistanceExtractor_getStdDev_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::ShapeContextDistanceExtractor*>(instance)->getStdDev();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::ShapeDistanceExtractor::computeDistance
// as:     cv::ShapeDistanceExtractor::computeDistance (method) cv::ShapeDistanceExtractor (trait) . computeDistance
// Arg ARG cv::_InputArray (boxed) contour1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) contour2= cv::_InputArray (boxed) = 
// Return value: Primitive(float)
cv_return_value_float cv_ShapeDistanceExtractor_computeDistance__InputArray__InputArray(void* instance, void* contour1, void* contour2) {
    try {
        float ret = reinterpret_cast<cv::ShapeDistanceExtractor*>(instance)->computeDistance(*reinterpret_cast<const cv::_InputArray*>(contour1), *reinterpret_cast<const cv::_InputArray*>(contour2));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::ShapeTransformer::estimateTransformation
// as:     cv::ShapeTransformer::estimateTransformation (method) cv::ShapeTransformer (trait) . estimateTransformation
// Arg ARG cv::_InputArray (boxed) transformingShape= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) targetShape= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::DMatch (simple)] matches= Vector[cv::DMatch (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_ShapeTransformer_estimateTransformation__InputArray__InputArray_VectorOfDMatch(void* instance, void* transformingShape, void* targetShape, void* matches) {
    try {
        reinterpret_cast<cv::ShapeTransformer*>(instance)->estimateTransformation(*reinterpret_cast<const cv::_InputArray*>(transformingShape), *reinterpret_cast<const cv::_InputArray*>(targetShape), *reinterpret_cast<std::vector<cv::DMatch>*>(matches));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ShapeTransformer::applyTransformation
// as:     cv::ShapeTransformer::applyTransformation (method) cv::ShapeTransformer (trait) . applyTransformation
// Arg ARG cv::_InputArray (boxed) input= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) output= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(float)
cv_return_value_float cv_ShapeTransformer_applyTransformation__InputArray__OutputArray(void* instance, void* input, void* output) {
    try {
        float ret = reinterpret_cast<cv::ShapeTransformer*>(instance)->applyTransformation(*reinterpret_cast<const cv::_InputArray*>(input), *reinterpret_cast<cv::_OutputArray*>(output));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::ShapeTransformer::warpImage
// as:     cv::ShapeTransformer::warpImage (method) cv::ShapeTransformer (trait) . warpImage
// Arg ARG cv::_InputArray (boxed) transformingImage= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) output= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = INTER_LINEAR
// Arg ARG Primitive(int) borderMode= Primitive(int) = BORDER_CONSTANT
// Arg ARG cv::Scalar (simple) borderValue= cv::Scalar (simple) = Scalar()
// Return value: Primitive(void)
cv_return_value_void cv_ShapeTransformer_warpImage_const__InputArray__OutputArray_int_int_Scalar(void* instance, void* transformingImage, void* output, int flags, int borderMode, ScalarWrapper borderValue) {
    try {
        reinterpret_cast<cv::ShapeTransformer*>(instance)->warpImage(*reinterpret_cast<const cv::_InputArray*>(transformingImage), *reinterpret_cast<cv::_OutputArray*>(output), flags, borderMode, *reinterpret_cast<const cv::Scalar*>(&borderValue));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ThinPlateSplineShapeTransformer::setRegularizationParameter
// as:     cv::ThinPlateSplineShapeTransformer::setRegularizationParameter (method) cv::ThinPlateSplineShapeTransformer (trait) . setRegularizationParameter
// Arg ARG Primitive(double) beta= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_ThinPlateSplineShapeTransformer_setRegularizationParameter_double(void* instance, double beta) {
    try {
        reinterpret_cast<cv::ThinPlateSplineShapeTransformer*>(instance)->setRegularizationParameter(beta);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ThinPlateSplineShapeTransformer::getRegularizationParameter
// as:     cv::ThinPlateSplineShapeTransformer::getRegularizationParameter (method) cv::ThinPlateSplineShapeTransformer (trait) . getRegularizationParameter
// Return value: Primitive(double)
cv_return_value_double cv_ThinPlateSplineShapeTransformer_getRegularizationParameter_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::ThinPlateSplineShapeTransformer*>(instance)->getRegularizationParameter();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}



} // extern "C"

