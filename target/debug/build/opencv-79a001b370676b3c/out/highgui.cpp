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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/highgui.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/highgui/highgui.hpp"

extern "C" {

// parsed: cv::addText
// as:     cv::addText (function)
// Arg ARG cv::Mat (boxed) img= cv::Mat (boxed) = 
// Arg ARG string text= string = 
// Arg ARG cv::Point (simple) org= cv::Point (simple) = 
// Arg ARG cv::QtFont (boxed) font= cv::QtFont (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_addText_Mat_String_Point_QtFont(void* img, const char* text, PointWrapper org, void* font) {
    try {
        cv::addText(*reinterpret_cast<const cv::Mat*>(img), String(text), *reinterpret_cast<cv::Point*>(&org), *reinterpret_cast<const cv::QtFont*>(font));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::addText
// as:     cv::addText (function)
// Arg ARG cv::Mat (boxed) img= cv::Mat (boxed) = 
// Arg ARG string text= string = 
// Arg ARG cv::Point (simple) org= cv::Point (simple) = 
// Arg ARG string nameFont= string = 
// Arg ARG Primitive(int) pointSize= Primitive(int) = -1
// Arg ARG cv::Scalar (simple) color= cv::Scalar (simple) = Scalar::all(0)
// Arg ARG Primitive(int) weight= Primitive(int) = QT_FONT_NORMAL
// Arg ARG Primitive(int) style= Primitive(int) = QT_STYLE_NORMAL
// Arg ARG Primitive(int) spacing= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_addText_Mat_String_Point_String_int_Scalar_int_int_int(void* img, const char* text, PointWrapper org, const char* nameFont, int pointSize, ScalarWrapper color, int weight, int style, int spacing) {
    try {
        cv::addText(*reinterpret_cast<const cv::Mat*>(img), String(text), *reinterpret_cast<cv::Point*>(&org), String(nameFont), pointSize, *reinterpret_cast<cv::Scalar*>(&color), weight, style, spacing);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::createButton
// as:     cv::createButton (function)
// Arg ARG string bar_name= string = 
// Arg ARG cv::ButtonCallback (callback) on_change= cv::ButtonCallback (callback) = 
// Arg ARG RawPtr[Primitive(void)] * userdata= (ptr) RawPtr[Primitive(void)] = 0
// Arg ARG Primitive(int) type= Primitive(int) = QT_PUSH_BUTTON
// Arg ARG Primitive(bool) initial_button_state= Primitive(bool) = false
// Return value: Primitive(int)
cv_return_value_int cv_createButton_String_ButtonCallback_void_X_int_bool(const char* bar_name, cv::ButtonCallback on_change, void* userdata, int type, bool initial_button_state) {
    try {
        int ret = cv::createButton(String(bar_name), *reinterpret_cast<cv::ButtonCallback*>(&on_change), userdata, type, initial_button_state);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::createTrackbar
// as:     cv::createTrackbar (function)
// Arg ARG string trackbarname= string = 
// Arg ARG string winname= string = 
// Arg ARG RawPtr[Primitive(int)] * value= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG Primitive(int) count= Primitive(int) = 
// Arg ARG cv::TrackbarCallback (callback) onChange= cv::TrackbarCallback (callback) = 0
// Arg ARG RawPtr[Primitive(void)] * userdata= (ptr) RawPtr[Primitive(void)] = 0
// Return value: Primitive(int)
cv_return_value_int cv_createTrackbar_String_String_int_X_int_TrackbarCallback_void_X(const char* trackbarname, const char* winname, int* value, int count, cv::TrackbarCallback onChange, void* userdata) {
    try {
        int ret = cv::createTrackbar(String(trackbarname), String(winname), value, count, *reinterpret_cast<cv::TrackbarCallback*>(&onChange), userdata);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::destroyAllWindows
// as:     cv::destroyAllWindows (function)
// Return value: Primitive(void)
cv_return_value_void cv_destroyAllWindows() {
    try {
        cv::destroyAllWindows();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::destroyWindow
// as:     cv::destroyWindow (function)
// Arg ARG string winname= string = 
// Return value: Primitive(void)
cv_return_value_void cv_destroyWindow_String(const char* winname) {
    try {
        cv::destroyWindow(String(winname));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::displayOverlay
// as:     cv::displayOverlay (function)
// Arg ARG string winname= string = 
// Arg ARG string text= string = 
// Arg ARG Primitive(int) delayms= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_displayOverlay_String_String_int(const char* winname, const char* text, int delayms) {
    try {
        cv::displayOverlay(String(winname), String(text), delayms);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::displayStatusBar
// as:     cv::displayStatusBar (function)
// Arg ARG string winname= string = 
// Arg ARG string text= string = 
// Arg ARG Primitive(int) delayms= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_displayStatusBar_String_String_int(const char* winname, const char* text, int delayms) {
    try {
        cv::displayStatusBar(String(winname), String(text), delayms);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::fontQt
// as:     cv::fontQt (function)
// Arg ARG string nameFont= string = 
// Arg ARG Primitive(int) pointSize= Primitive(int) = -1
// Arg ARG cv::Scalar (simple) color= cv::Scalar (simple) = Scalar::all(0)
// Arg ARG Primitive(int) weight= Primitive(int) = QT_FONT_NORMAL
// Arg ARG Primitive(int) style= Primitive(int) = QT_STYLE_NORMAL
// Arg ARG Primitive(int) spacing= Primitive(int) = 0
// Return value: cv::QtFont (boxed)
cv_return_value_void_X cv_fontQt_String_int_Scalar_int_int_int(const char* nameFont, int pointSize, ScalarWrapper color, int weight, int style, int spacing) {
    try {
        cv::QtFont ret = cv::fontQt(String(nameFont), pointSize, *reinterpret_cast<cv::Scalar*>(&color), weight, style, spacing);
        return { Error::Code::StsOk, NULL, new cv::QtFont(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::getMouseWheelDelta
// as:     cv::getMouseWheelDelta (function)
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(int)
cv_return_value_int cv_getMouseWheelDelta_int(int flags) {
    try {
        int ret = cv::getMouseWheelDelta(flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::getTrackbarPos
// as:     cv::getTrackbarPos (function)
// Arg ARG string trackbarname= string = 
// Arg ARG string winname= string = 
// Return value: Primitive(int)
cv_return_value_int cv_getTrackbarPos_String_String(const char* trackbarname, const char* winname) {
    try {
        int ret = cv::getTrackbarPos(String(trackbarname), String(winname));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::getWindowImageRect
// as:     cv::getWindowImageRect (function)
// Arg ARG string winname= string = 
// Return value: cv::Rect (simple)
cv_return_value_RectWrapper cv_getWindowImageRect_String(const char* winname) {
    try {
        cv::Rect ret = cv::getWindowImageRect(String(winname));
        return { Error::Code::StsOk, NULL, *reinterpret_cast<RectWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_RectWrapper)
}

// parsed: cv::getWindowProperty
// as:     cv::getWindowProperty (function)
// Arg ARG string winname= string = 
// Arg ARG Primitive(int) prop_id= Primitive(int) = 
// Return value: Primitive(double)
cv_return_value_double cv_getWindowProperty_String_int(const char* winname, int prop_id) {
    try {
        double ret = cv::getWindowProperty(String(winname), prop_id);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::imshow
// as:     cv::imshow (function)
// Arg ARG string winname= string = 
// Arg ARG cv::_InputArray (boxed) mat= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_imshow_String__InputArray(const char* winname, void* mat) {
    try {
        cv::imshow(String(winname), *reinterpret_cast<const cv::_InputArray*>(mat));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::loadWindowParameters
// as:     cv::loadWindowParameters (function)
// Arg ARG string windowName= string = 
// Return value: Primitive(void)
cv_return_value_void cv_loadWindowParameters_String(const char* windowName) {
    try {
        cv::loadWindowParameters(String(windowName));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::moveWindow
// as:     cv::moveWindow (function)
// Arg ARG string winname= string = 
// Arg ARG Primitive(int) x= Primitive(int) = 
// Arg ARG Primitive(int) y= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_moveWindow_String_int_int(const char* winname, int x, int y) {
    try {
        cv::moveWindow(String(winname), x, y);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::namedWindow
// as:     cv::namedWindow (function)
// Arg ARG string winname= string = 
// Arg ARG Primitive(int) flags= Primitive(int) = WINDOW_AUTOSIZE
// Return value: Primitive(void)
cv_return_value_void cv_namedWindow_String_int(const char* winname, int flags) {
    try {
        cv::namedWindow(String(winname), flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::resizeWindow
// as:     cv::resizeWindow (function)
// Arg ARG string winname= string = 
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_resizeWindow_String_Size(const char* winname, SizeWrapper size) {
    try {
        cv::resizeWindow(String(winname), *reinterpret_cast<const cv::Size*>(&size));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::resizeWindow
// as:     cv::resizeWindow (function)
// Arg ARG string winname= string = 
// Arg ARG Primitive(int) width= Primitive(int) = 
// Arg ARG Primitive(int) height= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_resizeWindow_String_int_int(const char* winname, int width, int height) {
    try {
        cv::resizeWindow(String(winname), width, height);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::saveWindowParameters
// as:     cv::saveWindowParameters (function)
// Arg ARG string windowName= string = 
// Return value: Primitive(void)
cv_return_value_void cv_saveWindowParameters_String(const char* windowName) {
    try {
        cv::saveWindowParameters(String(windowName));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::selectROI
// as:     cv::selectROI (function)
// Arg ARG string windowName= string = 
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG Primitive(bool) showCrosshair= Primitive(bool) = true
// Arg ARG Primitive(bool) fromCenter= Primitive(bool) = false
// Return value: cv::Rect (simple)
cv_return_value_RectWrapper cv_selectROI_String__InputArray_bool_bool(const char* windowName, void* img, bool showCrosshair, bool fromCenter) {
    try {
        cv::Rect ret = cv::selectROI(String(windowName), *reinterpret_cast<const cv::_InputArray*>(img), showCrosshair, fromCenter);
        return { Error::Code::StsOk, NULL, *reinterpret_cast<RectWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_RectWrapper)
}

// parsed: cv::selectROI
// as:     cv::selectROI (function)
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG Primitive(bool) showCrosshair= Primitive(bool) = true
// Arg ARG Primitive(bool) fromCenter= Primitive(bool) = false
// Return value: cv::Rect (simple)
cv_return_value_RectWrapper cv_selectROI__InputArray_bool_bool(void* img, bool showCrosshair, bool fromCenter) {
    try {
        cv::Rect ret = cv::selectROI(*reinterpret_cast<const cv::_InputArray*>(img), showCrosshair, fromCenter);
        return { Error::Code::StsOk, NULL, *reinterpret_cast<RectWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_RectWrapper)
}

// parsed: cv::selectROIs
// as:     cv::selectROIs (function)
// Arg ARG string windowName= string = 
// Arg ARG cv::_InputArray (boxed) img= cv::_InputArray (boxed) = 
// Arg ARG Vector[cv::Rect (simple)] boundingBoxes= Vector[cv::Rect (simple)] = 
// Arg ARG Primitive(bool) showCrosshair= Primitive(bool) = true
// Arg ARG Primitive(bool) fromCenter= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_selectROIs_String__InputArray_VectorOfRect_bool_bool(const char* windowName, void* img, void* boundingBoxes, bool showCrosshair, bool fromCenter) {
    try {
        cv::selectROIs(String(windowName), *reinterpret_cast<const cv::_InputArray*>(img), *reinterpret_cast<std::vector<cv::Rect>*>(boundingBoxes), showCrosshair, fromCenter);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::setMouseCallback
// as:     cv::setMouseCallback (function)
// Arg ARG string winname= string = 
// Arg ARG cv::MouseCallback (callback) onMouse= cv::MouseCallback (callback) = 
// Arg ARG RawPtr[Primitive(void)] * userdata= (ptr) RawPtr[Primitive(void)] = 0
// Return value: Primitive(void)
cv_return_value_void cv_setMouseCallback_String_MouseCallback_void_X(const char* winname, cv::MouseCallback onMouse, void* userdata) {
    try {
        cv::setMouseCallback(String(winname), *reinterpret_cast<cv::MouseCallback*>(&onMouse), userdata);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::setOpenGlContext
// as:     cv::setOpenGlContext (function)
// Arg ARG string winname= string = 
// Return value: Primitive(void)
cv_return_value_void cv_setOpenGlContext_String(const char* winname) {
    try {
        cv::setOpenGlContext(String(winname));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::setOpenGlDrawCallback
// as:     cv::setOpenGlDrawCallback (function)
// Arg ARG string winname= string = 
// Arg ARG cv::OpenGlDrawCallback (callback) onOpenGlDraw= cv::OpenGlDrawCallback (callback) = 
// Arg ARG RawPtr[Primitive(void)] * userdata= (ptr) RawPtr[Primitive(void)] = 0
// Return value: Primitive(void)
cv_return_value_void cv_setOpenGlDrawCallback_String_OpenGlDrawCallback_void_X(const char* winname, cv::OpenGlDrawCallback onOpenGlDraw, void* userdata) {
    try {
        cv::setOpenGlDrawCallback(String(winname), *reinterpret_cast<cv::OpenGlDrawCallback*>(&onOpenGlDraw), userdata);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::setTrackbarMax
// as:     cv::setTrackbarMax (function)
// Arg ARG string trackbarname= string = 
// Arg ARG string winname= string = 
// Arg ARG Primitive(int) maxval= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_setTrackbarMax_String_String_int(const char* trackbarname, const char* winname, int maxval) {
    try {
        cv::setTrackbarMax(String(trackbarname), String(winname), maxval);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::setTrackbarMin
// as:     cv::setTrackbarMin (function)
// Arg ARG string trackbarname= string = 
// Arg ARG string winname= string = 
// Arg ARG Primitive(int) minval= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_setTrackbarMin_String_String_int(const char* trackbarname, const char* winname, int minval) {
    try {
        cv::setTrackbarMin(String(trackbarname), String(winname), minval);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::setTrackbarPos
// as:     cv::setTrackbarPos (function)
// Arg ARG string trackbarname= string = 
// Arg ARG string winname= string = 
// Arg ARG Primitive(int) pos= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_setTrackbarPos_String_String_int(const char* trackbarname, const char* winname, int pos) {
    try {
        cv::setTrackbarPos(String(trackbarname), String(winname), pos);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::setWindowProperty
// as:     cv::setWindowProperty (function)
// Arg ARG string winname= string = 
// Arg ARG Primitive(int) prop_id= Primitive(int) = 
// Arg ARG Primitive(double) prop_value= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_setWindowProperty_String_int_double(const char* winname, int prop_id, double prop_value) {
    try {
        cv::setWindowProperty(String(winname), prop_id, prop_value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::setWindowTitle
// as:     cv::setWindowTitle (function)
// Arg ARG string winname= string = 
// Arg ARG string title= string = 
// Return value: Primitive(void)
cv_return_value_void cv_setWindowTitle_String_String(const char* winname, const char* title) {
    try {
        cv::setWindowTitle(String(winname), String(title));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::startWindowThread
// as:     cv::startWindowThread (function)
// Return value: Primitive(int)
cv_return_value_int cv_startWindowThread() {
    try {
        int ret = cv::startWindowThread();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::stopLoop
// as:     cv::stopLoop (function)
// Return value: Primitive(void)
cv_return_value_void cv_stopLoop() {
    try {
        cv::stopLoop();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::updateWindow
// as:     cv::updateWindow (function)
// Arg ARG string winname= string = 
// Return value: Primitive(void)
cv_return_value_void cv_updateWindow_String(const char* winname) {
    try {
        cv::updateWindow(String(winname));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::waitKeyEx
// as:     cv::waitKeyEx (function)
// Arg ARG Primitive(int) delay= Primitive(int) = 0
// Return value: Primitive(int)
cv_return_value_int cv_waitKeyEx_int(int delay) {
    try {
        int ret = cv::waitKeyEx(delay);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::waitKey
// as:     cv::waitKey (function)
// Arg ARG Primitive(int) delay= Primitive(int) = 0
// Return value: Primitive(int)
cv_return_value_int cv_waitKey_int(int delay) {
    try {
        int ret = cv::waitKey(delay);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// boxed class: cv::QtFont
void cv_QtFont_delete(void* instance) {
    delete reinterpret_cast<cv::QtFont*>(instance);
}


} // extern "C"

