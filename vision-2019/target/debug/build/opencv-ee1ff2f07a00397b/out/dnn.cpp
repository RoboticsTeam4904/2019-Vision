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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/dnn.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/dnn/all_layers.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/dnn/dict.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/dnn/dnn.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/dnn/layer.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/dnn/shape_utils.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/dnn/utils/inference_engine.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/dnn/version.hpp"

extern "C" {

// parsed: cv::dnn::NMSBoxes
// as:     cv::dnn::NMSBoxes (function)
// Arg ARG Vector[cv::Rect2d (simple)] bboxes= Vector[cv::Rect2d (simple)] = 
// Arg ARG Vector[Primitive(float)] scores= Vector[Primitive(float)] = 
// Arg ARG Primitive(float) score_threshold= Primitive(float) = 
// Arg ARG Primitive(float) nms_threshold= Primitive(float) = 
// Arg ARG Vector[Primitive(int)] indices= Vector[Primitive(int)] = 
// Arg ARG Primitive(float) eta= Primitive(float) = 1.f
// Arg ARG Primitive(int) top_k= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_dnn_NMSBoxes_VectorOfRect2d_VectorOffloat_float_float_VectorOfint_float_int(void* bboxes, void* scores, float score_threshold, float nms_threshold, void* indices, float eta, int top_k) {
    try {
        cv::dnn::NMSBoxes(*reinterpret_cast<const std::vector<cv::Rect2d>*>(bboxes), *reinterpret_cast<const std::vector<float>*>(scores), score_threshold, nms_threshold, *reinterpret_cast<std::vector<int>*>(indices), eta, top_k);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::NMSBoxes
// as:     cv::dnn::NMSBoxes (function)
// Arg ARG Vector[cv::Rect (simple)] bboxes= Vector[cv::Rect (simple)] = 
// Arg ARG Vector[Primitive(float)] scores= Vector[Primitive(float)] = 
// Arg ARG Primitive(float) score_threshold= Primitive(float) = 
// Arg ARG Primitive(float) nms_threshold= Primitive(float) = 
// Arg ARG Vector[Primitive(int)] indices= Vector[Primitive(int)] = 
// Arg ARG Primitive(float) eta= Primitive(float) = 1.f
// Arg ARG Primitive(int) top_k= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_dnn_NMSBoxes_VectorOfRect_VectorOffloat_float_float_VectorOfint_float_int(void* bboxes, void* scores, float score_threshold, float nms_threshold, void* indices, float eta, int top_k) {
    try {
        cv::dnn::NMSBoxes(*reinterpret_cast<const std::vector<cv::Rect>*>(bboxes), *reinterpret_cast<const std::vector<float>*>(scores), score_threshold, nms_threshold, *reinterpret_cast<std::vector<int>*>(indices), eta, top_k);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::NMSBoxes
// as:     cv::dnn::NMSBoxes (function)
// Arg ARG Vector[cv::RotatedRect (boxed)] bboxes= Vector[cv::RotatedRect (boxed)] = 
// Arg ARG Vector[Primitive(float)] scores= Vector[Primitive(float)] = 
// Arg ARG Primitive(float) score_threshold= Primitive(float) = 
// Arg ARG Primitive(float) nms_threshold= Primitive(float) = 
// Arg ARG Vector[Primitive(int)] indices= Vector[Primitive(int)] = 
// Arg ARG Primitive(float) eta= Primitive(float) = 1.f
// Arg ARG Primitive(int) top_k= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_dnn_NMSBoxes_VectorOfRotatedRect_VectorOffloat_float_float_VectorOfint_float_int(void* bboxes, void* scores, float score_threshold, float nms_threshold, void* indices, float eta, int top_k) {
    try {
        cv::dnn::NMSBoxes(*reinterpret_cast<const std::vector<cv::RotatedRect>*>(bboxes), *reinterpret_cast<const std::vector<float>*>(scores), score_threshold, nms_threshold, *reinterpret_cast<std::vector<int>*>(indices), eta, top_k);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::blobFromImage
// as:     cv::dnn::blobFromImage (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) blob= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) scalefactor= Primitive(double) = 1.0
// Arg ARG cv::Size (simple) size= cv::Size (simple) = Size()
// Arg ARG cv::Scalar (simple) mean= cv::Scalar (simple) = Scalar()
// Arg ARG Primitive(bool) swapRB= Primitive(bool) = false
// Arg ARG Primitive(bool) crop= Primitive(bool) = false
// Arg ARG Primitive(int) ddepth= Primitive(int) = CV_32F
// Return value: Primitive(void)
cv_return_value_void cv_dnn_blobFromImage__InputArray__OutputArray_double_Size_Scalar_bool_bool_int(void* image, void* blob, double scalefactor, SizeWrapper size, ScalarWrapper mean, bool swapRB, bool crop, int ddepth) {
    try {
        cv::dnn::blobFromImage(*reinterpret_cast<const cv::_InputArray*>(image), *reinterpret_cast<cv::_OutputArray*>(blob), scalefactor, *reinterpret_cast<const cv::Size*>(&size), *reinterpret_cast<const cv::Scalar*>(&mean), swapRB, crop, ddepth);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::blobFromImage
// as:     cv::dnn::blobFromImage (function)
// Arg ARG cv::_InputArray (boxed) image= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) scalefactor= Primitive(double) = 1.0
// Arg ARG cv::Size (simple) size= cv::Size (simple) = Size()
// Arg ARG cv::Scalar (simple) mean= cv::Scalar (simple) = Scalar()
// Arg ARG Primitive(bool) swapRB= Primitive(bool) = false
// Arg ARG Primitive(bool) crop= Primitive(bool) = false
// Arg ARG Primitive(int) ddepth= Primitive(int) = CV_32F
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_dnn_blobFromImage__InputArray_double_Size_Scalar_bool_bool_int(void* image, double scalefactor, SizeWrapper size, ScalarWrapper mean, bool swapRB, bool crop, int ddepth) {
    try {
        cv::Mat ret = cv::dnn::blobFromImage(*reinterpret_cast<const cv::_InputArray*>(image), scalefactor, *reinterpret_cast<const cv::Size*>(&size), *reinterpret_cast<const cv::Scalar*>(&mean), swapRB, crop, ddepth);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::blobFromImages
// as:     cv::dnn::blobFromImages (function)
// Arg ARG cv::_InputArray (boxed) images= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) blob= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) scalefactor= Primitive(double) = 1.0
// Arg ARG cv::Size (simple) size= cv::Size (simple) = Size()
// Arg ARG cv::Scalar (simple) mean= cv::Scalar (simple) = Scalar()
// Arg ARG Primitive(bool) swapRB= Primitive(bool) = false
// Arg ARG Primitive(bool) crop= Primitive(bool) = false
// Arg ARG Primitive(int) ddepth= Primitive(int) = CV_32F
// Return value: Primitive(void)
cv_return_value_void cv_dnn_blobFromImages__InputArray__OutputArray_double_Size_Scalar_bool_bool_int(void* images, void* blob, double scalefactor, SizeWrapper size, ScalarWrapper mean, bool swapRB, bool crop, int ddepth) {
    try {
        cv::dnn::blobFromImages(*reinterpret_cast<const cv::_InputArray*>(images), *reinterpret_cast<cv::_OutputArray*>(blob), scalefactor, *reinterpret_cast<cv::Size*>(&size), *reinterpret_cast<const cv::Scalar*>(&mean), swapRB, crop, ddepth);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::blobFromImages
// as:     cv::dnn::blobFromImages (function)
// Arg ARG cv::_InputArray (boxed) images= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) scalefactor= Primitive(double) = 1.0
// Arg ARG cv::Size (simple) size= cv::Size (simple) = Size()
// Arg ARG cv::Scalar (simple) mean= cv::Scalar (simple) = Scalar()
// Arg ARG Primitive(bool) swapRB= Primitive(bool) = false
// Arg ARG Primitive(bool) crop= Primitive(bool) = false
// Arg ARG Primitive(int) ddepth= Primitive(int) = CV_32F
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_dnn_blobFromImages__InputArray_double_Size_Scalar_bool_bool_int(void* images, double scalefactor, SizeWrapper size, ScalarWrapper mean, bool swapRB, bool crop, int ddepth) {
    try {
        cv::Mat ret = cv::dnn::blobFromImages(*reinterpret_cast<const cv::_InputArray*>(images), scalefactor, *reinterpret_cast<cv::Size*>(&size), *reinterpret_cast<const cv::Scalar*>(&mean), swapRB, crop, ddepth);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::clamp
// as:     cv::dnn::clamp (function)
// Arg ARG cv::Range (boxed) r= cv::Range (boxed) = 
// Arg ARG Primitive(int) axisSize= Primitive(int) = 
// Return value: cv::Range (boxed)
cv_return_value_void_X cv_dnn_clamp_Range_int(void* r, int axisSize) {
    try {
        cv::Range ret = cv::dnn::clamp(*reinterpret_cast<const cv::Range*>(r), axisSize);
        return { Error::Code::StsOk, NULL, new cv::Range(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::clamp
// as:     cv::dnn::clamp (function)
// Arg ARG Primitive(int) ax= Primitive(int) = 
// Arg ARG Primitive(int) dims= Primitive(int) = 
// Return value: Primitive(int)
cv_return_value_int cv_dnn_clamp_int_int(int ax, int dims) {
    try {
        int ret = cv::dnn::clamp(ax, dims);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::dnn::getAvailableTargets
// as:     cv::dnn::getAvailableTargets (function)
// Arg ARG dnn::Backend (enum) be= dnn::Backend (enum) = 
// Return value: Vector[dnn::Target (enum)]
cv_return_value_void_X cv_dnn_getAvailableTargets_Backend(dnn::Backend be) {
    try {
        std::vector<dnn::Target> ret = cv::dnn::getAvailableTargets(*reinterpret_cast<dnn::Backend*>(&be));
        return { Error::Code::StsOk, NULL, new std::vector<dnn::Target>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::getInferenceEngineVPUType
// as:     cv::dnn::getInferenceEngineVPUType (function)
// Return value: string
cv_return_value_char_X cv_dnn_getInferenceEngineVPUType() {
    try {
        String ret = cv::dnn::getInferenceEngineVPUType();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::dnn::getPlane
// as:     cv::dnn::getPlane (function)
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Arg ARG Primitive(int) n= Primitive(int) = 
// Arg ARG Primitive(int) cn= Primitive(int) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_dnn_getPlane_Mat_int_int(void* m, int n, int cn) {
    try {
        cv::Mat ret = cv::dnn::getPlane(*reinterpret_cast<const cv::Mat*>(m), n, cn);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::imagesFromBlob
// as:     cv::dnn::imagesFromBlob (function)
// Arg ARG cv::Mat (boxed) blob_= cv::Mat (boxed) = 
// Arg ARG cv::_OutputArray (boxed) images_= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_imagesFromBlob_Mat__OutputArray(void* blob_, void* images_) {
    try {
        cv::dnn::imagesFromBlob(*reinterpret_cast<const cv::Mat*>(blob_), *reinterpret_cast<cv::_OutputArray*>(images_));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::readNetFromCaffe
// as:     cv::dnn::readNetFromCaffe (function)
// Arg ARG string prototxt= string = 
// Arg ARG string caffeModel= string = String()
// Return value: cv::dnn::Net (boxed)
cv_return_value_void_X cv_dnn_readNetFromCaffe_String_String(const char* prototxt, const char* caffeModel) {
    try {
        cv::dnn::Net ret = cv::dnn::readNetFromCaffe(String(prototxt), String(caffeModel));
        return { Error::Code::StsOk, NULL, new cv::dnn::Net(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::readNetFromCaffe
// as:     cv::dnn::readNetFromCaffe (function)
// Arg ARG Vector[Primitive(uchar)] bufferProto= Vector[Primitive(uchar)] = 
// Arg ARG Vector[Primitive(uchar)] bufferModel= Vector[Primitive(uchar)] = std::vector<uchar>()
// Return value: cv::dnn::Net (boxed)
cv_return_value_void_X cv_dnn_readNetFromCaffe_VectorOfuchar_VectorOfuchar(void* bufferProto, void* bufferModel) {
    try {
        cv::dnn::Net ret = cv::dnn::readNetFromCaffe(*reinterpret_cast<const std::vector<uchar>*>(bufferProto), *reinterpret_cast<const std::vector<uchar>*>(bufferModel));
        return { Error::Code::StsOk, NULL, new cv::dnn::Net(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::readNetFromCaffe
// as:     cv::dnn::readNetFromCaffe (function)
// Arg ARG RawPtr[Primitive(char)] * bufferProto= (ptr) RawPtr[Primitive(char)] = 
// Arg ARG Primitive(size_t) lenProto= Primitive(size_t) = 
// Arg ARG RawPtr[Primitive(char)] * bufferModel= (ptr) RawPtr[Primitive(char)] = NULL
// Arg ARG Primitive(size_t) lenModel= Primitive(size_t) = 0
// Return value: cv::dnn::Net (boxed)
cv_return_value_void_X cv_dnn_readNetFromCaffe_const_char_X_size_t_const_char_X_size_t(const char* bufferProto, std::size_t lenProto, const char* bufferModel, std::size_t lenModel) {
    try {
        cv::dnn::Net ret = cv::dnn::readNetFromCaffe(bufferProto, lenProto, bufferModel, lenModel);
        return { Error::Code::StsOk, NULL, new cv::dnn::Net(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::readNetFromDarknet
// as:     cv::dnn::readNetFromDarknet (function)
// Arg ARG string cfgFile= string = 
// Arg ARG string darknetModel= string = String()
// Return value: cv::dnn::Net (boxed)
cv_return_value_void_X cv_dnn_readNetFromDarknet_String_String(const char* cfgFile, const char* darknetModel) {
    try {
        cv::dnn::Net ret = cv::dnn::readNetFromDarknet(String(cfgFile), String(darknetModel));
        return { Error::Code::StsOk, NULL, new cv::dnn::Net(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::readNetFromDarknet
// as:     cv::dnn::readNetFromDarknet (function)
// Arg ARG Vector[Primitive(uchar)] bufferCfg= Vector[Primitive(uchar)] = 
// Arg ARG Vector[Primitive(uchar)] bufferModel= Vector[Primitive(uchar)] = std::vector<uchar>()
// Return value: cv::dnn::Net (boxed)
cv_return_value_void_X cv_dnn_readNetFromDarknet_VectorOfuchar_VectorOfuchar(void* bufferCfg, void* bufferModel) {
    try {
        cv::dnn::Net ret = cv::dnn::readNetFromDarknet(*reinterpret_cast<const std::vector<uchar>*>(bufferCfg), *reinterpret_cast<const std::vector<uchar>*>(bufferModel));
        return { Error::Code::StsOk, NULL, new cv::dnn::Net(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::readNetFromDarknet
// as:     cv::dnn::readNetFromDarknet (function)
// Arg ARG RawPtr[Primitive(char)] * bufferCfg= (ptr) RawPtr[Primitive(char)] = 
// Arg ARG Primitive(size_t) lenCfg= Primitive(size_t) = 
// Arg ARG RawPtr[Primitive(char)] * bufferModel= (ptr) RawPtr[Primitive(char)] = NULL
// Arg ARG Primitive(size_t) lenModel= Primitive(size_t) = 0
// Return value: cv::dnn::Net (boxed)
cv_return_value_void_X cv_dnn_readNetFromDarknet_const_char_X_size_t_const_char_X_size_t(const char* bufferCfg, std::size_t lenCfg, const char* bufferModel, std::size_t lenModel) {
    try {
        cv::dnn::Net ret = cv::dnn::readNetFromDarknet(bufferCfg, lenCfg, bufferModel, lenModel);
        return { Error::Code::StsOk, NULL, new cv::dnn::Net(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::readNetFromModelOptimizer
// as:     cv::dnn::readNetFromModelOptimizer (function)
// Arg ARG string xml= string = 
// Arg ARG string bin= string = 
// Return value: cv::dnn::Net (boxed)
cv_return_value_void_X cv_dnn_readNetFromModelOptimizer_String_String(const char* xml, const char* bin) {
    try {
        cv::dnn::Net ret = cv::dnn::readNetFromModelOptimizer(String(xml), String(bin));
        return { Error::Code::StsOk, NULL, new cv::dnn::Net(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::readNetFromONNX
// as:     cv::dnn::readNetFromONNX (function)
// Arg ARG string onnxFile= string = 
// Return value: cv::dnn::Net (boxed)
cv_return_value_void_X cv_dnn_readNetFromONNX_String(const char* onnxFile) {
    try {
        cv::dnn::Net ret = cv::dnn::readNetFromONNX(String(onnxFile));
        return { Error::Code::StsOk, NULL, new cv::dnn::Net(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::readNetFromONNX
// as:     cv::dnn::readNetFromONNX (function)
// Arg ARG Vector[Primitive(uchar)] buffer= Vector[Primitive(uchar)] = 
// Return value: cv::dnn::Net (boxed)
cv_return_value_void_X cv_dnn_readNetFromONNX_VectorOfuchar(void* buffer) {
    try {
        cv::dnn::Net ret = cv::dnn::readNetFromONNX(*reinterpret_cast<const std::vector<uchar>*>(buffer));
        return { Error::Code::StsOk, NULL, new cv::dnn::Net(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::readNetFromONNX
// as:     cv::dnn::readNetFromONNX (function)
// Arg ARG RawPtr[Primitive(char)] * buffer= (ptr) RawPtr[Primitive(char)] = 
// Arg ARG Primitive(size_t) sizeBuffer= Primitive(size_t) = 
// Return value: cv::dnn::Net (boxed)
cv_return_value_void_X cv_dnn_readNetFromONNX_const_char_X_size_t(const char* buffer, std::size_t sizeBuffer) {
    try {
        cv::dnn::Net ret = cv::dnn::readNetFromONNX(buffer, sizeBuffer);
        return { Error::Code::StsOk, NULL, new cv::dnn::Net(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::readNetFromTensorflow
// as:     cv::dnn::readNetFromTensorflow (function)
// Arg ARG string model= string = 
// Arg ARG string config= string = String()
// Return value: cv::dnn::Net (boxed)
cv_return_value_void_X cv_dnn_readNetFromTensorflow_String_String(const char* model, const char* config) {
    try {
        cv::dnn::Net ret = cv::dnn::readNetFromTensorflow(String(model), String(config));
        return { Error::Code::StsOk, NULL, new cv::dnn::Net(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::readNetFromTensorflow
// as:     cv::dnn::readNetFromTensorflow (function)
// Arg ARG Vector[Primitive(uchar)] bufferModel= Vector[Primitive(uchar)] = 
// Arg ARG Vector[Primitive(uchar)] bufferConfig= Vector[Primitive(uchar)] = std::vector<uchar>()
// Return value: cv::dnn::Net (boxed)
cv_return_value_void_X cv_dnn_readNetFromTensorflow_VectorOfuchar_VectorOfuchar(void* bufferModel, void* bufferConfig) {
    try {
        cv::dnn::Net ret = cv::dnn::readNetFromTensorflow(*reinterpret_cast<const std::vector<uchar>*>(bufferModel), *reinterpret_cast<const std::vector<uchar>*>(bufferConfig));
        return { Error::Code::StsOk, NULL, new cv::dnn::Net(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::readNetFromTensorflow
// as:     cv::dnn::readNetFromTensorflow (function)
// Arg ARG RawPtr[Primitive(char)] * bufferModel= (ptr) RawPtr[Primitive(char)] = 
// Arg ARG Primitive(size_t) lenModel= Primitive(size_t) = 
// Arg ARG RawPtr[Primitive(char)] * bufferConfig= (ptr) RawPtr[Primitive(char)] = NULL
// Arg ARG Primitive(size_t) lenConfig= Primitive(size_t) = 0
// Return value: cv::dnn::Net (boxed)
cv_return_value_void_X cv_dnn_readNetFromTensorflow_const_char_X_size_t_const_char_X_size_t(const char* bufferModel, std::size_t lenModel, const char* bufferConfig, std::size_t lenConfig) {
    try {
        cv::dnn::Net ret = cv::dnn::readNetFromTensorflow(bufferModel, lenModel, bufferConfig, lenConfig);
        return { Error::Code::StsOk, NULL, new cv::dnn::Net(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::readNetFromTorch
// as:     cv::dnn::readNetFromTorch (function)
// Arg ARG string model= string = 
// Arg ARG Primitive(bool) isBinary= Primitive(bool) = true
// Arg ARG Primitive(bool) evaluate= Primitive(bool) = true
// Return value: cv::dnn::Net (boxed)
cv_return_value_void_X cv_dnn_readNetFromTorch_String_bool_bool(const char* model, bool isBinary, bool evaluate) {
    try {
        cv::dnn::Net ret = cv::dnn::readNetFromTorch(String(model), isBinary, evaluate);
        return { Error::Code::StsOk, NULL, new cv::dnn::Net(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::readNet
// as:     cv::dnn::readNet (function)
// Arg ARG string model= string = 
// Arg ARG string config= string = ""
// Arg ARG string framework= string = ""
// Return value: cv::dnn::Net (boxed)
cv_return_value_void_X cv_dnn_readNet_String_String_String(const char* model, const char* config, const char* framework) {
    try {
        cv::dnn::Net ret = cv::dnn::readNet(String(model), String(config), String(framework));
        return { Error::Code::StsOk, NULL, new cv::dnn::Net(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::readNet
// as:     cv::dnn::readNet (function)
// Arg ARG string framework= string = 
// Arg ARG Vector[Primitive(uchar)] bufferModel= Vector[Primitive(uchar)] = 
// Arg ARG Vector[Primitive(uchar)] bufferConfig= Vector[Primitive(uchar)] = std::vector<uchar>()
// Return value: cv::dnn::Net (boxed)
cv_return_value_void_X cv_dnn_readNet_String_VectorOfuchar_VectorOfuchar(const char* framework, void* bufferModel, void* bufferConfig) {
    try {
        cv::dnn::Net ret = cv::dnn::readNet(String(framework), *reinterpret_cast<const std::vector<uchar>*>(bufferModel), *reinterpret_cast<const std::vector<uchar>*>(bufferConfig));
        return { Error::Code::StsOk, NULL, new cv::dnn::Net(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::readTensorFromONNX
// as:     cv::dnn::readTensorFromONNX (function)
// Arg ARG string path= string = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_dnn_readTensorFromONNX_String(const char* path) {
    try {
        cv::Mat ret = cv::dnn::readTensorFromONNX(String(path));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::readTorchBlob
// as:     cv::dnn::readTorchBlob (function)
// Arg ARG string filename= string = 
// Arg ARG Primitive(bool) isBinary= Primitive(bool) = true
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_dnn_readTorchBlob_String_bool(const char* filename, bool isBinary) {
    try {
        cv::Mat ret = cv::dnn::readTorchBlob(String(filename), isBinary);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::resetMyriadDevice
// as:     cv::dnn::resetMyriadDevice (function)
// Return value: Primitive(void)
cv_return_value_void cv_dnn_resetMyriadDevice() {
    try {
        cv::dnn::resetMyriadDevice();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::shape
// as:     cv::dnn::shape (function)
// Arg ARG cv::Mat (boxed) mat= cv::Mat (boxed) = 
// Return value: Vector[Primitive(int)]
cv_return_value_void_X cv_dnn_shape_Mat(void* mat) {
    try {
        std::vector<int> ret = cv::dnn::shape(*reinterpret_cast<const cv::Mat*>(mat));
        return { Error::Code::StsOk, NULL, new std::vector<int>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::shape
// as:     cv::dnn::shape (function)
// Arg ARG cv::UMat (boxed) mat= cv::UMat (boxed) = 
// Return value: Vector[Primitive(int)]
cv_return_value_void_X cv_dnn_shape_UMat(void* mat) {
    try {
        std::vector<int> ret = cv::dnn::shape(*reinterpret_cast<const cv::UMat*>(mat));
        return { Error::Code::StsOk, NULL, new std::vector<int>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::shape
// as:     cv::dnn::shape (function)
// Arg ARG RawPtr[Primitive(int)] * dims= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG Primitive(int) n= Primitive(int) = 
// Return value: Vector[Primitive(int)]
cv_return_value_void_X cv_dnn_shape_const_int_X_int(const int* dims, int n) {
    try {
        std::vector<int> ret = cv::dnn::shape(dims, n);
        return { Error::Code::StsOk, NULL, new std::vector<int>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::shape
// as:     cv::dnn::shape (function)
// Arg ARG Primitive(int) a0= Primitive(int) = 
// Arg ARG Primitive(int) a1= Primitive(int) = -1
// Arg ARG Primitive(int) a2= Primitive(int) = -1
// Arg ARG Primitive(int) a3= Primitive(int) = -1
// Return value: Vector[Primitive(int)]
cv_return_value_void_X cv_dnn_shape_int_int_int_int(int a0, int a1, int a2, int a3) {
    try {
        std::vector<int> ret = cv::dnn::shape(a0, a1, a2, a3);
        return { Error::Code::StsOk, NULL, new std::vector<int>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::shrinkCaffeModel
// as:     cv::dnn::shrinkCaffeModel (function)
// Arg ARG string src= string = 
// Arg ARG string dst= string = 
// Arg ARG Vector[string] layersTypes= Vector[string] = std::vector<String>()
// Return value: Primitive(void)
cv_return_value_void cv_dnn_shrinkCaffeModel_String_String_VectorOfString(const char* src, const char* dst, void* layersTypes) {
    try {
        cv::dnn::shrinkCaffeModel(String(src), String(dst), *reinterpret_cast<const std::vector<String>*>(layersTypes));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::slice
// as:     cv::dnn::slice (function)
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Arg ARG cv::Range (boxed) r0= cv::Range (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_dnn_slice_Mat_Range(void* m, void* r0) {
    try {
        cv::Mat ret = cv::dnn::slice(*reinterpret_cast<const cv::Mat*>(m), *reinterpret_cast<const cv::Range*>(r0));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::slice
// as:     cv::dnn::slice (function)
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Arg ARG cv::Range (boxed) r0= cv::Range (boxed) = 
// Arg ARG cv::Range (boxed) r1= cv::Range (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_dnn_slice_Mat_Range_Range(void* m, void* r0, void* r1) {
    try {
        cv::Mat ret = cv::dnn::slice(*reinterpret_cast<const cv::Mat*>(m), *reinterpret_cast<const cv::Range*>(r0), *reinterpret_cast<const cv::Range*>(r1));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::slice
// as:     cv::dnn::slice (function)
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Arg ARG cv::Range (boxed) r0= cv::Range (boxed) = 
// Arg ARG cv::Range (boxed) r1= cv::Range (boxed) = 
// Arg ARG cv::Range (boxed) r2= cv::Range (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_dnn_slice_Mat_Range_Range_Range(void* m, void* r0, void* r1, void* r2) {
    try {
        cv::Mat ret = cv::dnn::slice(*reinterpret_cast<const cv::Mat*>(m), *reinterpret_cast<const cv::Range*>(r0), *reinterpret_cast<const cv::Range*>(r1), *reinterpret_cast<const cv::Range*>(r2));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::slice
// as:     cv::dnn::slice (function)
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Arg ARG cv::Range (boxed) r0= cv::Range (boxed) = 
// Arg ARG cv::Range (boxed) r1= cv::Range (boxed) = 
// Arg ARG cv::Range (boxed) r2= cv::Range (boxed) = 
// Arg ARG cv::Range (boxed) r3= cv::Range (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_dnn_slice_Mat_Range_Range_Range_Range(void* m, void* r0, void* r1, void* r2, void* r3) {
    try {
        cv::Mat ret = cv::dnn::slice(*reinterpret_cast<const cv::Mat*>(m), *reinterpret_cast<const cv::Range*>(r0), *reinterpret_cast<const cv::Range*>(r1), *reinterpret_cast<const cv::Range*>(r2), *reinterpret_cast<const cv::Range*>(r3));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::writeTextGraph
// as:     cv::dnn::writeTextGraph (function)
// Arg ARG string model= string = 
// Arg ARG string output= string = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_writeTextGraph_String_String(const char* model, const char* output) {
    try {
        cv::dnn::writeTextGraph(String(model), String(output));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::dnn::AbsLayer
void cv_AbsLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::AbsLayer*>(instance);
}
// parsed: cv::dnn::AbsLayer::create
// as:     cv::dnn::AbsLayer::create (method) cv::dnn::AbsLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::AbsLayer (boxed)]
cv_return_value_void_X cv_dnn_AbsLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::AbsLayer> ret = cv::dnn::AbsLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::AbsLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::ActivationLayer::forwardSlice
// as:     cv::dnn::ActivationLayer::forwardSlice (method) cv::dnn::ActivationLayer (trait) . forwardSlice
// Arg ARG RawPtr[Primitive(float)] * src= (ptr) RawPtr[Primitive(float)] = 
// Arg ARG RawPtr[Primitive(float)] * dst= (ptr) RawPtr[Primitive(float)] = 
// Arg ARG Primitive(int) len= Primitive(int) = 
// Arg ARG Primitive(size_t) outPlaneSize= Primitive(size_t) = 
// Arg ARG Primitive(int) cn0= Primitive(int) = 
// Arg ARG Primitive(int) cn1= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_ActivationLayer_forwardSlice_const_const_float_X_float_X_int_size_t_int_int(void* instance, const float* src, float* dst, int len, std::size_t outPlaneSize, int cn0, int cn1) {
    try {
        reinterpret_cast<cv::dnn::ActivationLayer*>(instance)->forwardSlice(src, dst, len, outPlaneSize, cn0, cn1);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::dnn::BNLLLayer
void cv_BNLLLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::BNLLLayer*>(instance);
}
// parsed: cv::dnn::BNLLLayer::create
// as:     cv::dnn::BNLLLayer::create (method) cv::dnn::BNLLLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::BNLLLayer (boxed)]
cv_return_value_void_X cv_dnn_BNLLLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::BNLLLayer> ret = cv::dnn::BNLLLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::BNLLLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::BackendNode
void cv_BackendNode_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::BackendNode*>(instance);
}
// parsed: cv::dnn::BackendNode::BackendNode
// as:     cv::dnn::BackendNode::BackendNode (constructor) cv::dnn::BackendNode . new
// Arg ARG Primitive(int) backendId= Primitive(int) = 
// Return value: cv::dnn::BackendNode (boxed)
cv_return_value_void_X cv_dnn_BackendNode_BackendNode_int(int backendId) {
    try {
        cv::dnn::BackendNode* ret = new cv::dnn::BackendNode(backendId);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::BackendWrapper::copyToHost
// as:     cv::dnn::BackendWrapper::copyToHost (method) cv::dnn::BackendWrapper (trait) . copyToHost
// Return value: Primitive(void)
cv_return_value_void cv_dnn_BackendWrapper_copyToHost(void* instance) {
    try {
        reinterpret_cast<cv::dnn::BackendWrapper*>(instance)->copyToHost();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::BackendWrapper::setHostDirty
// as:     cv::dnn::BackendWrapper::setHostDirty (method) cv::dnn::BackendWrapper (trait) . setHostDirty
// Return value: Primitive(void)
cv_return_value_void cv_dnn_BackendWrapper_setHostDirty(void* instance) {
    try {
        reinterpret_cast<cv::dnn::BackendWrapper*>(instance)->setHostDirty();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::dnn::BaseConvolutionLayer
void cv_BaseConvolutionLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::BaseConvolutionLayer*>(instance);
}
// boxed class: cv::dnn::BatchNormLayer
void cv_BatchNormLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::BatchNormLayer*>(instance);
}
// parsed: cv::dnn::BatchNormLayer::create
// as:     cv::dnn::BatchNormLayer::create (method) cv::dnn::BatchNormLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::BatchNormLayer (boxed)]
cv_return_value_void_X cv_dnn_BatchNormLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::BatchNormLayer> ret = cv::dnn::BatchNormLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::BatchNormLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::BlankLayer
void cv_BlankLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::BlankLayer*>(instance);
}
// parsed: cv::dnn::BlankLayer::create
// as:     cv::dnn::BlankLayer::create (method) cv::dnn::BlankLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::Layer (boxed)]
cv_return_value_void_X cv_dnn_BlankLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::Layer> ret = cv::dnn::BlankLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::Layer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::ChannelsPReLULayer
void cv_ChannelsPReLULayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::ChannelsPReLULayer*>(instance);
}
// parsed: cv::dnn::ChannelsPReLULayer::create
// as:     cv::dnn::ChannelsPReLULayer::create (method) cv::dnn::ChannelsPReLULayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::Layer (boxed)]
cv_return_value_void_X cv_dnn_ChannelsPReLULayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::Layer> ret = cv::dnn::ChannelsPReLULayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::Layer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::ConcatLayer
void cv_ConcatLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::ConcatLayer*>(instance);
}
// parsed: cv::dnn::ConcatLayer::create
// as:     cv::dnn::ConcatLayer::create (method) cv::dnn::ConcatLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::ConcatLayer (boxed)]
cv_return_value_void_X cv_dnn_ConcatLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::ConcatLayer> ret = cv::dnn::ConcatLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::ConcatLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::ConstLayer
void cv_ConstLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::ConstLayer*>(instance);
}
// parsed: cv::dnn::ConstLayer::create
// as:     cv::dnn::ConstLayer::create (method) cv::dnn::ConstLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::Layer (boxed)]
cv_return_value_void_X cv_dnn_ConstLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::Layer> ret = cv::dnn::ConstLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::Layer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::ConvolutionLayer
void cv_ConvolutionLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::ConvolutionLayer*>(instance);
}
// parsed: cv::dnn::ConvolutionLayer::create
// as:     cv::dnn::ConvolutionLayer::create (method) cv::dnn::ConvolutionLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::BaseConvolutionLayer (boxed)]
cv_return_value_void_X cv_dnn_ConvolutionLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::BaseConvolutionLayer> ret = cv::dnn::ConvolutionLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::BaseConvolutionLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::CropAndResizeLayer
void cv_CropAndResizeLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::CropAndResizeLayer*>(instance);
}
// parsed: cv::dnn::CropAndResizeLayer::create
// as:     cv::dnn::CropAndResizeLayer::create (method) cv::dnn::CropAndResizeLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::Layer (boxed)]
cv_return_value_void_X cv_dnn_CropAndResizeLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::Layer> ret = cv::dnn::CropAndResizeLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::Layer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::CropLayer
void cv_CropLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::CropLayer*>(instance);
}
// parsed: cv::dnn::CropLayer::create
// as:     cv::dnn::CropLayer::create (method) cv::dnn::CropLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::Layer (boxed)]
cv_return_value_void_X cv_dnn_CropLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::Layer> ret = cv::dnn::CropLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::Layer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::DeconvolutionLayer
void cv_DeconvolutionLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::DeconvolutionLayer*>(instance);
}
// parsed: cv::dnn::DeconvolutionLayer::create
// as:     cv::dnn::DeconvolutionLayer::create (method) cv::dnn::DeconvolutionLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::BaseConvolutionLayer (boxed)]
cv_return_value_void_X cv_dnn_DeconvolutionLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::BaseConvolutionLayer> ret = cv::dnn::DeconvolutionLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::BaseConvolutionLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::DetectionOutputLayer
void cv_DetectionOutputLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::DetectionOutputLayer*>(instance);
}
// parsed: cv::dnn::DetectionOutputLayer::create
// as:     cv::dnn::DetectionOutputLayer::create (method) cv::dnn::DetectionOutputLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::DetectionOutputLayer (boxed)]
cv_return_value_void_X cv_dnn_DetectionOutputLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::DetectionOutputLayer> ret = cv::dnn::DetectionOutputLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::DetectionOutputLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Dict::has
// as:     cv::dnn::Dict::has (method) cv::dnn::Dict (trait) . has
// Arg ARG string key= string = 
// Return value: Primitive(bool)
cv_return_value_bool cv_dnn_Dict_has_const_String(void* instance, const char* key) {
    try {
        bool ret = reinterpret_cast<cv::dnn::Dict*>(instance)->has(String(key));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::dnn::Dict::ptr
// as:     cv::dnn::Dict::ptr (method) cv::dnn::Dict (trait) . ptr
// Arg ARG string key= string = 
// Return value: RawPtr[cv::dnn::DictValue (boxed)]
cv_return_value_void_X cv_dnn_Dict_ptr_String(void* instance, const char* key) {
    try {
        cv::dnn::DictValue* ret = reinterpret_cast<cv::dnn::Dict*>(instance)->ptr(String(key));
        return { Error::Code::StsOk, NULL, new cv::dnn::DictValue(*ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Dict::ptr
// as:     cv::dnn::Dict::ptr (method) cv::dnn::Dict (trait) . ptr
// Arg ARG string key= string = 
// Return value: RawPtr[cv::dnn::DictValue (boxed)]
cv_return_value_const_void_X cv_dnn_Dict_ptr_const_String(void* instance, const char* key) {
    try {
        const cv::dnn::DictValue* ret = reinterpret_cast<cv::dnn::Dict*>(instance)->ptr(String(key));
        return { Error::Code::StsOk, NULL, new const cv::dnn::DictValue(*ret) };
    } CVRS_CATCH(cv_return_value_const_void_X)
}

// parsed: cv::dnn::Dict::get
// as:     cv::dnn::Dict::get (method) cv::dnn::Dict (trait) . get
// Arg ARG string key= string = 
// Return value: cv::dnn::DictValue (boxed)
cv_return_value_void_X cv_dnn_Dict_get_const_String(void* instance, const char* key) {
    try {
        cv::dnn::DictValue ret = reinterpret_cast<cv::dnn::Dict*>(instance)->get(String(key));
        return { Error::Code::StsOk, NULL, new cv::dnn::DictValue(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Dict::set
// as:     cv::dnn::Dict::set (method) cv::dnn::Dict (trait) . set
// Arg ARG string key= string = 
// Arg ARG cv::dnn::DictValue (boxed) value= cv::dnn::DictValue (boxed) = 
// Return value: cv::dnn::DictValue (boxed)
cv_return_value_void_X cv_dnn_Dict_set_String_DictValue(void* instance, const char* key, void* value) {
    try {
        cv::dnn::DictValue ret = reinterpret_cast<cv::dnn::Dict*>(instance)->set(String(key), *reinterpret_cast<cv::dnn::DictValue*>(value));
        return { Error::Code::StsOk, NULL, new cv::dnn::DictValue(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Dict::erase
// as:     cv::dnn::Dict::erase (method) cv::dnn::Dict (trait) . erase
// Arg ARG string key= string = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Dict_erase_String(void* instance, const char* key) {
    try {
        reinterpret_cast<cv::dnn::Dict*>(instance)->erase(String(key));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::dnn::Dict
void cv_Dict_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::Dict*>(instance);
}
// boxed class: cv::dnn::DictValue
void cv_DictValue_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::DictValue*>(instance);
}
// parsed: cv::dnn::DictValue::DictValue
// as:     cv::dnn::DictValue::DictValue (constructor) cv::dnn::DictValue . copy
// Arg ARG cv::dnn::DictValue (boxed) r= cv::dnn::DictValue (boxed) = 
// Return value: cv::dnn::DictValue (boxed)
cv_return_value_void_X cv_dnn_DictValue_DictValue_DictValue(void* r) {
    try {
        cv::dnn::DictValue* ret = new cv::dnn::DictValue(*reinterpret_cast<const cv::dnn::DictValue*>(r));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::DictValue::DictValue
// as:     cv::dnn::DictValue::DictValue (constructor) cv::dnn::DictValue . new
// Arg ARG Primitive(bool) i= Primitive(bool) = 
// Return value: cv::dnn::DictValue (boxed)
cv_return_value_void_X cv_dnn_DictValue_DictValue_bool(bool i) {
    try {
        cv::dnn::DictValue* ret = new cv::dnn::DictValue(i);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::DictValue::DictValue
// as:     cv::dnn::DictValue::DictValue (constructor) cv::dnn::DictValue . new
// Arg ARG Primitive(int64) i= Primitive(int64) = 0
// Return value: cv::dnn::DictValue (boxed)
cv_return_value_void_X cv_dnn_DictValue_DictValue_int64(int64 i) {
    try {
        cv::dnn::DictValue* ret = new cv::dnn::DictValue(i);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::DictValue::DictValue
// as:     cv::dnn::DictValue::DictValue (constructor) cv::dnn::DictValue . new
// Arg ARG Primitive(int) i= Primitive(int) = 
// Return value: cv::dnn::DictValue (boxed)
cv_return_value_void_X cv_dnn_DictValue_DictValue_int(int i) {
    try {
        cv::dnn::DictValue* ret = new cv::dnn::DictValue(i);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::DictValue::DictValue
// as:     cv::dnn::DictValue::DictValue (constructor) cv::dnn::DictValue . new
// Arg ARG Primitive(unsigned) p= Primitive(unsigned) = 
// Return value: cv::dnn::DictValue (boxed)
cv_return_value_void_X cv_dnn_DictValue_DictValue_unsigned(unsigned int p) {
    try {
        cv::dnn::DictValue* ret = new cv::dnn::DictValue(p);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::DictValue::DictValue
// as:     cv::dnn::DictValue::DictValue (constructor) cv::dnn::DictValue . new
// Arg ARG Primitive(double) p= Primitive(double) = 
// Return value: cv::dnn::DictValue (boxed)
cv_return_value_void_X cv_dnn_DictValue_DictValue_double(double p) {
    try {
        cv::dnn::DictValue* ret = new cv::dnn::DictValue(p);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::DictValue::DictValue
// as:     cv::dnn::DictValue::DictValue (constructor) cv::dnn::DictValue . new
// Arg ARG RawPtr[Primitive(char)] * s= (ptr) RawPtr[Primitive(char)] = 
// Return value: cv::dnn::DictValue (boxed)
cv_return_value_void_X cv_dnn_DictValue_DictValue_const_char_X(const char* s) {
    try {
        cv::dnn::DictValue* ret = new cv::dnn::DictValue(s);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::DictValue::size
// as:     cv::dnn::DictValue::size (method) cv::dnn::DictValue . size
// Return value: Primitive(int)
cv_return_value_int cv_dnn_DictValue_size_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::dnn::DictValue*>(instance)->size();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::dnn::DictValue::isInt
// as:     cv::dnn::DictValue::isInt (method) cv::dnn::DictValue . isInt
// Return value: Primitive(bool)
cv_return_value_bool cv_dnn_DictValue_isInt_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::dnn::DictValue*>(instance)->isInt();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::dnn::DictValue::isString
// as:     cv::dnn::DictValue::isString (method) cv::dnn::DictValue . isString
// Return value: Primitive(bool)
cv_return_value_bool cv_dnn_DictValue_isString_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::dnn::DictValue*>(instance)->isString();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::dnn::DictValue::isReal
// as:     cv::dnn::DictValue::isReal (method) cv::dnn::DictValue . isReal
// Return value: Primitive(bool)
cv_return_value_bool cv_dnn_DictValue_isReal_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::dnn::DictValue*>(instance)->isReal();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::dnn::DictValue::getIntValue
// as:     cv::dnn::DictValue::getIntValue (method) cv::dnn::DictValue . getIntValue
// Arg ARG Primitive(int) idx= Primitive(int) = -1
// Return value: Primitive(int)
cv_return_value_int cv_dnn_DictValue_getIntValue_const_int(void* instance, int idx) {
    try {
        int ret = reinterpret_cast<cv::dnn::DictValue*>(instance)->getIntValue(idx);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::dnn::DictValue::getRealValue
// as:     cv::dnn::DictValue::getRealValue (method) cv::dnn::DictValue . getRealValue
// Arg ARG Primitive(int) idx= Primitive(int) = -1
// Return value: Primitive(double)
cv_return_value_double cv_dnn_DictValue_getRealValue_const_int(void* instance, int idx) {
    try {
        double ret = reinterpret_cast<cv::dnn::DictValue*>(instance)->getRealValue(idx);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::dnn::DictValue::getStringValue
// as:     cv::dnn::DictValue::getStringValue (method) cv::dnn::DictValue . getStringValue
// Arg ARG Primitive(int) idx= Primitive(int) = -1
// Return value: string
cv_return_value_char_X cv_dnn_DictValue_getStringValue_const_int(void* instance, int idx) {
    try {
        String ret = reinterpret_cast<cv::dnn::DictValue*>(instance)->getStringValue(idx);
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// boxed class: cv::dnn::ELULayer
void cv_ELULayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::ELULayer*>(instance);
}
// parsed: cv::dnn::ELULayer::create
// as:     cv::dnn::ELULayer::create (method) cv::dnn::ELULayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::ELULayer (boxed)]
cv_return_value_void_X cv_dnn_ELULayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::ELULayer> ret = cv::dnn::ELULayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::ELULayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::EltwiseLayer
void cv_EltwiseLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::EltwiseLayer*>(instance);
}
// parsed: cv::dnn::EltwiseLayer::create
// as:     cv::dnn::EltwiseLayer::create (method) cv::dnn::EltwiseLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::EltwiseLayer (boxed)]
cv_return_value_void_X cv_dnn_EltwiseLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::EltwiseLayer> ret = cv::dnn::EltwiseLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::EltwiseLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::FlattenLayer
void cv_FlattenLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::FlattenLayer*>(instance);
}
// parsed: cv::dnn::FlattenLayer::create
// as:     cv::dnn::FlattenLayer::create (method) cv::dnn::FlattenLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::FlattenLayer (boxed)]
cv_return_value_void_X cv_dnn_FlattenLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::FlattenLayer> ret = cv::dnn::FlattenLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::FlattenLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::InnerProductLayer
void cv_InnerProductLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::InnerProductLayer*>(instance);
}
// parsed: cv::dnn::InnerProductLayer::create
// as:     cv::dnn::InnerProductLayer::create (method) cv::dnn::InnerProductLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::InnerProductLayer (boxed)]
cv_return_value_void_X cv_dnn_InnerProductLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::InnerProductLayer> ret = cv::dnn::InnerProductLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::InnerProductLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::InterpLayer
void cv_InterpLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::InterpLayer*>(instance);
}
// parsed: cv::dnn::InterpLayer::create
// as:     cv::dnn::InterpLayer::create (method) cv::dnn::InterpLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::Layer (boxed)]
cv_return_value_void_X cv_dnn_InterpLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::Layer> ret = cv::dnn::InterpLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::Layer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::LRNLayer
void cv_LRNLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::LRNLayer*>(instance);
}
// parsed: cv::dnn::LRNLayer::create
// as:     cv::dnn::LRNLayer::create (method) cv::dnn::LRNLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::LRNLayer (boxed)]
cv_return_value_void_X cv_dnn_LRNLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::LRNLayer> ret = cv::dnn::LRNLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::LRNLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::LSTMLayer::setWeights
// as:     cv::dnn::LSTMLayer::setWeights (method) cv::dnn::LSTMLayer (trait) . setWeights
// Arg ARG cv::Mat (boxed) Wh= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) Wx= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) b= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_LSTMLayer_setWeights_Mat_Mat_Mat(void* instance, void* Wh, void* Wx, void* b) {
    try {
        reinterpret_cast<cv::dnn::LSTMLayer*>(instance)->setWeights(*reinterpret_cast<const cv::Mat*>(Wh), *reinterpret_cast<const cv::Mat*>(Wx), *reinterpret_cast<const cv::Mat*>(b));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::LSTMLayer::setUseTimstampsDim
// as:     cv::dnn::LSTMLayer::setUseTimstampsDim (method) cv::dnn::LSTMLayer (trait) . setUseTimstampsDim
// Arg ARG Primitive(bool) use= Primitive(bool) = true
// Return value: Primitive(void)
cv_return_value_void cv_dnn_LSTMLayer_setUseTimstampsDim_bool(void* instance, bool use) {
    try {
        reinterpret_cast<cv::dnn::LSTMLayer*>(instance)->setUseTimstampsDim(use);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::LSTMLayer::setProduceCellOutput
// as:     cv::dnn::LSTMLayer::setProduceCellOutput (method) cv::dnn::LSTMLayer (trait) . setProduceCellOutput
// Arg ARG Primitive(bool) produce= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_dnn_LSTMLayer_setProduceCellOutput_bool(void* instance, bool produce) {
    try {
        reinterpret_cast<cv::dnn::LSTMLayer*>(instance)->setProduceCellOutput(produce);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::LSTMLayer::inputNameToIndex
// as:     cv::dnn::LSTMLayer::inputNameToIndex (method) cv::dnn::LSTMLayer (trait) . inputNameToIndex
// Arg ARG string inputName= string = 
// Return value: Primitive(int)
cv_return_value_int cv_dnn_LSTMLayer_inputNameToIndex_String(void* instance, const char* inputName) {
    try {
        int ret = reinterpret_cast<cv::dnn::LSTMLayer*>(instance)->inputNameToIndex(String(inputName));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::dnn::LSTMLayer::outputNameToIndex
// as:     cv::dnn::LSTMLayer::outputNameToIndex (method) cv::dnn::LSTMLayer (trait) . outputNameToIndex
// Arg ARG string outputName= string = 
// Return value: Primitive(int)
cv_return_value_int cv_dnn_LSTMLayer_outputNameToIndex_String(void* instance, const char* outputName) {
    try {
        int ret = reinterpret_cast<cv::dnn::LSTMLayer*>(instance)->outputNameToIndex(String(outputName));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::dnn::LSTMLayer::create
// as:     cv::dnn::LSTMLayer::create (method) cv::dnn::LSTMLayer (trait) . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::LSTMLayer (boxed)]
cv_return_value_void_X cv_dnn_LSTMLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::LSTMLayer> ret = cv::dnn::LSTMLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::LSTMLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Layer::blobs
// as:     cv::dnn::Layer::blobs (method) cv::dnn::Layer (trait) . blobs
// Return value: Vector[cv::Mat (boxed)]
cv_return_value_void_X cv_dnn_Layer_blobs(void* instance) {
    try {
        std::vector<cv::Mat> ret = reinterpret_cast<cv::dnn::Layer*>(instance)->blobs;
        return { Error::Code::StsOk, NULL, new std::vector<cv::Mat>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Layer::set_blobs
// as:     cv::dnn::Layer::set_blobs (method) cv::dnn::Layer (trait) . set_blobs
// Arg ARG Vector[cv::Mat (boxed)] val= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Layer_set_blobs_VectorOfMat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::dnn::Layer*>(instance)->blobs = *reinterpret_cast<std::vector<cv::Mat>*>(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Layer::name
// as:     cv::dnn::Layer::name (method) cv::dnn::Layer (trait) . name
// Return value: string
cv_return_value_char_X cv_dnn_Layer_name(void* instance) {
    try {
        String ret = reinterpret_cast<cv::dnn::Layer*>(instance)->name;
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::dnn::Layer::set_name
// as:     cv::dnn::Layer::set_name (method) cv::dnn::Layer (trait) . set_name
// Arg ARG string val= string = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Layer_set_name_String(void* instance, const char* val) {
    try {
        reinterpret_cast<cv::dnn::Layer*>(instance)->name = String(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Layer::type
// as:     cv::dnn::Layer::type (method) cv::dnn::Layer (trait) . type
// Return value: string
cv_return_value_char_X cv_dnn_Layer_type(void* instance) {
    try {
        String ret = reinterpret_cast<cv::dnn::Layer*>(instance)->type;
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::dnn::Layer::set_type
// as:     cv::dnn::Layer::set_type (method) cv::dnn::Layer (trait) . set_type
// Arg ARG string val= string = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Layer_set_type_String(void* instance, const char* val) {
    try {
        reinterpret_cast<cv::dnn::Layer*>(instance)->type = String(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Layer::preferableTarget
// as:     cv::dnn::Layer::preferableTarget (method) cv::dnn::Layer (trait) . preferableTarget
// Return value: Primitive(int)
cv_return_value_int cv_dnn_Layer_preferableTarget_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::dnn::Layer*>(instance)->preferableTarget;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::dnn::Layer::finalize
// as:     cv::dnn::Layer::finalize (method) cv::dnn::Layer (trait) . finalize
// Arg ARG cv::_InputArray (boxed) inputs= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) outputs= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Layer_finalize__InputArray__OutputArray(void* instance, void* inputs, void* outputs) {
    try {
        reinterpret_cast<cv::dnn::Layer*>(instance)->finalize(*reinterpret_cast<const cv::_InputArray*>(inputs), *reinterpret_cast<cv::_OutputArray*>(outputs));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Layer::forward
// as:     cv::dnn::Layer::forward (method) cv::dnn::Layer (trait) . forward
// Arg ARG cv::_InputArray (boxed) inputs= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) outputs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) internals= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Layer_forward__InputArray__OutputArray__OutputArray(void* instance, void* inputs, void* outputs, void* internals) {
    try {
        reinterpret_cast<cv::dnn::Layer*>(instance)->forward(*reinterpret_cast<const cv::_InputArray*>(inputs), *reinterpret_cast<cv::_OutputArray*>(outputs), *reinterpret_cast<cv::_OutputArray*>(internals));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Layer::forward_fallback
// as:     cv::dnn::Layer::forward_fallback (method) cv::dnn::Layer (trait) . forward_fallback
// Arg ARG cv::_InputArray (boxed) inputs= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) outputs= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) internals= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Layer_forward_fallback__InputArray__OutputArray__OutputArray(void* instance, void* inputs, void* outputs, void* internals) {
    try {
        reinterpret_cast<cv::dnn::Layer*>(instance)->forward_fallback(*reinterpret_cast<const cv::_InputArray*>(inputs), *reinterpret_cast<cv::_OutputArray*>(outputs), *reinterpret_cast<cv::_OutputArray*>(internals));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Layer::finalize
// as:     cv::dnn::Layer::finalize (method) cv::dnn::Layer (trait) . finalize
// Arg ARG Vector[cv::Mat (boxed)] inputs= Vector[cv::Mat (boxed)] = 
// Return value: Vector[cv::Mat (boxed)]
cv_return_value_void_X cv_dnn_Layer_finalize_VectorOfMat(void* instance, void* inputs) {
    try {
        std::vector<cv::Mat> ret = reinterpret_cast<cv::dnn::Layer*>(instance)->finalize(*reinterpret_cast<const std::vector<cv::Mat>*>(inputs));
        return { Error::Code::StsOk, NULL, new std::vector<cv::Mat>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Layer::run
// as:     cv::dnn::Layer::run (method) cv::dnn::Layer (trait) . run
// Arg ARG Vector[cv::Mat (boxed)] inputs= Vector[cv::Mat (boxed)] = 
// Arg ARG Vector[cv::Mat (boxed)] outputs= Vector[cv::Mat (boxed)] = 
// Arg ARG Vector[cv::Mat (boxed)] internals= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Layer_run_VectorOfMat_VectorOfMat_VectorOfMat(void* instance, void* inputs, void* outputs, void* internals) {
    try {
        reinterpret_cast<cv::dnn::Layer*>(instance)->run(*reinterpret_cast<const std::vector<cv::Mat>*>(inputs), *reinterpret_cast<std::vector<cv::Mat>*>(outputs), *reinterpret_cast<std::vector<cv::Mat>*>(internals));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Layer::inputNameToIndex
// as:     cv::dnn::Layer::inputNameToIndex (method) cv::dnn::Layer (trait) . inputNameToIndex
// Arg ARG string inputName= string = 
// Return value: Primitive(int)
cv_return_value_int cv_dnn_Layer_inputNameToIndex_String(void* instance, const char* inputName) {
    try {
        int ret = reinterpret_cast<cv::dnn::Layer*>(instance)->inputNameToIndex(String(inputName));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::dnn::Layer::outputNameToIndex
// as:     cv::dnn::Layer::outputNameToIndex (method) cv::dnn::Layer (trait) . outputNameToIndex
// Arg ARG string outputName= string = 
// Return value: Primitive(int)
cv_return_value_int cv_dnn_Layer_outputNameToIndex_String(void* instance, const char* outputName) {
    try {
        int ret = reinterpret_cast<cv::dnn::Layer*>(instance)->outputNameToIndex(String(outputName));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::dnn::Layer::supportBackend
// as:     cv::dnn::Layer::supportBackend (method) cv::dnn::Layer (trait) . supportBackend
// Arg ARG Primitive(int) backendId= Primitive(int) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_dnn_Layer_supportBackend_int(void* instance, int backendId) {
    try {
        bool ret = reinterpret_cast<cv::dnn::Layer*>(instance)->supportBackend(backendId);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::dnn::Layer::initHalide
// as:     cv::dnn::Layer::initHalide (method) cv::dnn::Layer (trait) . initHalide
// Arg ARG Vector[SmartPtr[cv::dnn::BackendWrapper (boxed)]] inputs= Vector[SmartPtr[cv::dnn::BackendWrapper (boxed)]] = 
// Return value: SmartPtr[cv::dnn::BackendNode (boxed)]
cv_return_value_void_X cv_dnn_Layer_initHalide_VectorOfPtrOfBackendWrapper(void* instance, void* inputs) {
    try {
        Ptr<cv::dnn::BackendNode> ret = reinterpret_cast<cv::dnn::Layer*>(instance)->initHalide(*reinterpret_cast<const std::vector<Ptr<cv::dnn::BackendWrapper>>*>(inputs));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::BackendNode>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Layer::initInfEngine
// as:     cv::dnn::Layer::initInfEngine (method) cv::dnn::Layer (trait) . initInfEngine
// Arg ARG Vector[SmartPtr[cv::dnn::BackendWrapper (boxed)]] inputs= Vector[SmartPtr[cv::dnn::BackendWrapper (boxed)]] = 
// Return value: SmartPtr[cv::dnn::BackendNode (boxed)]
cv_return_value_void_X cv_dnn_Layer_initInfEngine_VectorOfPtrOfBackendWrapper(void* instance, void* inputs) {
    try {
        Ptr<cv::dnn::BackendNode> ret = reinterpret_cast<cv::dnn::Layer*>(instance)->initInfEngine(*reinterpret_cast<const std::vector<Ptr<cv::dnn::BackendWrapper>>*>(inputs));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::BackendNode>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Layer::initVkCom
// as:     cv::dnn::Layer::initVkCom (method) cv::dnn::Layer (trait) . initVkCom
// Arg ARG Vector[SmartPtr[cv::dnn::BackendWrapper (boxed)]] inputs= Vector[SmartPtr[cv::dnn::BackendWrapper (boxed)]] = 
// Return value: SmartPtr[cv::dnn::BackendNode (boxed)]
cv_return_value_void_X cv_dnn_Layer_initVkCom_VectorOfPtrOfBackendWrapper(void* instance, void* inputs) {
    try {
        Ptr<cv::dnn::BackendNode> ret = reinterpret_cast<cv::dnn::Layer*>(instance)->initVkCom(*reinterpret_cast<const std::vector<Ptr<cv::dnn::BackendWrapper>>*>(inputs));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::BackendNode>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Layer::tryAttach
// as:     cv::dnn::Layer::tryAttach (method) cv::dnn::Layer (trait) . tryAttach
// Arg ARG SmartPtr[cv::dnn::BackendNode (boxed)] node= SmartPtr[cv::dnn::BackendNode (boxed)] = 
// Return value: SmartPtr[cv::dnn::BackendNode (boxed)]
cv_return_value_void_X cv_dnn_Layer_tryAttach_PtrOfBackendNode(void* instance, void* node) {
    try {
        Ptr<cv::dnn::BackendNode> ret = reinterpret_cast<cv::dnn::Layer*>(instance)->tryAttach(*reinterpret_cast<const Ptr<cv::dnn::BackendNode>*>(node));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::BackendNode>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Layer::setActivation
// as:     cv::dnn::Layer::setActivation (method) cv::dnn::Layer (trait) . setActivation
// Arg ARG SmartPtr[cv::dnn::ActivationLayer (boxed)] layer= SmartPtr[cv::dnn::ActivationLayer (boxed)] = 
// Return value: Primitive(bool)
cv_return_value_bool cv_dnn_Layer_setActivation_PtrOfActivationLayer(void* instance, void* layer) {
    try {
        bool ret = reinterpret_cast<cv::dnn::Layer*>(instance)->setActivation(*reinterpret_cast<const Ptr<cv::dnn::ActivationLayer>*>(layer));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::dnn::Layer::tryFuse
// as:     cv::dnn::Layer::tryFuse (method) cv::dnn::Layer (trait) . tryFuse
// Arg ARG SmartPtr[cv::dnn::Layer (boxed)] top= SmartPtr[cv::dnn::Layer (boxed)] = 
// Return value: Primitive(bool)
cv_return_value_bool cv_dnn_Layer_tryFuse_PtrOfLayer(void* instance, void* top) {
    try {
        bool ret = reinterpret_cast<cv::dnn::Layer*>(instance)->tryFuse(*reinterpret_cast<Ptr<cv::dnn::Layer>*>(top));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::dnn::Layer::getScaleShift
// as:     cv::dnn::Layer::getScaleShift (method) cv::dnn::Layer (trait) . getScaleShift
// Arg ARG cv::Mat (boxed) scale= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) shift= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Layer_getScaleShift_const_Mat_Mat(void* instance, void* scale, void* shift) {
    try {
        reinterpret_cast<cv::dnn::Layer*>(instance)->getScaleShift(*reinterpret_cast<cv::Mat*>(scale), *reinterpret_cast<cv::Mat*>(shift));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Layer::unsetAttached
// as:     cv::dnn::Layer::unsetAttached (method) cv::dnn::Layer (trait) . unsetAttached
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Layer_unsetAttached(void* instance) {
    try {
        reinterpret_cast<cv::dnn::Layer*>(instance)->unsetAttached();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Layer::getMemoryShapes
// as:     cv::dnn::Layer::getMemoryShapes (method) cv::dnn::Layer (trait) . getMemoryShapes
// Arg ARG Vector[Vector[Primitive(int)]] inputs= Vector[Vector[Primitive(int)]] = 
// Arg ARG Primitive(int) requiredOutputs= Primitive(int) = 
// Arg ARG Vector[Vector[Primitive(int)]] outputs= Vector[Vector[Primitive(int)]] = 
// Arg ARG Vector[Vector[Primitive(int)]] internals= Vector[Vector[Primitive(int)]] = 
// Return value: Primitive(bool)
cv_return_value_bool cv_dnn_Layer_getMemoryShapes_const_VectorOfVectorOfint_int_VectorOfVectorOfint_VectorOfVectorOfint(void* instance, void* inputs, int requiredOutputs, void* outputs, void* internals) {
    try {
        bool ret = reinterpret_cast<cv::dnn::Layer*>(instance)->getMemoryShapes(*reinterpret_cast<const std::vector<std::vector<int>>*>(inputs), requiredOutputs, *reinterpret_cast<std::vector<std::vector<int>>*>(outputs), *reinterpret_cast<std::vector<std::vector<int>>*>(internals));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::dnn::Layer::getFLOPS
// as:     cv::dnn::Layer::getFLOPS (method) cv::dnn::Layer (trait) . getFLOPS
// Arg ARG Vector[Vector[Primitive(int)]] inputs= Vector[Vector[Primitive(int)]] = 
// Arg ARG Vector[Vector[Primitive(int)]] outputs= Vector[Vector[Primitive(int)]] = 
// Return value: Primitive(int64)
cv_return_value_int64 cv_dnn_Layer_getFLOPS_const_VectorOfVectorOfint_VectorOfVectorOfint(void* instance, void* inputs, void* outputs) {
    try {
        int64 ret = reinterpret_cast<cv::dnn::Layer*>(instance)->getFLOPS(*reinterpret_cast<const std::vector<std::vector<int>>*>(inputs), *reinterpret_cast<const std::vector<std::vector<int>>*>(outputs));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int64)
}

// parsed: cv::dnn::Layer::setParamsFrom
// as:     cv::dnn::Layer::setParamsFrom (method) cv::dnn::Layer (trait) . setParamsFrom
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Layer_setParamsFrom_LayerParams(void* instance, void* params) {
    try {
        reinterpret_cast<cv::dnn::Layer*>(instance)->setParamsFrom(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::dnn::Layer
void cv_Layer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::Layer*>(instance);
}
// parsed: cv::dnn::Layer::Layer
// as:     cv::dnn::Layer::Layer (constructor) cv::dnn::Layer (trait) . default
// Return value: cv::dnn::Layer (boxed)
cv_return_value_void_X cv_dnn_Layer_Layer() {
    try {
        cv::dnn::Layer* ret = new cv::dnn::Layer();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Layer::Layer
// as:     cv::dnn::Layer::Layer (constructor) cv::dnn::Layer (trait) . new
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: cv::dnn::Layer (boxed)
cv_return_value_void_X cv_dnn_Layer_Layer_LayerParams(void* params) {
    try {
        cv::dnn::Layer* ret = new cv::dnn::Layer(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::LayerFactory
void cv_LayerFactory_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::LayerFactory*>(instance);
}
// parsed: cv::dnn::LayerFactory::unregisterLayer
// as:     cv::dnn::LayerFactory::unregisterLayer (method) cv::dnn::LayerFactory . unregisterLayer
// Arg ARG string type= string = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_LayerFactory_unregisterLayer_String(const char* type) {
    try {
        cv::dnn::LayerFactory::unregisterLayer(String(type));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::LayerFactory::createLayerInstance
// as:     cv::dnn::LayerFactory::createLayerInstance (method) cv::dnn::LayerFactory . createLayerInstance
// Arg ARG string type= string = 
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::Layer (boxed)]
cv_return_value_void_X cv_dnn_LayerFactory_createLayerInstance_String_LayerParams(const char* type, void* params) {
    try {
        Ptr<cv::dnn::Layer> ret = cv::dnn::LayerFactory::createLayerInstance(String(type), *reinterpret_cast<cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::Layer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::LayerParams
void cv_LayerParams_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::LayerParams*>(instance);
}
// parsed: cv::dnn::LayerParams::blobs
// as:     cv::dnn::LayerParams::blobs (method) cv::dnn::LayerParams . blobs
// Return value: Vector[cv::Mat (boxed)]
cv_return_value_void_X cv_dnn_LayerParams_blobs(void* instance) {
    try {
        std::vector<cv::Mat> ret = reinterpret_cast<cv::dnn::LayerParams*>(instance)->blobs;
        return { Error::Code::StsOk, NULL, new std::vector<cv::Mat>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::LayerParams::set_blobs
// as:     cv::dnn::LayerParams::set_blobs (method) cv::dnn::LayerParams . set_blobs
// Arg ARG Vector[cv::Mat (boxed)] val= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_LayerParams_set_blobs_VectorOfMat(void* instance, void* val) {
    try {
        reinterpret_cast<cv::dnn::LayerParams*>(instance)->blobs = *reinterpret_cast<std::vector<cv::Mat>*>(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::LayerParams::name
// as:     cv::dnn::LayerParams::name (method) cv::dnn::LayerParams . name
// Return value: string
cv_return_value_char_X cv_dnn_LayerParams_name(void* instance) {
    try {
        String ret = reinterpret_cast<cv::dnn::LayerParams*>(instance)->name;
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::dnn::LayerParams::set_name
// as:     cv::dnn::LayerParams::set_name (method) cv::dnn::LayerParams . set_name
// Arg ARG string val= string = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_LayerParams_set_name_String(void* instance, const char* val) {
    try {
        reinterpret_cast<cv::dnn::LayerParams*>(instance)->name = String(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::LayerParams::type
// as:     cv::dnn::LayerParams::type (method) cv::dnn::LayerParams . type
// Return value: string
cv_return_value_char_X cv_dnn_LayerParams_type(void* instance) {
    try {
        String ret = reinterpret_cast<cv::dnn::LayerParams*>(instance)->type;
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::dnn::LayerParams::set_type
// as:     cv::dnn::LayerParams::set_type (method) cv::dnn::LayerParams . set_type
// Arg ARG string val= string = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_LayerParams_set_type_String(void* instance, const char* val) {
    try {
        reinterpret_cast<cv::dnn::LayerParams*>(instance)->type = String(val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::LayerParams::LayerParams
// as:     cv::dnn::LayerParams::LayerParams (constructor) cv::dnn::LayerParams . default
// Return value: cv::dnn::LayerParams (boxed)
cv_return_value_void_X cv_dnn_LayerParams_LayerParams() {
    try {
        cv::dnn::LayerParams* ret = new cv::dnn::LayerParams();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::MVNLayer
void cv_MVNLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::MVNLayer*>(instance);
}
// parsed: cv::dnn::MVNLayer::create
// as:     cv::dnn::MVNLayer::create (method) cv::dnn::MVNLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::MVNLayer (boxed)]
cv_return_value_void_X cv_dnn_MVNLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::MVNLayer> ret = cv::dnn::MVNLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::MVNLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::MaxUnpoolLayer
void cv_MaxUnpoolLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::MaxUnpoolLayer*>(instance);
}
// parsed: cv::dnn::MaxUnpoolLayer::create
// as:     cv::dnn::MaxUnpoolLayer::create (method) cv::dnn::MaxUnpoolLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::MaxUnpoolLayer (boxed)]
cv_return_value_void_X cv_dnn_MaxUnpoolLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::MaxUnpoolLayer> ret = cv::dnn::MaxUnpoolLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::MaxUnpoolLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::Net
void cv_Net_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::Net*>(instance);
}
// parsed: cv::dnn::Net::Net
// as:     cv::dnn::Net::Net (constructor) cv::dnn::Net . default
// Return value: cv::dnn::Net (boxed)
cv_return_value_void_X cv_dnn_Net_Net() {
    try {
        cv::dnn::Net* ret = new cv::dnn::Net();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Net::readFromModelOptimizer
// as:     cv::dnn::Net::readFromModelOptimizer (method) cv::dnn::Net . readFromModelOptimizer
// Arg ARG string xml= string = 
// Arg ARG string bin= string = 
// Return value: cv::dnn::Net (boxed)
cv_return_value_void_X cv_dnn_Net_readFromModelOptimizer_String_String(const char* xml, const char* bin) {
    try {
        cv::dnn::Net ret = cv::dnn::Net::readFromModelOptimizer(String(xml), String(bin));
        return { Error::Code::StsOk, NULL, new cv::dnn::Net(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Net::empty
// as:     cv::dnn::Net::empty (method) cv::dnn::Net . empty
// Return value: Primitive(bool)
cv_return_value_bool cv_dnn_Net_empty_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::dnn::Net*>(instance)->empty();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::dnn::Net::dump
// as:     cv::dnn::Net::dump (method) cv::dnn::Net . dump
// Return value: string
cv_return_value_char_X cv_dnn_Net_dump(void* instance) {
    try {
        String ret = reinterpret_cast<cv::dnn::Net*>(instance)->dump();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::dnn::Net::dumpToFile
// as:     cv::dnn::Net::dumpToFile (method) cv::dnn::Net . dumpToFile
// Arg ARG string path= string = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Net_dumpToFile_String(void* instance, const char* path) {
    try {
        reinterpret_cast<cv::dnn::Net*>(instance)->dumpToFile(String(path));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Net::addLayer
// as:     cv::dnn::Net::addLayer (method) cv::dnn::Net . addLayer
// Arg ARG string name= string = 
// Arg ARG string type= string = 
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: Primitive(int)
cv_return_value_int cv_dnn_Net_addLayer_String_String_LayerParams(void* instance, const char* name, const char* type, void* params) {
    try {
        int ret = reinterpret_cast<cv::dnn::Net*>(instance)->addLayer(String(name), String(type), *reinterpret_cast<cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::dnn::Net::addLayerToPrev
// as:     cv::dnn::Net::addLayerToPrev (method) cv::dnn::Net . addLayerToPrev
// Arg ARG string name= string = 
// Arg ARG string type= string = 
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: Primitive(int)
cv_return_value_int cv_dnn_Net_addLayerToPrev_String_String_LayerParams(void* instance, const char* name, const char* type, void* params) {
    try {
        int ret = reinterpret_cast<cv::dnn::Net*>(instance)->addLayerToPrev(String(name), String(type), *reinterpret_cast<cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::dnn::Net::getLayerId
// as:     cv::dnn::Net::getLayerId (method) cv::dnn::Net . getLayerId
// Arg ARG string layer= string = 
// Return value: Primitive(int)
cv_return_value_int cv_dnn_Net_getLayerId_String(void* instance, const char* layer) {
    try {
        int ret = reinterpret_cast<cv::dnn::Net*>(instance)->getLayerId(String(layer));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::dnn::Net::getLayerNames
// as:     cv::dnn::Net::getLayerNames (method) cv::dnn::Net . getLayerNames
// Return value: Vector[string]
cv_return_value_void_X cv_dnn_Net_getLayerNames_const(void* instance) {
    try {
        std::vector<String> ret = reinterpret_cast<cv::dnn::Net*>(instance)->getLayerNames();
        return { Error::Code::StsOk, NULL, new std::vector<String>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Net::getLayer
// as:     cv::dnn::Net::getLayer (method) cv::dnn::Net . getLayer
// Arg ARG cv::dnn::DictValue (boxed) layerId= cv::dnn::DictValue (boxed) = 
// Return value: SmartPtr[cv::dnn::Layer (boxed)]
cv_return_value_void_X cv_dnn_Net_getLayer_DictValue(void* instance, void* layerId) {
    try {
        Ptr<cv::dnn::Layer> ret = reinterpret_cast<cv::dnn::Net*>(instance)->getLayer(*reinterpret_cast<cv::dnn::DictValue*>(layerId));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::Layer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Net::getLayerInputs
// as:     cv::dnn::Net::getLayerInputs (method) cv::dnn::Net . getLayerInputs
// Arg ARG cv::dnn::DictValue (boxed) layerId= cv::dnn::DictValue (boxed) = 
// Return value: Vector[SmartPtr[cv::dnn::Layer (boxed)]]
cv_return_value_void_X cv_dnn_Net_getLayerInputs_DictValue(void* instance, void* layerId) {
    try {
        std::vector<Ptr<cv::dnn::Layer>> ret = reinterpret_cast<cv::dnn::Net*>(instance)->getLayerInputs(*reinterpret_cast<cv::dnn::DictValue*>(layerId));
        return { Error::Code::StsOk, NULL, new std::vector<Ptr<cv::dnn::Layer>>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Net::connect
// as:     cv::dnn::Net::connect (method) cv::dnn::Net . connect
// Arg ARG string outPin= string = 
// Arg ARG string inpPin= string = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Net_connect_String_String(void* instance, const char* outPin, const char* inpPin) {
    try {
        reinterpret_cast<cv::dnn::Net*>(instance)->connect(String(outPin), String(inpPin));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Net::connect
// as:     cv::dnn::Net::connect (method) cv::dnn::Net . connect
// Arg ARG Primitive(int) outLayerId= Primitive(int) = 
// Arg ARG Primitive(int) outNum= Primitive(int) = 
// Arg ARG Primitive(int) inpLayerId= Primitive(int) = 
// Arg ARG Primitive(int) inpNum= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Net_connect_int_int_int_int(void* instance, int outLayerId, int outNum, int inpLayerId, int inpNum) {
    try {
        reinterpret_cast<cv::dnn::Net*>(instance)->connect(outLayerId, outNum, inpLayerId, inpNum);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Net::setInputsNames
// as:     cv::dnn::Net::setInputsNames (method) cv::dnn::Net . setInputsNames
// Arg ARG Vector[string] inputBlobNames= Vector[string] = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Net_setInputsNames_VectorOfString(void* instance, void* inputBlobNames) {
    try {
        reinterpret_cast<cv::dnn::Net*>(instance)->setInputsNames(*reinterpret_cast<const std::vector<String>*>(inputBlobNames));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Net::forward
// as:     cv::dnn::Net::forward (method) cv::dnn::Net . forward
// Arg ARG string outputName= string = String()
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_dnn_Net_forward_String(void* instance, const char* outputName) {
    try {
        cv::Mat ret = reinterpret_cast<cv::dnn::Net*>(instance)->forward(String(outputName));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Net::forward
// as:     cv::dnn::Net::forward (method) cv::dnn::Net . forward
// Arg ARG cv::_OutputArray (boxed) outputBlobs= cv::_OutputArray (boxed) = 
// Arg ARG string outputName= string = String()
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Net_forward__OutputArray_String(void* instance, void* outputBlobs, const char* outputName) {
    try {
        reinterpret_cast<cv::dnn::Net*>(instance)->forward(*reinterpret_cast<cv::_OutputArray*>(outputBlobs), String(outputName));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Net::forward
// as:     cv::dnn::Net::forward (method) cv::dnn::Net . forward
// Arg ARG cv::_OutputArray (boxed) outputBlobs= cv::_OutputArray (boxed) = 
// Arg ARG Vector[string] outBlobNames= Vector[string] = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Net_forward__OutputArray_VectorOfString(void* instance, void* outputBlobs, void* outBlobNames) {
    try {
        reinterpret_cast<cv::dnn::Net*>(instance)->forward(*reinterpret_cast<cv::_OutputArray*>(outputBlobs), *reinterpret_cast<const std::vector<String>*>(outBlobNames));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Net::forward
// as:     cv::dnn::Net::forward (method) cv::dnn::Net . forward
// Arg ARG Vector[Vector[cv::Mat (boxed)]] outputBlobs= Vector[Vector[cv::Mat (boxed)]] = 
// Arg ARG Vector[string] outBlobNames= Vector[string] = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Net_forward_VectorOfVectorOfMat_VectorOfString(void* instance, void* outputBlobs, void* outBlobNames) {
    try {
        reinterpret_cast<cv::dnn::Net*>(instance)->forward(*reinterpret_cast<std::vector<std::vector<cv::Mat>>*>(outputBlobs), *reinterpret_cast<const std::vector<String>*>(outBlobNames));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Net::setHalideScheduler
// as:     cv::dnn::Net::setHalideScheduler (method) cv::dnn::Net . setHalideScheduler
// Arg ARG string scheduler= string = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Net_setHalideScheduler_String(void* instance, const char* scheduler) {
    try {
        reinterpret_cast<cv::dnn::Net*>(instance)->setHalideScheduler(String(scheduler));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Net::setPreferableBackend
// as:     cv::dnn::Net::setPreferableBackend (method) cv::dnn::Net . setPreferableBackend
// Arg ARG Primitive(int) backendId= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Net_setPreferableBackend_int(void* instance, int backendId) {
    try {
        reinterpret_cast<cv::dnn::Net*>(instance)->setPreferableBackend(backendId);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Net::setPreferableTarget
// as:     cv::dnn::Net::setPreferableTarget (method) cv::dnn::Net . setPreferableTarget
// Arg ARG Primitive(int) targetId= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Net_setPreferableTarget_int(void* instance, int targetId) {
    try {
        reinterpret_cast<cv::dnn::Net*>(instance)->setPreferableTarget(targetId);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Net::setInput
// as:     cv::dnn::Net::setInput (method) cv::dnn::Net . setInput
// Arg ARG cv::_InputArray (boxed) blob= cv::_InputArray (boxed) = 
// Arg ARG string name= string = ""
// Arg ARG Primitive(double) scalefactor= Primitive(double) = 1.0
// Arg ARG cv::Scalar (simple) mean= cv::Scalar (simple) = Scalar()
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Net_setInput__InputArray_String_double_Scalar(void* instance, void* blob, const char* name, double scalefactor, ScalarWrapper mean) {
    try {
        reinterpret_cast<cv::dnn::Net*>(instance)->setInput(*reinterpret_cast<const cv::_InputArray*>(blob), String(name), scalefactor, *reinterpret_cast<const cv::Scalar*>(&mean));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Net::setParam
// as:     cv::dnn::Net::setParam (method) cv::dnn::Net . setParam
// Arg ARG cv::dnn::DictValue (boxed) layer= cv::dnn::DictValue (boxed) = 
// Arg ARG Primitive(int) numParam= Primitive(int) = 
// Arg ARG cv::Mat (boxed) blob= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Net_setParam_DictValue_int_Mat(void* instance, void* layer, int numParam, void* blob) {
    try {
        reinterpret_cast<cv::dnn::Net*>(instance)->setParam(*reinterpret_cast<cv::dnn::DictValue*>(layer), numParam, *reinterpret_cast<const cv::Mat*>(blob));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Net::getParam
// as:     cv::dnn::Net::getParam (method) cv::dnn::Net . getParam
// Arg ARG cv::dnn::DictValue (boxed) layer= cv::dnn::DictValue (boxed) = 
// Arg ARG Primitive(int) numParam= Primitive(int) = 0
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_dnn_Net_getParam_DictValue_int(void* instance, void* layer, int numParam) {
    try {
        cv::Mat ret = reinterpret_cast<cv::dnn::Net*>(instance)->getParam(*reinterpret_cast<cv::dnn::DictValue*>(layer), numParam);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Net::getUnconnectedOutLayers
// as:     cv::dnn::Net::getUnconnectedOutLayers (method) cv::dnn::Net . getUnconnectedOutLayers
// Return value: Vector[Primitive(int)]
cv_return_value_void_X cv_dnn_Net_getUnconnectedOutLayers_const(void* instance) {
    try {
        std::vector<int> ret = reinterpret_cast<cv::dnn::Net*>(instance)->getUnconnectedOutLayers();
        return { Error::Code::StsOk, NULL, new std::vector<int>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Net::getUnconnectedOutLayersNames
// as:     cv::dnn::Net::getUnconnectedOutLayersNames (method) cv::dnn::Net . getUnconnectedOutLayersNames
// Return value: Vector[string]
cv_return_value_void_X cv_dnn_Net_getUnconnectedOutLayersNames_const(void* instance) {
    try {
        std::vector<String> ret = reinterpret_cast<cv::dnn::Net*>(instance)->getUnconnectedOutLayersNames();
        return { Error::Code::StsOk, NULL, new std::vector<String>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::Net::getLayersShapes
// as:     cv::dnn::Net::getLayersShapes (method) cv::dnn::Net . getLayersShapes
// Arg ARG Vector[Vector[Primitive(int)]] netInputShapes= Vector[Vector[Primitive(int)]] = 
// Arg ARG Vector[Primitive(int)] layersIds= Vector[Primitive(int)] = 
// Arg ARG Vector[Vector[Vector[Primitive(int)]]] inLayersShapes= Vector[Vector[Vector[Primitive(int)]]] = 
// Arg ARG Vector[Vector[Vector[Primitive(int)]]] outLayersShapes= Vector[Vector[Vector[Primitive(int)]]] = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Net_getLayersShapes_const_VectorOfVectorOfint_VectorOfint_VectorOfVectorOfVectorOfint_VectorOfVectorOfVectorOfint(void* instance, void* netInputShapes, void* layersIds, void* inLayersShapes, void* outLayersShapes) {
    try {
        reinterpret_cast<cv::dnn::Net*>(instance)->getLayersShapes(*reinterpret_cast<const std::vector<std::vector<int>>*>(netInputShapes), *reinterpret_cast<std::vector<int>*>(layersIds), *reinterpret_cast<std::vector<std::vector<std::vector<int>>>*>(inLayersShapes), *reinterpret_cast<std::vector<std::vector<std::vector<int>>>*>(outLayersShapes));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Net::getLayerShapes
// as:     cv::dnn::Net::getLayerShapes (method) cv::dnn::Net . getLayerShapes
// Arg ARG Vector[Vector[Primitive(int)]] netInputShapes= Vector[Vector[Primitive(int)]] = 
// Arg ARG Primitive(int) layerId= Primitive(int) = 
// Arg ARG Vector[Vector[Primitive(int)]] inLayerShapes= Vector[Vector[Primitive(int)]] = 
// Arg ARG Vector[Vector[Primitive(int)]] outLayerShapes= Vector[Vector[Primitive(int)]] = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Net_getLayerShapes_const_VectorOfVectorOfint_int_VectorOfVectorOfint_VectorOfVectorOfint(void* instance, void* netInputShapes, int layerId, void* inLayerShapes, void* outLayerShapes) {
    try {
        reinterpret_cast<cv::dnn::Net*>(instance)->getLayerShapes(*reinterpret_cast<const std::vector<std::vector<int>>*>(netInputShapes), layerId, *reinterpret_cast<std::vector<std::vector<int>>*>(inLayerShapes), *reinterpret_cast<std::vector<std::vector<int>>*>(outLayerShapes));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Net::getFLOPS
// as:     cv::dnn::Net::getFLOPS (method) cv::dnn::Net . getFLOPS
// Arg ARG Vector[Vector[Primitive(int)]] netInputShapes= Vector[Vector[Primitive(int)]] = 
// Return value: Primitive(int64)
cv_return_value_int64 cv_dnn_Net_getFLOPS_const_VectorOfVectorOfint(void* instance, void* netInputShapes) {
    try {
        int64 ret = reinterpret_cast<cv::dnn::Net*>(instance)->getFLOPS(*reinterpret_cast<const std::vector<std::vector<int>>*>(netInputShapes));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int64)
}

// parsed: cv::dnn::Net::getFLOPS
// as:     cv::dnn::Net::getFLOPS (method) cv::dnn::Net . getFLOPS
// Arg ARG Primitive(int) layerId= Primitive(int) = 
// Arg ARG Vector[Vector[Primitive(int)]] netInputShapes= Vector[Vector[Primitive(int)]] = 
// Return value: Primitive(int64)
cv_return_value_int64 cv_dnn_Net_getFLOPS_const_int_VectorOfVectorOfint(void* instance, int layerId, void* netInputShapes) {
    try {
        int64 ret = reinterpret_cast<cv::dnn::Net*>(instance)->getFLOPS(layerId, *reinterpret_cast<const std::vector<std::vector<int>>*>(netInputShapes));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int64)
}

// parsed: cv::dnn::Net::getLayerTypes
// as:     cv::dnn::Net::getLayerTypes (method) cv::dnn::Net . getLayerTypes
// Arg ARG Vector[string] layersTypes= Vector[string] = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Net_getLayerTypes_const_VectorOfString(void* instance, void* layersTypes) {
    try {
        reinterpret_cast<cv::dnn::Net*>(instance)->getLayerTypes(*reinterpret_cast<std::vector<String>*>(layersTypes));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Net::getLayersCount
// as:     cv::dnn::Net::getLayersCount (method) cv::dnn::Net . getLayersCount
// Arg ARG string layerType= string = 
// Return value: Primitive(int)
cv_return_value_int cv_dnn_Net_getLayersCount_const_String(void* instance, const char* layerType) {
    try {
        int ret = reinterpret_cast<cv::dnn::Net*>(instance)->getLayersCount(String(layerType));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::dnn::Net::getMemoryConsumption
// as:     cv::dnn::Net::getMemoryConsumption (method) cv::dnn::Net . getMemoryConsumption
// Arg ARG Vector[Vector[Primitive(int)]] netInputShapes= Vector[Vector[Primitive(int)]] = 
// Arg ARG Primitive(size_t) weights= Primitive(size_t) = 
// Arg ARG Primitive(size_t) blobs= Primitive(size_t) = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Net_getMemoryConsumption_const_VectorOfVectorOfint_size_t_size_t(void* instance, void* netInputShapes, std::size_t& weights, std::size_t& blobs) {
    try {
        reinterpret_cast<cv::dnn::Net*>(instance)->getMemoryConsumption(*reinterpret_cast<const std::vector<std::vector<int>>*>(netInputShapes), weights, blobs);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Net::getMemoryConsumption
// as:     cv::dnn::Net::getMemoryConsumption (method) cv::dnn::Net . getMemoryConsumption
// Arg ARG Primitive(int) layerId= Primitive(int) = 
// Arg ARG Vector[Vector[Primitive(int)]] netInputShapes= Vector[Vector[Primitive(int)]] = 
// Arg ARG Primitive(size_t) weights= Primitive(size_t) = 
// Arg ARG Primitive(size_t) blobs= Primitive(size_t) = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Net_getMemoryConsumption_const_int_VectorOfVectorOfint_size_t_size_t(void* instance, int layerId, void* netInputShapes, std::size_t& weights, std::size_t& blobs) {
    try {
        reinterpret_cast<cv::dnn::Net*>(instance)->getMemoryConsumption(layerId, *reinterpret_cast<const std::vector<std::vector<int>>*>(netInputShapes), weights, blobs);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Net::getMemoryConsumption
// as:     cv::dnn::Net::getMemoryConsumption (method) cv::dnn::Net . getMemoryConsumption
// Arg ARG Vector[Vector[Primitive(int)]] netInputShapes= Vector[Vector[Primitive(int)]] = 
// Arg ARG Vector[Primitive(int)] layerIds= Vector[Primitive(int)] = 
// Arg ARG Vector[Primitive(size_t)] weights= Vector[Primitive(size_t)] = 
// Arg ARG Vector[Primitive(size_t)] blobs= Vector[Primitive(size_t)] = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Net_getMemoryConsumption_const_VectorOfVectorOfint_VectorOfint_VectorOfsize_t_VectorOfsize_t(void* instance, void* netInputShapes, void* layerIds, void* weights, void* blobs) {
    try {
        reinterpret_cast<cv::dnn::Net*>(instance)->getMemoryConsumption(*reinterpret_cast<const std::vector<std::vector<int>>*>(netInputShapes), *reinterpret_cast<std::vector<int>*>(layerIds), *reinterpret_cast<std::vector<size_t>*>(weights), *reinterpret_cast<std::vector<size_t>*>(blobs));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Net::enableFusion
// as:     cv::dnn::Net::enableFusion (method) cv::dnn::Net . enableFusion
// Arg ARG Primitive(bool) fusion= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_Net_enableFusion_bool(void* instance, bool fusion) {
    try {
        reinterpret_cast<cv::dnn::Net*>(instance)->enableFusion(fusion);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::Net::getPerfProfile
// as:     cv::dnn::Net::getPerfProfile (method) cv::dnn::Net . getPerfProfile
// Arg ARG Vector[Primitive(double)] timings= Vector[Primitive(double)] = 
// Return value: Primitive(int64)
cv_return_value_int64 cv_dnn_Net_getPerfProfile_VectorOfdouble(void* instance, void* timings) {
    try {
        int64 ret = reinterpret_cast<cv::dnn::Net*>(instance)->getPerfProfile(*reinterpret_cast<std::vector<double>*>(timings));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int64)
}

// boxed class: cv::dnn::NormalizeBBoxLayer
void cv_NormalizeBBoxLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::NormalizeBBoxLayer*>(instance);
}
// parsed: cv::dnn::NormalizeBBoxLayer::create
// as:     cv::dnn::NormalizeBBoxLayer::create (method) cv::dnn::NormalizeBBoxLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::NormalizeBBoxLayer (boxed)]
cv_return_value_void_X cv_dnn_NormalizeBBoxLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::NormalizeBBoxLayer> ret = cv::dnn::NormalizeBBoxLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::NormalizeBBoxLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::PaddingLayer
void cv_PaddingLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::PaddingLayer*>(instance);
}
// parsed: cv::dnn::PaddingLayer::create
// as:     cv::dnn::PaddingLayer::create (method) cv::dnn::PaddingLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::PaddingLayer (boxed)]
cv_return_value_void_X cv_dnn_PaddingLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::PaddingLayer> ret = cv::dnn::PaddingLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::PaddingLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::PermuteLayer
void cv_PermuteLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::PermuteLayer*>(instance);
}
// parsed: cv::dnn::PermuteLayer::create
// as:     cv::dnn::PermuteLayer::create (method) cv::dnn::PermuteLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::PermuteLayer (boxed)]
cv_return_value_void_X cv_dnn_PermuteLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::PermuteLayer> ret = cv::dnn::PermuteLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::PermuteLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::PoolingLayer
void cv_PoolingLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::PoolingLayer*>(instance);
}
// parsed: cv::dnn::PoolingLayer::create
// as:     cv::dnn::PoolingLayer::create (method) cv::dnn::PoolingLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::PoolingLayer (boxed)]
cv_return_value_void_X cv_dnn_PoolingLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::PoolingLayer> ret = cv::dnn::PoolingLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::PoolingLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::PowerLayer
void cv_PowerLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::PowerLayer*>(instance);
}
// parsed: cv::dnn::PowerLayer::create
// as:     cv::dnn::PowerLayer::create (method) cv::dnn::PowerLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::PowerLayer (boxed)]
cv_return_value_void_X cv_dnn_PowerLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::PowerLayer> ret = cv::dnn::PowerLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::PowerLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::PriorBoxLayer
void cv_PriorBoxLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::PriorBoxLayer*>(instance);
}
// parsed: cv::dnn::PriorBoxLayer::create
// as:     cv::dnn::PriorBoxLayer::create (method) cv::dnn::PriorBoxLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::PriorBoxLayer (boxed)]
cv_return_value_void_X cv_dnn_PriorBoxLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::PriorBoxLayer> ret = cv::dnn::PriorBoxLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::PriorBoxLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::ProposalLayer
void cv_ProposalLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::ProposalLayer*>(instance);
}
// parsed: cv::dnn::ProposalLayer::create
// as:     cv::dnn::ProposalLayer::create (method) cv::dnn::ProposalLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::ProposalLayer (boxed)]
cv_return_value_void_X cv_dnn_ProposalLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::ProposalLayer> ret = cv::dnn::ProposalLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::ProposalLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::dnn::RNNLayer::setWeights
// as:     cv::dnn::RNNLayer::setWeights (method) cv::dnn::RNNLayer (trait) . setWeights
// Arg ARG cv::Mat (boxed) Wxh= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) bh= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) Whh= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) Who= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) bo= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_dnn_RNNLayer_setWeights_Mat_Mat_Mat_Mat_Mat(void* instance, void* Wxh, void* bh, void* Whh, void* Who, void* bo) {
    try {
        reinterpret_cast<cv::dnn::RNNLayer*>(instance)->setWeights(*reinterpret_cast<const cv::Mat*>(Wxh), *reinterpret_cast<const cv::Mat*>(bh), *reinterpret_cast<const cv::Mat*>(Whh), *reinterpret_cast<const cv::Mat*>(Who), *reinterpret_cast<const cv::Mat*>(bo));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::RNNLayer::setProduceHiddenOutput
// as:     cv::dnn::RNNLayer::setProduceHiddenOutput (method) cv::dnn::RNNLayer (trait) . setProduceHiddenOutput
// Arg ARG Primitive(bool) produce= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_dnn_RNNLayer_setProduceHiddenOutput_bool(void* instance, bool produce) {
    try {
        reinterpret_cast<cv::dnn::RNNLayer*>(instance)->setProduceHiddenOutput(produce);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::dnn::RNNLayer::create
// as:     cv::dnn::RNNLayer::create (method) cv::dnn::RNNLayer (trait) . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::RNNLayer (boxed)]
cv_return_value_void_X cv_dnn_RNNLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::RNNLayer> ret = cv::dnn::RNNLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::RNNLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::ReLU6Layer
void cv_ReLU6Layer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::ReLU6Layer*>(instance);
}
// parsed: cv::dnn::ReLU6Layer::create
// as:     cv::dnn::ReLU6Layer::create (method) cv::dnn::ReLU6Layer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::ReLU6Layer (boxed)]
cv_return_value_void_X cv_dnn_ReLU6Layer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::ReLU6Layer> ret = cv::dnn::ReLU6Layer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::ReLU6Layer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::ReLULayer
void cv_ReLULayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::ReLULayer*>(instance);
}
// parsed: cv::dnn::ReLULayer::create
// as:     cv::dnn::ReLULayer::create (method) cv::dnn::ReLULayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::ReLULayer (boxed)]
cv_return_value_void_X cv_dnn_ReLULayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::ReLULayer> ret = cv::dnn::ReLULayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::ReLULayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::RegionLayer
void cv_RegionLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::RegionLayer*>(instance);
}
// parsed: cv::dnn::RegionLayer::create
// as:     cv::dnn::RegionLayer::create (method) cv::dnn::RegionLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::RegionLayer (boxed)]
cv_return_value_void_X cv_dnn_RegionLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::RegionLayer> ret = cv::dnn::RegionLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::RegionLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::ReorgLayer
void cv_ReorgLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::ReorgLayer*>(instance);
}
// parsed: cv::dnn::ReorgLayer::create
// as:     cv::dnn::ReorgLayer::create (method) cv::dnn::ReorgLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::ReorgLayer (boxed)]
cv_return_value_void_X cv_dnn_ReorgLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::ReorgLayer> ret = cv::dnn::ReorgLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::ReorgLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::ReshapeLayer
void cv_ReshapeLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::ReshapeLayer*>(instance);
}
// parsed: cv::dnn::ReshapeLayer::create
// as:     cv::dnn::ReshapeLayer::create (method) cv::dnn::ReshapeLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::ReshapeLayer (boxed)]
cv_return_value_void_X cv_dnn_ReshapeLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::ReshapeLayer> ret = cv::dnn::ReshapeLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::ReshapeLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::ResizeLayer
void cv_ResizeLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::ResizeLayer*>(instance);
}
// parsed: cv::dnn::ResizeLayer::create
// as:     cv::dnn::ResizeLayer::create (method) cv::dnn::ResizeLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::ResizeLayer (boxed)]
cv_return_value_void_X cv_dnn_ResizeLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::ResizeLayer> ret = cv::dnn::ResizeLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::ResizeLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::ScaleLayer
void cv_ScaleLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::ScaleLayer*>(instance);
}
// parsed: cv::dnn::ScaleLayer::create
// as:     cv::dnn::ScaleLayer::create (method) cv::dnn::ScaleLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::ScaleLayer (boxed)]
cv_return_value_void_X cv_dnn_ScaleLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::ScaleLayer> ret = cv::dnn::ScaleLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::ScaleLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::ShiftLayer
void cv_ShiftLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::ShiftLayer*>(instance);
}
// parsed: cv::dnn::ShiftLayer::create
// as:     cv::dnn::ShiftLayer::create (method) cv::dnn::ShiftLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::Layer (boxed)]
cv_return_value_void_X cv_dnn_ShiftLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::Layer> ret = cv::dnn::ShiftLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::Layer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::ShuffleChannelLayer
void cv_ShuffleChannelLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::ShuffleChannelLayer*>(instance);
}
// parsed: cv::dnn::ShuffleChannelLayer::create
// as:     cv::dnn::ShuffleChannelLayer::create (method) cv::dnn::ShuffleChannelLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::Layer (boxed)]
cv_return_value_void_X cv_dnn_ShuffleChannelLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::Layer> ret = cv::dnn::ShuffleChannelLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::Layer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::SigmoidLayer
void cv_SigmoidLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::SigmoidLayer*>(instance);
}
// parsed: cv::dnn::SigmoidLayer::create
// as:     cv::dnn::SigmoidLayer::create (method) cv::dnn::SigmoidLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::SigmoidLayer (boxed)]
cv_return_value_void_X cv_dnn_SigmoidLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::SigmoidLayer> ret = cv::dnn::SigmoidLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::SigmoidLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::SliceLayer
void cv_SliceLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::SliceLayer*>(instance);
}
// parsed: cv::dnn::SliceLayer::create
// as:     cv::dnn::SliceLayer::create (method) cv::dnn::SliceLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::SliceLayer (boxed)]
cv_return_value_void_X cv_dnn_SliceLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::SliceLayer> ret = cv::dnn::SliceLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::SliceLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::SoftmaxLayer
void cv_SoftmaxLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::SoftmaxLayer*>(instance);
}
// parsed: cv::dnn::SoftmaxLayer::create
// as:     cv::dnn::SoftmaxLayer::create (method) cv::dnn::SoftmaxLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::SoftmaxLayer (boxed)]
cv_return_value_void_X cv_dnn_SoftmaxLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::SoftmaxLayer> ret = cv::dnn::SoftmaxLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::SoftmaxLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::SplitLayer
void cv_SplitLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::SplitLayer*>(instance);
}
// parsed: cv::dnn::SplitLayer::create
// as:     cv::dnn::SplitLayer::create (method) cv::dnn::SplitLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::SplitLayer (boxed)]
cv_return_value_void_X cv_dnn_SplitLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::SplitLayer> ret = cv::dnn::SplitLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::SplitLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::dnn::TanHLayer
void cv_TanHLayer_delete(void* instance) {
    delete reinterpret_cast<cv::dnn::TanHLayer*>(instance);
}
// parsed: cv::dnn::TanHLayer::create
// as:     cv::dnn::TanHLayer::create (method) cv::dnn::TanHLayer . create
// Arg ARG cv::dnn::LayerParams (boxed) params= cv::dnn::LayerParams (boxed) = 
// Return value: SmartPtr[cv::dnn::TanHLayer (boxed)]
cv_return_value_void_X cv_dnn_TanHLayer_create_LayerParams(void* params) {
    try {
        Ptr<cv::dnn::TanHLayer> ret = cv::dnn::TanHLayer::create(*reinterpret_cast<const cv::dnn::LayerParams*>(params));
        return { Error::Code::StsOk, NULL, new Ptr<cv::dnn::TanHLayer>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}



} // extern "C"

