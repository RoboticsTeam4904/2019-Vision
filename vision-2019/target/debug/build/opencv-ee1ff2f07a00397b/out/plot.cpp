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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/plot.hpp"

extern "C" {

// parsed: cv::plot::Plot2d::setMinX
// as:     cv::plot::Plot2d::setMinX (method) cv::plot::Plot2d (trait) . setMinX
// Arg ARG Primitive(double) _plotMinX= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_plot_Plot2d_setMinX_double(void* instance, double _plotMinX) {
    try {
        reinterpret_cast<cv::plot::Plot2d*>(instance)->setMinX(_plotMinX);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::plot::Plot2d::setMinY
// as:     cv::plot::Plot2d::setMinY (method) cv::plot::Plot2d (trait) . setMinY
// Arg ARG Primitive(double) _plotMinY= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_plot_Plot2d_setMinY_double(void* instance, double _plotMinY) {
    try {
        reinterpret_cast<cv::plot::Plot2d*>(instance)->setMinY(_plotMinY);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::plot::Plot2d::setMaxX
// as:     cv::plot::Plot2d::setMaxX (method) cv::plot::Plot2d (trait) . setMaxX
// Arg ARG Primitive(double) _plotMaxX= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_plot_Plot2d_setMaxX_double(void* instance, double _plotMaxX) {
    try {
        reinterpret_cast<cv::plot::Plot2d*>(instance)->setMaxX(_plotMaxX);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::plot::Plot2d::setMaxY
// as:     cv::plot::Plot2d::setMaxY (method) cv::plot::Plot2d (trait) . setMaxY
// Arg ARG Primitive(double) _plotMaxY= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_plot_Plot2d_setMaxY_double(void* instance, double _plotMaxY) {
    try {
        reinterpret_cast<cv::plot::Plot2d*>(instance)->setMaxY(_plotMaxY);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::plot::Plot2d::setPlotLineWidth
// as:     cv::plot::Plot2d::setPlotLineWidth (method) cv::plot::Plot2d (trait) . setPlotLineWidth
// Arg ARG Primitive(int) _plotLineWidth= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_plot_Plot2d_setPlotLineWidth_int(void* instance, int _plotLineWidth) {
    try {
        reinterpret_cast<cv::plot::Plot2d*>(instance)->setPlotLineWidth(_plotLineWidth);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::plot::Plot2d::setNeedPlotLine
// as:     cv::plot::Plot2d::setNeedPlotLine (method) cv::plot::Plot2d (trait) . setNeedPlotLine
// Arg ARG Primitive(bool) _needPlotLine= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_plot_Plot2d_setNeedPlotLine_bool(void* instance, bool _needPlotLine) {
    try {
        reinterpret_cast<cv::plot::Plot2d*>(instance)->setNeedPlotLine(_needPlotLine);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::plot::Plot2d::setPlotLineColor
// as:     cv::plot::Plot2d::setPlotLineColor (method) cv::plot::Plot2d (trait) . setPlotLineColor
// Arg ARG cv::Scalar (simple) _plotLineColor= cv::Scalar (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_plot_Plot2d_setPlotLineColor_Scalar(void* instance, ScalarWrapper _plotLineColor) {
    try {
        reinterpret_cast<cv::plot::Plot2d*>(instance)->setPlotLineColor(*reinterpret_cast<cv::Scalar*>(&_plotLineColor));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::plot::Plot2d::setPlotBackgroundColor
// as:     cv::plot::Plot2d::setPlotBackgroundColor (method) cv::plot::Plot2d (trait) . setPlotBackgroundColor
// Arg ARG cv::Scalar (simple) _plotBackgroundColor= cv::Scalar (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_plot_Plot2d_setPlotBackgroundColor_Scalar(void* instance, ScalarWrapper _plotBackgroundColor) {
    try {
        reinterpret_cast<cv::plot::Plot2d*>(instance)->setPlotBackgroundColor(*reinterpret_cast<cv::Scalar*>(&_plotBackgroundColor));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::plot::Plot2d::setPlotAxisColor
// as:     cv::plot::Plot2d::setPlotAxisColor (method) cv::plot::Plot2d (trait) . setPlotAxisColor
// Arg ARG cv::Scalar (simple) _plotAxisColor= cv::Scalar (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_plot_Plot2d_setPlotAxisColor_Scalar(void* instance, ScalarWrapper _plotAxisColor) {
    try {
        reinterpret_cast<cv::plot::Plot2d*>(instance)->setPlotAxisColor(*reinterpret_cast<cv::Scalar*>(&_plotAxisColor));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::plot::Plot2d::setPlotGridColor
// as:     cv::plot::Plot2d::setPlotGridColor (method) cv::plot::Plot2d (trait) . setPlotGridColor
// Arg ARG cv::Scalar (simple) _plotGridColor= cv::Scalar (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_plot_Plot2d_setPlotGridColor_Scalar(void* instance, ScalarWrapper _plotGridColor) {
    try {
        reinterpret_cast<cv::plot::Plot2d*>(instance)->setPlotGridColor(*reinterpret_cast<cv::Scalar*>(&_plotGridColor));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::plot::Plot2d::setPlotTextColor
// as:     cv::plot::Plot2d::setPlotTextColor (method) cv::plot::Plot2d (trait) . setPlotTextColor
// Arg ARG cv::Scalar (simple) _plotTextColor= cv::Scalar (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_plot_Plot2d_setPlotTextColor_Scalar(void* instance, ScalarWrapper _plotTextColor) {
    try {
        reinterpret_cast<cv::plot::Plot2d*>(instance)->setPlotTextColor(*reinterpret_cast<cv::Scalar*>(&_plotTextColor));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::plot::Plot2d::setPlotSize
// as:     cv::plot::Plot2d::setPlotSize (method) cv::plot::Plot2d (trait) . setPlotSize
// Arg ARG Primitive(int) _plotSizeWidth= Primitive(int) = 
// Arg ARG Primitive(int) _plotSizeHeight= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_plot_Plot2d_setPlotSize_int_int(void* instance, int _plotSizeWidth, int _plotSizeHeight) {
    try {
        reinterpret_cast<cv::plot::Plot2d*>(instance)->setPlotSize(_plotSizeWidth, _plotSizeHeight);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::plot::Plot2d::setShowGrid
// as:     cv::plot::Plot2d::setShowGrid (method) cv::plot::Plot2d (trait) . setShowGrid
// Arg ARG Primitive(bool) needShowGrid= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_plot_Plot2d_setShowGrid_bool(void* instance, bool needShowGrid) {
    try {
        reinterpret_cast<cv::plot::Plot2d*>(instance)->setShowGrid(needShowGrid);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::plot::Plot2d::setShowText
// as:     cv::plot::Plot2d::setShowText (method) cv::plot::Plot2d (trait) . setShowText
// Arg ARG Primitive(bool) needShowText= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_plot_Plot2d_setShowText_bool(void* instance, bool needShowText) {
    try {
        reinterpret_cast<cv::plot::Plot2d*>(instance)->setShowText(needShowText);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::plot::Plot2d::setGridLinesNumber
// as:     cv::plot::Plot2d::setGridLinesNumber (method) cv::plot::Plot2d (trait) . setGridLinesNumber
// Arg ARG Primitive(int) gridLinesNumber= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_plot_Plot2d_setGridLinesNumber_int(void* instance, int gridLinesNumber) {
    try {
        reinterpret_cast<cv::plot::Plot2d*>(instance)->setGridLinesNumber(gridLinesNumber);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::plot::Plot2d::setInvertOrientation
// as:     cv::plot::Plot2d::setInvertOrientation (method) cv::plot::Plot2d (trait) . setInvertOrientation
// Arg ARG Primitive(bool) _invertOrientation= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_plot_Plot2d_setInvertOrientation_bool(void* instance, bool _invertOrientation) {
    try {
        reinterpret_cast<cv::plot::Plot2d*>(instance)->setInvertOrientation(_invertOrientation);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::plot::Plot2d::setPointIdxToPrint
// as:     cv::plot::Plot2d::setPointIdxToPrint (method) cv::plot::Plot2d (trait) . setPointIdxToPrint
// Arg ARG Primitive(int) pointIdx= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_plot_Plot2d_setPointIdxToPrint_int(void* instance, int pointIdx) {
    try {
        reinterpret_cast<cv::plot::Plot2d*>(instance)->setPointIdxToPrint(pointIdx);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::plot::Plot2d::render
// as:     cv::plot::Plot2d::render (method) cv::plot::Plot2d (trait) . render
// Arg ARG cv::_OutputArray (boxed) _plotResult= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_plot_Plot2d_render__OutputArray(void* instance, void* _plotResult) {
    try {
        reinterpret_cast<cv::plot::Plot2d*>(instance)->render(*reinterpret_cast<cv::_OutputArray*>(_plotResult));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::plot::Plot2d::create
// as:     cv::plot::Plot2d::create (method) cv::plot::Plot2d (trait) . create
// Arg ARG cv::_InputArray (boxed) data= cv::_InputArray (boxed) = 
// Return value: SmartPtr[cv::plot::Plot2d (boxed)]
cv_return_value_void_X cv_plot_Plot2d_create__InputArray(void* data) {
    try {
        Ptr<cv::plot::Plot2d> ret = cv::plot::Plot2d::create(*reinterpret_cast<const cv::_InputArray*>(data));
        return { Error::Code::StsOk, NULL, new Ptr<cv::plot::Plot2d>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::plot::Plot2d::create
// as:     cv::plot::Plot2d::create (method) cv::plot::Plot2d (trait) . create
// Arg ARG cv::_InputArray (boxed) dataX= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) dataY= cv::_InputArray (boxed) = 
// Return value: SmartPtr[cv::plot::Plot2d (boxed)]
cv_return_value_void_X cv_plot_Plot2d_create__InputArray__InputArray(void* dataX, void* dataY) {
    try {
        Ptr<cv::plot::Plot2d> ret = cv::plot::Plot2d::create(*reinterpret_cast<const cv::_InputArray*>(dataX), *reinterpret_cast<const cv::_InputArray*>(dataY));
        return { Error::Code::StsOk, NULL, new Ptr<cv::plot::Plot2d>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}



} // extern "C"

