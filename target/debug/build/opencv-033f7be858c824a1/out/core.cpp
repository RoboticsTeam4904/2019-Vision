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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/cvdef.h"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/version.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/base.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/traits.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/matx.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/types.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/mat.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/persistence.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/affine.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/async.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/bindings_utils.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/bufferpool.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/check.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/core.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/cv_cpu_helper.h"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/directx.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/hal/interface.h"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/neon_utils.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/ocl.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/ocl_genbase.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/optim.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/ovx.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/saturate.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/simd_intrinsics.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/softfloat.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/sse_utils.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/utility.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/utils/allocator_stats.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/utils/logger.defines.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/utils/logger.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/utils/logtag.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/va_intel.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/core/vsx_utils.hpp"

extern "C" {

// parsed: cv::Cholesky
// as:     cv::Cholesky (function)
// Arg ARG RawPtr[Primitive(double)] * A= (ptr) RawPtr[Primitive(double)] = 
// Arg ARG Primitive(size_t) astep= Primitive(size_t) = 
// Arg ARG Primitive(int) m= Primitive(int) = 
// Arg ARG RawPtr[Primitive(double)] * b= (ptr) RawPtr[Primitive(double)] = 
// Arg ARG Primitive(size_t) bstep= Primitive(size_t) = 
// Arg ARG Primitive(int) n= Primitive(int) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_Cholesky_double_X_size_t_int_double_X_size_t_int(double* A, std::size_t astep, int m, double* b, std::size_t bstep, int n) {
    try {
        bool ret = cv::Cholesky(A, astep, m, b, bstep, n);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::Cholesky
// as:     cv::Cholesky (function)
// Arg ARG RawPtr[Primitive(float)] * A= (ptr) RawPtr[Primitive(float)] = 
// Arg ARG Primitive(size_t) astep= Primitive(size_t) = 
// Arg ARG Primitive(int) m= Primitive(int) = 
// Arg ARG RawPtr[Primitive(float)] * b= (ptr) RawPtr[Primitive(float)] = 
// Arg ARG Primitive(size_t) bstep= Primitive(size_t) = 
// Arg ARG Primitive(int) n= Primitive(int) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_Cholesky_float_X_size_t_int_float_X_size_t_int(float* A, std::size_t astep, int m, float* b, std::size_t bstep, int n) {
    try {
        bool ret = cv::Cholesky(A, astep, m, b, bstep, n);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::LUT
// as:     cv::LUT (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) lut= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_LUT__InputArray__InputArray__OutputArray(void* src, void* lut, void* dst) {
    try {
        cv::LUT(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<const cv::_InputArray*>(lut), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::LU
// as:     cv::LU (function)
// Arg ARG RawPtr[Primitive(double)] * A= (ptr) RawPtr[Primitive(double)] = 
// Arg ARG Primitive(size_t) astep= Primitive(size_t) = 
// Arg ARG Primitive(int) m= Primitive(int) = 
// Arg ARG RawPtr[Primitive(double)] * b= (ptr) RawPtr[Primitive(double)] = 
// Arg ARG Primitive(size_t) bstep= Primitive(size_t) = 
// Arg ARG Primitive(int) n= Primitive(int) = 
// Return value: Primitive(int)
cv_return_value_int cv_LU_double_X_size_t_int_double_X_size_t_int(double* A, std::size_t astep, int m, double* b, std::size_t bstep, int n) {
    try {
        int ret = cv::LU(A, astep, m, b, bstep, n);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::LU
// as:     cv::LU (function)
// Arg ARG RawPtr[Primitive(float)] * A= (ptr) RawPtr[Primitive(float)] = 
// Arg ARG Primitive(size_t) astep= Primitive(size_t) = 
// Arg ARG Primitive(int) m= Primitive(int) = 
// Arg ARG RawPtr[Primitive(float)] * b= (ptr) RawPtr[Primitive(float)] = 
// Arg ARG Primitive(size_t) bstep= Primitive(size_t) = 
// Arg ARG Primitive(int) n= Primitive(int) = 
// Return value: Primitive(int)
cv_return_value_int cv_LU_float_X_size_t_int_float_X_size_t_int(float* A, std::size_t astep, int m, float* b, std::size_t bstep, int n) {
    try {
        int ret = cv::LU(A, astep, m, b, bstep, n);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Mahalanobis
// as:     cv::Mahalanobis (function)
// Arg ARG cv::_InputArray (boxed) v1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) v2= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) icovar= cv::_InputArray (boxed) = 
// Return value: Primitive(double)
cv_return_value_double cv_Mahalanobis__InputArray__InputArray__InputArray(void* v1, void* v2, void* icovar) {
    try {
        double ret = cv::Mahalanobis(*reinterpret_cast<const cv::_InputArray*>(v1), *reinterpret_cast<const cv::_InputArray*>(v2), *reinterpret_cast<const cv::_InputArray*>(icovar));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::PCABackProject
// as:     cv::PCABackProject (function)
// Arg ARG cv::_InputArray (boxed) data= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mean= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) eigenvectors= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) result= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_PCABackProject__InputArray__InputArray__InputArray__OutputArray(void* data, void* mean, void* eigenvectors, void* result) {
    try {
        cv::PCABackProject(*reinterpret_cast<const cv::_InputArray*>(data), *reinterpret_cast<const cv::_InputArray*>(mean), *reinterpret_cast<const cv::_InputArray*>(eigenvectors), *reinterpret_cast<cv::_OutputArray*>(result));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::PCACompute
// as:     cv::PCACompute (function)
// Arg ARG cv::_InputArray (boxed) data= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) mean= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) eigenvectors= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) eigenvalues= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) retainedVariance= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_PCACompute__InputArray__InputOutputArray__OutputArray__OutputArray_double(void* data, void* mean, void* eigenvectors, void* eigenvalues, double retainedVariance) {
    try {
        cv::PCACompute(*reinterpret_cast<const cv::_InputArray*>(data), *reinterpret_cast<cv::_InputOutputArray*>(mean), *reinterpret_cast<cv::_OutputArray*>(eigenvectors), *reinterpret_cast<cv::_OutputArray*>(eigenvalues), retainedVariance);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::PCACompute
// as:     cv::PCACompute (function)
// Arg ARG cv::_InputArray (boxed) data= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) mean= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) eigenvectors= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) eigenvalues= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) maxComponents= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_PCACompute__InputArray__InputOutputArray__OutputArray__OutputArray_int(void* data, void* mean, void* eigenvectors, void* eigenvalues, int maxComponents) {
    try {
        cv::PCACompute(*reinterpret_cast<const cv::_InputArray*>(data), *reinterpret_cast<cv::_InputOutputArray*>(mean), *reinterpret_cast<cv::_OutputArray*>(eigenvectors), *reinterpret_cast<cv::_OutputArray*>(eigenvalues), maxComponents);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::PCACompute
// as:     cv::PCACompute (function)
// Arg ARG cv::_InputArray (boxed) data= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) mean= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) eigenvectors= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) retainedVariance= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_PCACompute__InputArray__InputOutputArray__OutputArray_double(void* data, void* mean, void* eigenvectors, double retainedVariance) {
    try {
        cv::PCACompute(*reinterpret_cast<const cv::_InputArray*>(data), *reinterpret_cast<cv::_InputOutputArray*>(mean), *reinterpret_cast<cv::_OutputArray*>(eigenvectors), retainedVariance);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::PCACompute
// as:     cv::PCACompute (function)
// Arg ARG cv::_InputArray (boxed) data= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) mean= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) eigenvectors= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) maxComponents= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_PCACompute__InputArray__InputOutputArray__OutputArray_int(void* data, void* mean, void* eigenvectors, int maxComponents) {
    try {
        cv::PCACompute(*reinterpret_cast<const cv::_InputArray*>(data), *reinterpret_cast<cv::_InputOutputArray*>(mean), *reinterpret_cast<cv::_OutputArray*>(eigenvectors), maxComponents);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::PCAProject
// as:     cv::PCAProject (function)
// Arg ARG cv::_InputArray (boxed) data= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mean= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) eigenvectors= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) result= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_PCAProject__InputArray__InputArray__InputArray__OutputArray(void* data, void* mean, void* eigenvectors, void* result) {
    try {
        cv::PCAProject(*reinterpret_cast<const cv::_InputArray*>(data), *reinterpret_cast<const cv::_InputArray*>(mean), *reinterpret_cast<const cv::_InputArray*>(eigenvectors), *reinterpret_cast<cv::_OutputArray*>(result));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::PSNR
// as:     cv::PSNR (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) R= Primitive(double) = 255.
// Return value: Primitive(double)
cv_return_value_double cv_PSNR__InputArray__InputArray_double(void* src1, void* src2, double R) {
    try {
        double ret = cv::PSNR(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), R);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::SVBackSubst
// as:     cv::SVBackSubst (function)
// Arg ARG cv::_InputArray (boxed) w= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) u= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) vt= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) rhs= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_SVBackSubst__InputArray__InputArray__InputArray__InputArray__OutputArray(void* w, void* u, void* vt, void* rhs, void* dst) {
    try {
        cv::SVBackSubst(*reinterpret_cast<const cv::_InputArray*>(w), *reinterpret_cast<const cv::_InputArray*>(u), *reinterpret_cast<const cv::_InputArray*>(vt), *reinterpret_cast<const cv::_InputArray*>(rhs), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SVDecomp
// as:     cv::SVDecomp (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) w= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) u= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) vt= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_SVDecomp__InputArray__OutputArray__OutputArray__OutputArray_int(void* src, void* w, void* u, void* vt, int flags) {
    try {
        cv::SVDecomp(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(w), *reinterpret_cast<cv::_OutputArray*>(u), *reinterpret_cast<cv::_OutputArray*>(vt), flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::abs
// as:     cv::abs (function)
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_abs_Mat(void* m) {
    try {
        cv::MatExpr ret = cv::abs(*reinterpret_cast<const cv::Mat*>(m));
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::abs
// as:     cv::abs (function)
// Arg ARG cv::MatExpr (boxed) e= cv::MatExpr (boxed) = 
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_abs_MatExpr(void* e) {
    try {
        cv::MatExpr ret = cv::abs(*reinterpret_cast<const cv::MatExpr*>(e));
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::absdiff
// as:     cv::absdiff (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_absdiff__InputArray__InputArray__OutputArray(void* src1, void* src2, void* dst) {
    try {
        cv::absdiff(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::addWeighted
// as:     cv::addWeighted (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) alpha= Primitive(double) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) beta= Primitive(double) = 
// Arg ARG Primitive(double) gamma= Primitive(double) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) dtype= Primitive(int) = -1
// Return value: Primitive(void)
cv_return_value_void cv_addWeighted__InputArray_double__InputArray_double_double__OutputArray_int(void* src1, double alpha, void* src2, double beta, double gamma, void* dst, int dtype) {
    try {
        cv::addWeighted(*reinterpret_cast<const cv::_InputArray*>(src1), alpha, *reinterpret_cast<const cv::_InputArray*>(src2), beta, gamma, *reinterpret_cast<cv::_OutputArray*>(dst), dtype);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::add
// as:     cv::add (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Arg ARG Primitive(int) dtype= Primitive(int) = -1
// Return value: Primitive(void)
cv_return_value_void cv_add__InputArray__InputArray__OutputArray__InputArray_int(void* src1, void* src2, void* dst, void* mask, int dtype) {
    try {
        cv::add(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(mask), dtype);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::alignSize
// as:     cv::alignSize (function)
// Arg ARG Primitive(size_t) sz= Primitive(size_t) = 
// Arg ARG Primitive(int) n= Primitive(int) = 
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_alignSize_size_t_int(std::size_t sz, int n) {
    try {
        size_t ret = cv::alignSize(sz, n);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::batchDistance
// as:     cv::batchDistance (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dist= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) dtype= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) nidx= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) normType= Primitive(int) = NORM_L2
// Arg ARG Primitive(int) K= Primitive(int) = 0
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Arg ARG Primitive(int) update= Primitive(int) = 0
// Arg ARG Primitive(bool) crosscheck= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_batchDistance__InputArray__InputArray__OutputArray_int__OutputArray_int_int__InputArray_int_bool(void* src1, void* src2, void* dist, int dtype, void* nidx, int normType, int K, void* mask, int update, bool crosscheck) {
    try {
        cv::batchDistance(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<cv::_OutputArray*>(dist), dtype, *reinterpret_cast<cv::_OutputArray*>(nidx), normType, K, *reinterpret_cast<const cv::_InputArray*>(mask), update, crosscheck);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bitwise_and
// as:     cv::bitwise_and (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_bitwise_and__InputArray__InputArray__OutputArray__InputArray(void* src1, void* src2, void* dst, void* mask) {
    try {
        cv::bitwise_and(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bitwise_not
// as:     cv::bitwise_not (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_bitwise_not__InputArray__OutputArray__InputArray(void* src, void* dst, void* mask) {
    try {
        cv::bitwise_not(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bitwise_or
// as:     cv::bitwise_or (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_bitwise_or__InputArray__InputArray__OutputArray__InputArray(void* src1, void* src2, void* dst, void* mask) {
    try {
        cv::bitwise_or(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::bitwise_xor
// as:     cv::bitwise_xor (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_bitwise_xor__InputArray__InputArray__OutputArray__InputArray(void* src1, void* src2, void* dst, void* mask) {
    try {
        cv::bitwise_xor(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::borderInterpolate
// as:     cv::borderInterpolate (function)
// Arg ARG Primitive(int) p= Primitive(int) = 
// Arg ARG Primitive(int) len= Primitive(int) = 
// Arg ARG Primitive(int) borderType= Primitive(int) = 
// Return value: Primitive(int)
cv_return_value_int cv_borderInterpolate_int_int_int(int p, int len, int borderType) {
    try {
        int ret = cv::borderInterpolate(p, len, borderType);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::calcCovarMatrix
// as:     cv::calcCovarMatrix (function)
// Arg ARG cv::_InputArray (boxed) samples= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) covar= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) mean= cv::_InputOutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG Primitive(int) ctype= Primitive(int) = CV_64F
// Return value: Primitive(void)
cv_return_value_void cv_calcCovarMatrix__InputArray__OutputArray__InputOutputArray_int_int(void* samples, void* covar, void* mean, int flags, int ctype) {
    try {
        cv::calcCovarMatrix(*reinterpret_cast<const cv::_InputArray*>(samples), *reinterpret_cast<cv::_OutputArray*>(covar), *reinterpret_cast<cv::_InputOutputArray*>(mean), flags, ctype);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::cartToPolar
// as:     cv::cartToPolar (function)
// Arg ARG cv::_InputArray (boxed) x= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) y= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) magnitude= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) angle= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(bool) angleInDegrees= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_cartToPolar__InputArray__InputArray__OutputArray__OutputArray_bool(void* x, void* y, void* magnitude, void* angle, bool angleInDegrees) {
    try {
        cv::cartToPolar(*reinterpret_cast<const cv::_InputArray*>(x), *reinterpret_cast<const cv::_InputArray*>(y), *reinterpret_cast<cv::_OutputArray*>(magnitude), *reinterpret_cast<cv::_OutputArray*>(angle), angleInDegrees);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::checkHardwareSupport
// as:     cv::checkHardwareSupport (function)
// Arg ARG Primitive(int) feature= Primitive(int) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_checkHardwareSupport_int(int feature) {
    try {
        bool ret = cv::checkHardwareSupport(feature);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::checkRange
// as:     cv::checkRange (function)
// Arg ARG cv::_InputArray (boxed) a= cv::_InputArray (boxed) = 
// Arg ARG Primitive(bool) quiet= Primitive(bool) = true
// Arg ARG RawPtr[cv::Point (simple)] * pos= (ptr) RawPtr[cv::Point (simple)] = 0
// Arg ARG Primitive(double) minVal= Primitive(double) = -DBL_MAX
// Arg ARG Primitive(double) maxVal= Primitive(double) = DBL_MAX
// Return value: Primitive(bool)
cv_return_value_bool cv_checkRange__InputArray_bool_Point_X_double_double(void* a, bool quiet, cv::Point* pos, double minVal, double maxVal) {
    try {
        bool ret = cv::checkRange(*reinterpret_cast<const cv::_InputArray*>(a), quiet, reinterpret_cast<cv::Point*>(pos), minVal, maxVal);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::compare
// as:     cv::compare (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) cmpop= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_compare__InputArray__InputArray__OutputArray_int(void* src1, void* src2, void* dst, int cmpop) {
    try {
        cv::compare(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<cv::_OutputArray*>(dst), cmpop);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::completeSymm
// as:     cv::completeSymm (function)
// Arg ARG cv::_InputOutputArray (boxed) m= cv::_InputOutputArray (boxed) = 
// Arg ARG Primitive(bool) lowerToUpper= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_completeSymm__InputOutputArray_bool(void* m, bool lowerToUpper) {
    try {
        cv::completeSymm(*reinterpret_cast<cv::_InputOutputArray*>(m), lowerToUpper);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::convertFp16
// as:     cv::convertFp16 (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_convertFp16__InputArray__OutputArray(void* src, void* dst) {
    try {
        cv::convertFp16(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::convertScaleAbs
// as:     cv::convertScaleAbs (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) alpha= Primitive(double) = 1
// Arg ARG Primitive(double) beta= Primitive(double) = 0
// Return value: Primitive(void)
cv_return_value_void cv_convertScaleAbs__InputArray__OutputArray_double_double(void* src, void* dst, double alpha, double beta) {
    try {
        cv::convertScaleAbs(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), alpha, beta);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::copyMakeBorder
// as:     cv::copyMakeBorder (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) top= Primitive(int) = 
// Arg ARG Primitive(int) bottom= Primitive(int) = 
// Arg ARG Primitive(int) left= Primitive(int) = 
// Arg ARG Primitive(int) right= Primitive(int) = 
// Arg ARG Primitive(int) borderType= Primitive(int) = 
// Arg ARG cv::Scalar (simple) value= cv::Scalar (simple) = Scalar()
// Return value: Primitive(void)
cv_return_value_void cv_copyMakeBorder__InputArray__OutputArray_int_int_int_int_int_Scalar(void* src, void* dst, int top, int bottom, int left, int right, int borderType, ScalarWrapper value) {
    try {
        cv::copyMakeBorder(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), top, bottom, left, right, borderType, *reinterpret_cast<const cv::Scalar*>(&value));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::copyTo
// as:     cv::copyTo (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_copyTo__InputArray__OutputArray__InputArray(void* src, void* dst, void* mask) {
    try {
        cv::copyTo(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::countNonZero
// as:     cv::countNonZero (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Return value: Primitive(int)
cv_return_value_int cv_countNonZero__InputArray(void* src) {
    try {
        int ret = cv::countNonZero(*reinterpret_cast<const cv::_InputArray*>(src));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::cubeRoot
// as:     cv::cubeRoot (function)
// Arg ARG Primitive(float) val= Primitive(float) = 
// Return value: Primitive(float)
cv_return_value_float cv_cubeRoot_float(float val) {
    try {
        float ret = cv::cubeRoot(val);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::cv_abs
// as:     cv::cv_abs (function)
// Arg ARG Primitive(schar) x= Primitive(schar) = 
// Return value: Primitive(int)
cv_return_value_int cv_cv_abs_schar(char x) {
    try {
        int ret = cv::cv_abs(x);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::cv_abs
// as:     cv::cv_abs (function)
// Arg ARG Primitive(ushort) x= Primitive(ushort) = 
// Return value: Primitive(int)
cv_return_value_int cv_cv_abs_ushort(unsigned short x) {
    try {
        int ret = cv::cv_abs(x);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::dct
// as:     cv::dct (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_dct__InputArray__OutputArray_int(void* src, void* dst, int flags) {
    try {
        cv::dct(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::depthToString
// as:     cv::depthToString (function)
// Arg ARG Primitive(int) depth= Primitive(int) = 
// Return value: RawPtr[Primitive(char)]
cv_return_value_const_char_X cv_depthToString_int(int depth) {
    try {
        const char* ret = cv::depthToString(depth);
        return { Error::Code::StsOk, NULL, strdup(ret) };
    } CVRS_CATCH(cv_return_value_const_char_X)
}

// parsed: cv::detail::check_failed_MatChannels
// as:     cv::detail::check_failed_MatChannels (function)
// Arg ARG Primitive(int) v= Primitive(int) = 
// Arg ARG cv::detail::CheckContext (boxed) ctx= cv::detail::CheckContext (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_detail_check_failed_MatChannels_int_CheckContext(int v, void* ctx) {
    try {
        cv::detail::check_failed_MatChannels(v, *reinterpret_cast<const cv::detail::CheckContext*>(ctx));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::detail::check_failed_MatChannels
// as:     cv::detail::check_failed_MatChannels (function)
// Arg ARG Primitive(int) v1= Primitive(int) = 
// Arg ARG Primitive(int) v2= Primitive(int) = 
// Arg ARG cv::detail::CheckContext (boxed) ctx= cv::detail::CheckContext (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_detail_check_failed_MatChannels_int_int_CheckContext(int v1, int v2, void* ctx) {
    try {
        cv::detail::check_failed_MatChannels(v1, v2, *reinterpret_cast<const cv::detail::CheckContext*>(ctx));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::detail::check_failed_MatDepth
// as:     cv::detail::check_failed_MatDepth (function)
// Arg ARG Primitive(int) v= Primitive(int) = 
// Arg ARG cv::detail::CheckContext (boxed) ctx= cv::detail::CheckContext (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_detail_check_failed_MatDepth_int_CheckContext(int v, void* ctx) {
    try {
        cv::detail::check_failed_MatDepth(v, *reinterpret_cast<const cv::detail::CheckContext*>(ctx));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::detail::check_failed_MatDepth
// as:     cv::detail::check_failed_MatDepth (function)
// Arg ARG Primitive(int) v1= Primitive(int) = 
// Arg ARG Primitive(int) v2= Primitive(int) = 
// Arg ARG cv::detail::CheckContext (boxed) ctx= cv::detail::CheckContext (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_detail_check_failed_MatDepth_int_int_CheckContext(int v1, int v2, void* ctx) {
    try {
        cv::detail::check_failed_MatDepth(v1, v2, *reinterpret_cast<const cv::detail::CheckContext*>(ctx));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::detail::check_failed_MatType
// as:     cv::detail::check_failed_MatType (function)
// Arg ARG Primitive(int) v= Primitive(int) = 
// Arg ARG cv::detail::CheckContext (boxed) ctx= cv::detail::CheckContext (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_detail_check_failed_MatType_int_CheckContext(int v, void* ctx) {
    try {
        cv::detail::check_failed_MatType(v, *reinterpret_cast<const cv::detail::CheckContext*>(ctx));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::detail::check_failed_MatType
// as:     cv::detail::check_failed_MatType (function)
// Arg ARG Primitive(int) v1= Primitive(int) = 
// Arg ARG Primitive(int) v2= Primitive(int) = 
// Arg ARG cv::detail::CheckContext (boxed) ctx= cv::detail::CheckContext (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_detail_check_failed_MatType_int_int_CheckContext(int v1, int v2, void* ctx) {
    try {
        cv::detail::check_failed_MatType(v1, v2, *reinterpret_cast<const cv::detail::CheckContext*>(ctx));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::detail::check_failed_auto
// as:     cv::detail::check_failed_auto (function)
// Arg ARG Primitive(double) v= Primitive(double) = 
// Arg ARG cv::detail::CheckContext (boxed) ctx= cv::detail::CheckContext (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_detail_check_failed_auto_double_CheckContext(double v, void* ctx) {
    try {
        cv::detail::check_failed_auto(v, *reinterpret_cast<const cv::detail::CheckContext*>(ctx));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::detail::check_failed_auto
// as:     cv::detail::check_failed_auto (function)
// Arg ARG Primitive(double) v1= Primitive(double) = 
// Arg ARG Primitive(double) v2= Primitive(double) = 
// Arg ARG cv::detail::CheckContext (boxed) ctx= cv::detail::CheckContext (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_detail_check_failed_auto_double_double_CheckContext(double v1, double v2, void* ctx) {
    try {
        cv::detail::check_failed_auto(v1, v2, *reinterpret_cast<const cv::detail::CheckContext*>(ctx));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::detail::check_failed_auto
// as:     cv::detail::check_failed_auto (function)
// Arg ARG Primitive(float) v= Primitive(float) = 
// Arg ARG cv::detail::CheckContext (boxed) ctx= cv::detail::CheckContext (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_detail_check_failed_auto_float_CheckContext(float v, void* ctx) {
    try {
        cv::detail::check_failed_auto(v, *reinterpret_cast<const cv::detail::CheckContext*>(ctx));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::detail::check_failed_auto
// as:     cv::detail::check_failed_auto (function)
// Arg ARG Primitive(float) v1= Primitive(float) = 
// Arg ARG Primitive(float) v2= Primitive(float) = 
// Arg ARG cv::detail::CheckContext (boxed) ctx= cv::detail::CheckContext (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_detail_check_failed_auto_float_float_CheckContext(float v1, float v2, void* ctx) {
    try {
        cv::detail::check_failed_auto(v1, v2, *reinterpret_cast<const cv::detail::CheckContext*>(ctx));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::detail::check_failed_auto
// as:     cv::detail::check_failed_auto (function)
// Arg ARG Primitive(int) v= Primitive(int) = 
// Arg ARG cv::detail::CheckContext (boxed) ctx= cv::detail::CheckContext (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_detail_check_failed_auto_int_CheckContext(int v, void* ctx) {
    try {
        cv::detail::check_failed_auto(v, *reinterpret_cast<const cv::detail::CheckContext*>(ctx));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::detail::check_failed_auto
// as:     cv::detail::check_failed_auto (function)
// Arg ARG Primitive(int) v1= Primitive(int) = 
// Arg ARG Primitive(int) v2= Primitive(int) = 
// Arg ARG cv::detail::CheckContext (boxed) ctx= cv::detail::CheckContext (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_detail_check_failed_auto_int_int_CheckContext(int v1, int v2, void* ctx) {
    try {
        cv::detail::check_failed_auto(v1, v2, *reinterpret_cast<const cv::detail::CheckContext*>(ctx));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::detail::check_failed_auto
// as:     cv::detail::check_failed_auto (function)
// Arg ARG Primitive(size_t) v= Primitive(size_t) = 
// Arg ARG cv::detail::CheckContext (boxed) ctx= cv::detail::CheckContext (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_detail_check_failed_auto_size_t_CheckContext(std::size_t v, void* ctx) {
    try {
        cv::detail::check_failed_auto(v, *reinterpret_cast<const cv::detail::CheckContext*>(ctx));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::detail::check_failed_auto
// as:     cv::detail::check_failed_auto (function)
// Arg ARG Primitive(size_t) v1= Primitive(size_t) = 
// Arg ARG Primitive(size_t) v2= Primitive(size_t) = 
// Arg ARG cv::detail::CheckContext (boxed) ctx= cv::detail::CheckContext (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_detail_check_failed_auto_size_t_size_t_CheckContext(std::size_t v1, std::size_t v2, void* ctx) {
    try {
        cv::detail::check_failed_auto(v1, v2, *reinterpret_cast<const cv::detail::CheckContext*>(ctx));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::determinant
// as:     cv::determinant (function)
// Arg ARG cv::_InputArray (boxed) mtx= cv::_InputArray (boxed) = 
// Return value: Primitive(double)
cv_return_value_double cv_determinant__InputArray(void* mtx) {
    try {
        double ret = cv::determinant(*reinterpret_cast<const cv::_InputArray*>(mtx));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::dft
// as:     cv::dft (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Arg ARG Primitive(int) nonzeroRows= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_dft__InputArray__OutputArray_int_int(void* src, void* dst, int flags, int nonzeroRows) {
    try {
        cv::dft(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), flags, nonzeroRows);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::directx::getTypeFromD3DFORMAT
// as:     cv::directx::getTypeFromD3DFORMAT (function)
// Arg ARG Primitive(int) iD3DFORMAT= Primitive(int) = 
// Return value: Primitive(int)
cv_return_value_int cv_directx_getTypeFromD3DFORMAT_int(int iD3DFORMAT) {
    try {
        int ret = cv::directx::getTypeFromD3DFORMAT(iD3DFORMAT);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::directx::getTypeFromDXGI_FORMAT
// as:     cv::directx::getTypeFromDXGI_FORMAT (function)
// Arg ARG Primitive(int) iDXGI_FORMAT= Primitive(int) = 
// Return value: Primitive(int)
cv_return_value_int cv_directx_getTypeFromDXGI_FORMAT_int(int iDXGI_FORMAT) {
    try {
        int ret = cv::directx::getTypeFromDXGI_FORMAT(iDXGI_FORMAT);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::divUp
// as:     cv::divUp (function)
// Arg ARG Primitive(int) a= Primitive(int) = 
// Arg ARG Primitive(unsigned int) b= Primitive(unsigned int) = 
// Return value: Primitive(int)
cv_return_value_int cv_divUp_int_unsigned_int(int a, unsigned int b) {
    try {
        int ret = cv::divUp(a, b);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::divUp
// as:     cv::divUp (function)
// Arg ARG Primitive(size_t) a= Primitive(size_t) = 
// Arg ARG Primitive(unsigned int) b= Primitive(unsigned int) = 
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_divUp_size_t_unsigned_int(std::size_t a, unsigned int b) {
    try {
        size_t ret = cv::divUp(a, b);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::divide
// as:     cv::divide (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) scale= Primitive(double) = 1
// Arg ARG Primitive(int) dtype= Primitive(int) = -1
// Return value: Primitive(void)
cv_return_value_void cv_divide__InputArray__InputArray__OutputArray_double_int(void* src1, void* src2, void* dst, double scale, int dtype) {
    try {
        cv::divide(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<cv::_OutputArray*>(dst), scale, dtype);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::divide
// as:     cv::divide (function)
// Arg ARG Primitive(double) scale= Primitive(double) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) dtype= Primitive(int) = -1
// Return value: Primitive(void)
cv_return_value_void cv_divide_double__InputArray__OutputArray_int(double scale, void* src2, void* dst, int dtype) {
    try {
        cv::divide(scale, *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<cv::_OutputArray*>(dst), dtype);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::eigenNonSymmetric
// as:     cv::eigenNonSymmetric (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) eigenvalues= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) eigenvectors= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_eigenNonSymmetric__InputArray__OutputArray__OutputArray(void* src, void* eigenvalues, void* eigenvectors) {
    try {
        cv::eigenNonSymmetric(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(eigenvalues), *reinterpret_cast<cv::_OutputArray*>(eigenvectors));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::eigen
// as:     cv::eigen (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) eigenvalues= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) eigenvectors= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(bool)
cv_return_value_bool cv_eigen__InputArray__OutputArray__OutputArray(void* src, void* eigenvalues, void* eigenvectors) {
    try {
        bool ret = cv::eigen(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(eigenvalues), *reinterpret_cast<cv::_OutputArray*>(eigenvectors));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::error
// as:     cv::error (function)
// Arg ARG Primitive(int) _code= Primitive(int) = 
// Arg ARG string _err= string = 
// Arg ARG RawPtr[Primitive(char)] * _func= (ptr) RawPtr[Primitive(char)] = 
// Arg ARG RawPtr[Primitive(char)] * _file= (ptr) RawPtr[Primitive(char)] = 
// Arg ARG Primitive(int) _line= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_error_int_String_const_char_X_const_char_X_int(int _code, const char* _err, const char* _func, const char* _file, int _line) {
    try {
        cv::error(_code, String(_err), _func, _file, _line);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::exp
// as:     cv::exp (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_exp__InputArray__OutputArray(void* src, void* dst) {
    try {
        cv::exp(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::extractChannel
// as:     cv::extractChannel (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) coi= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_extractChannel__InputArray__OutputArray_int(void* src, void* dst, int coi) {
    try {
        cv::extractChannel(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), coi);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::fastAtan2
// as:     cv::fastAtan2 (function)
// Arg ARG Primitive(float) y= Primitive(float) = 
// Arg ARG Primitive(float) x= Primitive(float) = 
// Return value: Primitive(float)
cv_return_value_float cv_fastAtan2_float_float(float y, float x) {
    try {
        float ret = cv::fastAtan2(y, x);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::findNonZero
// as:     cv::findNonZero (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) idx= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_findNonZero__InputArray__OutputArray(void* src, void* idx) {
    try {
        cv::findNonZero(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(idx));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::flip
// as:     cv::flip (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flipCode= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_flip__InputArray__OutputArray_int(void* src, void* dst, int flipCode) {
    try {
        cv::flip(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), flipCode);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::gemm
// as:     cv::gemm (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) alpha= Primitive(double) = 
// Arg ARG cv::_InputArray (boxed) src3= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) beta= Primitive(double) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_gemm__InputArray__InputArray_double__InputArray_double__OutputArray_int(void* src1, void* src2, double alpha, void* src3, double beta, void* dst, int flags) {
    try {
        cv::gemm(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), alpha, *reinterpret_cast<const cv::_InputArray*>(src3), beta, *reinterpret_cast<cv::_OutputArray*>(dst), flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::getBuildInformation
// as:     cv::getBuildInformation (function)
// Return value: string
cv_return_value_const_char_X cv_getBuildInformation() {
    try {
        String ret = cv::getBuildInformation();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_const_char_X)
}

// parsed: cv::getCPUFeaturesLine
// as:     cv::getCPUFeaturesLine (function)
// Return value: string
cv_return_value_char_X cv_getCPUFeaturesLine() {
    try {
        String ret = cv::getCPUFeaturesLine();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::getCPUTickCount
// as:     cv::getCPUTickCount (function)
// Return value: Primitive(int64)
cv_return_value_int64 cv_getCPUTickCount() {
    try {
        int64 ret = cv::getCPUTickCount();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int64)
}

// parsed: cv::getElemSize
// as:     cv::getElemSize (function)
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_getElemSize_int(int type) {
    try {
        size_t ret = cv::getElemSize(type);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::getHardwareFeatureName
// as:     cv::getHardwareFeatureName (function)
// Arg ARG Primitive(int) feature= Primitive(int) = 
// Return value: string
cv_return_value_char_X cv_getHardwareFeatureName_int(int feature) {
    try {
        String ret = cv::getHardwareFeatureName(feature);
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::getNumThreads
// as:     cv::getNumThreads (function)
// Return value: Primitive(int)
cv_return_value_int cv_getNumThreads() {
    try {
        int ret = cv::getNumThreads();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::getNumberOfCPUs
// as:     cv::getNumberOfCPUs (function)
// Return value: Primitive(int)
cv_return_value_int cv_getNumberOfCPUs() {
    try {
        int ret = cv::getNumberOfCPUs();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::getOptimalDFTSize
// as:     cv::getOptimalDFTSize (function)
// Arg ARG Primitive(int) vecsize= Primitive(int) = 
// Return value: Primitive(int)
cv_return_value_int cv_getOptimalDFTSize_int(int vecsize) {
    try {
        int ret = cv::getOptimalDFTSize(vecsize);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::getThreadNum
// as:     cv::getThreadNum (function)
// Return value: Primitive(int)
cv_return_value_int cv_getThreadNum() {
    try {
        int ret = cv::getThreadNum();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::getTickCount
// as:     cv::getTickCount (function)
// Return value: Primitive(int64)
cv_return_value_int64 cv_getTickCount() {
    try {
        int64 ret = cv::getTickCount();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int64)
}

// parsed: cv::getTickFrequency
// as:     cv::getTickFrequency (function)
// Return value: Primitive(double)
cv_return_value_double cv_getTickFrequency() {
    try {
        double ret = cv::getTickFrequency();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::getVersionMajor
// as:     cv::getVersionMajor (function)
// Return value: Primitive(int)
cv_return_value_int cv_getVersionMajor() {
    try {
        int ret = cv::getVersionMajor();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::getVersionMinor
// as:     cv::getVersionMinor (function)
// Return value: Primitive(int)
cv_return_value_int cv_getVersionMinor() {
    try {
        int ret = cv::getVersionMinor();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::getVersionRevision
// as:     cv::getVersionRevision (function)
// Return value: Primitive(int)
cv_return_value_int cv_getVersionRevision() {
    try {
        int ret = cv::getVersionRevision();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::getVersionString
// as:     cv::getVersionString (function)
// Return value: string
cv_return_value_char_X cv_getVersionString() {
    try {
        String ret = cv::getVersionString();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::glob
// as:     cv::glob (function)
// Arg ARG string pattern= string = 
// Arg ARG Vector[string] result= Vector[string] = 
// Arg ARG Primitive(bool) recursive= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_glob_String_VectorOfString_bool(const char* pattern, void* result, bool recursive) {
    try {
        cv::glob(String(pattern), *reinterpret_cast<std::vector<String>*>(result), recursive);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::haveOpenVX
// as:     cv::haveOpenVX (function)
// Return value: Primitive(bool)
cv_return_value_bool cv_haveOpenVX() {
    try {
        bool ret = cv::haveOpenVX();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::hconcat
// as:     cv::hconcat (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_hconcat__InputArray__InputArray__OutputArray(void* src1, void* src2, void* dst) {
    try {
        cv::hconcat(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hconcat
// as:     cv::hconcat (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_hconcat__InputArray__OutputArray(void* src, void* dst) {
    try {
        cv::hconcat(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::idct
// as:     cv::idct (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_idct__InputArray__OutputArray_int(void* src, void* dst, int flags) {
    try {
        cv::idct(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::idft
// as:     cv::idft (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 0
// Arg ARG Primitive(int) nonzeroRows= Primitive(int) = 0
// Return value: Primitive(void)
cv_return_value_void cv_idft__InputArray__OutputArray_int_int(void* src, void* dst, int flags, int nonzeroRows) {
    try {
        cv::idft(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), flags, nonzeroRows);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::inRange
// as:     cv::inRange (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) lowerb= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) upperb= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_inRange__InputArray__InputArray__InputArray__OutputArray(void* src, void* lowerb, void* upperb, void* dst) {
    try {
        cv::inRange(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<const cv::_InputArray*>(lowerb), *reinterpret_cast<const cv::_InputArray*>(upperb), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::insertChannel
// as:     cv::insertChannel (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) dst= cv::_InputOutputArray (boxed) = 
// Arg ARG Primitive(int) coi= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_insertChannel__InputArray__InputOutputArray_int(void* src, void* dst, int coi) {
    try {
        cv::insertChannel(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_InputOutputArray*>(dst), coi);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::instr::getFlags
// as:     cv::instr::getFlags (function)
// Return value: instr::FLAGS (enum)
cv_return_value_instr_FLAGS cv_instr_getFlags() {
    try {
        instr::FLAGS ret = cv::instr::getFlags();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_instr_FLAGS)
}

// parsed: cv::instr::resetTrace
// as:     cv::instr::resetTrace (function)
// Return value: Primitive(void)
cv_return_value_void cv_instr_resetTrace() {
    try {
        cv::instr::resetTrace();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::instr::setFlags
// as:     cv::instr::setFlags (function)
// Arg ARG instr::FLAGS (enum) modeFlags= instr::FLAGS (enum) = 
// Return value: Primitive(void)
cv_return_value_void cv_instr_setFlags_FLAGS(instr::FLAGS modeFlags) {
    try {
        cv::instr::setFlags(*reinterpret_cast<instr::FLAGS*>(&modeFlags));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::instr::setFlags
// as:     cv::instr::setFlags (function)
// Arg ARG Primitive(int) modeFlags= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_instr_setFlags_int(int modeFlags) {
    try {
        cv::instr::setFlags(modeFlags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::instr::setUseInstrumentation
// as:     cv::instr::setUseInstrumentation (function)
// Arg ARG Primitive(bool) flag= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_instr_setUseInstrumentation_bool(bool flag) {
    try {
        cv::instr::setUseInstrumentation(flag);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::instr::useInstrumentation
// as:     cv::instr::useInstrumentation (function)
// Return value: Primitive(bool)
cv_return_value_bool cv_instr_useInstrumentation() {
    try {
        bool ret = cv::instr::useInstrumentation();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::invert
// as:     cv::invert (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = DECOMP_LU
// Return value: Primitive(double)
cv_return_value_double cv_invert__InputArray__OutputArray_int(void* src, void* dst, int flags) {
    try {
        double ret = cv::invert(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::ipp::getIppErrorLocation
// as:     cv::ipp::getIppErrorLocation (function)
// Return value: string
cv_return_value_char_X cv_ipp_getIppErrorLocation() {
    try {
        String ret = cv::ipp::getIppErrorLocation();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::ipp::getIppFeatures
// as:     cv::ipp::getIppFeatures (function)
// Return value: Primitive(unsigned long long)
cv_return_value_unsigned_long_long cv_ipp_getIppFeatures() {
    try {
        unsigned long long ret = cv::ipp::getIppFeatures();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_unsigned_long_long)
}

// parsed: cv::ipp::getIppStatus
// as:     cv::ipp::getIppStatus (function)
// Return value: Primitive(int)
cv_return_value_int cv_ipp_getIppStatus() {
    try {
        int ret = cv::ipp::getIppStatus();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ipp::getIppVersion
// as:     cv::ipp::getIppVersion (function)
// Return value: string
cv_return_value_char_X cv_ipp_getIppVersion() {
    try {
        String ret = cv::ipp::getIppVersion();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::ipp::setUseIPP_NE
// as:     cv::ipp::setUseIPP_NE (function)
// Arg ARG Primitive(bool) flag= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_ipp_setUseIPP_NE_bool(bool flag) {
    try {
        cv::ipp::setUseIPP_NE(flag);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ipp::setUseIPP_NotExact
// as:     cv::ipp::setUseIPP_NotExact (function)
// Arg ARG Primitive(bool) flag= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_ipp_setUseIPP_NotExact_bool(bool flag) {
    try {
        cv::ipp::setUseIPP_NotExact(flag);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ipp::setUseIPP
// as:     cv::ipp::setUseIPP (function)
// Arg ARG Primitive(bool) flag= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_ipp_setUseIPP_bool(bool flag) {
    try {
        cv::ipp::setUseIPP(flag);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ipp::useIPP
// as:     cv::ipp::useIPP (function)
// Return value: Primitive(bool)
cv_return_value_bool cv_ipp_useIPP() {
    try {
        bool ret = cv::ipp::useIPP();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ipp::useIPP_NE
// as:     cv::ipp::useIPP_NE (function)
// Return value: Primitive(bool)
cv_return_value_bool cv_ipp_useIPP_NE() {
    try {
        bool ret = cv::ipp::useIPP_NE();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ipp::useIPP_NotExact
// as:     cv::ipp::useIPP_NotExact (function)
// Return value: Primitive(bool)
cv_return_value_bool cv_ipp_useIPP_NotExact() {
    try {
        bool ret = cv::ipp::useIPP_NotExact();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::kmeans
// as:     cv::kmeans (function)
// Arg ARG cv::_InputArray (boxed) data= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) K= Primitive(int) = 
// Arg ARG cv::_InputOutputArray (boxed) bestLabels= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::TermCriteria (boxed) criteria= cv::TermCriteria (boxed) = 
// Arg ARG Primitive(int) attempts= Primitive(int) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) centers= cv::_OutputArray (boxed) = noArray()
// Return value: Primitive(double)
cv_return_value_double cv_kmeans__InputArray_int__InputOutputArray_TermCriteria_int_int__OutputArray(void* data, int K, void* bestLabels, void* criteria, int attempts, int flags, void* centers) {
    try {
        double ret = cv::kmeans(*reinterpret_cast<const cv::_InputArray*>(data), K, *reinterpret_cast<cv::_InputOutputArray*>(bestLabels), *reinterpret_cast<cv::TermCriteria*>(criteria), attempts, flags, *reinterpret_cast<cv::_OutputArray*>(centers));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::log
// as:     cv::log (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_log__InputArray__OutputArray(void* src, void* dst) {
    try {
        cv::log(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::magnitude
// as:     cv::magnitude (function)
// Arg ARG cv::_InputArray (boxed) x= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) y= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) magnitude= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_magnitude__InputArray__InputArray__OutputArray(void* x, void* y, void* magnitude) {
    try {
        cv::magnitude(*reinterpret_cast<const cv::_InputArray*>(x), *reinterpret_cast<const cv::_InputArray*>(y), *reinterpret_cast<cv::_OutputArray*>(magnitude));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::max
// as:     cv::max (function)
// Arg ARG cv::Mat (boxed) a= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) b= cv::Mat (boxed) = 
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_max_Mat_Mat(void* a, void* b) {
    try {
        cv::MatExpr ret = cv::max(*reinterpret_cast<const cv::Mat*>(a), *reinterpret_cast<const cv::Mat*>(b));
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::max
// as:     cv::max (function)
// Arg ARG cv::Mat (boxed) src1= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_max_Mat_Mat_Mat(void* src1, void* src2, void* dst) {
    try {
        cv::max(*reinterpret_cast<const cv::Mat*>(src1), *reinterpret_cast<const cv::Mat*>(src2), *reinterpret_cast<cv::Mat*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::max
// as:     cv::max (function)
// Arg ARG cv::Mat (boxed) a= cv::Mat (boxed) = 
// Arg ARG Primitive(double) s= Primitive(double) = 
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_max_Mat_double(void* a, double s) {
    try {
        cv::MatExpr ret = cv::max(*reinterpret_cast<const cv::Mat*>(a), s);
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::max
// as:     cv::max (function)
// Arg ARG cv::UMat (boxed) src1= cv::UMat (boxed) = 
// Arg ARG cv::UMat (boxed) src2= cv::UMat (boxed) = 
// Arg ARG cv::UMat (boxed) dst= cv::UMat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_max_UMat_UMat_UMat(void* src1, void* src2, void* dst) {
    try {
        cv::max(*reinterpret_cast<const cv::UMat*>(src1), *reinterpret_cast<const cv::UMat*>(src2), *reinterpret_cast<cv::UMat*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::max
// as:     cv::max (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_max__InputArray__InputArray__OutputArray(void* src1, void* src2, void* dst) {
    try {
        cv::max(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::max
// as:     cv::max (function)
// Arg ARG Primitive(double) s= Primitive(double) = 
// Arg ARG cv::Mat (boxed) a= cv::Mat (boxed) = 
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_max_double_Mat(double s, void* a) {
    try {
        cv::MatExpr ret = cv::max(s, *reinterpret_cast<const cv::Mat*>(a));
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::meanStdDev
// as:     cv::meanStdDev (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) mean= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) stddev= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_meanStdDev__InputArray__OutputArray__OutputArray__InputArray(void* src, void* mean, void* stddev, void* mask) {
    try {
        cv::meanStdDev(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(mean), *reinterpret_cast<cv::_OutputArray*>(stddev), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::mean
// as:     cv::mean (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: cv::Scalar (simple)
cv_return_value_ScalarWrapper cv_mean__InputArray__InputArray(void* src, void* mask) {
    try {
        cv::Scalar ret = cv::mean(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL, *reinterpret_cast<ScalarWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_ScalarWrapper)
}

// parsed: cv::merge
// as:     cv::merge (function)
// Arg ARG cv::_InputArray (boxed) mv= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_merge__InputArray__OutputArray(void* mv, void* dst) {
    try {
        cv::merge(*reinterpret_cast<const cv::_InputArray*>(mv), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::minMaxIdx
// as:     cv::minMaxIdx (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG RawPtr[Primitive(double)] * minVal= (ptr) RawPtr[Primitive(double)] = 
// Arg ARG RawPtr[Primitive(double)] * maxVal= (ptr) RawPtr[Primitive(double)] = 0
// Arg ARG RawPtr[Primitive(int)] * minIdx= (ptr) RawPtr[Primitive(int)] = 0
// Arg ARG RawPtr[Primitive(int)] * maxIdx= (ptr) RawPtr[Primitive(int)] = 0
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_minMaxIdx__InputArray_double_X_double_X_int_X_int_X__InputArray(void* src, double* minVal, double* maxVal, int* minIdx, int* maxIdx, void* mask) {
    try {
        cv::minMaxIdx(*reinterpret_cast<const cv::_InputArray*>(src), minVal, maxVal, minIdx, maxIdx, *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::minMaxLoc
// as:     cv::minMaxLoc (function)
// Arg ARG cv::SparseMat (boxed) a= cv::SparseMat (boxed) = 
// Arg ARG RawPtr[Primitive(double)] * minVal= (ptr) RawPtr[Primitive(double)] = 
// Arg ARG RawPtr[Primitive(double)] * maxVal= (ptr) RawPtr[Primitive(double)] = 
// Arg ARG RawPtr[Primitive(int)] * minIdx= (ptr) RawPtr[Primitive(int)] = 0
// Arg ARG RawPtr[Primitive(int)] * maxIdx= (ptr) RawPtr[Primitive(int)] = 0
// Return value: Primitive(void)
cv_return_value_void cv_minMaxLoc_SparseMat_double_X_double_X_int_X_int_X(void* a, double* minVal, double* maxVal, int* minIdx, int* maxIdx) {
    try {
        cv::minMaxLoc(*reinterpret_cast<const cv::SparseMat*>(a), minVal, maxVal, minIdx, maxIdx);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::minMaxLoc
// as:     cv::minMaxLoc (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG RawPtr[Primitive(double)] * minVal= (ptr) RawPtr[Primitive(double)] = 
// Arg ARG RawPtr[Primitive(double)] * maxVal= (ptr) RawPtr[Primitive(double)] = 0
// Arg ARG RawPtr[cv::Point (simple)] * minLoc= (ptr) RawPtr[cv::Point (simple)] = 0
// Arg ARG RawPtr[cv::Point (simple)] * maxLoc= (ptr) RawPtr[cv::Point (simple)] = 0
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_minMaxLoc__InputArray_double_X_double_X_Point_X_Point_X__InputArray(void* src, double* minVal, double* maxVal, cv::Point* minLoc, cv::Point* maxLoc, void* mask) {
    try {
        cv::minMaxLoc(*reinterpret_cast<const cv::_InputArray*>(src), minVal, maxVal, reinterpret_cast<cv::Point*>(minLoc), reinterpret_cast<cv::Point*>(maxLoc), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::min
// as:     cv::min (function)
// Arg ARG cv::Mat (boxed) a= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) b= cv::Mat (boxed) = 
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_min_Mat_Mat(void* a, void* b) {
    try {
        cv::MatExpr ret = cv::min(*reinterpret_cast<const cv::Mat*>(a), *reinterpret_cast<const cv::Mat*>(b));
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::min
// as:     cv::min (function)
// Arg ARG cv::Mat (boxed) src1= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) src2= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) dst= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_min_Mat_Mat_Mat(void* src1, void* src2, void* dst) {
    try {
        cv::min(*reinterpret_cast<const cv::Mat*>(src1), *reinterpret_cast<const cv::Mat*>(src2), *reinterpret_cast<cv::Mat*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::min
// as:     cv::min (function)
// Arg ARG cv::Mat (boxed) a= cv::Mat (boxed) = 
// Arg ARG Primitive(double) s= Primitive(double) = 
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_min_Mat_double(void* a, double s) {
    try {
        cv::MatExpr ret = cv::min(*reinterpret_cast<const cv::Mat*>(a), s);
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::min
// as:     cv::min (function)
// Arg ARG cv::UMat (boxed) src1= cv::UMat (boxed) = 
// Arg ARG cv::UMat (boxed) src2= cv::UMat (boxed) = 
// Arg ARG cv::UMat (boxed) dst= cv::UMat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_min_UMat_UMat_UMat(void* src1, void* src2, void* dst) {
    try {
        cv::min(*reinterpret_cast<const cv::UMat*>(src1), *reinterpret_cast<const cv::UMat*>(src2), *reinterpret_cast<cv::UMat*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::min
// as:     cv::min (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_min__InputArray__InputArray__OutputArray(void* src1, void* src2, void* dst) {
    try {
        cv::min(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::min
// as:     cv::min (function)
// Arg ARG Primitive(double) s= Primitive(double) = 
// Arg ARG cv::Mat (boxed) a= cv::Mat (boxed) = 
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_min_double_Mat(double s, void* a) {
    try {
        cv::MatExpr ret = cv::min(s, *reinterpret_cast<const cv::Mat*>(a));
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::mixChannels
// as:     cv::mixChannels (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) dst= cv::_InputOutputArray (boxed) = 
// Arg ARG Vector[Primitive(int)] fromTo= Vector[Primitive(int)] = 
// Return value: Primitive(void)
cv_return_value_void cv_mixChannels__InputArray__InputOutputArray_VectorOfint(void* src, void* dst, void* fromTo) {
    try {
        cv::mixChannels(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_InputOutputArray*>(dst), *reinterpret_cast<const std::vector<int>*>(fromTo));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::mulSpectrums
// as:     cv::mulSpectrums (function)
// Arg ARG cv::_InputArray (boxed) a= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) b= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) c= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG Primitive(bool) conjB= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_mulSpectrums__InputArray__InputArray__OutputArray_int_bool(void* a, void* b, void* c, int flags, bool conjB) {
    try {
        cv::mulSpectrums(*reinterpret_cast<const cv::_InputArray*>(a), *reinterpret_cast<const cv::_InputArray*>(b), *reinterpret_cast<cv::_OutputArray*>(c), flags, conjB);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::mulTransposed
// as:     cv::mulTransposed (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(bool) aTa= Primitive(bool) = 
// Arg ARG cv::_InputArray (boxed) delta= cv::_InputArray (boxed) = noArray()
// Arg ARG Primitive(double) scale= Primitive(double) = 1
// Arg ARG Primitive(int) dtype= Primitive(int) = -1
// Return value: Primitive(void)
cv_return_value_void cv_mulTransposed__InputArray__OutputArray_bool__InputArray_double_int(void* src, void* dst, bool aTa, void* delta, double scale, int dtype) {
    try {
        cv::mulTransposed(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), aTa, *reinterpret_cast<const cv::_InputArray*>(delta), scale, dtype);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::multiply
// as:     cv::multiply (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) scale= Primitive(double) = 1
// Arg ARG Primitive(int) dtype= Primitive(int) = -1
// Return value: Primitive(void)
cv_return_value_void cv_multiply__InputArray__InputArray__OutputArray_double_int(void* src1, void* src2, void* dst, double scale, int dtype) {
    try {
        cv::multiply(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<cv::_OutputArray*>(dst), scale, dtype);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::noArray
// as:     cv::noArray (function)
// Return value: cv::_InputOutputArray (boxed)
cv_return_value_void_X cv_noArray() {
    try {
        cv::_InputOutputArray ret = cv::noArray();
        return { Error::Code::StsOk, NULL, new cv::_InputOutputArray(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::normL1
// as:     cv::normL1 (function)
// Arg ARG RawPtr[Primitive(float)] * a= (ptr) RawPtr[Primitive(float)] = 
// Arg ARG RawPtr[Primitive(float)] * b= (ptr) RawPtr[Primitive(float)] = 
// Arg ARG Primitive(int) n= Primitive(int) = 
// Return value: Primitive(float)
cv_return_value_float cv_normL1_const_float_X_const_float_X_int(const float* a, const float* b, int n) {
    try {
        float ret = cv::normL1(a, b, n);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::normL1
// as:     cv::normL1 (function)
// Arg ARG RawPtr[Primitive(uchar)] * a= (ptr) RawPtr[Primitive(uchar)] = 
// Arg ARG RawPtr[Primitive(uchar)] * b= (ptr) RawPtr[Primitive(uchar)] = 
// Arg ARG Primitive(int) n= Primitive(int) = 
// Return value: Primitive(int)
cv_return_value_int cv_normL1_const_uchar_X_const_uchar_X_int(const uchar* a, const uchar* b, int n) {
    try {
        int ret = cv::normL1(a, b, n);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::normL2Sqr
// as:     cv::normL2Sqr (function)
// Arg ARG RawPtr[Primitive(float)] * a= (ptr) RawPtr[Primitive(float)] = 
// Arg ARG RawPtr[Primitive(float)] * b= (ptr) RawPtr[Primitive(float)] = 
// Arg ARG Primitive(int) n= Primitive(int) = 
// Return value: Primitive(float)
cv_return_value_float cv_normL2Sqr_const_float_X_const_float_X_int(const float* a, const float* b, int n) {
    try {
        float ret = cv::normL2Sqr(a, b, n);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::norm
// as:     cv::norm (function)
// Arg ARG cv::SparseMat (boxed) src= cv::SparseMat (boxed) = 
// Arg ARG Primitive(int) normType= Primitive(int) = 
// Return value: Primitive(double)
cv_return_value_double cv_norm_SparseMat_int(void* src, int normType) {
    try {
        double ret = cv::norm(*reinterpret_cast<const cv::SparseMat*>(src), normType);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::norm
// as:     cv::norm (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) normType= Primitive(int) = NORM_L2
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(double)
cv_return_value_double cv_norm__InputArray__InputArray_int__InputArray(void* src1, void* src2, int normType, void* mask) {
    try {
        double ret = cv::norm(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), normType, *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::norm
// as:     cv::norm (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) normType= Primitive(int) = NORM_L2
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(double)
cv_return_value_double cv_norm__InputArray_int__InputArray(void* src1, int normType, void* mask) {
    try {
        double ret = cv::norm(*reinterpret_cast<const cv::_InputArray*>(src1), normType, *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::normalize
// as:     cv::normalize (function)
// Arg ARG cv::SparseMat (boxed) src= cv::SparseMat (boxed) = 
// Arg ARG cv::SparseMat (boxed) dst= cv::SparseMat (boxed) = 
// Arg ARG Primitive(double) alpha= Primitive(double) = 
// Arg ARG Primitive(int) normType= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_normalize_SparseMat_SparseMat_double_int(void* src, void* dst, double alpha, int normType) {
    try {
        cv::normalize(*reinterpret_cast<const cv::SparseMat*>(src), *reinterpret_cast<cv::SparseMat*>(dst), alpha, normType);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::normalize
// as:     cv::normalize (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputOutputArray (boxed) dst= cv::_InputOutputArray (boxed) = 
// Arg ARG Primitive(double) alpha= Primitive(double) = 1
// Arg ARG Primitive(double) beta= Primitive(double) = 0
// Arg ARG Primitive(int) norm_type= Primitive(int) = NORM_L2
// Arg ARG Primitive(int) dtype= Primitive(int) = -1
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(void)
cv_return_value_void cv_normalize__InputArray__InputOutputArray_double_double_int_int__InputArray(void* src, void* dst, double alpha, double beta, int norm_type, int dtype, void* mask) {
    try {
        cv::normalize(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_InputOutputArray*>(dst), alpha, beta, norm_type, dtype, *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ocl::attachContext
// as:     cv::ocl::attachContext (function)
// Arg ARG string platformName= string = 
// Arg ARG RawPtr[Primitive(void)] * platformID= (ptr) RawPtr[Primitive(void)] = 
// Arg ARG RawPtr[Primitive(void)] * context= (ptr) RawPtr[Primitive(void)] = 
// Arg ARG RawPtr[Primitive(void)] * deviceID= (ptr) RawPtr[Primitive(void)] = 
// Return value: Primitive(void)
cv_return_value_void cv_ocl_attachContext_String_void_X_void_X_void_X(const char* platformName, void* platformID, void* context, void* deviceID) {
    try {
        cv::ocl::attachContext(String(platformName), platformID, context, deviceID);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ocl::buildOptionsAddMatrixDescription
// as:     cv::ocl::buildOptionsAddMatrixDescription (function)
// Arg ARG string buildOptions= string = 
// Arg ARG string name= string = 
// Arg ARG cv::_InputArray (boxed) _m= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_ocl_buildOptionsAddMatrixDescription_String_String__InputArray(const char** buildOptions, const char* name, void* _m) {
    try {
        cv::String buildOptions_out;
        cv::ocl::buildOptionsAddMatrixDescription(buildOptions_out, String(name), *reinterpret_cast<const cv::_InputArray*>(_m));
        *buildOptions = strdup(buildOptions_out.c_str());
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ocl::checkOptimalVectorWidth
// as:     cv::ocl::checkOptimalVectorWidth (function)
// Arg ARG RawPtr[Primitive(int)] * vectorWidths= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src3= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src4= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src5= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src6= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src7= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src8= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src9= cv::_InputArray (boxed) = noArray()
// Arg ARG ocl::OclVectorStrategy (enum) strat= ocl::OclVectorStrategy (enum) = OCL_VECTOR_DEFAULT
// Return value: Primitive(int)
cv_return_value_int cv_ocl_checkOptimalVectorWidth_const_int_X__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray_OclVectorStrategy(const int* vectorWidths, void* src1, void* src2, void* src3, void* src4, void* src5, void* src6, void* src7, void* src8, void* src9, ocl::OclVectorStrategy strat) {
    try {
        int ret = cv::ocl::checkOptimalVectorWidth(vectorWidths, *reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<const cv::_InputArray*>(src3), *reinterpret_cast<const cv::_InputArray*>(src4), *reinterpret_cast<const cv::_InputArray*>(src5), *reinterpret_cast<const cv::_InputArray*>(src6), *reinterpret_cast<const cv::_InputArray*>(src7), *reinterpret_cast<const cv::_InputArray*>(src8), *reinterpret_cast<const cv::_InputArray*>(src9), *reinterpret_cast<ocl::OclVectorStrategy*>(&strat));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::convertFromBuffer
// as:     cv::ocl::convertFromBuffer (function)
// Arg ARG RawPtr[Primitive(void)] * cl_mem_buffer= (ptr) RawPtr[Primitive(void)] = 
// Arg ARG Primitive(size_t) step= Primitive(size_t) = 
// Arg ARG Primitive(int) rows= Primitive(int) = 
// Arg ARG Primitive(int) cols= Primitive(int) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG cv::UMat (boxed) dst= cv::UMat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_ocl_convertFromBuffer_void_X_size_t_int_int_int_UMat(void* cl_mem_buffer, std::size_t step, int rows, int cols, int type, void* dst) {
    try {
        cv::ocl::convertFromBuffer(cl_mem_buffer, step, rows, cols, type, *reinterpret_cast<cv::UMat*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ocl::convertFromImage
// as:     cv::ocl::convertFromImage (function)
// Arg ARG RawPtr[Primitive(void)] * cl_mem_image= (ptr) RawPtr[Primitive(void)] = 
// Arg ARG cv::UMat (boxed) dst= cv::UMat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_ocl_convertFromImage_void_X_UMat(void* cl_mem_image, void* dst) {
    try {
        cv::ocl::convertFromImage(cl_mem_image, *reinterpret_cast<cv::UMat*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ocl::convertTypeStr
// as:     cv::ocl::convertTypeStr (function)
// Arg ARG Primitive(int) sdepth= Primitive(int) = 
// Arg ARG Primitive(int) ddepth= Primitive(int) = 
// Arg ARG Primitive(int) cn= Primitive(int) = 
// Arg ARG RawPtr[Primitive(char)] * buf= (ptr) RawPtr[Primitive(char)] = 
// Return value: RawPtr[Primitive(char)]
cv_return_value_const_char_X cv_ocl_convertTypeStr_int_int_int_char_X(int sdepth, int ddepth, int cn, char* buf) {
    try {
        const char* ret = cv::ocl::convertTypeStr(sdepth, ddepth, cn, buf);
        return { Error::Code::StsOk, NULL, strdup(ret) };
    } CVRS_CATCH(cv_return_value_const_char_X)
}

// parsed: cv::ocl::finish
// as:     cv::ocl::finish (function)
// Return value: Primitive(void)
cv_return_value_void cv_ocl_finish() {
    try {
        cv::ocl::finish();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ocl::getOpenCLErrorString
// as:     cv::ocl::getOpenCLErrorString (function)
// Arg ARG Primitive(int) errorCode= Primitive(int) = 
// Return value: RawPtr[Primitive(char)]
cv_return_value_const_char_X cv_ocl_getOpenCLErrorString_int(int errorCode) {
    try {
        const char* ret = cv::ocl::getOpenCLErrorString(errorCode);
        return { Error::Code::StsOk, NULL, strdup(ret) };
    } CVRS_CATCH(cv_return_value_const_char_X)
}

// parsed: cv::ocl::getPlatfomsInfo
// as:     cv::ocl::getPlatfomsInfo (function)
// Arg ARG Vector[cv::ocl::PlatformInfo (boxed)] platform_info= Vector[cv::ocl::PlatformInfo (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_ocl_getPlatfomsInfo_VectorOfPlatformInfo(void* platform_info) {
    try {
        cv::ocl::getPlatfomsInfo(*reinterpret_cast<std::vector<cv::ocl::PlatformInfo>*>(platform_info));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ocl::haveAmdBlas
// as:     cv::ocl::haveAmdBlas (function)
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_haveAmdBlas() {
    try {
        bool ret = cv::ocl::haveAmdBlas();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::haveAmdFft
// as:     cv::ocl::haveAmdFft (function)
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_haveAmdFft() {
    try {
        bool ret = cv::ocl::haveAmdFft();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::haveOpenCL
// as:     cv::ocl::haveOpenCL (function)
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_haveOpenCL() {
    try {
        bool ret = cv::ocl::haveOpenCL();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::haveSVM
// as:     cv::ocl::haveSVM (function)
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_haveSVM() {
    try {
        bool ret = cv::ocl::haveSVM();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::kernelToStr
// as:     cv::ocl::kernelToStr (function)
// Arg ARG cv::_InputArray (boxed) _kernel= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) ddepth= Primitive(int) = -1
// Arg ARG RawPtr[Primitive(char)] * name= (ptr) RawPtr[Primitive(char)] = NULL
// Return value: string
cv_return_value_char_X cv_ocl_kernelToStr__InputArray_int_const_char_X(void* _kernel, int ddepth, const char* name) {
    try {
        String ret = cv::ocl::kernelToStr(*reinterpret_cast<const cv::_InputArray*>(_kernel), ddepth, name);
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::ocl::memopTypeToStr
// as:     cv::ocl::memopTypeToStr (function)
// Arg ARG Primitive(int) t= Primitive(int) = 
// Return value: RawPtr[Primitive(char)]
cv_return_value_const_char_X cv_ocl_memopTypeToStr_int(int t) {
    try {
        const char* ret = cv::ocl::memopTypeToStr(t);
        return { Error::Code::StsOk, NULL, strdup(ret) };
    } CVRS_CATCH(cv_return_value_const_char_X)
}

// parsed: cv::ocl::predictOptimalVectorWidthMax
// as:     cv::ocl::predictOptimalVectorWidthMax (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src3= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src4= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src5= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src6= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src7= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src8= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src9= cv::_InputArray (boxed) = noArray()
// Return value: Primitive(int)
cv_return_value_int cv_ocl_predictOptimalVectorWidthMax__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray(void* src1, void* src2, void* src3, void* src4, void* src5, void* src6, void* src7, void* src8, void* src9) {
    try {
        int ret = cv::ocl::predictOptimalVectorWidthMax(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<const cv::_InputArray*>(src3), *reinterpret_cast<const cv::_InputArray*>(src4), *reinterpret_cast<const cv::_InputArray*>(src5), *reinterpret_cast<const cv::_InputArray*>(src6), *reinterpret_cast<const cv::_InputArray*>(src7), *reinterpret_cast<const cv::_InputArray*>(src8), *reinterpret_cast<const cv::_InputArray*>(src9));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::predictOptimalVectorWidth
// as:     cv::ocl::predictOptimalVectorWidth (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src3= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src4= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src5= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src6= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src7= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src8= cv::_InputArray (boxed) = noArray()
// Arg ARG cv::_InputArray (boxed) src9= cv::_InputArray (boxed) = noArray()
// Arg ARG ocl::OclVectorStrategy (enum) strat= ocl::OclVectorStrategy (enum) = OCL_VECTOR_DEFAULT
// Return value: Primitive(int)
cv_return_value_int cv_ocl_predictOptimalVectorWidth__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray__InputArray_OclVectorStrategy(void* src1, void* src2, void* src3, void* src4, void* src5, void* src6, void* src7, void* src8, void* src9, ocl::OclVectorStrategy strat) {
    try {
        int ret = cv::ocl::predictOptimalVectorWidth(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<const cv::_InputArray*>(src3), *reinterpret_cast<const cv::_InputArray*>(src4), *reinterpret_cast<const cv::_InputArray*>(src5), *reinterpret_cast<const cv::_InputArray*>(src6), *reinterpret_cast<const cv::_InputArray*>(src7), *reinterpret_cast<const cv::_InputArray*>(src8), *reinterpret_cast<const cv::_InputArray*>(src9), *reinterpret_cast<ocl::OclVectorStrategy*>(&strat));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::setUseOpenCL
// as:     cv::ocl::setUseOpenCL (function)
// Arg ARG Primitive(bool) flag= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_ocl_setUseOpenCL_bool(bool flag) {
    try {
        cv::ocl::setUseOpenCL(flag);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ocl::typeToStr
// as:     cv::ocl::typeToStr (function)
// Arg ARG Primitive(int) t= Primitive(int) = 
// Return value: RawPtr[Primitive(char)]
cv_return_value_const_char_X cv_ocl_typeToStr_int(int t) {
    try {
        const char* ret = cv::ocl::typeToStr(t);
        return { Error::Code::StsOk, NULL, strdup(ret) };
    } CVRS_CATCH(cv_return_value_const_char_X)
}

// parsed: cv::ocl::useOpenCL
// as:     cv::ocl::useOpenCL (function)
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_useOpenCL() {
    try {
        bool ret = cv::ocl::useOpenCL();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::vecopTypeToStr
// as:     cv::ocl::vecopTypeToStr (function)
// Arg ARG Primitive(int) t= Primitive(int) = 
// Return value: RawPtr[Primitive(char)]
cv_return_value_const_char_X cv_ocl_vecopTypeToStr_int(int t) {
    try {
        const char* ret = cv::ocl::vecopTypeToStr(t);
        return { Error::Code::StsOk, NULL, strdup(ret) };
    } CVRS_CATCH(cv_return_value_const_char_X)
}

// parsed: cv::parallel_for_
// as:     cv::parallel_for_ (function)
// Arg ARG cv::Range (boxed) range= cv::Range (boxed) = 
// Arg ARG cv::ParallelLoopBody (boxed) body= cv::ParallelLoopBody (boxed) = 
// Arg ARG Primitive(double) nstripes= Primitive(double) = -1.
// Return value: Primitive(void)
cv_return_value_void cv_parallel_for__Range_ParallelLoopBody_double(void* range, void* body, double nstripes) {
    try {
        cv::parallel_for_(*reinterpret_cast<const cv::Range*>(range), *reinterpret_cast<const cv::ParallelLoopBody*>(body), nstripes);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::patchNaNs
// as:     cv::patchNaNs (function)
// Arg ARG cv::_InputOutputArray (boxed) a= cv::_InputOutputArray (boxed) = 
// Arg ARG Primitive(double) val= Primitive(double) = 0
// Return value: Primitive(void)
cv_return_value_void cv_patchNaNs__InputOutputArray_double(void* a, double val) {
    try {
        cv::patchNaNs(*reinterpret_cast<cv::_InputOutputArray*>(a), val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::perspectiveTransform
// as:     cv::perspectiveTransform (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) m= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_perspectiveTransform__InputArray__OutputArray__InputArray(void* src, void* dst, void* m) {
    try {
        cv::perspectiveTransform(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(m));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::phase
// as:     cv::phase (function)
// Arg ARG cv::_InputArray (boxed) x= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) y= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) angle= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(bool) angleInDegrees= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_phase__InputArray__InputArray__OutputArray_bool(void* x, void* y, void* angle, bool angleInDegrees) {
    try {
        cv::phase(*reinterpret_cast<const cv::_InputArray*>(x), *reinterpret_cast<const cv::_InputArray*>(y), *reinterpret_cast<cv::_OutputArray*>(angle), angleInDegrees);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::polarToCart
// as:     cv::polarToCart (function)
// Arg ARG cv::_InputArray (boxed) magnitude= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) angle= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) x= cv::_OutputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) y= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(bool) angleInDegrees= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_polarToCart__InputArray__InputArray__OutputArray__OutputArray_bool(void* magnitude, void* angle, void* x, void* y, bool angleInDegrees) {
    try {
        cv::polarToCart(*reinterpret_cast<const cv::_InputArray*>(magnitude), *reinterpret_cast<const cv::_InputArray*>(angle), *reinterpret_cast<cv::_OutputArray*>(x), *reinterpret_cast<cv::_OutputArray*>(y), angleInDegrees);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::pow
// as:     cv::pow (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) power= Primitive(double) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_pow__InputArray_double__OutputArray(void* src, double power, void* dst) {
    try {
        cv::pow(*reinterpret_cast<const cv::_InputArray*>(src), power, *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::randn
// as:     cv::randn (function)
// Arg ARG cv::_InputOutputArray (boxed) dst= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mean= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) stddev= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_randn__InputOutputArray__InputArray__InputArray(void* dst, void* mean, void* stddev) {
    try {
        cv::randn(*reinterpret_cast<cv::_InputOutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(mean), *reinterpret_cast<const cv::_InputArray*>(stddev));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::randu
// as:     cv::randu (function)
// Arg ARG cv::_InputOutputArray (boxed) dst= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) low= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) high= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_randu__InputOutputArray__InputArray__InputArray(void* dst, void* low, void* high) {
    try {
        cv::randu(*reinterpret_cast<cv::_InputOutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(low), *reinterpret_cast<const cv::_InputArray*>(high));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::read
// as:     cv::read (function)
// Arg ARG cv::FileNode (boxed) node= cv::FileNode (boxed) = 
// Arg ARG cv::DMatch (simple) value= cv::DMatch (simple) = 
// Arg ARG cv::DMatch (simple) default_value= cv::DMatch (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_read_FileNode_DMatch_DMatch(void* node, cv::DMatch& value, cv::DMatch default_value) {
    try {
        cv::read(*reinterpret_cast<const cv::FileNode*>(node), *reinterpret_cast<cv::DMatch*>(&value), *reinterpret_cast<const cv::DMatch*>(&default_value));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::read
// as:     cv::read (function)
// Arg ARG cv::FileNode (boxed) node= cv::FileNode (boxed) = 
// Arg ARG cv::KeyPoint (simple) value= cv::KeyPoint (simple) = 
// Arg ARG cv::KeyPoint (simple) default_value= cv::KeyPoint (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_read_FileNode_KeyPoint_KeyPoint(void* node, cv::KeyPoint& value, cv::KeyPoint default_value) {
    try {
        cv::read(*reinterpret_cast<const cv::FileNode*>(node), *reinterpret_cast<cv::KeyPoint*>(&value), *reinterpret_cast<const cv::KeyPoint*>(&default_value));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::read
// as:     cv::read (function)
// Arg ARG cv::FileNode (boxed) node= cv::FileNode (boxed) = 
// Arg ARG cv::Mat (boxed) mat= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) default_mat= cv::Mat (boxed) = Mat()
// Return value: Primitive(void)
cv_return_value_void cv_read_FileNode_Mat_Mat(void* node, void* mat, void* default_mat) {
    try {
        cv::read(*reinterpret_cast<const cv::FileNode*>(node), *reinterpret_cast<cv::Mat*>(mat), *reinterpret_cast<const cv::Mat*>(default_mat));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::read
// as:     cv::read (function)
// Arg ARG cv::FileNode (boxed) node= cv::FileNode (boxed) = 
// Arg ARG cv::Range (boxed) value= cv::Range (boxed) = 
// Arg ARG cv::Range (boxed) default_value= cv::Range (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_read_FileNode_Range_Range(void* node, void* value, void* default_value) {
    try {
        cv::read(*reinterpret_cast<const cv::FileNode*>(node), *reinterpret_cast<cv::Range*>(value), *reinterpret_cast<const cv::Range*>(default_value));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::read
// as:     cv::read (function)
// Arg ARG cv::FileNode (boxed) node= cv::FileNode (boxed) = 
// Arg ARG cv::SparseMat (boxed) mat= cv::SparseMat (boxed) = 
// Arg ARG cv::SparseMat (boxed) default_mat= cv::SparseMat (boxed) = SparseMat()
// Return value: Primitive(void)
cv_return_value_void cv_read_FileNode_SparseMat_SparseMat(void* node, void* mat, void* default_mat) {
    try {
        cv::read(*reinterpret_cast<const cv::FileNode*>(node), *reinterpret_cast<cv::SparseMat*>(mat), *reinterpret_cast<const cv::SparseMat*>(default_mat));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::read
// as:     cv::read (function)
// Arg ARG cv::FileNode (boxed) node= cv::FileNode (boxed) = 
// Arg ARG Vector[cv::DMatch (simple)] matches= Vector[cv::DMatch (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_read_FileNode_VectorOfDMatch(void* node, void* matches) {
    try {
        cv::read(*reinterpret_cast<const cv::FileNode*>(node), *reinterpret_cast<std::vector<cv::DMatch>*>(matches));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::read
// as:     cv::read (function)
// Arg ARG cv::FileNode (boxed) node= cv::FileNode (boxed) = 
// Arg ARG Vector[cv::DMatch (simple)] vec= Vector[cv::DMatch (simple)] = 
// Arg ARG Vector[cv::DMatch (simple)] default_value= Vector[cv::DMatch (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_read_FileNode_VectorOfDMatch_VectorOfDMatch(void* node, void* vec, void* default_value) {
    try {
        cv::read(*reinterpret_cast<const cv::FileNode*>(node), *reinterpret_cast<std::vector<cv::DMatch>*>(vec), *reinterpret_cast<const std::vector<cv::DMatch>*>(default_value));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::read
// as:     cv::read (function)
// Arg ARG cv::FileNode (boxed) node= cv::FileNode (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_read_FileNode_VectorOfKeyPoint(void* node, void* keypoints) {
    try {
        cv::read(*reinterpret_cast<const cv::FileNode*>(node), *reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::read
// as:     cv::read (function)
// Arg ARG cv::FileNode (boxed) node= cv::FileNode (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] vec= Vector[cv::KeyPoint (simple)] = 
// Arg ARG Vector[cv::KeyPoint (simple)] default_value= Vector[cv::KeyPoint (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_read_FileNode_VectorOfKeyPoint_VectorOfKeyPoint(void* node, void* vec, void* default_value) {
    try {
        cv::read(*reinterpret_cast<const cv::FileNode*>(node), *reinterpret_cast<std::vector<cv::KeyPoint>*>(vec), *reinterpret_cast<const std::vector<cv::KeyPoint>*>(default_value));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::read
// as:     cv::read (function)
// Arg ARG cv::FileNode (boxed) node= cv::FileNode (boxed) = 
// Arg ARG Primitive(bool) value= Primitive(bool) = 
// Arg ARG Primitive(bool) default_value= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_read_FileNode_bool_bool(void* node, bool& value, bool default_value) {
    try {
        cv::read(*reinterpret_cast<const cv::FileNode*>(node), value, default_value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::read
// as:     cv::read (function)
// Arg ARG cv::FileNode (boxed) node= cv::FileNode (boxed) = 
// Arg ARG Primitive(double) value= Primitive(double) = 
// Arg ARG Primitive(double) default_value= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_read_FileNode_double_double(void* node, double& value, double default_value) {
    try {
        cv::read(*reinterpret_cast<const cv::FileNode*>(node), value, default_value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::read
// as:     cv::read (function)
// Arg ARG cv::FileNode (boxed) node= cv::FileNode (boxed) = 
// Arg ARG Primitive(float) value= Primitive(float) = 
// Arg ARG Primitive(float) default_value= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_read_FileNode_float_float(void* node, float& value, float default_value) {
    try {
        cv::read(*reinterpret_cast<const cv::FileNode*>(node), value, default_value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::read
// as:     cv::read (function)
// Arg ARG cv::FileNode (boxed) node= cv::FileNode (boxed) = 
// Arg ARG Primitive(int) value= Primitive(int) = 
// Arg ARG Primitive(int) default_value= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_read_FileNode_int_int(void* node, int& value, int default_value) {
    try {
        cv::read(*reinterpret_cast<const cv::FileNode*>(node), value, default_value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::read
// as:     cv::read (function)
// Arg ARG cv::FileNode (boxed) node= cv::FileNode (boxed) = 
// Arg ARG Primitive(short) value= Primitive(short) = 
// Arg ARG Primitive(short) default_value= Primitive(short) = 
// Return value: Primitive(void)
cv_return_value_void cv_read_FileNode_short_short(void* node, short& value, short default_value) {
    try {
        cv::read(*reinterpret_cast<const cv::FileNode*>(node), value, default_value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::read
// as:     cv::read (function)
// Arg ARG cv::FileNode (boxed) node= cv::FileNode (boxed) = 
// Arg ARG string value= string = 
// Arg ARG string default_value= string = 
// Return value: Primitive(void)
cv_return_value_void cv_read_FileNode_std_string_std_string(void* node, const char** value, const char* default_value) {
    try {
        std::string value_out;
        cv::read(*reinterpret_cast<const cv::FileNode*>(node), value_out, String(default_value));
        *value = strdup(value_out.c_str());
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::read
// as:     cv::read (function)
// Arg ARG cv::FileNode (boxed) node= cv::FileNode (boxed) = 
// Arg ARG Primitive(uchar) value= Primitive(uchar) = 
// Arg ARG Primitive(uchar) default_value= Primitive(uchar) = 
// Return value: Primitive(void)
cv_return_value_void cv_read_FileNode_uchar_uchar(void* node, unsigned char& value, unsigned char default_value) {
    try {
        cv::read(*reinterpret_cast<const cv::FileNode*>(node), value, default_value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::read
// as:     cv::read (function)
// Arg ARG cv::FileNode (boxed) node= cv::FileNode (boxed) = 
// Arg ARG Primitive(ushort) value= Primitive(ushort) = 
// Arg ARG Primitive(ushort) default_value= Primitive(ushort) = 
// Return value: Primitive(void)
cv_return_value_void cv_read_FileNode_ushort_ushort(void* node, unsigned short& value, unsigned short default_value) {
    try {
        cv::read(*reinterpret_cast<const cv::FileNode*>(node), value, default_value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::reduce
// as:     cv::reduce (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) dim= Primitive(int) = 
// Arg ARG Primitive(int) rtype= Primitive(int) = 
// Arg ARG Primitive(int) dtype= Primitive(int) = -1
// Return value: Primitive(void)
cv_return_value_void cv_reduce__InputArray__OutputArray_int_int_int(void* src, void* dst, int dim, int rtype, int dtype) {
    try {
        cv::reduce(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), dim, rtype, dtype);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::repeat
// as:     cv::repeat (function)
// Arg ARG cv::Mat (boxed) src= cv::Mat (boxed) = 
// Arg ARG Primitive(int) ny= Primitive(int) = 
// Arg ARG Primitive(int) nx= Primitive(int) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_repeat_Mat_int_int(void* src, int ny, int nx) {
    try {
        cv::Mat ret = cv::repeat(*reinterpret_cast<const cv::Mat*>(src), ny, nx);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::repeat
// as:     cv::repeat (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) ny= Primitive(int) = 
// Arg ARG Primitive(int) nx= Primitive(int) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_repeat__InputArray_int_int__OutputArray(void* src, int ny, int nx, void* dst) {
    try {
        cv::repeat(*reinterpret_cast<const cv::_InputArray*>(src), ny, nx, *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::rotate
// as:     cv::rotate (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) rotateCode= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_rotate__InputArray__OutputArray_int(void* src, void* dst, int rotateCode) {
    try {
        cv::rotate(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), rotateCode);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::roundUp
// as:     cv::roundUp (function)
// Arg ARG Primitive(int) a= Primitive(int) = 
// Arg ARG Primitive(unsigned int) b= Primitive(unsigned int) = 
// Return value: Primitive(int)
cv_return_value_int cv_roundUp_int_unsigned_int(int a, unsigned int b) {
    try {
        int ret = cv::roundUp(a, b);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::roundUp
// as:     cv::roundUp (function)
// Arg ARG Primitive(size_t) a= Primitive(size_t) = 
// Arg ARG Primitive(unsigned int) b= Primitive(unsigned int) = 
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_roundUp_size_t_unsigned_int(std::size_t a, unsigned int b) {
    try {
        size_t ret = cv::roundUp(a, b);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::samples::addSamplesDataSearchPath
// as:     cv::samples::addSamplesDataSearchPath (function)
// Arg ARG string path= string = 
// Return value: Primitive(void)
cv_return_value_void cv_samples_addSamplesDataSearchPath_String(const char* path) {
    try {
        cv::samples::addSamplesDataSearchPath(String(path));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::samples::addSamplesDataSearchSubDirectory
// as:     cv::samples::addSamplesDataSearchSubDirectory (function)
// Arg ARG string subdir= string = 
// Return value: Primitive(void)
cv_return_value_void cv_samples_addSamplesDataSearchSubDirectory_String(const char* subdir) {
    try {
        cv::samples::addSamplesDataSearchSubDirectory(String(subdir));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::samples::findFileOrKeep
// as:     cv::samples::findFileOrKeep (function)
// Arg ARG string relative_path= string = 
// Arg ARG Primitive(bool) silentMode= Primitive(bool) = false
// Return value: string
cv_return_value_char_X cv_samples_findFileOrKeep_String_bool(const char* relative_path, bool silentMode) {
    try {
        String ret = cv::samples::findFileOrKeep(String(relative_path), silentMode);
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::samples::findFile
// as:     cv::samples::findFile (function)
// Arg ARG string relative_path= string = 
// Arg ARG Primitive(bool) required= Primitive(bool) = true
// Arg ARG Primitive(bool) silentMode= Primitive(bool) = false
// Return value: string
cv_return_value_char_X cv_samples_findFile_String_bool_bool(const char* relative_path, bool required, bool silentMode) {
    try {
        String ret = cv::samples::findFile(String(relative_path), required, silentMode);
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::scaleAdd
// as:     cv::scaleAdd (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) alpha= Primitive(double) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_scaleAdd__InputArray_double__InputArray__OutputArray(void* src1, double alpha, void* src2, void* dst) {
    try {
        cv::scaleAdd(*reinterpret_cast<const cv::_InputArray*>(src1), alpha, *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::setBreakOnError
// as:     cv::setBreakOnError (function)
// Arg ARG Primitive(bool) flag= Primitive(bool) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_setBreakOnError_bool(bool flag) {
    try {
        bool ret = cv::setBreakOnError(flag);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::setIdentity
// as:     cv::setIdentity (function)
// Arg ARG cv::_InputOutputArray (boxed) mtx= cv::_InputOutputArray (boxed) = 
// Arg ARG cv::Scalar (simple) s= cv::Scalar (simple) = Scalar(1)
// Return value: Primitive(void)
cv_return_value_void cv_setIdentity__InputOutputArray_Scalar(void* mtx, ScalarWrapper s) {
    try {
        cv::setIdentity(*reinterpret_cast<cv::_InputOutputArray*>(mtx), *reinterpret_cast<const cv::Scalar*>(&s));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::setNumThreads
// as:     cv::setNumThreads (function)
// Arg ARG Primitive(int) nthreads= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_setNumThreads_int(int nthreads) {
    try {
        cv::setNumThreads(nthreads);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::setRNGSeed
// as:     cv::setRNGSeed (function)
// Arg ARG Primitive(int) seed= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_setRNGSeed_int(int seed) {
    try {
        cv::setRNGSeed(seed);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::setUseOpenVX
// as:     cv::setUseOpenVX (function)
// Arg ARG Primitive(bool) flag= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_setUseOpenVX_bool(bool flag) {
    try {
        cv::setUseOpenVX(flag);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::setUseOptimized
// as:     cv::setUseOptimized (function)
// Arg ARG Primitive(bool) onoff= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_setUseOptimized_bool(bool onoff) {
    try {
        cv::setUseOptimized(onoff);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::solveCubic
// as:     cv::solveCubic (function)
// Arg ARG cv::_InputArray (boxed) coeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) roots= cv::_OutputArray (boxed) = 
// Return value: Primitive(int)
cv_return_value_int cv_solveCubic__InputArray__OutputArray(void* coeffs, void* roots) {
    try {
        int ret = cv::solveCubic(*reinterpret_cast<const cv::_InputArray*>(coeffs), *reinterpret_cast<cv::_OutputArray*>(roots));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::solveLP
// as:     cv::solveLP (function)
// Arg ARG cv::_InputArray (boxed) Func= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) Constr= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) z= cv::_OutputArray (boxed) = 
// Return value: Primitive(int)
cv_return_value_int cv_solveLP__InputArray__InputArray__OutputArray(void* Func, void* Constr, void* z) {
    try {
        int ret = cv::solveLP(*reinterpret_cast<const cv::_InputArray*>(Func), *reinterpret_cast<const cv::_InputArray*>(Constr), *reinterpret_cast<cv::_OutputArray*>(z));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::solvePoly
// as:     cv::solvePoly (function)
// Arg ARG cv::_InputArray (boxed) coeffs= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) roots= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) maxIters= Primitive(int) = 300
// Return value: Primitive(double)
cv_return_value_double cv_solvePoly__InputArray__OutputArray_int(void* coeffs, void* roots, int maxIters) {
    try {
        double ret = cv::solvePoly(*reinterpret_cast<const cv::_InputArray*>(coeffs), *reinterpret_cast<cv::_OutputArray*>(roots), maxIters);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::solve
// as:     cv::solve (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = DECOMP_LU
// Return value: Primitive(bool)
cv_return_value_bool cv_solve__InputArray__InputArray__OutputArray_int(void* src1, void* src2, void* dst, int flags) {
    try {
        bool ret = cv::solve(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<cv::_OutputArray*>(dst), flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::sortIdx
// as:     cv::sortIdx (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_sortIdx__InputArray__OutputArray_int(void* src, void* dst, int flags) {
    try {
        cv::sortIdx(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sort
// as:     cv::sort (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_sort__InputArray__OutputArray_int(void* src, void* dst, int flags) {
    try {
        cv::sort(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), flags);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::split
// as:     cv::split (function)
// Arg ARG cv::_InputArray (boxed) m= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) mv= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_split__InputArray__OutputArray(void* m, void* mv) {
    try {
        cv::split(*reinterpret_cast<const cv::_InputArray*>(m), *reinterpret_cast<cv::_OutputArray*>(mv));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sqrt
// as:     cv::sqrt (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_sqrt__InputArray__OutputArray(void* src, void* dst) {
    try {
        cv::sqrt(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::subtract
// as:     cv::subtract (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Arg ARG Primitive(int) dtype= Primitive(int) = -1
// Return value: Primitive(void)
cv_return_value_void cv_subtract__InputArray__InputArray__OutputArray__InputArray_int(void* src1, void* src2, void* dst, void* mask, int dtype) {
    try {
        cv::subtract(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(mask), dtype);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::sum
// as:     cv::sum (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Return value: cv::Scalar (simple)
cv_return_value_ScalarWrapper cv_sum__InputArray(void* src) {
    try {
        cv::Scalar ret = cv::sum(*reinterpret_cast<const cv::_InputArray*>(src));
        return { Error::Code::StsOk, NULL, *reinterpret_cast<ScalarWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_ScalarWrapper)
}

// parsed: cv::swap
// as:     cv::swap (function)
// Arg ARG cv::Mat (boxed) a= cv::Mat (boxed) = 
// Arg ARG cv::Mat (boxed) b= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_swap_Mat_Mat(void* a, void* b) {
    try {
        cv::swap(*reinterpret_cast<cv::Mat*>(a), *reinterpret_cast<cv::Mat*>(b));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::swap
// as:     cv::swap (function)
// Arg ARG cv::UMat (boxed) a= cv::UMat (boxed) = 
// Arg ARG cv::UMat (boxed) b= cv::UMat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_swap_UMat_UMat(void* a, void* b) {
    try {
        cv::swap(*reinterpret_cast<cv::UMat*>(a), *reinterpret_cast<cv::UMat*>(b));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::tempfile
// as:     cv::tempfile (function)
// Arg ARG RawPtr[Primitive(char)] * suffix= (ptr) RawPtr[Primitive(char)] = 0
// Return value: string
cv_return_value_char_X cv_tempfile_const_char_X(const char* suffix) {
    try {
        String ret = cv::tempfile(suffix);
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::trace
// as:     cv::trace (function)
// Arg ARG cv::_InputArray (boxed) mtx= cv::_InputArray (boxed) = 
// Return value: cv::Scalar (simple)
cv_return_value_ScalarWrapper cv_trace__InputArray(void* mtx) {
    try {
        cv::Scalar ret = cv::trace(*reinterpret_cast<const cv::_InputArray*>(mtx));
        return { Error::Code::StsOk, NULL, *reinterpret_cast<ScalarWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_ScalarWrapper)
}

// parsed: cv::transform
// as:     cv::transform (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) m= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_transform__InputArray__OutputArray__InputArray(void* src, void* dst, void* m) {
    try {
        cv::transform(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst), *reinterpret_cast<const cv::_InputArray*>(m));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::transpose
// as:     cv::transpose (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_transpose__InputArray__OutputArray(void* src, void* dst) {
    try {
        cv::transpose(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::typeToString
// as:     cv::typeToString (function)
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: string
cv_return_value_const_char_X cv_typeToString_int(int type) {
    try {
        String ret = cv::typeToString(type);
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_const_char_X)
}

// parsed: cv::useOpenVX
// as:     cv::useOpenVX (function)
// Return value: Primitive(bool)
cv_return_value_bool cv_useOpenVX() {
    try {
        bool ret = cv::useOpenVX();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::useOptimized
// as:     cv::useOptimized (function)
// Return value: Primitive(bool)
cv_return_value_bool cv_useOptimized() {
    try {
        bool ret = cv::useOptimized();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::utils::dumpInputArrayOfArrays
// as:     cv::utils::dumpInputArrayOfArrays (function)
// Arg ARG cv::_InputArray (boxed) argument= cv::_InputArray (boxed) = 
// Return value: string
cv_return_value_char_X cv_utils_dumpInputArrayOfArrays__InputArray(void* argument) {
    try {
        String ret = cv::utils::dumpInputArrayOfArrays(*reinterpret_cast<const cv::_InputArray*>(argument));
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::utils::dumpInputArray
// as:     cv::utils::dumpInputArray (function)
// Arg ARG cv::_InputArray (boxed) argument= cv::_InputArray (boxed) = 
// Return value: string
cv_return_value_char_X cv_utils_dumpInputArray__InputArray(void* argument) {
    try {
        String ret = cv::utils::dumpInputArray(*reinterpret_cast<const cv::_InputArray*>(argument));
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::utils::dumpInputOutputArrayOfArrays
// as:     cv::utils::dumpInputOutputArrayOfArrays (function)
// Arg ARG cv::_InputOutputArray (boxed) argument= cv::_InputOutputArray (boxed) = 
// Return value: string
cv_return_value_char_X cv_utils_dumpInputOutputArrayOfArrays__InputOutputArray(void* argument) {
    try {
        String ret = cv::utils::dumpInputOutputArrayOfArrays(*reinterpret_cast<cv::_InputOutputArray*>(argument));
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::utils::dumpInputOutputArray
// as:     cv::utils::dumpInputOutputArray (function)
// Arg ARG cv::_InputOutputArray (boxed) argument= cv::_InputOutputArray (boxed) = 
// Return value: string
cv_return_value_char_X cv_utils_dumpInputOutputArray__InputOutputArray(void* argument) {
    try {
        String ret = cv::utils::dumpInputOutputArray(*reinterpret_cast<cv::_InputOutputArray*>(argument));
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::utils::getThreadID
// as:     cv::utils::getThreadID (function)
// Return value: Primitive(int)
cv_return_value_int cv_utils_getThreadID() {
    try {
        int ret = cv::utils::getThreadID();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::utils::logging::getLogLevel
// as:     cv::utils::logging::getLogLevel (function)
// Return value: utils::logging::LogLevel (enum)
cv_return_value_utils_logging_LogLevel cv_utils_logging_getLogLevel() {
    try {
        utils::logging::LogLevel ret = cv::utils::logging::getLogLevel();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_utils_logging_LogLevel)
}

// parsed: cv::utils::logging::getLogTagLevel
// as:     cv::utils::logging::getLogTagLevel (function)
// Arg ARG RawPtr[Primitive(char)] * tag= (ptr) RawPtr[Primitive(char)] = 
// Return value: utils::logging::LogLevel (enum)
cv_return_value_utils_logging_LogLevel cv_utils_logging_getLogTagLevel_const_char_X(const char* tag) {
    try {
        utils::logging::LogLevel ret = cv::utils::logging::getLogTagLevel(tag);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_utils_logging_LogLevel)
}

// parsed: cv::utils::logging::internal::getGlobalLogTag
// as:     cv::utils::logging::internal::getGlobalLogTag (function)
// Return value: RawPtr[cv::utils::logging::LogTag (boxed)]
cv_return_value_void_X cv_utils_logging_internal_getGlobalLogTag() {
    try {
        cv::utils::logging::LogTag* ret = cv::utils::logging::internal::getGlobalLogTag();
        return { Error::Code::StsOk, NULL, new cv::utils::logging::LogTag(*ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::utils::logging::internal::writeLogMessageEx
// as:     cv::utils::logging::internal::writeLogMessageEx (function)
// Arg ARG utils::logging::LogLevel (enum) logLevel= utils::logging::LogLevel (enum) = 
// Arg ARG RawPtr[Primitive(char)] * tag= (ptr) RawPtr[Primitive(char)] = 
// Arg ARG RawPtr[Primitive(char)] * file= (ptr) RawPtr[Primitive(char)] = 
// Arg ARG Primitive(int) line= Primitive(int) = 
// Arg ARG RawPtr[Primitive(char)] * func= (ptr) RawPtr[Primitive(char)] = 
// Arg ARG RawPtr[Primitive(char)] * message= (ptr) RawPtr[Primitive(char)] = 
// Return value: Primitive(void)
cv_return_value_void cv_utils_logging_internal_writeLogMessageEx_LogLevel_const_char_X_const_char_X_int_const_char_X_const_char_X(utils::logging::LogLevel logLevel, const char* tag, const char* file, int line, const char* func, const char* message) {
    try {
        cv::utils::logging::internal::writeLogMessageEx(*reinterpret_cast<utils::logging::LogLevel*>(&logLevel), tag, file, line, func, message);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::utils::logging::internal::writeLogMessage
// as:     cv::utils::logging::internal::writeLogMessage (function)
// Arg ARG utils::logging::LogLevel (enum) logLevel= utils::logging::LogLevel (enum) = 
// Arg ARG RawPtr[Primitive(char)] * message= (ptr) RawPtr[Primitive(char)] = 
// Return value: Primitive(void)
cv_return_value_void cv_utils_logging_internal_writeLogMessage_LogLevel_const_char_X(utils::logging::LogLevel logLevel, const char* message) {
    try {
        cv::utils::logging::internal::writeLogMessage(*reinterpret_cast<utils::logging::LogLevel*>(&logLevel), message);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::utils::logging::registerLogTag
// as:     cv::utils::logging::registerLogTag (function)
// Arg ARG RawPtr[cv::utils::logging::LogTag (boxed)] * plogtag= (ptr) RawPtr[cv::utils::logging::LogTag (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_utils_logging_registerLogTag_LogTag(void* plogtag) {
    try {
        cv::utils::logging::registerLogTag(reinterpret_cast<cv::utils::logging::LogTag*>(plogtag));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::utils::logging::setLogLevel
// as:     cv::utils::logging::setLogLevel (function)
// Arg ARG utils::logging::LogLevel (enum) logLevel= utils::logging::LogLevel (enum) = 
// Return value: utils::logging::LogLevel (enum)
cv_return_value_utils_logging_LogLevel cv_utils_logging_setLogLevel_LogLevel(utils::logging::LogLevel logLevel) {
    try {
        utils::logging::LogLevel ret = cv::utils::logging::setLogLevel(*reinterpret_cast<utils::logging::LogLevel*>(&logLevel));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_utils_logging_LogLevel)
}

// parsed: cv::utils::logging::setLogTagLevel
// as:     cv::utils::logging::setLogTagLevel (function)
// Arg ARG RawPtr[Primitive(char)] * tag= (ptr) RawPtr[Primitive(char)] = 
// Arg ARG utils::logging::LogLevel (enum) level= utils::logging::LogLevel (enum) = 
// Return value: Primitive(void)
cv_return_value_void cv_utils_logging_setLogTagLevel_const_char_X_LogLevel(const char* tag, utils::logging::LogLevel level) {
    try {
        cv::utils::logging::setLogTagLevel(tag, *reinterpret_cast<utils::logging::LogLevel*>(&level));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::utils::testAsyncArray
// as:     cv::utils::testAsyncArray (function)
// Arg ARG cv::_InputArray (boxed) argument= cv::_InputArray (boxed) = 
// Return value: cv::AsyncArray (boxed)
cv_return_value_void_X cv_utils_testAsyncArray__InputArray(void* argument) {
    try {
        cv::AsyncArray ret = cv::utils::testAsyncArray(*reinterpret_cast<const cv::_InputArray*>(argument));
        return { Error::Code::StsOk, NULL, new cv::AsyncArray(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::utils::testAsyncException
// as:     cv::utils::testAsyncException (function)
// Return value: cv::AsyncArray (boxed)
cv_return_value_void_X cv_utils_testAsyncException() {
    try {
        cv::AsyncArray ret = cv::utils::testAsyncException();
        return { Error::Code::StsOk, NULL, new cv::AsyncArray(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::va_intel::convertFromVASurface
// as:     cv::va_intel::convertFromVASurface (function)
// Arg ARG RawPtr[Primitive(void)] * display= (ptr) RawPtr[Primitive(void)] = 
// Arg ARG Primitive(unsigned int) surface= Primitive(unsigned int) = 
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_va_intel_convertFromVASurface_void_X_unsigned_int_Size__OutputArray(void* display, unsigned int surface, SizeWrapper size, void* dst) {
    try {
        cv::va_intel::convertFromVASurface(display, surface, *reinterpret_cast<cv::Size*>(&size), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::va_intel::convertToVASurface
// as:     cv::va_intel::convertToVASurface (function)
// Arg ARG RawPtr[Primitive(void)] * display= (ptr) RawPtr[Primitive(void)] = 
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG Primitive(unsigned int) surface= Primitive(unsigned int) = 
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_va_intel_convertToVASurface_void_X__InputArray_unsigned_int_Size(void* display, void* src, unsigned int surface, SizeWrapper size) {
    try {
        cv::va_intel::convertToVASurface(display, *reinterpret_cast<const cv::_InputArray*>(src), surface, *reinterpret_cast<cv::Size*>(&size));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::vconcat
// as:     cv::vconcat (function)
// Arg ARG cv::_InputArray (boxed) src1= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src2= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_vconcat__InputArray__InputArray__OutputArray(void* src1, void* src2, void* dst) {
    try {
        cv::vconcat(*reinterpret_cast<const cv::_InputArray*>(src1), *reinterpret_cast<const cv::_InputArray*>(src2), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::vconcat
// as:     cv::vconcat (function)
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_vconcat__InputArray__OutputArray(void* src, void* dst) {
    try {
        cv::vconcat(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::writeScalar
// as:     cv::writeScalar (function)
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG string value= string = 
// Return value: Primitive(void)
cv_return_value_void cv_writeScalar_FileStorage_String(void* fs, const char* value) {
    try {
        cv::writeScalar(*reinterpret_cast<cv::FileStorage*>(fs), String(value));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::writeScalar
// as:     cv::writeScalar (function)
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG Primitive(double) value= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_writeScalar_FileStorage_double(void* fs, double value) {
    try {
        cv::writeScalar(*reinterpret_cast<cv::FileStorage*>(fs), value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::writeScalar
// as:     cv::writeScalar (function)
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG Primitive(float) value= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_writeScalar_FileStorage_float(void* fs, float value) {
    try {
        cv::writeScalar(*reinterpret_cast<cv::FileStorage*>(fs), value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::writeScalar
// as:     cv::writeScalar (function)
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG Primitive(int) value= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_writeScalar_FileStorage_int(void* fs, int value) {
    try {
        cv::writeScalar(*reinterpret_cast<cv::FileStorage*>(fs), value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::write
// as:     cv::write (function)
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG cv::DMatch (simple) m= cv::DMatch (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_write_FileStorage_DMatch(void* fs, cv::DMatch m) {
    try {
        cv::write(*reinterpret_cast<cv::FileStorage*>(fs), *reinterpret_cast<const cv::DMatch*>(&m));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::write
// as:     cv::write (function)
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG cv::KeyPoint (simple) kpt= cv::KeyPoint (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_write_FileStorage_KeyPoint(void* fs, cv::KeyPoint kpt) {
    try {
        cv::write(*reinterpret_cast<cv::FileStorage*>(fs), *reinterpret_cast<const cv::KeyPoint*>(&kpt));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::write
// as:     cv::write (function)
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG cv::Range (boxed) r= cv::Range (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_write_FileStorage_Range(void* fs, void* r) {
    try {
        cv::write(*reinterpret_cast<cv::FileStorage*>(fs), *reinterpret_cast<const cv::Range*>(r));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::write
// as:     cv::write (function)
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG string name= string = 
// Arg ARG cv::DMatch (simple) m= cv::DMatch (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_write_FileStorage_String_DMatch(void* fs, const char* name, cv::DMatch m) {
    try {
        cv::write(*reinterpret_cast<cv::FileStorage*>(fs), String(name), *reinterpret_cast<const cv::DMatch*>(&m));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::write
// as:     cv::write (function)
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG string name= string = 
// Arg ARG cv::KeyPoint (simple) kpt= cv::KeyPoint (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_write_FileStorage_String_KeyPoint(void* fs, const char* name, cv::KeyPoint kpt) {
    try {
        cv::write(*reinterpret_cast<cv::FileStorage*>(fs), String(name), *reinterpret_cast<const cv::KeyPoint*>(&kpt));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::write
// as:     cv::write (function)
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG string name= string = 
// Arg ARG cv::Mat (boxed) value= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_write_FileStorage_String_Mat(void* fs, const char* name, void* value) {
    try {
        cv::write(*reinterpret_cast<cv::FileStorage*>(fs), String(name), *reinterpret_cast<const cv::Mat*>(value));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::write
// as:     cv::write (function)
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG string name= string = 
// Arg ARG cv::Range (boxed) r= cv::Range (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_write_FileStorage_String_Range(void* fs, const char* name, void* r) {
    try {
        cv::write(*reinterpret_cast<cv::FileStorage*>(fs), String(name), *reinterpret_cast<const cv::Range*>(r));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::write
// as:     cv::write (function)
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG string name= string = 
// Arg ARG cv::SparseMat (boxed) value= cv::SparseMat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_write_FileStorage_String_SparseMat(void* fs, const char* name, void* value) {
    try {
        cv::write(*reinterpret_cast<cv::FileStorage*>(fs), String(name), *reinterpret_cast<const cv::SparseMat*>(value));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::write
// as:     cv::write (function)
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG string name= string = 
// Arg ARG string value= string = 
// Return value: Primitive(void)
cv_return_value_void cv_write_FileStorage_String_String(void* fs, const char* name, const char* value) {
    try {
        cv::write(*reinterpret_cast<cv::FileStorage*>(fs), String(name), String(value));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::write
// as:     cv::write (function)
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG string name= string = 
// Arg ARG Vector[cv::DMatch (simple)] value= Vector[cv::DMatch (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_write_FileStorage_String_VectorOfDMatch(void* fs, const char* name, void* value) {
    try {
        cv::write(*reinterpret_cast<cv::FileStorage*>(fs), String(name), *reinterpret_cast<const std::vector<cv::DMatch>*>(value));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::write
// as:     cv::write (function)
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG string name= string = 
// Arg ARG Vector[cv::KeyPoint (simple)] value= Vector[cv::KeyPoint (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_write_FileStorage_String_VectorOfKeyPoint(void* fs, const char* name, void* value) {
    try {
        cv::write(*reinterpret_cast<cv::FileStorage*>(fs), String(name), *reinterpret_cast<const std::vector<cv::KeyPoint>*>(value));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::write
// as:     cv::write (function)
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG string name= string = 
// Arg ARG Primitive(double) value= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_write_FileStorage_String_double(void* fs, const char* name, double value) {
    try {
        cv::write(*reinterpret_cast<cv::FileStorage*>(fs), String(name), value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::write
// as:     cv::write (function)
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG string name= string = 
// Arg ARG Primitive(float) value= Primitive(float) = 
// Return value: Primitive(void)
cv_return_value_void cv_write_FileStorage_String_float(void* fs, const char* name, float value) {
    try {
        cv::write(*reinterpret_cast<cv::FileStorage*>(fs), String(name), value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::write
// as:     cv::write (function)
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG string name= string = 
// Arg ARG Primitive(int) value= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_write_FileStorage_String_int(void* fs, const char* name, int value) {
    try {
        cv::write(*reinterpret_cast<cv::FileStorage*>(fs), String(name), value);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::write
// as:     cv::write (function)
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG Vector[cv::DMatch (simple)] vec= Vector[cv::DMatch (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_write_FileStorage_VectorOfDMatch(void* fs, void* vec) {
    try {
        cv::write(*reinterpret_cast<cv::FileStorage*>(fs), *reinterpret_cast<const std::vector<cv::DMatch>*>(vec));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::write
// as:     cv::write (function)
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Arg ARG Vector[cv::KeyPoint (simple)] vec= Vector[cv::KeyPoint (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_write_FileStorage_VectorOfKeyPoint(void* fs, void* vec) {
    try {
        cv::write(*reinterpret_cast<cv::FileStorage*>(fs), *reinterpret_cast<const std::vector<cv::KeyPoint>*>(vec));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Algorithm::clear
// as:     cv::Algorithm::clear (method) cv::Algorithm (trait) . clear
// Return value: Primitive(void)
cv_return_value_void cv_Algorithm_clear(void* instance) {
    try {
        reinterpret_cast<cv::Algorithm*>(instance)->clear();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Algorithm::write
// as:     cv::Algorithm::write (method) cv::Algorithm (trait) . write
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_Algorithm_write_const_FileStorage(void* instance, void* fs) {
    try {
        reinterpret_cast<cv::Algorithm*>(instance)->write(*reinterpret_cast<cv::FileStorage*>(fs));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Algorithm::write
// as:     cv::Algorithm::write (method) cv::Algorithm (trait) . write
// Arg ARG SmartPtr[cv::FileStorage (boxed)] fs= SmartPtr[cv::FileStorage (boxed)] = 
// Arg ARG string name= string = String()
// Return value: Primitive(void)
cv_return_value_void cv_Algorithm_write_const_PtrOfFileStorage_String(void* instance, void* fs, const char* name) {
    try {
        reinterpret_cast<cv::Algorithm*>(instance)->write(*reinterpret_cast<const Ptr<cv::FileStorage>*>(fs), String(name));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Algorithm::read
// as:     cv::Algorithm::read (method) cv::Algorithm (trait) . read
// Arg ARG cv::FileNode (boxed) fn= cv::FileNode (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_Algorithm_read_FileNode(void* instance, void* fn) {
    try {
        reinterpret_cast<cv::Algorithm*>(instance)->read(*reinterpret_cast<const cv::FileNode*>(fn));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Algorithm::empty
// as:     cv::Algorithm::empty (method) cv::Algorithm (trait) . empty
// Return value: Primitive(bool)
cv_return_value_bool cv_Algorithm_empty_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::Algorithm*>(instance)->empty();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::Algorithm::save
// as:     cv::Algorithm::save (method) cv::Algorithm (trait) . save
// Arg ARG string filename= string = 
// Return value: Primitive(void)
cv_return_value_void cv_Algorithm_save_const_String(void* instance, const char* filename) {
    try {
        reinterpret_cast<cv::Algorithm*>(instance)->save(String(filename));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Algorithm::getDefaultName
// as:     cv::Algorithm::getDefaultName (method) cv::Algorithm (trait) . getDefaultName
// Return value: string
cv_return_value_char_X cv_Algorithm_getDefaultName_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::Algorithm*>(instance)->getDefaultName();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// boxed class: cv::Algorithm
void cv_Algorithm_delete(void* instance) {
    delete reinterpret_cast<cv::Algorithm*>(instance);
}
// parsed: cv::Algorithm::Algorithm
// as:     cv::Algorithm::Algorithm (constructor) cv::Algorithm (trait) . default
// Return value: cv::Algorithm (boxed)
cv_return_value_void_X cv_Algorithm_Algorithm() {
    try {
        cv::Algorithm* ret = new cv::Algorithm();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::AsyncArray
void cv_AsyncArray_delete(void* instance) {
    delete reinterpret_cast<cv::AsyncArray*>(instance);
}
// parsed: cv::AsyncArray::AsyncArray
// as:     cv::AsyncArray::AsyncArray (constructor) cv::AsyncArray . default
// Return value: cv::AsyncArray (boxed)
cv_return_value_void_X cv_AsyncArray_AsyncArray() {
    try {
        cv::AsyncArray* ret = new cv::AsyncArray();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::AsyncArray::AsyncArray
// as:     cv::AsyncArray::AsyncArray (constructor) cv::AsyncArray . copy
// Arg ARG cv::AsyncArray (boxed) o= cv::AsyncArray (boxed) = 
// Return value: cv::AsyncArray (boxed)
cv_return_value_void_X cv_AsyncArray_AsyncArray_AsyncArray(void* o) {
    try {
        cv::AsyncArray* ret = new cv::AsyncArray(*reinterpret_cast<const cv::AsyncArray*>(o));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::AsyncArray::release
// as:     cv::AsyncArray::release (method) cv::AsyncArray . release
// Return value: Primitive(void)
cv_return_value_void cv_AsyncArray_release(void* instance) {
    try {
        reinterpret_cast<cv::AsyncArray*>(instance)->release();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AsyncArray::get
// as:     cv::AsyncArray::get (method) cv::AsyncArray . get
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_AsyncArray_get_const__OutputArray(void* instance, void* dst) {
    try {
        reinterpret_cast<cv::AsyncArray*>(instance)->get(*reinterpret_cast<cv::_OutputArray*>(dst));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::AsyncArray::get
// as:     cv::AsyncArray::get (method) cv::AsyncArray . get
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int64) timeoutNs= Primitive(int64) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_AsyncArray_get_const__OutputArray_int64(void* instance, void* dst, int64 timeoutNs) {
    try {
        bool ret = reinterpret_cast<cv::AsyncArray*>(instance)->get(*reinterpret_cast<cv::_OutputArray*>(dst), timeoutNs);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::AsyncArray::get
// as:     cv::AsyncArray::get (method) cv::AsyncArray . get
// Arg ARG cv::_OutputArray (boxed) dst= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(double) timeoutNs= Primitive(double) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_AsyncArray_get_const__OutputArray_double(void* instance, void* dst, double timeoutNs) {
    try {
        bool ret = reinterpret_cast<cv::AsyncArray*>(instance)->get(*reinterpret_cast<cv::_OutputArray*>(dst), timeoutNs);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::AsyncArray::wait_for
// as:     cv::AsyncArray::wait_for (method) cv::AsyncArray . wait_for
// Arg ARG Primitive(int64) timeoutNs= Primitive(int64) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_AsyncArray_wait_for_const_int64(void* instance, int64 timeoutNs) {
    try {
        bool ret = reinterpret_cast<cv::AsyncArray*>(instance)->wait_for(timeoutNs);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::AsyncArray::wait_for
// as:     cv::AsyncArray::wait_for (method) cv::AsyncArray . wait_for
// Arg ARG Primitive(double) timeoutNs= Primitive(double) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_AsyncArray_wait_for_const_double(void* instance, double timeoutNs) {
    try {
        bool ret = reinterpret_cast<cv::AsyncArray*>(instance)->wait_for(timeoutNs);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::AsyncArray::valid
// as:     cv::AsyncArray::valid (method) cv::AsyncArray . valid
// Return value: Primitive(bool)
cv_return_value_bool cv_AsyncArray_valid_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::AsyncArray*>(instance)->valid();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::BufferPoolController::getReservedSize
// as:     cv::BufferPoolController::getReservedSize (method) cv::BufferPoolController (trait) . getReservedSize
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_BufferPoolController_getReservedSize_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::BufferPoolController*>(instance)->getReservedSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::BufferPoolController::getMaxReservedSize
// as:     cv::BufferPoolController::getMaxReservedSize (method) cv::BufferPoolController (trait) . getMaxReservedSize
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_BufferPoolController_getMaxReservedSize_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::BufferPoolController*>(instance)->getMaxReservedSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::BufferPoolController::setMaxReservedSize
// as:     cv::BufferPoolController::setMaxReservedSize (method) cv::BufferPoolController (trait) . setMaxReservedSize
// Arg ARG Primitive(size_t) size= Primitive(size_t) = 
// Return value: Primitive(void)
cv_return_value_void cv_BufferPoolController_setMaxReservedSize_size_t(void* instance, std::size_t size) {
    try {
        reinterpret_cast<cv::BufferPoolController*>(instance)->setMaxReservedSize(size);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::BufferPoolController::freeAllReservedBuffers
// as:     cv::BufferPoolController::freeAllReservedBuffers (method) cv::BufferPoolController (trait) . freeAllReservedBuffers
// Return value: Primitive(void)
cv_return_value_void cv_BufferPoolController_freeAllReservedBuffers(void* instance) {
    try {
        reinterpret_cast<cv::BufferPoolController*>(instance)->freeAllReservedBuffers();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::CommandLineParser
void cv_CommandLineParser_delete(void* instance) {
    delete reinterpret_cast<cv::CommandLineParser*>(instance);
}
// parsed: cv::CommandLineParser::CommandLineParser
// as:     cv::CommandLineParser::CommandLineParser (constructor) cv::CommandLineParser . copy
// Arg ARG cv::CommandLineParser (boxed) parser= cv::CommandLineParser (boxed) = 
// Return value: cv::CommandLineParser (boxed)
cv_return_value_void_X cv_CommandLineParser_CommandLineParser_CommandLineParser(void* parser) {
    try {
        cv::CommandLineParser* ret = new cv::CommandLineParser(*reinterpret_cast<const cv::CommandLineParser*>(parser));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::CommandLineParser::getPathToApplication
// as:     cv::CommandLineParser::getPathToApplication (method) cv::CommandLineParser . getPathToApplication
// Return value: string
cv_return_value_char_X cv_CommandLineParser_getPathToApplication_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::CommandLineParser*>(instance)->getPathToApplication();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::CommandLineParser::has
// as:     cv::CommandLineParser::has (method) cv::CommandLineParser . has
// Arg ARG string name= string = 
// Return value: Primitive(bool)
cv_return_value_bool cv_CommandLineParser_has_const_String(void* instance, const char* name) {
    try {
        bool ret = reinterpret_cast<cv::CommandLineParser*>(instance)->has(String(name));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::CommandLineParser::check
// as:     cv::CommandLineParser::check (method) cv::CommandLineParser . check
// Return value: Primitive(bool)
cv_return_value_bool cv_CommandLineParser_check_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::CommandLineParser*>(instance)->check();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::CommandLineParser::about
// as:     cv::CommandLineParser::about (method) cv::CommandLineParser . about
// Arg ARG string message= string = 
// Return value: Primitive(void)
cv_return_value_void cv_CommandLineParser_about_String(void* instance, const char* message) {
    try {
        reinterpret_cast<cv::CommandLineParser*>(instance)->about(String(message));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::CommandLineParser::printMessage
// as:     cv::CommandLineParser::printMessage (method) cv::CommandLineParser . printMessage
// Return value: Primitive(void)
cv_return_value_void cv_CommandLineParser_printMessage_const(void* instance) {
    try {
        reinterpret_cast<cv::CommandLineParser*>(instance)->printMessage();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::CommandLineParser::printErrors
// as:     cv::CommandLineParser::printErrors (method) cv::CommandLineParser . printErrors
// Return value: Primitive(void)
cv_return_value_void cv_CommandLineParser_printErrors_const(void* instance) {
    try {
        reinterpret_cast<cv::CommandLineParser*>(instance)->printErrors();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::ConjGradSolver
void cv_ConjGradSolver_delete(void* instance) {
    delete reinterpret_cast<cv::ConjGradSolver*>(instance);
}
// parsed: cv::ConjGradSolver::create
// as:     cv::ConjGradSolver::create (method) cv::ConjGradSolver . create
// Arg ARG SmartPtr[cv::MinProblemSolver::Function (boxed)] f= SmartPtr[cv::MinProblemSolver::Function (boxed)] = Ptr<ConjGradSolver::Function>()
// Arg ARG cv::TermCriteria (boxed) termcrit= cv::TermCriteria (boxed) = TermCriteria(TermCriteria::MAX_ITER+TermCriteria::EPS,5000,0.000001)
// Return value: SmartPtr[cv::ConjGradSolver (boxed)]
cv_return_value_void_X cv_ConjGradSolver_create_PtrOfFunction_TermCriteria(void* f, void* termcrit) {
    try {
        Ptr<cv::ConjGradSolver> ret = cv::ConjGradSolver::create(*reinterpret_cast<const Ptr<cv::MinProblemSolver::Function>*>(f), *reinterpret_cast<cv::TermCriteria*>(termcrit));
        return { Error::Code::StsOk, NULL, new Ptr<cv::ConjGradSolver>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::DMatch::DMatch
// as:     cv::DMatch::DMatch (constructor) cv::DMatch (simple) . default
// Return value: cv::DMatch (simple)
cv_return_value_DMatch cv_DMatch_DMatch() {
    try {
        cv::DMatch ret;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_DMatch)
}

// parsed: cv::DMatch::DMatch
// as:     cv::DMatch::DMatch (constructor) cv::DMatch (simple) . new
// Arg ARG Primitive(int) _queryIdx= Primitive(int) = 
// Arg ARG Primitive(int) _trainIdx= Primitive(int) = 
// Arg ARG Primitive(float) _distance= Primitive(float) = 
// Return value: cv::DMatch (simple)
cv_return_value_DMatch cv_DMatch_DMatch_int_int_float(int _queryIdx, int _trainIdx, float _distance) {
    try {
        cv::DMatch ret(_queryIdx, _trainIdx, _distance);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_DMatch)
}

// parsed: cv::DMatch::DMatch
// as:     cv::DMatch::DMatch (constructor) cv::DMatch (simple) . new
// Arg ARG Primitive(int) _queryIdx= Primitive(int) = 
// Arg ARG Primitive(int) _trainIdx= Primitive(int) = 
// Arg ARG Primitive(int) _imgIdx= Primitive(int) = 
// Arg ARG Primitive(float) _distance= Primitive(float) = 
// Return value: cv::DMatch (simple)
cv_return_value_DMatch cv_DMatch_DMatch_int_int_int_float(int _queryIdx, int _trainIdx, int _imgIdx, float _distance) {
    try {
        cv::DMatch ret(_queryIdx, _trainIdx, _imgIdx, _distance);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_DMatch)
}

// parsed: cv::DownhillSolver::getInitStep
// as:     cv::DownhillSolver::getInitStep (method) cv::DownhillSolver (trait) . getInitStep
// Arg ARG cv::_OutputArray (boxed) step= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_DownhillSolver_getInitStep_const__OutputArray(void* instance, void* step) {
    try {
        reinterpret_cast<cv::DownhillSolver*>(instance)->getInitStep(*reinterpret_cast<cv::_OutputArray*>(step));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DownhillSolver::setInitStep
// as:     cv::DownhillSolver::setInitStep (method) cv::DownhillSolver (trait) . setInitStep
// Arg ARG cv::_InputArray (boxed) step= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_DownhillSolver_setInitStep__InputArray(void* instance, void* step) {
    try {
        reinterpret_cast<cv::DownhillSolver*>(instance)->setInitStep(*reinterpret_cast<const cv::_InputArray*>(step));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::DownhillSolver::create
// as:     cv::DownhillSolver::create (method) cv::DownhillSolver (trait) . create
// Arg ARG SmartPtr[cv::MinProblemSolver::Function (boxed)] f= SmartPtr[cv::MinProblemSolver::Function (boxed)] = Ptr<MinProblemSolver::Function>()
// Arg ARG cv::_InputArray (boxed) initStep= cv::_InputArray (boxed) = Mat_<double>(1,1,0.0)
// Arg ARG cv::TermCriteria (boxed) termcrit= cv::TermCriteria (boxed) = TermCriteria(TermCriteria::MAX_ITER+TermCriteria::EPS,5000,0.000001)
// Return value: SmartPtr[cv::DownhillSolver (boxed)]
cv_return_value_void_X cv_DownhillSolver_create_PtrOfFunction__InputArray_TermCriteria(void* f, void* initStep, void* termcrit) {
    try {
        Ptr<cv::DownhillSolver> ret = cv::DownhillSolver::create(*reinterpret_cast<const Ptr<cv::MinProblemSolver::Function>*>(f), *reinterpret_cast<const cv::_InputArray*>(initStep), *reinterpret_cast<cv::TermCriteria*>(termcrit));
        return { Error::Code::StsOk, NULL, new Ptr<cv::DownhillSolver>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::FileNode
void cv_FileNode_delete(void* instance) {
    delete reinterpret_cast<cv::FileNode*>(instance);
}
// parsed: cv::FileNode::FileNode
// as:     cv::FileNode::FileNode (constructor) cv::FileNode . default
// Return value: cv::FileNode (boxed)
cv_return_value_void_X cv_FileNode_FileNode() {
    try {
        cv::FileNode* ret = new cv::FileNode();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::FileNode::FileNode
// as:     cv::FileNode::FileNode (constructor) cv::FileNode . new
// Arg ARG RawPtr[cv::FileStorage (boxed)] * fs= (ptr) RawPtr[cv::FileStorage (boxed)] = 
// Arg ARG Primitive(size_t) blockIdx= Primitive(size_t) = 
// Arg ARG Primitive(size_t) ofs= Primitive(size_t) = 
// Return value: cv::FileNode (boxed)
cv_return_value_void_X cv_FileNode_FileNode_const_FileStorage_size_t_size_t(const void* fs, std::size_t blockIdx, std::size_t ofs) {
    try {
        cv::FileNode* ret = new cv::FileNode(reinterpret_cast<const cv::FileStorage*>(fs), blockIdx, ofs);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::FileNode::FileNode
// as:     cv::FileNode::FileNode (constructor) cv::FileNode . copy
// Arg ARG cv::FileNode (boxed) node= cv::FileNode (boxed) = 
// Return value: cv::FileNode (boxed)
cv_return_value_void_X cv_FileNode_FileNode_FileNode(void* node) {
    try {
        cv::FileNode* ret = new cv::FileNode(*reinterpret_cast<const cv::FileNode*>(node));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::FileNode::keys
// as:     cv::FileNode::keys (method) cv::FileNode . keys
// Return value: Vector[string]
cv_return_value_void_X cv_FileNode_keys_const(void* instance) {
    try {
        std::vector<String> ret = reinterpret_cast<cv::FileNode*>(instance)->keys();
        return { Error::Code::StsOk, NULL, new std::vector<String>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::FileNode::type
// as:     cv::FileNode::type (method) cv::FileNode . type
// Return value: Primitive(int)
cv_return_value_int cv_FileNode_type_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::FileNode*>(instance)->type();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::FileNode::empty
// as:     cv::FileNode::empty (method) cv::FileNode . empty
// Return value: Primitive(bool)
cv_return_value_bool cv_FileNode_empty_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::FileNode*>(instance)->empty();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::FileNode::isNone
// as:     cv::FileNode::isNone (method) cv::FileNode . isNone
// Return value: Primitive(bool)
cv_return_value_bool cv_FileNode_isNone_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::FileNode*>(instance)->isNone();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::FileNode::isSeq
// as:     cv::FileNode::isSeq (method) cv::FileNode . isSeq
// Return value: Primitive(bool)
cv_return_value_bool cv_FileNode_isSeq_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::FileNode*>(instance)->isSeq();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::FileNode::isMap
// as:     cv::FileNode::isMap (method) cv::FileNode . isMap
// Return value: Primitive(bool)
cv_return_value_bool cv_FileNode_isMap_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::FileNode*>(instance)->isMap();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::FileNode::isInt
// as:     cv::FileNode::isInt (method) cv::FileNode . isInt
// Return value: Primitive(bool)
cv_return_value_bool cv_FileNode_isInt_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::FileNode*>(instance)->isInt();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::FileNode::isReal
// as:     cv::FileNode::isReal (method) cv::FileNode . isReal
// Return value: Primitive(bool)
cv_return_value_bool cv_FileNode_isReal_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::FileNode*>(instance)->isReal();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::FileNode::isString
// as:     cv::FileNode::isString (method) cv::FileNode . isString
// Return value: Primitive(bool)
cv_return_value_bool cv_FileNode_isString_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::FileNode*>(instance)->isString();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::FileNode::isNamed
// as:     cv::FileNode::isNamed (method) cv::FileNode . isNamed
// Return value: Primitive(bool)
cv_return_value_bool cv_FileNode_isNamed_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::FileNode*>(instance)->isNamed();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::FileNode::name
// as:     cv::FileNode::name (method) cv::FileNode . name
// Return value: string
cv_return_value_char_X cv_FileNode_name_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::FileNode*>(instance)->name();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::FileNode::size
// as:     cv::FileNode::size (method) cv::FileNode . size
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_FileNode_size_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::FileNode*>(instance)->size();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::FileNode::rawSize
// as:     cv::FileNode::rawSize (method) cv::FileNode . rawSize
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_FileNode_rawSize_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::FileNode*>(instance)->rawSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::FileNode::operator int
// as:     cv::FileNode::operator int (convertor method) cv::FileNode . operator int
// Return value: Primitive(int)
cv_return_value_int cv_FileNode_operator_int_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::FileNode*>(instance)->operator int();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::FileNode::operator float
// as:     cv::FileNode::operator float (convertor method) cv::FileNode . operator float
// Return value: Primitive(float)
cv_return_value_float cv_FileNode_operator_float_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::FileNode*>(instance)->operator float();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::FileNode::operator double
// as:     cv::FileNode::operator double (convertor method) cv::FileNode . operator double
// Return value: Primitive(double)
cv_return_value_double cv_FileNode_operator_double_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::FileNode*>(instance)->operator double();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::FileNode::isMap
// as:     cv::FileNode::isMap (method) cv::FileNode . isMap
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_FileNode_isMap_int(int flags) {
    try {
        bool ret = cv::FileNode::isMap(flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::FileNode::isSeq
// as:     cv::FileNode::isSeq (method) cv::FileNode . isSeq
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_FileNode_isSeq_int(int flags) {
    try {
        bool ret = cv::FileNode::isSeq(flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::FileNode::isCollection
// as:     cv::FileNode::isCollection (method) cv::FileNode . isCollection
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_FileNode_isCollection_int(int flags) {
    try {
        bool ret = cv::FileNode::isCollection(flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::FileNode::isEmptyCollection
// as:     cv::FileNode::isEmptyCollection (method) cv::FileNode . isEmptyCollection
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_FileNode_isEmptyCollection_int(int flags) {
    try {
        bool ret = cv::FileNode::isEmptyCollection(flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::FileNode::isFlow
// as:     cv::FileNode::isFlow (method) cv::FileNode . isFlow
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_FileNode_isFlow_int(int flags) {
    try {
        bool ret = cv::FileNode::isFlow(flags);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::FileNode::ptr
// as:     cv::FileNode::ptr (method) cv::FileNode . ptr
// Return value: RawPtr[Primitive(uchar)]
cv_return_value_unsigned_char_X cv_FileNode_ptr(void* instance) {
    try {
        uchar* ret = reinterpret_cast<cv::FileNode*>(instance)->ptr();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_unsigned_char_X)
}

// parsed: cv::FileNode::ptr
// as:     cv::FileNode::ptr (method) cv::FileNode . ptr
// Return value: RawPtr[Primitive(uchar)]
cv_return_value_const_unsigned_char_X cv_FileNode_ptr_const(void* instance) {
    try {
        const uchar* ret = reinterpret_cast<cv::FileNode*>(instance)->ptr();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_const_unsigned_char_X)
}

// parsed: cv::FileNode::readRaw
// as:     cv::FileNode::readRaw (method) cv::FileNode . readRaw
// Arg ARG string fmt= string = 
// Arg ARG RawPtr[Primitive(void)] * vec= (ptr) RawPtr[Primitive(void)] = 
// Arg ARG Primitive(size_t) len= Primitive(size_t) = 
// Return value: Primitive(void)
cv_return_value_void cv_FileNode_readRaw_const_String_void_X_size_t(void* instance, const char* fmt, void* vec, std::size_t len) {
    try {
        reinterpret_cast<cv::FileNode*>(instance)->readRaw(String(fmt), vec, len);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FileNode::setValue
// as:     cv::FileNode::setValue (method) cv::FileNode . setValue
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG RawPtr[Primitive(void)] * value= (ptr) RawPtr[Primitive(void)] = 
// Arg ARG Primitive(int) len= Primitive(int) = -1
// Return value: Primitive(void)
cv_return_value_void cv_FileNode_setValue_int_const_void_X_int(void* instance, int type, const void* value, int len) {
    try {
        reinterpret_cast<cv::FileNode*>(instance)->setValue(type, value, len);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FileNode::real
// as:     cv::FileNode::real (method) cv::FileNode . real
// Return value: Primitive(double)
cv_return_value_double cv_FileNode_real_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::FileNode*>(instance)->real();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::FileNode::string
// as:     cv::FileNode::string (method) cv::FileNode . string
// Return value: string
cv_return_value_char_X cv_FileNode_string_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::FileNode*>(instance)->string();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::FileNode::mat
// as:     cv::FileNode::mat (method) cv::FileNode . mat
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_FileNode_mat_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::FileNode*>(instance)->mat();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::FileNodeIterator
void cv_FileNodeIterator_delete(void* instance) {
    delete reinterpret_cast<cv::FileNodeIterator*>(instance);
}
// parsed: cv::FileNodeIterator::readRaw
// as:     cv::FileNodeIterator::readRaw (method) cv::FileNodeIterator . readRaw
// Arg ARG string fmt= string = 
// Arg ARG RawPtr[Primitive(void)] * vec= (ptr) RawPtr[Primitive(void)] = 
// Arg ARG Primitive(size_t) len= Primitive(size_t) = (size_t)INT_MAX
// Return value: cv::FileNodeIterator (boxed)
cv_return_value_void_X cv_FileNodeIterator_readRaw_String_void_X_size_t(void* instance, const char* fmt, void* vec, std::size_t len) {
    try {
        cv::FileNodeIterator ret = reinterpret_cast<cv::FileNodeIterator*>(instance)->readRaw(String(fmt), vec, len);
        return { Error::Code::StsOk, NULL, new cv::FileNodeIterator(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::FileNodeIterator::remaining
// as:     cv::FileNodeIterator::remaining (method) cv::FileNodeIterator . remaining
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_FileNodeIterator_remaining_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::FileNodeIterator*>(instance)->remaining();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::FileNodeIterator::equalTo
// as:     cv::FileNodeIterator::equalTo (method) cv::FileNodeIterator . equalTo
// Arg ARG cv::FileNodeIterator (boxed) it= cv::FileNodeIterator (boxed) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_FileNodeIterator_equalTo_const_FileNodeIterator(void* instance, void* it) {
    try {
        bool ret = reinterpret_cast<cv::FileNodeIterator*>(instance)->equalTo(*reinterpret_cast<const cv::FileNodeIterator*>(it));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// boxed class: cv::FileStorage
void cv_FileStorage_delete(void* instance) {
    delete reinterpret_cast<cv::FileStorage*>(instance);
}
// parsed: cv::FileStorage::FileStorage
// as:     cv::FileStorage::FileStorage (constructor) cv::FileStorage . default
// Return value: cv::FileStorage (boxed)
cv_return_value_void_X cv_FileStorage_FileStorage() {
    try {
        cv::FileStorage* ret = new cv::FileStorage();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::FileStorage::FileStorage
// as:     cv::FileStorage::FileStorage (constructor) cv::FileStorage . new
// Arg ARG string filename= string = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG string encoding= string = String()
// Return value: cv::FileStorage (boxed)
cv_return_value_void_X cv_FileStorage_FileStorage_String_int_String(const char* filename, int flags, const char* encoding) {
    try {
        cv::FileStorage* ret = new cv::FileStorage(String(filename), flags, String(encoding));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::FileStorage::open
// as:     cv::FileStorage::open (method) cv::FileStorage . open
// Arg ARG string filename= string = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG string encoding= string = String()
// Return value: Primitive(bool)
cv_return_value_bool cv_FileStorage_open_String_int_String(void* instance, const char* filename, int flags, const char* encoding) {
    try {
        bool ret = reinterpret_cast<cv::FileStorage*>(instance)->open(String(filename), flags, String(encoding));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::FileStorage::isOpened
// as:     cv::FileStorage::isOpened (method) cv::FileStorage . isOpened
// Return value: Primitive(bool)
cv_return_value_bool cv_FileStorage_isOpened_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::FileStorage*>(instance)->isOpened();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::FileStorage::release
// as:     cv::FileStorage::release (method) cv::FileStorage . release
// Return value: Primitive(void)
cv_return_value_void cv_FileStorage_release(void* instance) {
    try {
        reinterpret_cast<cv::FileStorage*>(instance)->release();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FileStorage::releaseAndGetString
// as:     cv::FileStorage::releaseAndGetString (method) cv::FileStorage . releaseAndGetString
// Return value: string
cv_return_value_char_X cv_FileStorage_releaseAndGetString(void* instance) {
    try {
        String ret = reinterpret_cast<cv::FileStorage*>(instance)->releaseAndGetString();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::FileStorage::getFirstTopLevelNode
// as:     cv::FileStorage::getFirstTopLevelNode (method) cv::FileStorage . getFirstTopLevelNode
// Return value: cv::FileNode (boxed)
cv_return_value_void_X cv_FileStorage_getFirstTopLevelNode_const(void* instance) {
    try {
        cv::FileNode ret = reinterpret_cast<cv::FileStorage*>(instance)->getFirstTopLevelNode();
        return { Error::Code::StsOk, NULL, new cv::FileNode(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::FileStorage::root
// as:     cv::FileStorage::root (method) cv::FileStorage . root
// Arg ARG Primitive(int) streamidx= Primitive(int) = 0
// Return value: cv::FileNode (boxed)
cv_return_value_void_X cv_FileStorage_root_const_int(void* instance, int streamidx) {
    try {
        cv::FileNode ret = reinterpret_cast<cv::FileStorage*>(instance)->root(streamidx);
        return { Error::Code::StsOk, NULL, new cv::FileNode(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::FileStorage::write
// as:     cv::FileStorage::write (method) cv::FileStorage . write
// Arg ARG string name= string = 
// Arg ARG Primitive(int) val= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_FileStorage_write_String_int(void* instance, const char* name, int val) {
    try {
        reinterpret_cast<cv::FileStorage*>(instance)->write(String(name), val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FileStorage::write
// as:     cv::FileStorage::write (method) cv::FileStorage . write
// Arg ARG string name= string = 
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: Primitive(void)
cv_return_value_void cv_FileStorage_write_String_double(void* instance, const char* name, double val) {
    try {
        reinterpret_cast<cv::FileStorage*>(instance)->write(String(name), val);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FileStorage::write
// as:     cv::FileStorage::write (method) cv::FileStorage . write
// Arg ARG string name= string = 
// Arg ARG string val= string = 
// Return value: Primitive(void)
cv_return_value_void cv_FileStorage_write_String_String(void* instance, const char* name, const char* val) {
    try {
        reinterpret_cast<cv::FileStorage*>(instance)->write(String(name), String(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FileStorage::write
// as:     cv::FileStorage::write (method) cv::FileStorage . write
// Arg ARG string name= string = 
// Arg ARG cv::Mat (boxed) val= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_FileStorage_write_String_Mat(void* instance, const char* name, void* val) {
    try {
        reinterpret_cast<cv::FileStorage*>(instance)->write(String(name), *reinterpret_cast<const cv::Mat*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FileStorage::write
// as:     cv::FileStorage::write (method) cv::FileStorage . write
// Arg ARG string name= string = 
// Arg ARG Vector[string] val= Vector[string] = 
// Return value: Primitive(void)
cv_return_value_void cv_FileStorage_write_String_VectorOfString(void* instance, const char* name, void* val) {
    try {
        reinterpret_cast<cv::FileStorage*>(instance)->write(String(name), *reinterpret_cast<const std::vector<String>*>(val));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FileStorage::writeRaw
// as:     cv::FileStorage::writeRaw (method) cv::FileStorage . writeRaw
// Arg ARG string fmt= string = 
// Arg ARG RawPtr[Primitive(void)] * vec= (ptr) RawPtr[Primitive(void)] = 
// Arg ARG Primitive(size_t) len= Primitive(size_t) = 
// Return value: Primitive(void)
cv_return_value_void cv_FileStorage_writeRaw_String_const_void_X_size_t(void* instance, const char* fmt, const void* vec, std::size_t len) {
    try {
        reinterpret_cast<cv::FileStorage*>(instance)->writeRaw(String(fmt), vec, len);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FileStorage::writeComment
// as:     cv::FileStorage::writeComment (method) cv::FileStorage . writeComment
// Arg ARG string comment= string = 
// Arg ARG Primitive(bool) append= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_FileStorage_writeComment_String_bool(void* instance, const char* comment, bool append) {
    try {
        reinterpret_cast<cv::FileStorage*>(instance)->writeComment(String(comment), append);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FileStorage::startWriteStruct
// as:     cv::FileStorage::startWriteStruct (method) cv::FileStorage . startWriteStruct
// Arg ARG string name= string = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG string typeName= string = 
// Return value: Primitive(void)
cv_return_value_void cv_FileStorage_startWriteStruct_String_int_String(void* instance, const char* name, int flags, const char* typeName) {
    try {
        reinterpret_cast<cv::FileStorage*>(instance)->startWriteStruct(String(name), flags, String(typeName));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FileStorage::endWriteStruct
// as:     cv::FileStorage::endWriteStruct (method) cv::FileStorage . endWriteStruct
// Return value: Primitive(void)
cv_return_value_void cv_FileStorage_endWriteStruct(void* instance) {
    try {
        reinterpret_cast<cv::FileStorage*>(instance)->endWriteStruct();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::FileStorage::getDefaultObjectName
// as:     cv::FileStorage::getDefaultObjectName (method) cv::FileStorage . getDefaultObjectName
// Arg ARG string filename= string = 
// Return value: string
cv_return_value_char_X cv_FileStorage_getDefaultObjectName_String(const char* filename) {
    try {
        String ret = cv::FileStorage::getDefaultObjectName(String(filename));
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::FileStorage::getFormat
// as:     cv::FileStorage::getFormat (method) cv::FileStorage . getFormat
// Return value: Primitive(int)
cv_return_value_int cv_FileStorage_getFormat_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::FileStorage*>(instance)->getFormat();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Formatted::next
// as:     cv::Formatted::next (method) cv::Formatted (trait) . next
// Return value: RawPtr[Primitive(char)]
cv_return_value_const_char_X cv_Formatted_next(void* instance) {
    try {
        const char* ret = reinterpret_cast<cv::Formatted*>(instance)->next();
        return { Error::Code::StsOk, NULL, strdup(ret) };
    } CVRS_CATCH(cv_return_value_const_char_X)
}

// parsed: cv::Formatted::reset
// as:     cv::Formatted::reset (method) cv::Formatted (trait) . reset
// Return value: Primitive(void)
cv_return_value_void cv_Formatted_reset(void* instance) {
    try {
        reinterpret_cast<cv::Formatted*>(instance)->reset();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Formatter::format
// as:     cv::Formatter::format (method) cv::Formatter (trait) . format
// Arg ARG cv::Mat (boxed) mtx= cv::Mat (boxed) = 
// Return value: SmartPtr[cv::Formatted (boxed)]
cv_return_value_void_X cv_Formatter_format_const_Mat(void* instance, void* mtx) {
    try {
        Ptr<cv::Formatted> ret = reinterpret_cast<cv::Formatter*>(instance)->format(*reinterpret_cast<const cv::Mat*>(mtx));
        return { Error::Code::StsOk, NULL, new Ptr<cv::Formatted>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Formatter::set16fPrecision
// as:     cv::Formatter::set16fPrecision (method) cv::Formatter (trait) . set16fPrecision
// Arg ARG Primitive(int) p= Primitive(int) = 4
// Return value: Primitive(void)
cv_return_value_void cv_Formatter_set16fPrecision_int(void* instance, int p) {
    try {
        reinterpret_cast<cv::Formatter*>(instance)->set16fPrecision(p);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Formatter::set32fPrecision
// as:     cv::Formatter::set32fPrecision (method) cv::Formatter (trait) . set32fPrecision
// Arg ARG Primitive(int) p= Primitive(int) = 8
// Return value: Primitive(void)
cv_return_value_void cv_Formatter_set32fPrecision_int(void* instance, int p) {
    try {
        reinterpret_cast<cv::Formatter*>(instance)->set32fPrecision(p);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Formatter::set64fPrecision
// as:     cv::Formatter::set64fPrecision (method) cv::Formatter (trait) . set64fPrecision
// Arg ARG Primitive(int) p= Primitive(int) = 16
// Return value: Primitive(void)
cv_return_value_void cv_Formatter_set64fPrecision_int(void* instance, int p) {
    try {
        reinterpret_cast<cv::Formatter*>(instance)->set64fPrecision(p);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Formatter::setMultiline
// as:     cv::Formatter::setMultiline (method) cv::Formatter (trait) . setMultiline
// Arg ARG Primitive(bool) ml= Primitive(bool) = true
// Return value: Primitive(void)
cv_return_value_void cv_Formatter_setMultiline_bool(void* instance, bool ml) {
    try {
        reinterpret_cast<cv::Formatter*>(instance)->setMultiline(ml);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Formatter::get
// as:     cv::Formatter::get (method) cv::Formatter (trait) . get
// Arg ARG Formatter::FormatType (enum) fmt= Formatter::FormatType (enum) = FMT_DEFAULT
// Return value: SmartPtr[cv::Formatter (boxed)]
cv_return_value_void_X cv_Formatter_get_Formatter_FormatType(Formatter::FormatType fmt) {
    try {
        Ptr<cv::Formatter> ret = cv::Formatter::get(*reinterpret_cast<Formatter::FormatType*>(&fmt));
        return { Error::Code::StsOk, NULL, new Ptr<cv::Formatter>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::Hamming
void cv_Hamming_delete(void* instance) {
    delete reinterpret_cast<cv::Hamming*>(instance);
}
// parsed: cv::KeyPoint::KeyPoint
// as:     cv::KeyPoint::KeyPoint (constructor) cv::KeyPoint (simple) . default
// Return value: cv::KeyPoint (simple)
cv_return_value_KeyPoint cv_KeyPoint_KeyPoint() {
    try {
        cv::KeyPoint ret;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_KeyPoint)
}

// parsed: cv::KeyPoint::KeyPoint
// as:     cv::KeyPoint::KeyPoint (constructor) cv::KeyPoint (simple) . new
// Arg ARG cv::Point2f (simple) _pt= cv::Point2f (simple) = 
// Arg ARG Primitive(float) _size= Primitive(float) = 
// Arg ARG Primitive(float) _angle= Primitive(float) = -1
// Arg ARG Primitive(float) _response= Primitive(float) = 0
// Arg ARG Primitive(int) _octave= Primitive(int) = 0
// Arg ARG Primitive(int) _class_id= Primitive(int) = -1
// Return value: cv::KeyPoint (simple)
cv_return_value_KeyPoint cv_KeyPoint_KeyPoint_Point2f_float_float_float_int_int(Point2fWrapper _pt, float _size, float _angle, float _response, int _octave, int _class_id) {
    try {
        cv::KeyPoint ret(*reinterpret_cast<cv::Point2f*>(&_pt), _size, _angle, _response, _octave, _class_id);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_KeyPoint)
}

// parsed: cv::KeyPoint::KeyPoint
// as:     cv::KeyPoint::KeyPoint (constructor) cv::KeyPoint (simple) . new
// Arg ARG Primitive(float) x= Primitive(float) = 
// Arg ARG Primitive(float) y= Primitive(float) = 
// Arg ARG Primitive(float) _size= Primitive(float) = 
// Arg ARG Primitive(float) _angle= Primitive(float) = -1
// Arg ARG Primitive(float) _response= Primitive(float) = 0
// Arg ARG Primitive(int) _octave= Primitive(int) = 0
// Arg ARG Primitive(int) _class_id= Primitive(int) = -1
// Return value: cv::KeyPoint (simple)
cv_return_value_KeyPoint cv_KeyPoint_KeyPoint_float_float_float_float_float_int_int(float x, float y, float _size, float _angle, float _response, int _octave, int _class_id) {
    try {
        cv::KeyPoint ret(x, y, _size, _angle, _response, _octave, _class_id);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_KeyPoint)
}

// parsed: cv::KeyPoint::hash
// as:     cv::KeyPoint::hash (method) cv::KeyPoint (simple) . hash
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_KeyPoint_hash_const(cv::KeyPoint instance) {
    try {
        size_t ret = reinterpret_cast<cv::KeyPoint*>(&instance)->hash();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::KeyPoint::convert
// as:     cv::KeyPoint::convert (method) cv::KeyPoint (simple) . convert
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG Vector[cv::Point2f (simple)] points2f= Vector[cv::Point2f (simple)] = 
// Arg ARG Vector[Primitive(int)] keypointIndexes= Vector[Primitive(int)] = std::vector<int>()
// Return value: Primitive(void)
cv_return_value_void cv_KeyPoint_convert_VectorOfKeyPoint_VectorOfPoint2f_VectorOfint(void* keypoints, void* points2f, void* keypointIndexes) {
    try {
        cv::KeyPoint::convert(*reinterpret_cast<const std::vector<cv::KeyPoint>*>(keypoints), *reinterpret_cast<std::vector<cv::Point2f>*>(points2f), *reinterpret_cast<const std::vector<int>*>(keypointIndexes));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KeyPoint::convert
// as:     cv::KeyPoint::convert (method) cv::KeyPoint (simple) . convert
// Arg ARG Vector[cv::Point2f (simple)] points2f= Vector[cv::Point2f (simple)] = 
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG Primitive(float) size= Primitive(float) = 1
// Arg ARG Primitive(float) response= Primitive(float) = 1
// Arg ARG Primitive(int) octave= Primitive(int) = 0
// Arg ARG Primitive(int) class_id= Primitive(int) = -1
// Return value: Primitive(void)
cv_return_value_void cv_KeyPoint_convert_VectorOfPoint2f_VectorOfKeyPoint_float_float_int_int(void* points2f, void* keypoints, float size, float response, int octave, int class_id) {
    try {
        cv::KeyPoint::convert(*reinterpret_cast<const std::vector<cv::Point2f>*>(points2f), *reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints), size, response, octave, class_id);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::KeyPoint::overlap
// as:     cv::KeyPoint::overlap (method) cv::KeyPoint (simple) . overlap
// Arg ARG cv::KeyPoint (simple) kp1= cv::KeyPoint (simple) = 
// Arg ARG cv::KeyPoint (simple) kp2= cv::KeyPoint (simple) = 
// Return value: Primitive(float)
cv_return_value_float cv_KeyPoint_overlap_KeyPoint_KeyPoint(cv::KeyPoint kp1, cv::KeyPoint kp2) {
    try {
        float ret = cv::KeyPoint::overlap(*reinterpret_cast<const cv::KeyPoint*>(&kp1), *reinterpret_cast<const cv::KeyPoint*>(&kp2));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// boxed class: cv::LDA
void cv_LDA_delete(void* instance) {
    delete reinterpret_cast<cv::LDA*>(instance);
}
// parsed: cv::LDA::LDA
// as:     cv::LDA::LDA (constructor) cv::LDA . new
// Arg ARG Primitive(int) num_components= Primitive(int) = 0
// Return value: cv::LDA (boxed)
cv_return_value_void_X cv_LDA_LDA_int(int num_components) {
    try {
        cv::LDA* ret = new cv::LDA(num_components);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::LDA::LDA
// as:     cv::LDA::LDA (constructor) cv::LDA . new
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) labels= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) num_components= Primitive(int) = 0
// Return value: cv::LDA (boxed)
cv_return_value_void_X cv_LDA_LDA__InputArray__InputArray_int(void* src, void* labels, int num_components) {
    try {
        cv::LDA* ret = new cv::LDA(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<const cv::_InputArray*>(labels), num_components);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::LDA::save
// as:     cv::LDA::save (method) cv::LDA . save
// Arg ARG string filename= string = 
// Return value: Primitive(void)
cv_return_value_void cv_LDA_save_const_String(void* instance, const char* filename) {
    try {
        reinterpret_cast<cv::LDA*>(instance)->save(String(filename));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::LDA::load
// as:     cv::LDA::load (method) cv::LDA . load
// Arg ARG string filename= string = 
// Return value: Primitive(void)
cv_return_value_void cv_LDA_load_String(void* instance, const char* filename) {
    try {
        reinterpret_cast<cv::LDA*>(instance)->load(String(filename));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::LDA::save
// as:     cv::LDA::save (method) cv::LDA . save
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_LDA_save_const_FileStorage(void* instance, void* fs) {
    try {
        reinterpret_cast<cv::LDA*>(instance)->save(*reinterpret_cast<cv::FileStorage*>(fs));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::LDA::load
// as:     cv::LDA::load (method) cv::LDA . load
// Arg ARG cv::FileStorage (boxed) node= cv::FileStorage (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_LDA_load_FileStorage(void* instance, void* node) {
    try {
        reinterpret_cast<cv::LDA*>(instance)->load(*reinterpret_cast<const cv::FileStorage*>(node));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::LDA::compute
// as:     cv::LDA::compute (method) cv::LDA . compute
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) labels= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_LDA_compute__InputArray__InputArray(void* instance, void* src, void* labels) {
    try {
        reinterpret_cast<cv::LDA*>(instance)->compute(*reinterpret_cast<const cv::_InputArray*>(src), *reinterpret_cast<const cv::_InputArray*>(labels));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::LDA::project
// as:     cv::LDA::project (method) cv::LDA . project
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_LDA_project__InputArray(void* instance, void* src) {
    try {
        cv::Mat ret = reinterpret_cast<cv::LDA*>(instance)->project(*reinterpret_cast<const cv::_InputArray*>(src));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::LDA::reconstruct
// as:     cv::LDA::reconstruct (method) cv::LDA . reconstruct
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_LDA_reconstruct__InputArray(void* instance, void* src) {
    try {
        cv::Mat ret = reinterpret_cast<cv::LDA*>(instance)->reconstruct(*reinterpret_cast<const cv::_InputArray*>(src));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::LDA::eigenvectors
// as:     cv::LDA::eigenvectors (method) cv::LDA . eigenvectors
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_LDA_eigenvectors_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::LDA*>(instance)->eigenvectors();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::LDA::eigenvalues
// as:     cv::LDA::eigenvalues (method) cv::LDA . eigenvalues
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_LDA_eigenvalues_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::LDA*>(instance)->eigenvalues();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::LDA::subspaceProject
// as:     cv::LDA::subspaceProject (method) cv::LDA . subspaceProject
// Arg ARG cv::_InputArray (boxed) W= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mean= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_LDA_subspaceProject__InputArray__InputArray__InputArray(void* W, void* mean, void* src) {
    try {
        cv::Mat ret = cv::LDA::subspaceProject(*reinterpret_cast<const cv::_InputArray*>(W), *reinterpret_cast<const cv::_InputArray*>(mean), *reinterpret_cast<const cv::_InputArray*>(src));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::LDA::subspaceReconstruct
// as:     cv::LDA::subspaceReconstruct (method) cv::LDA . subspaceReconstruct
// Arg ARG cv::_InputArray (boxed) W= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mean= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) src= cv::_InputArray (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_LDA_subspaceReconstruct__InputArray__InputArray__InputArray(void* W, void* mean, void* src) {
    try {
        cv::Mat ret = cv::LDA::subspaceReconstruct(*reinterpret_cast<const cv::_InputArray*>(W), *reinterpret_cast<const cv::_InputArray*>(mean), *reinterpret_cast<const cv::_InputArray*>(src));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::Mat
void cv_Mat_delete(void* instance) {
    delete reinterpret_cast<cv::Mat*>(instance);
}
// parsed: cv::Mat::flags
// as:     cv::Mat::flags (method) cv::Mat . flags
// Return value: Primitive(int)
cv_return_value_int cv_Mat_flags_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::Mat*>(instance)->flags;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Mat::dims
// as:     cv::Mat::dims (method) cv::Mat . dims
// Return value: Primitive(int)
cv_return_value_int cv_Mat_dims_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::Mat*>(instance)->dims;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Mat::rows
// as:     cv::Mat::rows (method) cv::Mat . rows
// Return value: Primitive(int)
cv_return_value_int cv_Mat_rows_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::Mat*>(instance)->rows;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Mat::cols
// as:     cv::Mat::cols (method) cv::Mat . cols
// Return value: Primitive(int)
cv_return_value_int cv_Mat_cols_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::Mat*>(instance)->cols;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Mat::data
// as:     cv::Mat::data (method) cv::Mat . data
// Return value: RawPtr[Primitive(uchar)]
cv_return_value_unsigned_char_X cv_Mat_data(void* instance) {
    try {
        uchar* ret = reinterpret_cast<cv::Mat*>(instance)->data;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_unsigned_char_X)
}

// parsed: cv::Mat::set_data
// as:     cv::Mat::set_data (method) cv::Mat . set_data
// Arg ARG RawPtr[Primitive(uchar)] * val= (ptr) RawPtr[Primitive(uchar)] = 
// Return value: Primitive(void)
cv_return_value_void cv_Mat_set_data_uchar_X(void* instance, uchar* val) {
    try {
        reinterpret_cast<cv::Mat*>(instance)->data = val;
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Mat::datastart
// as:     cv::Mat::datastart (method) cv::Mat . datastart
// Return value: RawPtr[Primitive(uchar)]
cv_return_value_const_unsigned_char_X cv_Mat_datastart_const(void* instance) {
    try {
        const uchar* ret = reinterpret_cast<cv::Mat*>(instance)->datastart;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_const_unsigned_char_X)
}

// parsed: cv::Mat::dataend
// as:     cv::Mat::dataend (method) cv::Mat . dataend
// Return value: RawPtr[Primitive(uchar)]
cv_return_value_const_unsigned_char_X cv_Mat_dataend_const(void* instance) {
    try {
        const uchar* ret = reinterpret_cast<cv::Mat*>(instance)->dataend;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_const_unsigned_char_X)
}

// parsed: cv::Mat::datalimit
// as:     cv::Mat::datalimit (method) cv::Mat . datalimit
// Return value: RawPtr[Primitive(uchar)]
cv_return_value_const_unsigned_char_X cv_Mat_datalimit_const(void* instance) {
    try {
        const uchar* ret = reinterpret_cast<cv::Mat*>(instance)->datalimit;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_const_unsigned_char_X)
}

// parsed: cv::Mat::size
// as:     cv::Mat::size (method) cv::Mat . size
// Return value: cv::MatSize (boxed)
cv_return_value_void_X cv_Mat_size_const(void* instance) {
    try {
        cv::MatSize ret = reinterpret_cast<cv::Mat*>(instance)->size;
        return { Error::Code::StsOk, NULL, new cv::MatSize(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::step
// as:     cv::Mat::step (method) cv::Mat . step
// Return value: cv::MatStep (boxed)
cv_return_value_void_X cv_Mat_step_const(void* instance) {
    try {
        cv::MatStep ret = reinterpret_cast<cv::Mat*>(instance)->step;
        return { Error::Code::StsOk, NULL, new cv::MatStep(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . default
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_Mat() {
    try {
        cv::Mat* ret = new cv::Mat();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Arg ARG Primitive(int) rows= Primitive(int) = 
// Arg ARG Primitive(int) cols= Primitive(int) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_Mat_int_int_int(int rows, int cols, int type) {
    try {
        cv::Mat* ret = new cv::Mat(rows, cols, type);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_Mat_Size_int(SizeWrapper size, int type) {
    try {
        cv::Mat* ret = new cv::Mat(*reinterpret_cast<cv::Size*>(&size), type);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Arg ARG Primitive(int) rows= Primitive(int) = 
// Arg ARG Primitive(int) cols= Primitive(int) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG cv::Scalar (simple) s= cv::Scalar (simple) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_Mat_int_int_int_Scalar(int rows, int cols, int type, ScalarWrapper s) {
    try {
        cv::Mat* ret = new cv::Mat(rows, cols, type, *reinterpret_cast<const cv::Scalar*>(&s));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG cv::Scalar (simple) s= cv::Scalar (simple) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_Mat_Size_int_Scalar(SizeWrapper size, int type, ScalarWrapper s) {
    try {
        cv::Mat* ret = new cv::Mat(*reinterpret_cast<cv::Size*>(&size), type, *reinterpret_cast<const cv::Scalar*>(&s));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Arg ARG Vector[Primitive(int)] sizes= Vector[Primitive(int)] = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_Mat_VectorOfint_int(void* sizes, int type) {
    try {
        cv::Mat* ret = new cv::Mat(*reinterpret_cast<const std::vector<int>*>(sizes), type);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Arg ARG Vector[Primitive(int)] sizes= Vector[Primitive(int)] = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG cv::Scalar (simple) s= cv::Scalar (simple) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_Mat_VectorOfint_int_Scalar(void* sizes, int type, ScalarWrapper s) {
    try {
        cv::Mat* ret = new cv::Mat(*reinterpret_cast<const std::vector<int>*>(sizes), type, *reinterpret_cast<const cv::Scalar*>(&s));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . copy
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_Mat_Mat(void* m) {
    try {
        cv::Mat* ret = new cv::Mat(*reinterpret_cast<const cv::Mat*>(m));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Arg ARG Primitive(int) rows= Primitive(int) = 
// Arg ARG Primitive(int) cols= Primitive(int) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG RawPtr[Primitive(void)] * data= (ptr) RawPtr[Primitive(void)] = 
// Arg ARG Primitive(size_t) step= Primitive(size_t) = AUTO_STEP
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_Mat_int_int_int_void_X_size_t(int rows, int cols, int type, void* data, std::size_t step) {
    try {
        cv::Mat* ret = new cv::Mat(rows, cols, type, data, step);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG RawPtr[Primitive(void)] * data= (ptr) RawPtr[Primitive(void)] = 
// Arg ARG Primitive(size_t) step= Primitive(size_t) = AUTO_STEP
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_Mat_Size_int_void_X_size_t(SizeWrapper size, int type, void* data, std::size_t step) {
    try {
        cv::Mat* ret = new cv::Mat(*reinterpret_cast<cv::Size*>(&size), type, data, step);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Arg ARG Vector[Primitive(int)] sizes= Vector[Primitive(int)] = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG RawPtr[Primitive(void)] * data= (ptr) RawPtr[Primitive(void)] = 
// Arg ARG RawPtr[Primitive(size_t)] * steps= (ptr) RawPtr[Primitive(size_t)] = 0
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_Mat_VectorOfint_int_void_X_const_size_t_X(void* sizes, int type, void* data, const size_t* steps) {
    try {
        cv::Mat* ret = new cv::Mat(*reinterpret_cast<const std::vector<int>*>(sizes), type, data, steps);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Arg ARG cv::Range (boxed) rowRange= cv::Range (boxed) = 
// Arg ARG cv::Range (boxed) colRange= cv::Range (boxed) = Range::all()
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_Mat_Mat_Range_Range(void* m, void* rowRange, void* colRange) {
    try {
        cv::Mat* ret = new cv::Mat(*reinterpret_cast<const cv::Mat*>(m), *reinterpret_cast<const cv::Range*>(rowRange), *reinterpret_cast<const cv::Range*>(colRange));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Arg ARG cv::Rect (simple) roi= cv::Rect (simple) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_Mat_Mat_Rect(void* m, RectWrapper roi) {
    try {
        cv::Mat* ret = new cv::Mat(*reinterpret_cast<const cv::Mat*>(m), *reinterpret_cast<const cv::Rect*>(&roi));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::Mat
// as:     cv::Mat::Mat (constructor) cv::Mat . new
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Arg ARG Vector[cv::Range (boxed)] ranges= Vector[cv::Range (boxed)] = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_Mat_Mat_VectorOfRange(void* m, void* ranges) {
    try {
        cv::Mat* ret = new cv::Mat(*reinterpret_cast<const cv::Mat*>(m), *reinterpret_cast<const std::vector<cv::Range>*>(ranges));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::getUMat
// as:     cv::Mat::getUMat (method) cv::Mat . getUMat
// Arg ARG AccessFlag (enum) accessFlags= AccessFlag (enum) = 
// Arg ARG UMatUsageFlags (enum) usageFlags= UMatUsageFlags (enum) = USAGE_DEFAULT
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_Mat_getUMat_const_AccessFlag_UMatUsageFlags(void* instance, AccessFlag accessFlags, UMatUsageFlags usageFlags) {
    try {
        cv::UMat ret = reinterpret_cast<cv::Mat*>(instance)->getUMat(*reinterpret_cast<AccessFlag*>(&accessFlags), *reinterpret_cast<UMatUsageFlags*>(&usageFlags));
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::row
// as:     cv::Mat::row (method) cv::Mat . row
// Arg ARG Primitive(int) y= Primitive(int) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_row_const_int(void* instance, int y) {
    try {
        cv::Mat ret = reinterpret_cast<cv::Mat*>(instance)->row(y);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::col
// as:     cv::Mat::col (method) cv::Mat . col
// Arg ARG Primitive(int) x= Primitive(int) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_col_const_int(void* instance, int x) {
    try {
        cv::Mat ret = reinterpret_cast<cv::Mat*>(instance)->col(x);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::rowRange
// as:     cv::Mat::rowRange (method) cv::Mat . rowRange
// Arg ARG Primitive(int) startrow= Primitive(int) = 
// Arg ARG Primitive(int) endrow= Primitive(int) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_rowRange_const_int_int(void* instance, int startrow, int endrow) {
    try {
        cv::Mat ret = reinterpret_cast<cv::Mat*>(instance)->rowRange(startrow, endrow);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::rowRange
// as:     cv::Mat::rowRange (method) cv::Mat . rowRange
// Arg ARG cv::Range (boxed) r= cv::Range (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_rowRange_const_Range(void* instance, void* r) {
    try {
        cv::Mat ret = reinterpret_cast<cv::Mat*>(instance)->rowRange(*reinterpret_cast<const cv::Range*>(r));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::colRange
// as:     cv::Mat::colRange (method) cv::Mat . colRange
// Arg ARG Primitive(int) startcol= Primitive(int) = 
// Arg ARG Primitive(int) endcol= Primitive(int) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_colRange_const_int_int(void* instance, int startcol, int endcol) {
    try {
        cv::Mat ret = reinterpret_cast<cv::Mat*>(instance)->colRange(startcol, endcol);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::colRange
// as:     cv::Mat::colRange (method) cv::Mat . colRange
// Arg ARG cv::Range (boxed) r= cv::Range (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_colRange_const_Range(void* instance, void* r) {
    try {
        cv::Mat ret = reinterpret_cast<cv::Mat*>(instance)->colRange(*reinterpret_cast<const cv::Range*>(r));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::diag
// as:     cv::Mat::diag (method) cv::Mat . diag
// Arg ARG Primitive(int) d= Primitive(int) = 0
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_diag_const_int(void* instance, int d) {
    try {
        cv::Mat ret = reinterpret_cast<cv::Mat*>(instance)->diag(d);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::diag
// as:     cv::Mat::diag (method) cv::Mat . diag
// Arg ARG cv::Mat (boxed) d= cv::Mat (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_diag_Mat(void* d) {
    try {
        cv::Mat ret = cv::Mat::diag(*reinterpret_cast<const cv::Mat*>(d));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::clone
// as:     cv::Mat::clone (method) cv::Mat . clone
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_clone_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::Mat*>(instance)->clone();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::copyTo
// as:     cv::Mat::copyTo (method) cv::Mat . copyTo
// Arg ARG cv::_OutputArray (boxed) m= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_Mat_copyTo_const__OutputArray(void* instance, void* m) {
    try {
        reinterpret_cast<cv::Mat*>(instance)->copyTo(*reinterpret_cast<cv::_OutputArray*>(m));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Mat::copyTo
// as:     cv::Mat::copyTo (method) cv::Mat . copyTo
// Arg ARG cv::_OutputArray (boxed) m= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_Mat_copyTo_const__OutputArray__InputArray(void* instance, void* m, void* mask) {
    try {
        reinterpret_cast<cv::Mat*>(instance)->copyTo(*reinterpret_cast<cv::_OutputArray*>(m), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Mat::convertTo
// as:     cv::Mat::convertTo (method) cv::Mat . convertTo
// Arg ARG cv::_OutputArray (boxed) m= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) rtype= Primitive(int) = 
// Arg ARG Primitive(double) alpha= Primitive(double) = 1
// Arg ARG Primitive(double) beta= Primitive(double) = 0
// Return value: Primitive(void)
cv_return_value_void cv_Mat_convertTo_const__OutputArray_int_double_double(void* instance, void* m, int rtype, double alpha, double beta) {
    try {
        reinterpret_cast<cv::Mat*>(instance)->convertTo(*reinterpret_cast<cv::_OutputArray*>(m), rtype, alpha, beta);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Mat::assignTo
// as:     cv::Mat::assignTo (method) cv::Mat . assignTo
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Arg ARG Primitive(int) type= Primitive(int) = -1
// Return value: Primitive(void)
cv_return_value_void cv_Mat_assignTo_const_Mat_int(void* instance, void* m, int type) {
    try {
        reinterpret_cast<cv::Mat*>(instance)->assignTo(*reinterpret_cast<cv::Mat*>(m), type);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Mat::setTo
// as:     cv::Mat::setTo (method) cv::Mat . setTo
// Arg ARG cv::_InputArray (boxed) value= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_setTo__InputArray__InputArray(void* instance, void* value, void* mask) {
    try {
        cv::Mat ret = reinterpret_cast<cv::Mat*>(instance)->setTo(*reinterpret_cast<const cv::_InputArray*>(value), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::reshape
// as:     cv::Mat::reshape (method) cv::Mat . reshape
// Arg ARG Primitive(int) cn= Primitive(int) = 
// Arg ARG Primitive(int) rows= Primitive(int) = 0
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_reshape_const_int_int(void* instance, int cn, int rows) {
    try {
        cv::Mat ret = reinterpret_cast<cv::Mat*>(instance)->reshape(cn, rows);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::reshape
// as:     cv::Mat::reshape (method) cv::Mat . reshape
// Arg ARG Primitive(int) cn= Primitive(int) = 
// Arg ARG Vector[Primitive(int)] newshape= Vector[Primitive(int)] = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_reshape_const_int_VectorOfint(void* instance, int cn, void* newshape) {
    try {
        cv::Mat ret = reinterpret_cast<cv::Mat*>(instance)->reshape(cn, *reinterpret_cast<const std::vector<int>*>(newshape));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::t
// as:     cv::Mat::t (method) cv::Mat . t
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_Mat_t_const(void* instance) {
    try {
        cv::MatExpr ret = reinterpret_cast<cv::Mat*>(instance)->t();
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::inv
// as:     cv::Mat::inv (method) cv::Mat . inv
// Arg ARG Primitive(int) method= Primitive(int) = DECOMP_LU
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_Mat_inv_const_int(void* instance, int method) {
    try {
        cv::MatExpr ret = reinterpret_cast<cv::Mat*>(instance)->inv(method);
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::mul
// as:     cv::Mat::mul (method) cv::Mat . mul
// Arg ARG cv::_InputArray (boxed) m= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) scale= Primitive(double) = 1
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_Mat_mul_const__InputArray_double(void* instance, void* m, double scale) {
    try {
        cv::MatExpr ret = reinterpret_cast<cv::Mat*>(instance)->mul(*reinterpret_cast<const cv::_InputArray*>(m), scale);
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::cross
// as:     cv::Mat::cross (method) cv::Mat . cross
// Arg ARG cv::_InputArray (boxed) m= cv::_InputArray (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_cross_const__InputArray(void* instance, void* m) {
    try {
        cv::Mat ret = reinterpret_cast<cv::Mat*>(instance)->cross(*reinterpret_cast<const cv::_InputArray*>(m));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::dot
// as:     cv::Mat::dot (method) cv::Mat . dot
// Arg ARG cv::_InputArray (boxed) m= cv::_InputArray (boxed) = 
// Return value: Primitive(double)
cv_return_value_double cv_Mat_dot_const__InputArray(void* instance, void* m) {
    try {
        double ret = reinterpret_cast<cv::Mat*>(instance)->dot(*reinterpret_cast<const cv::_InputArray*>(m));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::Mat::zeros
// as:     cv::Mat::zeros (method) cv::Mat . zeros
// Arg ARG Primitive(int) rows= Primitive(int) = 
// Arg ARG Primitive(int) cols= Primitive(int) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_Mat_zeros_int_int_int(int rows, int cols, int type) {
    try {
        cv::MatExpr ret = cv::Mat::zeros(rows, cols, type);
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::zeros
// as:     cv::Mat::zeros (method) cv::Mat . zeros
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_Mat_zeros_Size_int(SizeWrapper size, int type) {
    try {
        cv::MatExpr ret = cv::Mat::zeros(*reinterpret_cast<cv::Size*>(&size), type);
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::zeros
// as:     cv::Mat::zeros (method) cv::Mat . zeros
// Arg ARG Primitive(int) ndims= Primitive(int) = 
// Arg ARG RawPtr[Primitive(int)] * sz= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_Mat_zeros_int_const_int_X_int(int ndims, const int* sz, int type) {
    try {
        cv::MatExpr ret = cv::Mat::zeros(ndims, sz, type);
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::ones
// as:     cv::Mat::ones (method) cv::Mat . ones
// Arg ARG Primitive(int) rows= Primitive(int) = 
// Arg ARG Primitive(int) cols= Primitive(int) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_Mat_ones_int_int_int(int rows, int cols, int type) {
    try {
        cv::MatExpr ret = cv::Mat::ones(rows, cols, type);
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::ones
// as:     cv::Mat::ones (method) cv::Mat . ones
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_Mat_ones_Size_int(SizeWrapper size, int type) {
    try {
        cv::MatExpr ret = cv::Mat::ones(*reinterpret_cast<cv::Size*>(&size), type);
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::ones
// as:     cv::Mat::ones (method) cv::Mat . ones
// Arg ARG Primitive(int) ndims= Primitive(int) = 
// Arg ARG RawPtr[Primitive(int)] * sz= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_Mat_ones_int_const_int_X_int(int ndims, const int* sz, int type) {
    try {
        cv::MatExpr ret = cv::Mat::ones(ndims, sz, type);
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::eye
// as:     cv::Mat::eye (method) cv::Mat . eye
// Arg ARG Primitive(int) rows= Primitive(int) = 
// Arg ARG Primitive(int) cols= Primitive(int) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_Mat_eye_int_int_int(int rows, int cols, int type) {
    try {
        cv::MatExpr ret = cv::Mat::eye(rows, cols, type);
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::eye
// as:     cv::Mat::eye (method) cv::Mat . eye
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_Mat_eye_Size_int(SizeWrapper size, int type) {
    try {
        cv::MatExpr ret = cv::Mat::eye(*reinterpret_cast<cv::Size*>(&size), type);
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::create
// as:     cv::Mat::create (method) cv::Mat . create
// Arg ARG Primitive(int) rows= Primitive(int) = 
// Arg ARG Primitive(int) cols= Primitive(int) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_Mat_create_int_int_int(void* instance, int rows, int cols, int type) {
    try {
        reinterpret_cast<cv::Mat*>(instance)->create(rows, cols, type);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Mat::create
// as:     cv::Mat::create (method) cv::Mat . create
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_Mat_create_Size_int(void* instance, SizeWrapper size, int type) {
    try {
        reinterpret_cast<cv::Mat*>(instance)->create(*reinterpret_cast<cv::Size*>(&size), type);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Mat::create
// as:     cv::Mat::create (method) cv::Mat . create
// Arg ARG Vector[Primitive(int)] sizes= Vector[Primitive(int)] = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_Mat_create_VectorOfint_int(void* instance, void* sizes, int type) {
    try {
        reinterpret_cast<cv::Mat*>(instance)->create(*reinterpret_cast<const std::vector<int>*>(sizes), type);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Mat::addref
// as:     cv::Mat::addref (method) cv::Mat . addref
// Return value: Primitive(void)
cv_return_value_void cv_Mat_addref(void* instance) {
    try {
        reinterpret_cast<cv::Mat*>(instance)->addref();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Mat::release
// as:     cv::Mat::release (method) cv::Mat . release
// Return value: Primitive(void)
cv_return_value_void cv_Mat_release(void* instance) {
    try {
        reinterpret_cast<cv::Mat*>(instance)->release();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Mat::deallocate
// as:     cv::Mat::deallocate (method) cv::Mat . deallocate
// Return value: Primitive(void)
cv_return_value_void cv_Mat_deallocate(void* instance) {
    try {
        reinterpret_cast<cv::Mat*>(instance)->deallocate();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Mat::reserve
// as:     cv::Mat::reserve (method) cv::Mat . reserve
// Arg ARG Primitive(size_t) sz= Primitive(size_t) = 
// Return value: Primitive(void)
cv_return_value_void cv_Mat_reserve_size_t(void* instance, std::size_t sz) {
    try {
        reinterpret_cast<cv::Mat*>(instance)->reserve(sz);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Mat::reserveBuffer
// as:     cv::Mat::reserveBuffer (method) cv::Mat . reserveBuffer
// Arg ARG Primitive(size_t) sz= Primitive(size_t) = 
// Return value: Primitive(void)
cv_return_value_void cv_Mat_reserveBuffer_size_t(void* instance, std::size_t sz) {
    try {
        reinterpret_cast<cv::Mat*>(instance)->reserveBuffer(sz);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Mat::resize
// as:     cv::Mat::resize (method) cv::Mat . resize
// Arg ARG Primitive(size_t) sz= Primitive(size_t) = 
// Return value: Primitive(void)
cv_return_value_void cv_Mat_resize_size_t(void* instance, std::size_t sz) {
    try {
        reinterpret_cast<cv::Mat*>(instance)->resize(sz);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Mat::resize
// as:     cv::Mat::resize (method) cv::Mat . resize
// Arg ARG Primitive(size_t) sz= Primitive(size_t) = 
// Arg ARG cv::Scalar (simple) s= cv::Scalar (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_Mat_resize_size_t_Scalar(void* instance, std::size_t sz, ScalarWrapper s) {
    try {
        reinterpret_cast<cv::Mat*>(instance)->resize(sz, *reinterpret_cast<const cv::Scalar*>(&s));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Mat::push_back
// as:     cv::Mat::push_back (method) cv::Mat . push_back
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_Mat_push_back_Mat(void* instance, void* m) {
    try {
        reinterpret_cast<cv::Mat*>(instance)->push_back(*reinterpret_cast<const cv::Mat*>(m));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Mat::pop_back
// as:     cv::Mat::pop_back (method) cv::Mat . pop_back
// Arg ARG Primitive(size_t) nelems= Primitive(size_t) = 1
// Return value: Primitive(void)
cv_return_value_void cv_Mat_pop_back_size_t(void* instance, std::size_t nelems) {
    try {
        reinterpret_cast<cv::Mat*>(instance)->pop_back(nelems);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Mat::locateROI
// as:     cv::Mat::locateROI (method) cv::Mat . locateROI
// Arg ARG cv::Size (simple) wholeSize= cv::Size (simple) = 
// Arg ARG cv::Point (simple) ofs= cv::Point (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_Mat_locateROI_const_Size_Point(void* instance, SizeWrapper& wholeSize, PointWrapper& ofs) {
    try {
        reinterpret_cast<cv::Mat*>(instance)->locateROI(*reinterpret_cast<cv::Size*>(&wholeSize), *reinterpret_cast<cv::Point*>(&ofs));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Mat::adjustROI
// as:     cv::Mat::adjustROI (method) cv::Mat . adjustROI
// Arg ARG Primitive(int) dtop= Primitive(int) = 
// Arg ARG Primitive(int) dbottom= Primitive(int) = 
// Arg ARG Primitive(int) dleft= Primitive(int) = 
// Arg ARG Primitive(int) dright= Primitive(int) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_Mat_adjustROI_int_int_int_int(void* instance, int dtop, int dbottom, int dleft, int dright) {
    try {
        cv::Mat ret = reinterpret_cast<cv::Mat*>(instance)->adjustROI(dtop, dbottom, dleft, dright);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Mat::isContinuous
// as:     cv::Mat::isContinuous (method) cv::Mat . isContinuous
// Return value: Primitive(bool)
cv_return_value_bool cv_Mat_isContinuous_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::Mat*>(instance)->isContinuous();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::Mat::isSubmatrix
// as:     cv::Mat::isSubmatrix (method) cv::Mat . isSubmatrix
// Return value: Primitive(bool)
cv_return_value_bool cv_Mat_isSubmatrix_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::Mat*>(instance)->isSubmatrix();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::Mat::elemSize
// as:     cv::Mat::elemSize (method) cv::Mat . elemSize
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_Mat_elemSize_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::Mat*>(instance)->elemSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::Mat::elemSize1
// as:     cv::Mat::elemSize1 (method) cv::Mat . elemSize1
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_Mat_elemSize1_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::Mat*>(instance)->elemSize1();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::Mat::type
// as:     cv::Mat::type (method) cv::Mat . type
// Return value: Primitive(int)
cv_return_value_int cv_Mat_type_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::Mat*>(instance)->type();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Mat::depth
// as:     cv::Mat::depth (method) cv::Mat . depth
// Return value: Primitive(int)
cv_return_value_int cv_Mat_depth_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::Mat*>(instance)->depth();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Mat::channels
// as:     cv::Mat::channels (method) cv::Mat . channels
// Return value: Primitive(int)
cv_return_value_int cv_Mat_channels_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::Mat*>(instance)->channels();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Mat::step1
// as:     cv::Mat::step1 (method) cv::Mat . step1
// Arg ARG Primitive(int) i= Primitive(int) = 0
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_Mat_step1_const_int(void* instance, int i) {
    try {
        size_t ret = reinterpret_cast<cv::Mat*>(instance)->step1(i);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::Mat::empty
// as:     cv::Mat::empty (method) cv::Mat . empty
// Return value: Primitive(bool)
cv_return_value_bool cv_Mat_empty_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::Mat*>(instance)->empty();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::Mat::total
// as:     cv::Mat::total (method) cv::Mat . total
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_Mat_total_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::Mat*>(instance)->total();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::Mat::total
// as:     cv::Mat::total (method) cv::Mat . total
// Arg ARG Primitive(int) startDim= Primitive(int) = 
// Arg ARG Primitive(int) endDim= Primitive(int) = INT_MAX
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_Mat_total_const_int_int(void* instance, int startDim, int endDim) {
    try {
        size_t ret = reinterpret_cast<cv::Mat*>(instance)->total(startDim, endDim);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::Mat::checkVector
// as:     cv::Mat::checkVector (method) cv::Mat . checkVector
// Arg ARG Primitive(int) elemChannels= Primitive(int) = 
// Arg ARG Primitive(int) depth= Primitive(int) = -1
// Arg ARG Primitive(bool) requireContinuous= Primitive(bool) = true
// Return value: Primitive(int)
cv_return_value_int cv_Mat_checkVector_const_int_int_bool(void* instance, int elemChannels, int depth, bool requireContinuous) {
    try {
        int ret = reinterpret_cast<cv::Mat*>(instance)->checkVector(elemChannels, depth, requireContinuous);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Mat::ptr
// as:     cv::Mat::ptr (method) cv::Mat . ptr
// Arg ARG Primitive(int) i0= Primitive(int) = 0
// Return value: RawPtr[Primitive(uchar)]
cv_return_value_unsigned_char_X cv_Mat_ptr_int(void* instance, int i0) {
    try {
        uchar* ret = reinterpret_cast<cv::Mat*>(instance)->ptr(i0);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_unsigned_char_X)
}

// parsed: cv::Mat::ptr
// as:     cv::Mat::ptr (method) cv::Mat . ptr
// Arg ARG Primitive(int) i0= Primitive(int) = 0
// Return value: RawPtr[Primitive(uchar)]
cv_return_value_const_unsigned_char_X cv_Mat_ptr_const_int(void* instance, int i0) {
    try {
        const uchar* ret = reinterpret_cast<cv::Mat*>(instance)->ptr(i0);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_const_unsigned_char_X)
}

// parsed: cv::Mat::ptr
// as:     cv::Mat::ptr (method) cv::Mat . ptr
// Arg ARG Primitive(int) row= Primitive(int) = 
// Arg ARG Primitive(int) col= Primitive(int) = 
// Return value: RawPtr[Primitive(uchar)]
cv_return_value_unsigned_char_X cv_Mat_ptr_int_int(void* instance, int row, int col) {
    try {
        uchar* ret = reinterpret_cast<cv::Mat*>(instance)->ptr(row, col);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_unsigned_char_X)
}

// parsed: cv::Mat::ptr
// as:     cv::Mat::ptr (method) cv::Mat . ptr
// Arg ARG Primitive(int) row= Primitive(int) = 
// Arg ARG Primitive(int) col= Primitive(int) = 
// Return value: RawPtr[Primitive(uchar)]
cv_return_value_const_unsigned_char_X cv_Mat_ptr_const_int_int(void* instance, int row, int col) {
    try {
        const uchar* ret = reinterpret_cast<cv::Mat*>(instance)->ptr(row, col);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_const_unsigned_char_X)
}

// parsed: cv::Mat::ptr
// as:     cv::Mat::ptr (method) cv::Mat . ptr
// Arg ARG Primitive(int) i0= Primitive(int) = 
// Arg ARG Primitive(int) i1= Primitive(int) = 
// Arg ARG Primitive(int) i2= Primitive(int) = 
// Return value: RawPtr[Primitive(uchar)]
cv_return_value_unsigned_char_X cv_Mat_ptr_int_int_int(void* instance, int i0, int i1, int i2) {
    try {
        uchar* ret = reinterpret_cast<cv::Mat*>(instance)->ptr(i0, i1, i2);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_unsigned_char_X)
}

// parsed: cv::Mat::ptr
// as:     cv::Mat::ptr (method) cv::Mat . ptr
// Arg ARG Primitive(int) i0= Primitive(int) = 
// Arg ARG Primitive(int) i1= Primitive(int) = 
// Arg ARG Primitive(int) i2= Primitive(int) = 
// Return value: RawPtr[Primitive(uchar)]
cv_return_value_const_unsigned_char_X cv_Mat_ptr_const_int_int_int(void* instance, int i0, int i1, int i2) {
    try {
        const uchar* ret = reinterpret_cast<cv::Mat*>(instance)->ptr(i0, i1, i2);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_const_unsigned_char_X)
}

// parsed: cv::Mat::ptr
// as:     cv::Mat::ptr (method) cv::Mat . ptr
// Arg ARG RawPtr[Primitive(int)] * idx= (ptr) RawPtr[Primitive(int)] = 
// Return value: RawPtr[Primitive(uchar)]
cv_return_value_unsigned_char_X cv_Mat_ptr_const_int_X(void* instance, const int* idx) {
    try {
        uchar* ret = reinterpret_cast<cv::Mat*>(instance)->ptr(idx);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_unsigned_char_X)
}

// parsed: cv::Mat::ptr
// as:     cv::Mat::ptr (method) cv::Mat . ptr
// Arg ARG RawPtr[Primitive(int)] * idx= (ptr) RawPtr[Primitive(int)] = 
// Return value: RawPtr[Primitive(uchar)]
cv_return_value_const_unsigned_char_X cv_Mat_ptr_const_const_int_X(void* instance, const int* idx) {
    try {
        const uchar* ret = reinterpret_cast<cv::Mat*>(instance)->ptr(idx);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_const_unsigned_char_X)
}

// parsed: cv::Mat::updateContinuityFlag
// as:     cv::Mat::updateContinuityFlag (method) cv::Mat . updateContinuityFlag
// Return value: Primitive(void)
cv_return_value_void cv_Mat_updateContinuityFlag(void* instance) {
    try {
        reinterpret_cast<cv::Mat*>(instance)->updateContinuityFlag();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::MatConstIterator
void cv_MatConstIterator_delete(void* instance) {
    delete reinterpret_cast<cv::MatConstIterator*>(instance);
}
// parsed: cv::MatConstIterator::MatConstIterator
// as:     cv::MatConstIterator::MatConstIterator (constructor) cv::MatConstIterator . default
// Return value: cv::MatConstIterator (boxed)
cv_return_value_void_X cv_MatConstIterator_MatConstIterator() {
    try {
        cv::MatConstIterator* ret = new cv::MatConstIterator();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatConstIterator::MatConstIterator
// as:     cv::MatConstIterator::MatConstIterator (constructor) cv::MatConstIterator . new
// Arg ARG RawPtr[cv::Mat (boxed)] * _m= (ptr) RawPtr[cv::Mat (boxed)] = 
// Return value: cv::MatConstIterator (boxed)
cv_return_value_void_X cv_MatConstIterator_MatConstIterator_const_Mat(const void* _m) {
    try {
        cv::MatConstIterator* ret = new cv::MatConstIterator(reinterpret_cast<const cv::Mat*>(_m));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatConstIterator::MatConstIterator
// as:     cv::MatConstIterator::MatConstIterator (constructor) cv::MatConstIterator . new
// Arg ARG RawPtr[cv::Mat (boxed)] * _m= (ptr) RawPtr[cv::Mat (boxed)] = 
// Arg ARG Primitive(int) _row= Primitive(int) = 
// Arg ARG Primitive(int) _col= Primitive(int) = 0
// Return value: cv::MatConstIterator (boxed)
cv_return_value_void_X cv_MatConstIterator_MatConstIterator_const_Mat_int_int(const void* _m, int _row, int _col) {
    try {
        cv::MatConstIterator* ret = new cv::MatConstIterator(reinterpret_cast<const cv::Mat*>(_m), _row, _col);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatConstIterator::MatConstIterator
// as:     cv::MatConstIterator::MatConstIterator (constructor) cv::MatConstIterator . new
// Arg ARG RawPtr[cv::Mat (boxed)] * _m= (ptr) RawPtr[cv::Mat (boxed)] = 
// Arg ARG cv::Point (simple) _pt= cv::Point (simple) = 
// Return value: cv::MatConstIterator (boxed)
cv_return_value_void_X cv_MatConstIterator_MatConstIterator_const_Mat_Point(const void* _m, PointWrapper _pt) {
    try {
        cv::MatConstIterator* ret = new cv::MatConstIterator(reinterpret_cast<const cv::Mat*>(_m), *reinterpret_cast<cv::Point*>(&_pt));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatConstIterator::MatConstIterator
// as:     cv::MatConstIterator::MatConstIterator (constructor) cv::MatConstIterator . new
// Arg ARG RawPtr[cv::Mat (boxed)] * _m= (ptr) RawPtr[cv::Mat (boxed)] = 
// Arg ARG RawPtr[Primitive(int)] * _idx= (ptr) RawPtr[Primitive(int)] = 
// Return value: cv::MatConstIterator (boxed)
cv_return_value_void_X cv_MatConstIterator_MatConstIterator_const_Mat_const_int_X(const void* _m, const int* _idx) {
    try {
        cv::MatConstIterator* ret = new cv::MatConstIterator(reinterpret_cast<const cv::Mat*>(_m), _idx);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatConstIterator::MatConstIterator
// as:     cv::MatConstIterator::MatConstIterator (constructor) cv::MatConstIterator . copy
// Arg ARG cv::MatConstIterator (boxed) it= cv::MatConstIterator (boxed) = 
// Return value: cv::MatConstIterator (boxed)
cv_return_value_void_X cv_MatConstIterator_MatConstIterator_MatConstIterator(void* it) {
    try {
        cv::MatConstIterator* ret = new cv::MatConstIterator(*reinterpret_cast<const cv::MatConstIterator*>(it));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatConstIterator::pos
// as:     cv::MatConstIterator::pos (method) cv::MatConstIterator . pos
// Return value: cv::Point (simple)
cv_return_value_PointWrapper cv_MatConstIterator_pos_const(void* instance) {
    try {
        cv::Point ret = reinterpret_cast<cv::MatConstIterator*>(instance)->pos();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<PointWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_PointWrapper)
}

// parsed: cv::MatConstIterator::pos
// as:     cv::MatConstIterator::pos (method) cv::MatConstIterator . pos
// Arg ARG RawPtr[Primitive(int)] * _idx= (ptr) RawPtr[Primitive(int)] = 
// Return value: Primitive(void)
cv_return_value_void cv_MatConstIterator_pos_const_int_X(void* instance, int* _idx) {
    try {
        reinterpret_cast<cv::MatConstIterator*>(instance)->pos(_idx);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatConstIterator::lpos
// as:     cv::MatConstIterator::lpos (method) cv::MatConstIterator . lpos
// Return value: Primitive(ptrdiff_t)
cv_return_value_std_ptrdiff_t cv_MatConstIterator_lpos_const(void* instance) {
    try {
        ptrdiff_t ret = reinterpret_cast<cv::MatConstIterator*>(instance)->lpos();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_ptrdiff_t)
}

// parsed: cv::MatConstIterator::seek
// as:     cv::MatConstIterator::seek (method) cv::MatConstIterator . seek
// Arg ARG Primitive(ptrdiff_t) ofs= Primitive(ptrdiff_t) = 
// Arg ARG Primitive(bool) relative= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_MatConstIterator_seek_ptrdiff_t_bool(void* instance, std::ptrdiff_t ofs, bool relative) {
    try {
        reinterpret_cast<cv::MatConstIterator*>(instance)->seek(ofs, relative);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatConstIterator::seek
// as:     cv::MatConstIterator::seek (method) cv::MatConstIterator . seek
// Arg ARG RawPtr[Primitive(int)] * _idx= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG Primitive(bool) relative= Primitive(bool) = false
// Return value: Primitive(void)
cv_return_value_void cv_MatConstIterator_seek_const_int_X_bool(void* instance, const int* _idx, bool relative) {
    try {
        reinterpret_cast<cv::MatConstIterator*>(instance)->seek(_idx, relative);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::MatExpr
void cv_MatExpr_delete(void* instance) {
    delete reinterpret_cast<cv::MatExpr*>(instance);
}
// parsed: cv::MatExpr::MatExpr
// as:     cv::MatExpr::MatExpr (constructor) cv::MatExpr . default
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_MatExpr_MatExpr() {
    try {
        cv::MatExpr* ret = new cv::MatExpr();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatExpr::MatExpr
// as:     cv::MatExpr::MatExpr (constructor) cv::MatExpr . new
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_MatExpr_MatExpr_Mat(void* m) {
    try {
        cv::MatExpr* ret = new cv::MatExpr(*reinterpret_cast<const cv::Mat*>(m));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatExpr::MatExpr
// as:     cv::MatExpr::MatExpr (constructor) cv::MatExpr . new
// Arg ARG RawPtr[cv::MatOp (boxed)] * _op= (ptr) RawPtr[cv::MatOp (boxed)] = 
// Arg ARG Primitive(int) _flags= Primitive(int) = 
// Arg ARG cv::Mat (boxed) _a= cv::Mat (boxed) = Mat()
// Arg ARG cv::Mat (boxed) _b= cv::Mat (boxed) = Mat()
// Arg ARG cv::Mat (boxed) _c= cv::Mat (boxed) = Mat()
// Arg ARG Primitive(double) _alpha= Primitive(double) = 1
// Arg ARG Primitive(double) _beta= Primitive(double) = 1
// Arg ARG cv::Scalar (simple) _s= cv::Scalar (simple) = Scalar()
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_MatExpr_MatExpr_const_MatOp_int_Mat_Mat_Mat_double_double_Scalar(const void* _op, int _flags, void* _a, void* _b, void* _c, double _alpha, double _beta, ScalarWrapper _s) {
    try {
        cv::MatExpr* ret = new cv::MatExpr(reinterpret_cast<const cv::MatOp*>(_op), _flags, *reinterpret_cast<const cv::Mat*>(_a), *reinterpret_cast<const cv::Mat*>(_b), *reinterpret_cast<const cv::Mat*>(_c), _alpha, _beta, *reinterpret_cast<const cv::Scalar*>(&_s));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatExpr::operator Mat
// as:     cv::MatExpr::operator Mat (convertor method) cv::MatExpr . operator Mat
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_MatExpr_operator_Mat_const(void* instance) {
    try {
        cv::Mat ret = reinterpret_cast<cv::MatExpr*>(instance)->operator Mat();
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatExpr::size
// as:     cv::MatExpr::size (method) cv::MatExpr . size
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_MatExpr_size_const(void* instance) {
    try {
        cv::Size ret = reinterpret_cast<cv::MatExpr*>(instance)->size();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::MatExpr::type
// as:     cv::MatExpr::type (method) cv::MatExpr . type
// Return value: Primitive(int)
cv_return_value_int cv_MatExpr_type_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::MatExpr*>(instance)->type();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::MatExpr::row
// as:     cv::MatExpr::row (method) cv::MatExpr . row
// Arg ARG Primitive(int) y= Primitive(int) = 
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_MatExpr_row_const_int(void* instance, int y) {
    try {
        cv::MatExpr ret = reinterpret_cast<cv::MatExpr*>(instance)->row(y);
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatExpr::col
// as:     cv::MatExpr::col (method) cv::MatExpr . col
// Arg ARG Primitive(int) x= Primitive(int) = 
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_MatExpr_col_const_int(void* instance, int x) {
    try {
        cv::MatExpr ret = reinterpret_cast<cv::MatExpr*>(instance)->col(x);
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatExpr::diag
// as:     cv::MatExpr::diag (method) cv::MatExpr . diag
// Arg ARG Primitive(int) d= Primitive(int) = 0
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_MatExpr_diag_const_int(void* instance, int d) {
    try {
        cv::MatExpr ret = reinterpret_cast<cv::MatExpr*>(instance)->diag(d);
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatExpr::t
// as:     cv::MatExpr::t (method) cv::MatExpr . t
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_MatExpr_t_const(void* instance) {
    try {
        cv::MatExpr ret = reinterpret_cast<cv::MatExpr*>(instance)->t();
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatExpr::inv
// as:     cv::MatExpr::inv (method) cv::MatExpr . inv
// Arg ARG Primitive(int) method= Primitive(int) = DECOMP_LU
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_MatExpr_inv_const_int(void* instance, int method) {
    try {
        cv::MatExpr ret = reinterpret_cast<cv::MatExpr*>(instance)->inv(method);
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatExpr::mul
// as:     cv::MatExpr::mul (method) cv::MatExpr . mul
// Arg ARG cv::MatExpr (boxed) e= cv::MatExpr (boxed) = 
// Arg ARG Primitive(double) scale= Primitive(double) = 1
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_MatExpr_mul_const_MatExpr_double(void* instance, void* e, double scale) {
    try {
        cv::MatExpr ret = reinterpret_cast<cv::MatExpr*>(instance)->mul(*reinterpret_cast<const cv::MatExpr*>(e), scale);
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatExpr::mul
// as:     cv::MatExpr::mul (method) cv::MatExpr . mul
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Arg ARG Primitive(double) scale= Primitive(double) = 1
// Return value: cv::MatExpr (boxed)
cv_return_value_void_X cv_MatExpr_mul_const_Mat_double(void* instance, void* m, double scale) {
    try {
        cv::MatExpr ret = reinterpret_cast<cv::MatExpr*>(instance)->mul(*reinterpret_cast<const cv::Mat*>(m), scale);
        return { Error::Code::StsOk, NULL, new cv::MatExpr(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatExpr::cross
// as:     cv::MatExpr::cross (method) cv::MatExpr . cross
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_MatExpr_cross_const_Mat(void* instance, void* m) {
    try {
        cv::Mat ret = reinterpret_cast<cv::MatExpr*>(instance)->cross(*reinterpret_cast<const cv::Mat*>(m));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatExpr::dot
// as:     cv::MatExpr::dot (method) cv::MatExpr . dot
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: Primitive(double)
cv_return_value_double cv_MatExpr_dot_const_Mat(void* instance, void* m) {
    try {
        double ret = reinterpret_cast<cv::MatExpr*>(instance)->dot(*reinterpret_cast<const cv::Mat*>(m));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::MatOp::elementWise
// as:     cv::MatOp::elementWise (method) cv::MatOp (trait) . elementWise
// Arg ARG cv::MatExpr (boxed) expr= cv::MatExpr (boxed) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_MatOp_elementWise_const_MatExpr(void* instance, void* expr) {
    try {
        bool ret = reinterpret_cast<cv::MatOp*>(instance)->elementWise(*reinterpret_cast<const cv::MatExpr*>(expr));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::MatOp::assign
// as:     cv::MatOp::assign (method) cv::MatOp (trait) . assign
// Arg ARG cv::MatExpr (boxed) expr= cv::MatExpr (boxed) = 
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Arg ARG Primitive(int) type= Primitive(int) = -1
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_assign_const_MatExpr_Mat_int(void* instance, void* expr, void* m, int type) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->assign(*reinterpret_cast<const cv::MatExpr*>(expr), *reinterpret_cast<cv::Mat*>(m), type);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::roi
// as:     cv::MatOp::roi (method) cv::MatOp (trait) . roi
// Arg ARG cv::MatExpr (boxed) expr= cv::MatExpr (boxed) = 
// Arg ARG cv::Range (boxed) rowRange= cv::Range (boxed) = 
// Arg ARG cv::Range (boxed) colRange= cv::Range (boxed) = 
// Arg ARG cv::MatExpr (boxed) res= cv::MatExpr (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_roi_const_MatExpr_Range_Range_MatExpr(void* instance, void* expr, void* rowRange, void* colRange, void* res) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->roi(*reinterpret_cast<const cv::MatExpr*>(expr), *reinterpret_cast<const cv::Range*>(rowRange), *reinterpret_cast<const cv::Range*>(colRange), *reinterpret_cast<cv::MatExpr*>(res));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::diag
// as:     cv::MatOp::diag (method) cv::MatOp (trait) . diag
// Arg ARG cv::MatExpr (boxed) expr= cv::MatExpr (boxed) = 
// Arg ARG Primitive(int) d= Primitive(int) = 
// Arg ARG cv::MatExpr (boxed) res= cv::MatExpr (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_diag_const_MatExpr_int_MatExpr(void* instance, void* expr, int d, void* res) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->diag(*reinterpret_cast<const cv::MatExpr*>(expr), d, *reinterpret_cast<cv::MatExpr*>(res));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::augAssignAdd
// as:     cv::MatOp::augAssignAdd (method) cv::MatOp (trait) . augAssignAdd
// Arg ARG cv::MatExpr (boxed) expr= cv::MatExpr (boxed) = 
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_augAssignAdd_const_MatExpr_Mat(void* instance, void* expr, void* m) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->augAssignAdd(*reinterpret_cast<const cv::MatExpr*>(expr), *reinterpret_cast<cv::Mat*>(m));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::augAssignSubtract
// as:     cv::MatOp::augAssignSubtract (method) cv::MatOp (trait) . augAssignSubtract
// Arg ARG cv::MatExpr (boxed) expr= cv::MatExpr (boxed) = 
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_augAssignSubtract_const_MatExpr_Mat(void* instance, void* expr, void* m) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->augAssignSubtract(*reinterpret_cast<const cv::MatExpr*>(expr), *reinterpret_cast<cv::Mat*>(m));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::augAssignMultiply
// as:     cv::MatOp::augAssignMultiply (method) cv::MatOp (trait) . augAssignMultiply
// Arg ARG cv::MatExpr (boxed) expr= cv::MatExpr (boxed) = 
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_augAssignMultiply_const_MatExpr_Mat(void* instance, void* expr, void* m) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->augAssignMultiply(*reinterpret_cast<const cv::MatExpr*>(expr), *reinterpret_cast<cv::Mat*>(m));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::augAssignDivide
// as:     cv::MatOp::augAssignDivide (method) cv::MatOp (trait) . augAssignDivide
// Arg ARG cv::MatExpr (boxed) expr= cv::MatExpr (boxed) = 
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_augAssignDivide_const_MatExpr_Mat(void* instance, void* expr, void* m) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->augAssignDivide(*reinterpret_cast<const cv::MatExpr*>(expr), *reinterpret_cast<cv::Mat*>(m));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::augAssignAnd
// as:     cv::MatOp::augAssignAnd (method) cv::MatOp (trait) . augAssignAnd
// Arg ARG cv::MatExpr (boxed) expr= cv::MatExpr (boxed) = 
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_augAssignAnd_const_MatExpr_Mat(void* instance, void* expr, void* m) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->augAssignAnd(*reinterpret_cast<const cv::MatExpr*>(expr), *reinterpret_cast<cv::Mat*>(m));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::augAssignOr
// as:     cv::MatOp::augAssignOr (method) cv::MatOp (trait) . augAssignOr
// Arg ARG cv::MatExpr (boxed) expr= cv::MatExpr (boxed) = 
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_augAssignOr_const_MatExpr_Mat(void* instance, void* expr, void* m) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->augAssignOr(*reinterpret_cast<const cv::MatExpr*>(expr), *reinterpret_cast<cv::Mat*>(m));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::augAssignXor
// as:     cv::MatOp::augAssignXor (method) cv::MatOp (trait) . augAssignXor
// Arg ARG cv::MatExpr (boxed) expr= cv::MatExpr (boxed) = 
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_augAssignXor_const_MatExpr_Mat(void* instance, void* expr, void* m) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->augAssignXor(*reinterpret_cast<const cv::MatExpr*>(expr), *reinterpret_cast<cv::Mat*>(m));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::add
// as:     cv::MatOp::add (method) cv::MatOp (trait) . add
// Arg ARG cv::MatExpr (boxed) expr1= cv::MatExpr (boxed) = 
// Arg ARG cv::MatExpr (boxed) expr2= cv::MatExpr (boxed) = 
// Arg ARG cv::MatExpr (boxed) res= cv::MatExpr (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_add_const_MatExpr_MatExpr_MatExpr(void* instance, void* expr1, void* expr2, void* res) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->add(*reinterpret_cast<const cv::MatExpr*>(expr1), *reinterpret_cast<const cv::MatExpr*>(expr2), *reinterpret_cast<cv::MatExpr*>(res));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::add
// as:     cv::MatOp::add (method) cv::MatOp (trait) . add
// Arg ARG cv::MatExpr (boxed) expr1= cv::MatExpr (boxed) = 
// Arg ARG cv::Scalar (simple) s= cv::Scalar (simple) = 
// Arg ARG cv::MatExpr (boxed) res= cv::MatExpr (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_add_const_MatExpr_Scalar_MatExpr(void* instance, void* expr1, ScalarWrapper s, void* res) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->add(*reinterpret_cast<const cv::MatExpr*>(expr1), *reinterpret_cast<const cv::Scalar*>(&s), *reinterpret_cast<cv::MatExpr*>(res));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::subtract
// as:     cv::MatOp::subtract (method) cv::MatOp (trait) . subtract
// Arg ARG cv::MatExpr (boxed) expr1= cv::MatExpr (boxed) = 
// Arg ARG cv::MatExpr (boxed) expr2= cv::MatExpr (boxed) = 
// Arg ARG cv::MatExpr (boxed) res= cv::MatExpr (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_subtract_const_MatExpr_MatExpr_MatExpr(void* instance, void* expr1, void* expr2, void* res) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->subtract(*reinterpret_cast<const cv::MatExpr*>(expr1), *reinterpret_cast<const cv::MatExpr*>(expr2), *reinterpret_cast<cv::MatExpr*>(res));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::subtract
// as:     cv::MatOp::subtract (method) cv::MatOp (trait) . subtract
// Arg ARG cv::Scalar (simple) s= cv::Scalar (simple) = 
// Arg ARG cv::MatExpr (boxed) expr= cv::MatExpr (boxed) = 
// Arg ARG cv::MatExpr (boxed) res= cv::MatExpr (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_subtract_const_Scalar_MatExpr_MatExpr(void* instance, ScalarWrapper s, void* expr, void* res) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->subtract(*reinterpret_cast<const cv::Scalar*>(&s), *reinterpret_cast<const cv::MatExpr*>(expr), *reinterpret_cast<cv::MatExpr*>(res));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::multiply
// as:     cv::MatOp::multiply (method) cv::MatOp (trait) . multiply
// Arg ARG cv::MatExpr (boxed) expr1= cv::MatExpr (boxed) = 
// Arg ARG cv::MatExpr (boxed) expr2= cv::MatExpr (boxed) = 
// Arg ARG cv::MatExpr (boxed) res= cv::MatExpr (boxed) = 
// Arg ARG Primitive(double) scale= Primitive(double) = 1
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_multiply_const_MatExpr_MatExpr_MatExpr_double(void* instance, void* expr1, void* expr2, void* res, double scale) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->multiply(*reinterpret_cast<const cv::MatExpr*>(expr1), *reinterpret_cast<const cv::MatExpr*>(expr2), *reinterpret_cast<cv::MatExpr*>(res), scale);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::multiply
// as:     cv::MatOp::multiply (method) cv::MatOp (trait) . multiply
// Arg ARG cv::MatExpr (boxed) expr1= cv::MatExpr (boxed) = 
// Arg ARG Primitive(double) s= Primitive(double) = 
// Arg ARG cv::MatExpr (boxed) res= cv::MatExpr (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_multiply_const_MatExpr_double_MatExpr(void* instance, void* expr1, double s, void* res) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->multiply(*reinterpret_cast<const cv::MatExpr*>(expr1), s, *reinterpret_cast<cv::MatExpr*>(res));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::divide
// as:     cv::MatOp::divide (method) cv::MatOp (trait) . divide
// Arg ARG cv::MatExpr (boxed) expr1= cv::MatExpr (boxed) = 
// Arg ARG cv::MatExpr (boxed) expr2= cv::MatExpr (boxed) = 
// Arg ARG cv::MatExpr (boxed) res= cv::MatExpr (boxed) = 
// Arg ARG Primitive(double) scale= Primitive(double) = 1
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_divide_const_MatExpr_MatExpr_MatExpr_double(void* instance, void* expr1, void* expr2, void* res, double scale) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->divide(*reinterpret_cast<const cv::MatExpr*>(expr1), *reinterpret_cast<const cv::MatExpr*>(expr2), *reinterpret_cast<cv::MatExpr*>(res), scale);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::divide
// as:     cv::MatOp::divide (method) cv::MatOp (trait) . divide
// Arg ARG Primitive(double) s= Primitive(double) = 
// Arg ARG cv::MatExpr (boxed) expr= cv::MatExpr (boxed) = 
// Arg ARG cv::MatExpr (boxed) res= cv::MatExpr (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_divide_const_double_MatExpr_MatExpr(void* instance, double s, void* expr, void* res) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->divide(s, *reinterpret_cast<const cv::MatExpr*>(expr), *reinterpret_cast<cv::MatExpr*>(res));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::abs
// as:     cv::MatOp::abs (method) cv::MatOp (trait) . abs
// Arg ARG cv::MatExpr (boxed) expr= cv::MatExpr (boxed) = 
// Arg ARG cv::MatExpr (boxed) res= cv::MatExpr (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_abs_const_MatExpr_MatExpr(void* instance, void* expr, void* res) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->abs(*reinterpret_cast<const cv::MatExpr*>(expr), *reinterpret_cast<cv::MatExpr*>(res));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::transpose
// as:     cv::MatOp::transpose (method) cv::MatOp (trait) . transpose
// Arg ARG cv::MatExpr (boxed) expr= cv::MatExpr (boxed) = 
// Arg ARG cv::MatExpr (boxed) res= cv::MatExpr (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_transpose_const_MatExpr_MatExpr(void* instance, void* expr, void* res) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->transpose(*reinterpret_cast<const cv::MatExpr*>(expr), *reinterpret_cast<cv::MatExpr*>(res));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::matmul
// as:     cv::MatOp::matmul (method) cv::MatOp (trait) . matmul
// Arg ARG cv::MatExpr (boxed) expr1= cv::MatExpr (boxed) = 
// Arg ARG cv::MatExpr (boxed) expr2= cv::MatExpr (boxed) = 
// Arg ARG cv::MatExpr (boxed) res= cv::MatExpr (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_matmul_const_MatExpr_MatExpr_MatExpr(void* instance, void* expr1, void* expr2, void* res) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->matmul(*reinterpret_cast<const cv::MatExpr*>(expr1), *reinterpret_cast<const cv::MatExpr*>(expr2), *reinterpret_cast<cv::MatExpr*>(res));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::invert
// as:     cv::MatOp::invert (method) cv::MatOp (trait) . invert
// Arg ARG cv::MatExpr (boxed) expr= cv::MatExpr (boxed) = 
// Arg ARG Primitive(int) method= Primitive(int) = 
// Arg ARG cv::MatExpr (boxed) res= cv::MatExpr (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MatOp_invert_const_MatExpr_int_MatExpr(void* instance, void* expr, int method, void* res) {
    try {
        reinterpret_cast<cv::MatOp*>(instance)->invert(*reinterpret_cast<const cv::MatExpr*>(expr), method, *reinterpret_cast<cv::MatExpr*>(res));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MatOp::size
// as:     cv::MatOp::size (method) cv::MatOp (trait) . size
// Arg ARG cv::MatExpr (boxed) expr= cv::MatExpr (boxed) = 
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv_MatOp_size_const_MatExpr(void* instance, void* expr) {
    try {
        cv::Size ret = reinterpret_cast<cv::MatOp*>(instance)->size(*reinterpret_cast<const cv::MatExpr*>(expr));
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::MatOp::type
// as:     cv::MatOp::type (method) cv::MatOp (trait) . type
// Arg ARG cv::MatExpr (boxed) expr= cv::MatExpr (boxed) = 
// Return value: Primitive(int)
cv_return_value_int cv_MatOp_type_const_MatExpr(void* instance, void* expr) {
    try {
        int ret = reinterpret_cast<cv::MatOp*>(instance)->type(*reinterpret_cast<const cv::MatExpr*>(expr));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// boxed class: cv::MatSize
void cv_MatSize_delete(void* instance) {
    delete reinterpret_cast<cv::MatSize*>(instance);
}
// parsed: cv::MatSize::MatSize
// as:     cv::MatSize::MatSize (constructor) cv::MatSize . new
// Arg ARG RawPtr[Primitive(int)] * _p= (ptr) RawPtr[Primitive(int)] = 
// Return value: cv::MatSize (boxed)
cv_return_value_void_X cv_MatSize_MatSize_int_X(int* _p) {
    try {
        cv::MatSize* ret = new cv::MatSize(_p);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatSize::dims
// as:     cv::MatSize::dims (method) cv::MatSize . dims
// Return value: Primitive(int)
cv_return_value_int cv_MatSize_dims_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::MatSize*>(instance)->dims();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// boxed class: cv::MatStep
void cv_MatStep_delete(void* instance) {
    delete reinterpret_cast<cv::MatStep*>(instance);
}
// parsed: cv::MatStep::MatStep
// as:     cv::MatStep::MatStep (constructor) cv::MatStep . default
// Return value: cv::MatStep (boxed)
cv_return_value_void_X cv_MatStep_MatStep() {
    try {
        cv::MatStep* ret = new cv::MatStep();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatStep::MatStep
// as:     cv::MatStep::MatStep (constructor) cv::MatStep . new
// Arg ARG Primitive(size_t) s= Primitive(size_t) = 
// Return value: cv::MatStep (boxed)
cv_return_value_void_X cv_MatStep_MatStep_size_t(std::size_t s) {
    try {
        cv::MatStep* ret = new cv::MatStep(s);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MatStep::operator size_t
// as:     cv::MatStep::operator size_t (convertor method) cv::MatStep . operator size_t
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_MatStep_operator_size_t_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::MatStep*>(instance)->operator size_t();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// boxed class: cv::Matx_AddOp
void cv_Matx_AddOp_delete(void* instance) {
    delete reinterpret_cast<cv::Matx_AddOp*>(instance);
}
// parsed: cv::Matx_AddOp::Matx_AddOp
// as:     cv::Matx_AddOp::Matx_AddOp (constructor) cv::Matx_AddOp . default
// Return value: cv::Matx_AddOp (boxed)
cv_return_value_void_X cv_Matx_AddOp_Matx_AddOp() {
    try {
        cv::Matx_AddOp* ret = new cv::Matx_AddOp();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Matx_AddOp::Matx_AddOp
// as:     cv::Matx_AddOp::Matx_AddOp (constructor) cv::Matx_AddOp . copy
// Arg ARG cv::Matx_AddOp (boxed) unnamed_arg= cv::Matx_AddOp (boxed) = 
// Return value: cv::Matx_AddOp (boxed)
cv_return_value_void_X cv_Matx_AddOp_Matx_AddOp_Matx_AddOp(void* unnamed_arg) {
    try {
        cv::Matx_AddOp* ret = new cv::Matx_AddOp(*reinterpret_cast<const cv::Matx_AddOp*>(unnamed_arg));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::Matx_DivOp
void cv_Matx_DivOp_delete(void* instance) {
    delete reinterpret_cast<cv::Matx_DivOp*>(instance);
}
// parsed: cv::Matx_DivOp::Matx_DivOp
// as:     cv::Matx_DivOp::Matx_DivOp (constructor) cv::Matx_DivOp . default
// Return value: cv::Matx_DivOp (boxed)
cv_return_value_void_X cv_Matx_DivOp_Matx_DivOp() {
    try {
        cv::Matx_DivOp* ret = new cv::Matx_DivOp();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Matx_DivOp::Matx_DivOp
// as:     cv::Matx_DivOp::Matx_DivOp (constructor) cv::Matx_DivOp . copy
// Arg ARG cv::Matx_DivOp (boxed) unnamed_arg= cv::Matx_DivOp (boxed) = 
// Return value: cv::Matx_DivOp (boxed)
cv_return_value_void_X cv_Matx_DivOp_Matx_DivOp_Matx_DivOp(void* unnamed_arg) {
    try {
        cv::Matx_DivOp* ret = new cv::Matx_DivOp(*reinterpret_cast<const cv::Matx_DivOp*>(unnamed_arg));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::Matx_MatMulOp
void cv_Matx_MatMulOp_delete(void* instance) {
    delete reinterpret_cast<cv::Matx_MatMulOp*>(instance);
}
// parsed: cv::Matx_MatMulOp::Matx_MatMulOp
// as:     cv::Matx_MatMulOp::Matx_MatMulOp (constructor) cv::Matx_MatMulOp . default
// Return value: cv::Matx_MatMulOp (boxed)
cv_return_value_void_X cv_Matx_MatMulOp_Matx_MatMulOp() {
    try {
        cv::Matx_MatMulOp* ret = new cv::Matx_MatMulOp();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Matx_MatMulOp::Matx_MatMulOp
// as:     cv::Matx_MatMulOp::Matx_MatMulOp (constructor) cv::Matx_MatMulOp . copy
// Arg ARG cv::Matx_MatMulOp (boxed) unnamed_arg= cv::Matx_MatMulOp (boxed) = 
// Return value: cv::Matx_MatMulOp (boxed)
cv_return_value_void_X cv_Matx_MatMulOp_Matx_MatMulOp_Matx_MatMulOp(void* unnamed_arg) {
    try {
        cv::Matx_MatMulOp* ret = new cv::Matx_MatMulOp(*reinterpret_cast<const cv::Matx_MatMulOp*>(unnamed_arg));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::Matx_MulOp
void cv_Matx_MulOp_delete(void* instance) {
    delete reinterpret_cast<cv::Matx_MulOp*>(instance);
}
// parsed: cv::Matx_MulOp::Matx_MulOp
// as:     cv::Matx_MulOp::Matx_MulOp (constructor) cv::Matx_MulOp . default
// Return value: cv::Matx_MulOp (boxed)
cv_return_value_void_X cv_Matx_MulOp_Matx_MulOp() {
    try {
        cv::Matx_MulOp* ret = new cv::Matx_MulOp();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Matx_MulOp::Matx_MulOp
// as:     cv::Matx_MulOp::Matx_MulOp (constructor) cv::Matx_MulOp . copy
// Arg ARG cv::Matx_MulOp (boxed) unnamed_arg= cv::Matx_MulOp (boxed) = 
// Return value: cv::Matx_MulOp (boxed)
cv_return_value_void_X cv_Matx_MulOp_Matx_MulOp_Matx_MulOp(void* unnamed_arg) {
    try {
        cv::Matx_MulOp* ret = new cv::Matx_MulOp(*reinterpret_cast<const cv::Matx_MulOp*>(unnamed_arg));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::Matx_ScaleOp
void cv_Matx_ScaleOp_delete(void* instance) {
    delete reinterpret_cast<cv::Matx_ScaleOp*>(instance);
}
// parsed: cv::Matx_ScaleOp::Matx_ScaleOp
// as:     cv::Matx_ScaleOp::Matx_ScaleOp (constructor) cv::Matx_ScaleOp . default
// Return value: cv::Matx_ScaleOp (boxed)
cv_return_value_void_X cv_Matx_ScaleOp_Matx_ScaleOp() {
    try {
        cv::Matx_ScaleOp* ret = new cv::Matx_ScaleOp();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Matx_ScaleOp::Matx_ScaleOp
// as:     cv::Matx_ScaleOp::Matx_ScaleOp (constructor) cv::Matx_ScaleOp . copy
// Arg ARG cv::Matx_ScaleOp (boxed) unnamed_arg= cv::Matx_ScaleOp (boxed) = 
// Return value: cv::Matx_ScaleOp (boxed)
cv_return_value_void_X cv_Matx_ScaleOp_Matx_ScaleOp_Matx_ScaleOp(void* unnamed_arg) {
    try {
        cv::Matx_ScaleOp* ret = new cv::Matx_ScaleOp(*reinterpret_cast<const cv::Matx_ScaleOp*>(unnamed_arg));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::Matx_SubOp
void cv_Matx_SubOp_delete(void* instance) {
    delete reinterpret_cast<cv::Matx_SubOp*>(instance);
}
// parsed: cv::Matx_SubOp::Matx_SubOp
// as:     cv::Matx_SubOp::Matx_SubOp (constructor) cv::Matx_SubOp . default
// Return value: cv::Matx_SubOp (boxed)
cv_return_value_void_X cv_Matx_SubOp_Matx_SubOp() {
    try {
        cv::Matx_SubOp* ret = new cv::Matx_SubOp();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Matx_SubOp::Matx_SubOp
// as:     cv::Matx_SubOp::Matx_SubOp (constructor) cv::Matx_SubOp . copy
// Arg ARG cv::Matx_SubOp (boxed) unnamed_arg= cv::Matx_SubOp (boxed) = 
// Return value: cv::Matx_SubOp (boxed)
cv_return_value_void_X cv_Matx_SubOp_Matx_SubOp_Matx_SubOp(void* unnamed_arg) {
    try {
        cv::Matx_SubOp* ret = new cv::Matx_SubOp(*reinterpret_cast<const cv::Matx_SubOp*>(unnamed_arg));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::Matx_TOp
void cv_Matx_TOp_delete(void* instance) {
    delete reinterpret_cast<cv::Matx_TOp*>(instance);
}
// parsed: cv::Matx_TOp::Matx_TOp
// as:     cv::Matx_TOp::Matx_TOp (constructor) cv::Matx_TOp . default
// Return value: cv::Matx_TOp (boxed)
cv_return_value_void_X cv_Matx_TOp_Matx_TOp() {
    try {
        cv::Matx_TOp* ret = new cv::Matx_TOp();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Matx_TOp::Matx_TOp
// as:     cv::Matx_TOp::Matx_TOp (constructor) cv::Matx_TOp . copy
// Arg ARG cv::Matx_TOp (boxed) unnamed_arg= cv::Matx_TOp (boxed) = 
// Return value: cv::Matx_TOp (boxed)
cv_return_value_void_X cv_Matx_TOp_Matx_TOp_Matx_TOp(void* unnamed_arg) {
    try {
        cv::Matx_TOp* ret = new cv::Matx_TOp(*reinterpret_cast<const cv::Matx_TOp*>(unnamed_arg));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MinProblemSolver::getFunction
// as:     cv::MinProblemSolver::getFunction (method) cv::MinProblemSolver (trait) . getFunction
// Return value: SmartPtr[cv::MinProblemSolver::Function (boxed)]
cv_return_value_void_X cv_MinProblemSolver_getFunction_const(void* instance) {
    try {
        Ptr<cv::MinProblemSolver::Function> ret = reinterpret_cast<cv::MinProblemSolver*>(instance)->getFunction();
        return { Error::Code::StsOk, NULL, new Ptr<cv::MinProblemSolver::Function>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MinProblemSolver::setFunction
// as:     cv::MinProblemSolver::setFunction (method) cv::MinProblemSolver (trait) . setFunction
// Arg ARG SmartPtr[cv::MinProblemSolver::Function (boxed)] f= SmartPtr[cv::MinProblemSolver::Function (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv_MinProblemSolver_setFunction_PtrOfFunction(void* instance, void* f) {
    try {
        reinterpret_cast<cv::MinProblemSolver*>(instance)->setFunction(*reinterpret_cast<const Ptr<cv::MinProblemSolver::Function>*>(f));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MinProblemSolver::getTermCriteria
// as:     cv::MinProblemSolver::getTermCriteria (method) cv::MinProblemSolver (trait) . getTermCriteria
// Return value: cv::TermCriteria (boxed)
cv_return_value_void_X cv_MinProblemSolver_getTermCriteria_const(void* instance) {
    try {
        cv::TermCriteria ret = reinterpret_cast<cv::MinProblemSolver*>(instance)->getTermCriteria();
        return { Error::Code::StsOk, NULL, new cv::TermCriteria(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::MinProblemSolver::setTermCriteria
// as:     cv::MinProblemSolver::setTermCriteria (method) cv::MinProblemSolver (trait) . setTermCriteria
// Arg ARG cv::TermCriteria (boxed) termcrit= cv::TermCriteria (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_MinProblemSolver_setTermCriteria_TermCriteria(void* instance, void* termcrit) {
    try {
        reinterpret_cast<cv::MinProblemSolver*>(instance)->setTermCriteria(*reinterpret_cast<const cv::TermCriteria*>(termcrit));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::MinProblemSolver::minimize
// as:     cv::MinProblemSolver::minimize (method) cv::MinProblemSolver (trait) . minimize
// Arg ARG cv::_InputOutputArray (boxed) x= cv::_InputOutputArray (boxed) = 
// Return value: Primitive(double)
cv_return_value_double cv_MinProblemSolver_minimize__InputOutputArray(void* instance, void* x) {
    try {
        double ret = reinterpret_cast<cv::MinProblemSolver*>(instance)->minimize(*reinterpret_cast<cv::_InputOutputArray*>(x));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::MinProblemSolver::Function::getDims
// as:     cv::MinProblemSolver::Function::getDims (method) cv::MinProblemSolver::Function (trait) . getDims
// Return value: Primitive(int)
cv_return_value_int cv_MinProblemSolver_Function_getDims_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::MinProblemSolver::Function*>(instance)->getDims();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::MinProblemSolver::Function::getGradientEps
// as:     cv::MinProblemSolver::Function::getGradientEps (method) cv::MinProblemSolver::Function (trait) . getGradientEps
// Return value: Primitive(double)
cv_return_value_double cv_MinProblemSolver_Function_getGradientEps_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::MinProblemSolver::Function*>(instance)->getGradientEps();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::MinProblemSolver::Function::calc
// as:     cv::MinProblemSolver::Function::calc (method) cv::MinProblemSolver::Function (trait) . calc
// Arg ARG RawPtr[Primitive(double)] * x= (ptr) RawPtr[Primitive(double)] = 
// Return value: Primitive(double)
cv_return_value_double cv_MinProblemSolver_Function_calc_const_const_double_X(void* instance, const double* x) {
    try {
        double ret = reinterpret_cast<cv::MinProblemSolver::Function*>(instance)->calc(x);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::MinProblemSolver::Function::getGradient
// as:     cv::MinProblemSolver::Function::getGradient (method) cv::MinProblemSolver::Function (trait) . getGradient
// Arg ARG RawPtr[Primitive(double)] * x= (ptr) RawPtr[Primitive(double)] = 
// Arg ARG RawPtr[Primitive(double)] * grad= (ptr) RawPtr[Primitive(double)] = 
// Return value: Primitive(void)
cv_return_value_void cv_MinProblemSolver_Function_getGradient_const_double_X_double_X(void* instance, const double* x, double* grad) {
    try {
        reinterpret_cast<cv::MinProblemSolver::Function*>(instance)->getGradient(x, grad);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::Moments::Moments
// as:     cv::Moments::Moments (constructor) cv::Moments (simple) . default
// Return value: cv::Moments (simple)
cv_return_value_Moments cv_Moments_Moments() {
    try {
        cv::Moments ret;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_Moments)
}

// parsed: cv::Moments::Moments
// as:     cv::Moments::Moments (constructor) cv::Moments (simple) . new
// Arg ARG Primitive(double) m00= Primitive(double) = 
// Arg ARG Primitive(double) m10= Primitive(double) = 
// Arg ARG Primitive(double) m01= Primitive(double) = 
// Arg ARG Primitive(double) m20= Primitive(double) = 
// Arg ARG Primitive(double) m11= Primitive(double) = 
// Arg ARG Primitive(double) m02= Primitive(double) = 
// Arg ARG Primitive(double) m30= Primitive(double) = 
// Arg ARG Primitive(double) m21= Primitive(double) = 
// Arg ARG Primitive(double) m12= Primitive(double) = 
// Arg ARG Primitive(double) m03= Primitive(double) = 
// Return value: cv::Moments (simple)
cv_return_value_Moments cv_Moments_Moments_double_double_double_double_double_double_double_double_double_double(double m00, double m10, double m01, double m20, double m11, double m02, double m30, double m21, double m12, double m03) {
    try {
        cv::Moments ret(m00, m10, m01, m20, m11, m02, m30, m21, m12, m03);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_Moments)
}

// boxed class: cv::NAryMatIterator
void cv_NAryMatIterator_delete(void* instance) {
    delete reinterpret_cast<cv::NAryMatIterator*>(instance);
}
// parsed: cv::NAryMatIterator::NAryMatIterator
// as:     cv::NAryMatIterator::NAryMatIterator (constructor) cv::NAryMatIterator . default
// Return value: cv::NAryMatIterator (boxed)
cv_return_value_void_X cv_NAryMatIterator_NAryMatIterator() {
    try {
        cv::NAryMatIterator* ret = new cv::NAryMatIterator();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::PCA
void cv_PCA_delete(void* instance) {
    delete reinterpret_cast<cv::PCA*>(instance);
}
// parsed: cv::PCA::PCA
// as:     cv::PCA::PCA (constructor) cv::PCA . default
// Return value: cv::PCA (boxed)
cv_return_value_void_X cv_PCA_PCA() {
    try {
        cv::PCA* ret = new cv::PCA();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::PCA::PCA
// as:     cv::PCA::PCA (constructor) cv::PCA . new
// Arg ARG cv::_InputArray (boxed) data= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mean= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG Primitive(int) maxComponents= Primitive(int) = 0
// Return value: cv::PCA (boxed)
cv_return_value_void_X cv_PCA_PCA__InputArray__InputArray_int_int(void* data, void* mean, int flags, int maxComponents) {
    try {
        cv::PCA* ret = new cv::PCA(*reinterpret_cast<const cv::_InputArray*>(data), *reinterpret_cast<const cv::_InputArray*>(mean), flags, maxComponents);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::PCA::PCA
// as:     cv::PCA::PCA (constructor) cv::PCA . new
// Arg ARG cv::_InputArray (boxed) data= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mean= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG Primitive(double) retainedVariance= Primitive(double) = 
// Return value: cv::PCA (boxed)
cv_return_value_void_X cv_PCA_PCA__InputArray__InputArray_int_double(void* data, void* mean, int flags, double retainedVariance) {
    try {
        cv::PCA* ret = new cv::PCA(*reinterpret_cast<const cv::_InputArray*>(data), *reinterpret_cast<const cv::_InputArray*>(mean), flags, retainedVariance);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::PCA::project
// as:     cv::PCA::project (method) cv::PCA . project
// Arg ARG cv::_InputArray (boxed) vec= cv::_InputArray (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_PCA_project_const__InputArray(void* instance, void* vec) {
    try {
        cv::Mat ret = reinterpret_cast<cv::PCA*>(instance)->project(*reinterpret_cast<const cv::_InputArray*>(vec));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::PCA::project
// as:     cv::PCA::project (method) cv::PCA . project
// Arg ARG cv::_InputArray (boxed) vec= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) result= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_PCA_project_const__InputArray__OutputArray(void* instance, void* vec, void* result) {
    try {
        reinterpret_cast<cv::PCA*>(instance)->project(*reinterpret_cast<const cv::_InputArray*>(vec), *reinterpret_cast<cv::_OutputArray*>(result));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::PCA::backProject
// as:     cv::PCA::backProject (method) cv::PCA . backProject
// Arg ARG cv::_InputArray (boxed) vec= cv::_InputArray (boxed) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_PCA_backProject_const__InputArray(void* instance, void* vec) {
    try {
        cv::Mat ret = reinterpret_cast<cv::PCA*>(instance)->backProject(*reinterpret_cast<const cv::_InputArray*>(vec));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::PCA::backProject
// as:     cv::PCA::backProject (method) cv::PCA . backProject
// Arg ARG cv::_InputArray (boxed) vec= cv::_InputArray (boxed) = 
// Arg ARG cv::_OutputArray (boxed) result= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_PCA_backProject_const__InputArray__OutputArray(void* instance, void* vec, void* result) {
    try {
        reinterpret_cast<cv::PCA*>(instance)->backProject(*reinterpret_cast<const cv::_InputArray*>(vec), *reinterpret_cast<cv::_OutputArray*>(result));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::PCA::write
// as:     cv::PCA::write (method) cv::PCA . write
// Arg ARG cv::FileStorage (boxed) fs= cv::FileStorage (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_PCA_write_const_FileStorage(void* instance, void* fs) {
    try {
        reinterpret_cast<cv::PCA*>(instance)->write(*reinterpret_cast<cv::FileStorage*>(fs));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::PCA::read
// as:     cv::PCA::read (method) cv::PCA . read
// Arg ARG cv::FileNode (boxed) fn= cv::FileNode (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_PCA_read_FileNode(void* instance, void* fn) {
    try {
        reinterpret_cast<cv::PCA*>(instance)->read(*reinterpret_cast<const cv::FileNode*>(fn));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::ParallelLoopBodyLambdaWrapper
void cv_ParallelLoopBodyLambdaWrapper_delete(void* instance) {
    delete reinterpret_cast<cv::ParallelLoopBodyLambdaWrapper*>(instance);
}
// boxed class: cv::Range
void cv_Range_delete(void* instance) {
    delete reinterpret_cast<cv::Range*>(instance);
}
// parsed: cv::Range::start
// as:     cv::Range::start (method) cv::Range . start
// Return value: Primitive(int)
cv_return_value_int cv_Range_start_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::Range*>(instance)->start;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Range::end
// as:     cv::Range::end (method) cv::Range . end
// Return value: Primitive(int)
cv_return_value_int cv_Range_end_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::Range*>(instance)->end;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Range::Range
// as:     cv::Range::Range (constructor) cv::Range . default
// Return value: cv::Range (boxed)
cv_return_value_void_X cv_Range_Range() {
    try {
        cv::Range* ret = new cv::Range();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Range::Range
// as:     cv::Range::Range (constructor) cv::Range . new
// Arg ARG Primitive(int) _start= Primitive(int) = 
// Arg ARG Primitive(int) _end= Primitive(int) = 
// Return value: cv::Range (boxed)
cv_return_value_void_X cv_Range_Range_int_int(int _start, int _end) {
    try {
        cv::Range* ret = new cv::Range(_start, _end);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::Range::size
// as:     cv::Range::size (method) cv::Range . size
// Return value: Primitive(int)
cv_return_value_int cv_Range_size_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::Range*>(instance)->size();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::Range::empty
// as:     cv::Range::empty (method) cv::Range . empty
// Return value: Primitive(bool)
cv_return_value_bool cv_Range_empty_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::Range*>(instance)->empty();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::Range::all
// as:     cv::Range::all (method) cv::Range . all
// Return value: cv::Range (boxed)
cv_return_value_void_X cv_Range_all() {
    try {
        cv::Range ret = cv::Range::all();
        return { Error::Code::StsOk, NULL, new cv::Range(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::RotatedRect
void cv_RotatedRect_delete(void* instance) {
    delete reinterpret_cast<cv::RotatedRect*>(instance);
}
// parsed: cv::RotatedRect::center
// as:     cv::RotatedRect::center (method) cv::RotatedRect . center
// Return value: cv::Point2f (simple)
cv_return_value_Point2fWrapper cv_RotatedRect_center_const(void* instance) {
    try {
        cv::Point2f ret = reinterpret_cast<cv::RotatedRect*>(instance)->center;
        return { Error::Code::StsOk, NULL, *reinterpret_cast<Point2fWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_Point2fWrapper)
}

// parsed: cv::RotatedRect::size
// as:     cv::RotatedRect::size (method) cv::RotatedRect . size
// Return value: cv::Size2f (simple)
cv_return_value_Size2fWrapper cv_RotatedRect_size_const(void* instance) {
    try {
        cv::Size2f ret = reinterpret_cast<cv::RotatedRect*>(instance)->size;
        return { Error::Code::StsOk, NULL, *reinterpret_cast<Size2fWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_Size2fWrapper)
}

// parsed: cv::RotatedRect::angle
// as:     cv::RotatedRect::angle (method) cv::RotatedRect . angle
// Return value: Primitive(float)
cv_return_value_float cv_RotatedRect_angle_const(void* instance) {
    try {
        float ret = reinterpret_cast<cv::RotatedRect*>(instance)->angle;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_float)
}

// parsed: cv::RotatedRect::RotatedRect
// as:     cv::RotatedRect::RotatedRect (constructor) cv::RotatedRect . default
// Return value: cv::RotatedRect (boxed)
cv_return_value_void_X cv_RotatedRect_RotatedRect() {
    try {
        cv::RotatedRect* ret = new cv::RotatedRect();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::RotatedRect::RotatedRect
// as:     cv::RotatedRect::RotatedRect (constructor) cv::RotatedRect . new
// Arg ARG cv::Point2f (simple) center= cv::Point2f (simple) = 
// Arg ARG cv::Size2f (simple) size= cv::Size2f (simple) = 
// Arg ARG Primitive(float) angle= Primitive(float) = 
// Return value: cv::RotatedRect (boxed)
cv_return_value_void_X cv_RotatedRect_RotatedRect_Point2f_Size2f_float(Point2fWrapper center, Size2fWrapper size, float angle) {
    try {
        cv::RotatedRect* ret = new cv::RotatedRect(*reinterpret_cast<const cv::Point2f*>(&center), *reinterpret_cast<const cv::Size2f*>(&size), angle);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::RotatedRect::RotatedRect
// as:     cv::RotatedRect::RotatedRect (constructor) cv::RotatedRect . new
// Arg ARG cv::Point2f (simple) point1= cv::Point2f (simple) = 
// Arg ARG cv::Point2f (simple) point2= cv::Point2f (simple) = 
// Arg ARG cv::Point2f (simple) point3= cv::Point2f (simple) = 
// Return value: cv::RotatedRect (boxed)
cv_return_value_void_X cv_RotatedRect_RotatedRect_Point2f_Point2f_Point2f(Point2fWrapper point1, Point2fWrapper point2, Point2fWrapper point3) {
    try {
        cv::RotatedRect* ret = new cv::RotatedRect(*reinterpret_cast<const cv::Point2f*>(&point1), *reinterpret_cast<const cv::Point2f*>(&point2), *reinterpret_cast<const cv::Point2f*>(&point3));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::RotatedRect::points
// as:     cv::RotatedRect::points (method) cv::RotatedRect . points
// Arg ARG RawPtr[cv::Point2f (simple)] * pts= (ptr) RawPtr[cv::Point2f (simple)] = 
// Return value: Primitive(void)
cv_return_value_void cv_RotatedRect_points_const_Point2f_X(void* instance, cv::Point2f* pts) {
    try {
        reinterpret_cast<cv::RotatedRect*>(instance)->points(reinterpret_cast<cv::Point2f*>(pts));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::RotatedRect::boundingRect
// as:     cv::RotatedRect::boundingRect (method) cv::RotatedRect . boundingRect
// Return value: cv::Rect (simple)
cv_return_value_RectWrapper cv_RotatedRect_boundingRect_const(void* instance) {
    try {
        cv::Rect ret = reinterpret_cast<cv::RotatedRect*>(instance)->boundingRect();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<RectWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_RectWrapper)
}

// parsed: cv::RotatedRect::boundingRect2f
// as:     cv::RotatedRect::boundingRect2f (method) cv::RotatedRect . boundingRect2f
// Return value: cv::Rect2f (simple)
cv_return_value_Rect2fWrapper cv_RotatedRect_boundingRect2f_const(void* instance) {
    try {
        cv::Rect2f ret = reinterpret_cast<cv::RotatedRect*>(instance)->boundingRect2f();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<Rect2fWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_Rect2fWrapper)
}

// boxed class: cv::SparseMat
void cv_SparseMat_delete(void* instance) {
    delete reinterpret_cast<cv::SparseMat*>(instance);
}
// parsed: cv::SparseMat::SparseMat
// as:     cv::SparseMat::SparseMat (constructor) cv::SparseMat . default
// Return value: cv::SparseMat (boxed)
cv_return_value_void_X cv_SparseMat_SparseMat() {
    try {
        cv::SparseMat* ret = new cv::SparseMat();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::SparseMat::SparseMat
// as:     cv::SparseMat::SparseMat (constructor) cv::SparseMat . new
// Arg ARG Primitive(int) dims= Primitive(int) = 
// Arg ARG RawPtr[Primitive(int)] * _sizes= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG Primitive(int) _type= Primitive(int) = 
// Return value: cv::SparseMat (boxed)
cv_return_value_void_X cv_SparseMat_SparseMat_int_const_int_X_int(int dims, const int* _sizes, int _type) {
    try {
        cv::SparseMat* ret = new cv::SparseMat(dims, _sizes, _type);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::SparseMat::SparseMat
// as:     cv::SparseMat::SparseMat (constructor) cv::SparseMat . copy
// Arg ARG cv::SparseMat (boxed) m= cv::SparseMat (boxed) = 
// Return value: cv::SparseMat (boxed)
cv_return_value_void_X cv_SparseMat_SparseMat_SparseMat(void* m) {
    try {
        cv::SparseMat* ret = new cv::SparseMat(*reinterpret_cast<const cv::SparseMat*>(m));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::SparseMat::SparseMat
// as:     cv::SparseMat::SparseMat (constructor) cv::SparseMat . new
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: cv::SparseMat (boxed)
cv_return_value_void_X cv_SparseMat_SparseMat_Mat(void* m) {
    try {
        cv::SparseMat* ret = new cv::SparseMat(*reinterpret_cast<const cv::Mat*>(m));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::SparseMat::clone
// as:     cv::SparseMat::clone (method) cv::SparseMat . clone
// Return value: cv::SparseMat (boxed)
cv_return_value_void_X cv_SparseMat_clone_const(void* instance) {
    try {
        cv::SparseMat ret = reinterpret_cast<cv::SparseMat*>(instance)->clone();
        return { Error::Code::StsOk, NULL, new cv::SparseMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::SparseMat::copyTo
// as:     cv::SparseMat::copyTo (method) cv::SparseMat . copyTo
// Arg ARG cv::SparseMat (boxed) m= cv::SparseMat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_SparseMat_copyTo_const_SparseMat(void* instance, void* m) {
    try {
        reinterpret_cast<cv::SparseMat*>(instance)->copyTo(*reinterpret_cast<cv::SparseMat*>(m));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SparseMat::copyTo
// as:     cv::SparseMat::copyTo (method) cv::SparseMat . copyTo
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_SparseMat_copyTo_const_Mat(void* instance, void* m) {
    try {
        reinterpret_cast<cv::SparseMat*>(instance)->copyTo(*reinterpret_cast<cv::Mat*>(m));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SparseMat::convertTo
// as:     cv::SparseMat::convertTo (method) cv::SparseMat . convertTo
// Arg ARG cv::SparseMat (boxed) m= cv::SparseMat (boxed) = 
// Arg ARG Primitive(int) rtype= Primitive(int) = 
// Arg ARG Primitive(double) alpha= Primitive(double) = 1
// Return value: Primitive(void)
cv_return_value_void cv_SparseMat_convertTo_const_SparseMat_int_double(void* instance, void* m, int rtype, double alpha) {
    try {
        reinterpret_cast<cv::SparseMat*>(instance)->convertTo(*reinterpret_cast<cv::SparseMat*>(m), rtype, alpha);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SparseMat::convertTo
// as:     cv::SparseMat::convertTo (method) cv::SparseMat . convertTo
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Arg ARG Primitive(int) rtype= Primitive(int) = 
// Arg ARG Primitive(double) alpha= Primitive(double) = 1
// Arg ARG Primitive(double) beta= Primitive(double) = 0
// Return value: Primitive(void)
cv_return_value_void cv_SparseMat_convertTo_const_Mat_int_double_double(void* instance, void* m, int rtype, double alpha, double beta) {
    try {
        reinterpret_cast<cv::SparseMat*>(instance)->convertTo(*reinterpret_cast<cv::Mat*>(m), rtype, alpha, beta);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SparseMat::assignTo
// as:     cv::SparseMat::assignTo (method) cv::SparseMat . assignTo
// Arg ARG cv::SparseMat (boxed) m= cv::SparseMat (boxed) = 
// Arg ARG Primitive(int) type= Primitive(int) = -1
// Return value: Primitive(void)
cv_return_value_void cv_SparseMat_assignTo_const_SparseMat_int(void* instance, void* m, int type) {
    try {
        reinterpret_cast<cv::SparseMat*>(instance)->assignTo(*reinterpret_cast<cv::SparseMat*>(m), type);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SparseMat::create
// as:     cv::SparseMat::create (method) cv::SparseMat . create
// Arg ARG Primitive(int) dims= Primitive(int) = 
// Arg ARG RawPtr[Primitive(int)] * _sizes= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG Primitive(int) _type= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_SparseMat_create_int_const_int_X_int(void* instance, int dims, const int* _sizes, int _type) {
    try {
        reinterpret_cast<cv::SparseMat*>(instance)->create(dims, _sizes, _type);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SparseMat::clear
// as:     cv::SparseMat::clear (method) cv::SparseMat . clear
// Return value: Primitive(void)
cv_return_value_void cv_SparseMat_clear(void* instance) {
    try {
        reinterpret_cast<cv::SparseMat*>(instance)->clear();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SparseMat::addref
// as:     cv::SparseMat::addref (method) cv::SparseMat . addref
// Return value: Primitive(void)
cv_return_value_void cv_SparseMat_addref(void* instance) {
    try {
        reinterpret_cast<cv::SparseMat*>(instance)->addref();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SparseMat::release
// as:     cv::SparseMat::release (method) cv::SparseMat . release
// Return value: Primitive(void)
cv_return_value_void cv_SparseMat_release(void* instance) {
    try {
        reinterpret_cast<cv::SparseMat*>(instance)->release();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SparseMat::elemSize
// as:     cv::SparseMat::elemSize (method) cv::SparseMat . elemSize
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_SparseMat_elemSize_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::SparseMat*>(instance)->elemSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::SparseMat::elemSize1
// as:     cv::SparseMat::elemSize1 (method) cv::SparseMat . elemSize1
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_SparseMat_elemSize1_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::SparseMat*>(instance)->elemSize1();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::SparseMat::type
// as:     cv::SparseMat::type (method) cv::SparseMat . type
// Return value: Primitive(int)
cv_return_value_int cv_SparseMat_type_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::SparseMat*>(instance)->type();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::SparseMat::depth
// as:     cv::SparseMat::depth (method) cv::SparseMat . depth
// Return value: Primitive(int)
cv_return_value_int cv_SparseMat_depth_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::SparseMat*>(instance)->depth();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::SparseMat::channels
// as:     cv::SparseMat::channels (method) cv::SparseMat . channels
// Return value: Primitive(int)
cv_return_value_int cv_SparseMat_channels_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::SparseMat*>(instance)->channels();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::SparseMat::size
// as:     cv::SparseMat::size (method) cv::SparseMat . size
// Return value: RawPtr[Primitive(int)]
cv_return_value_const_int_X cv_SparseMat_size_const(void* instance) {
    try {
        const int* ret = reinterpret_cast<cv::SparseMat*>(instance)->size();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_const_int_X)
}

// parsed: cv::SparseMat::size
// as:     cv::SparseMat::size (method) cv::SparseMat . size
// Arg ARG Primitive(int) i= Primitive(int) = 
// Return value: Primitive(int)
cv_return_value_int cv_SparseMat_size_const_int(void* instance, int i) {
    try {
        int ret = reinterpret_cast<cv::SparseMat*>(instance)->size(i);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::SparseMat::dims
// as:     cv::SparseMat::dims (method) cv::SparseMat . dims
// Return value: Primitive(int)
cv_return_value_int cv_SparseMat_dims_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::SparseMat*>(instance)->dims();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::SparseMat::nzcount
// as:     cv::SparseMat::nzcount (method) cv::SparseMat . nzcount
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_SparseMat_nzcount_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::SparseMat*>(instance)->nzcount();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::SparseMat::hash
// as:     cv::SparseMat::hash (method) cv::SparseMat . hash
// Arg ARG Primitive(int) i0= Primitive(int) = 
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_SparseMat_hash_const_int(void* instance, int i0) {
    try {
        size_t ret = reinterpret_cast<cv::SparseMat*>(instance)->hash(i0);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::SparseMat::hash
// as:     cv::SparseMat::hash (method) cv::SparseMat . hash
// Arg ARG Primitive(int) i0= Primitive(int) = 
// Arg ARG Primitive(int) i1= Primitive(int) = 
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_SparseMat_hash_const_int_int(void* instance, int i0, int i1) {
    try {
        size_t ret = reinterpret_cast<cv::SparseMat*>(instance)->hash(i0, i1);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::SparseMat::hash
// as:     cv::SparseMat::hash (method) cv::SparseMat . hash
// Arg ARG Primitive(int) i0= Primitive(int) = 
// Arg ARG Primitive(int) i1= Primitive(int) = 
// Arg ARG Primitive(int) i2= Primitive(int) = 
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_SparseMat_hash_const_int_int_int(void* instance, int i0, int i1, int i2) {
    try {
        size_t ret = reinterpret_cast<cv::SparseMat*>(instance)->hash(i0, i1, i2);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::SparseMat::hash
// as:     cv::SparseMat::hash (method) cv::SparseMat . hash
// Arg ARG RawPtr[Primitive(int)] * idx= (ptr) RawPtr[Primitive(int)] = 
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_SparseMat_hash_const_const_int_X(void* instance, const int* idx) {
    try {
        size_t ret = reinterpret_cast<cv::SparseMat*>(instance)->hash(idx);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::SparseMat::ptr
// as:     cv::SparseMat::ptr (method) cv::SparseMat . ptr
// Arg ARG Primitive(int) i0= Primitive(int) = 
// Arg ARG Primitive(bool) createMissing= Primitive(bool) = 
// Arg ARG RawPtr[Primitive(size_t)] * hashval= (ptr) RawPtr[Primitive(size_t)] = 0
// Return value: RawPtr[Primitive(uchar)]
cv_return_value_unsigned_char_X cv_SparseMat_ptr_int_bool_size_t_X(void* instance, int i0, bool createMissing, size_t* hashval) {
    try {
        uchar* ret = reinterpret_cast<cv::SparseMat*>(instance)->ptr(i0, createMissing, hashval);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_unsigned_char_X)
}

// parsed: cv::SparseMat::ptr
// as:     cv::SparseMat::ptr (method) cv::SparseMat . ptr
// Arg ARG Primitive(int) i0= Primitive(int) = 
// Arg ARG Primitive(int) i1= Primitive(int) = 
// Arg ARG Primitive(bool) createMissing= Primitive(bool) = 
// Arg ARG RawPtr[Primitive(size_t)] * hashval= (ptr) RawPtr[Primitive(size_t)] = 0
// Return value: RawPtr[Primitive(uchar)]
cv_return_value_unsigned_char_X cv_SparseMat_ptr_int_int_bool_size_t_X(void* instance, int i0, int i1, bool createMissing, size_t* hashval) {
    try {
        uchar* ret = reinterpret_cast<cv::SparseMat*>(instance)->ptr(i0, i1, createMissing, hashval);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_unsigned_char_X)
}

// parsed: cv::SparseMat::ptr
// as:     cv::SparseMat::ptr (method) cv::SparseMat . ptr
// Arg ARG Primitive(int) i0= Primitive(int) = 
// Arg ARG Primitive(int) i1= Primitive(int) = 
// Arg ARG Primitive(int) i2= Primitive(int) = 
// Arg ARG Primitive(bool) createMissing= Primitive(bool) = 
// Arg ARG RawPtr[Primitive(size_t)] * hashval= (ptr) RawPtr[Primitive(size_t)] = 0
// Return value: RawPtr[Primitive(uchar)]
cv_return_value_unsigned_char_X cv_SparseMat_ptr_int_int_int_bool_size_t_X(void* instance, int i0, int i1, int i2, bool createMissing, size_t* hashval) {
    try {
        uchar* ret = reinterpret_cast<cv::SparseMat*>(instance)->ptr(i0, i1, i2, createMissing, hashval);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_unsigned_char_X)
}

// parsed: cv::SparseMat::ptr
// as:     cv::SparseMat::ptr (method) cv::SparseMat . ptr
// Arg ARG RawPtr[Primitive(int)] * idx= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG Primitive(bool) createMissing= Primitive(bool) = 
// Arg ARG RawPtr[Primitive(size_t)] * hashval= (ptr) RawPtr[Primitive(size_t)] = 0
// Return value: RawPtr[Primitive(uchar)]
cv_return_value_unsigned_char_X cv_SparseMat_ptr_const_int_X_bool_size_t_X(void* instance, const int* idx, bool createMissing, size_t* hashval) {
    try {
        uchar* ret = reinterpret_cast<cv::SparseMat*>(instance)->ptr(idx, createMissing, hashval);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_unsigned_char_X)
}

// parsed: cv::SparseMat::erase
// as:     cv::SparseMat::erase (method) cv::SparseMat . erase
// Arg ARG Primitive(int) i0= Primitive(int) = 
// Arg ARG Primitive(int) i1= Primitive(int) = 
// Arg ARG RawPtr[Primitive(size_t)] * hashval= (ptr) RawPtr[Primitive(size_t)] = 0
// Return value: Primitive(void)
cv_return_value_void cv_SparseMat_erase_int_int_size_t_X(void* instance, int i0, int i1, size_t* hashval) {
    try {
        reinterpret_cast<cv::SparseMat*>(instance)->erase(i0, i1, hashval);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SparseMat::erase
// as:     cv::SparseMat::erase (method) cv::SparseMat . erase
// Arg ARG Primitive(int) i0= Primitive(int) = 
// Arg ARG Primitive(int) i1= Primitive(int) = 
// Arg ARG Primitive(int) i2= Primitive(int) = 
// Arg ARG RawPtr[Primitive(size_t)] * hashval= (ptr) RawPtr[Primitive(size_t)] = 0
// Return value: Primitive(void)
cv_return_value_void cv_SparseMat_erase_int_int_int_size_t_X(void* instance, int i0, int i1, int i2, size_t* hashval) {
    try {
        reinterpret_cast<cv::SparseMat*>(instance)->erase(i0, i1, i2, hashval);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SparseMat::erase
// as:     cv::SparseMat::erase (method) cv::SparseMat . erase
// Arg ARG RawPtr[Primitive(int)] * idx= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG RawPtr[Primitive(size_t)] * hashval= (ptr) RawPtr[Primitive(size_t)] = 0
// Return value: Primitive(void)
cv_return_value_void cv_SparseMat_erase_const_int_X_size_t_X(void* instance, const int* idx, size_t* hashval) {
    try {
        reinterpret_cast<cv::SparseMat*>(instance)->erase(idx, hashval);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SparseMat::node
// as:     cv::SparseMat::node (method) cv::SparseMat . node
// Arg ARG Primitive(size_t) nidx= Primitive(size_t) = 
// Return value: RawPtr[cv::SparseMat::Node (boxed)]
cv_return_value_void_X cv_SparseMat_node_size_t(void* instance, std::size_t nidx) {
    try {
        cv::SparseMat::Node* ret = reinterpret_cast<cv::SparseMat*>(instance)->node(nidx);
        return { Error::Code::StsOk, NULL, new cv::SparseMat::Node(*ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::SparseMat::node
// as:     cv::SparseMat::node (method) cv::SparseMat . node
// Arg ARG Primitive(size_t) nidx= Primitive(size_t) = 
// Return value: RawPtr[cv::SparseMat::Node (boxed)]
cv_return_value_const_void_X cv_SparseMat_node_const_size_t(void* instance, std::size_t nidx) {
    try {
        const cv::SparseMat::Node* ret = reinterpret_cast<cv::SparseMat*>(instance)->node(nidx);
        return { Error::Code::StsOk, NULL, new const cv::SparseMat::Node(*ret) };
    } CVRS_CATCH(cv_return_value_const_void_X)
}

// parsed: cv::SparseMat::newNode
// as:     cv::SparseMat::newNode (method) cv::SparseMat . newNode
// Arg ARG RawPtr[Primitive(int)] * idx= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG Primitive(size_t) hashval= Primitive(size_t) = 
// Return value: RawPtr[Primitive(uchar)]
cv_return_value_unsigned_char_X cv_SparseMat_newNode_const_int_X_size_t(void* instance, const int* idx, std::size_t hashval) {
    try {
        uchar* ret = reinterpret_cast<cv::SparseMat*>(instance)->newNode(idx, hashval);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_unsigned_char_X)
}

// parsed: cv::SparseMat::removeNode
// as:     cv::SparseMat::removeNode (method) cv::SparseMat . removeNode
// Arg ARG Primitive(size_t) hidx= Primitive(size_t) = 
// Arg ARG Primitive(size_t) nidx= Primitive(size_t) = 
// Arg ARG Primitive(size_t) previdx= Primitive(size_t) = 
// Return value: Primitive(void)
cv_return_value_void cv_SparseMat_removeNode_size_t_size_t_size_t(void* instance, std::size_t hidx, std::size_t nidx, std::size_t previdx) {
    try {
        reinterpret_cast<cv::SparseMat*>(instance)->removeNode(hidx, nidx, previdx);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::SparseMat::resizeHashTab
// as:     cv::SparseMat::resizeHashTab (method) cv::SparseMat . resizeHashTab
// Arg ARG Primitive(size_t) newsize= Primitive(size_t) = 
// Return value: Primitive(void)
cv_return_value_void cv_SparseMat_resizeHashTab_size_t(void* instance, std::size_t newsize) {
    try {
        reinterpret_cast<cv::SparseMat*>(instance)->resizeHashTab(newsize);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::SparseMat::Hdr
void cv_SparseMat_Hdr_delete(void* instance) {
    delete reinterpret_cast<cv::SparseMat::Hdr*>(instance);
}
// parsed: cv::SparseMat::Hdr::Hdr
// as:     cv::SparseMat::Hdr::Hdr (constructor) cv::SparseMat::Hdr . new
// Arg ARG Primitive(int) _dims= Primitive(int) = 
// Arg ARG RawPtr[Primitive(int)] * _sizes= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG Primitive(int) _type= Primitive(int) = 
// Return value: cv::SparseMat::Hdr (boxed)
cv_return_value_void_X cv_SparseMat_Hdr_Hdr_int_const_int_X_int(int _dims, const int* _sizes, int _type) {
    try {
        cv::SparseMat::Hdr* ret = new cv::SparseMat::Hdr(_dims, _sizes, _type);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::SparseMat::Hdr::clear
// as:     cv::SparseMat::Hdr::clear (method) cv::SparseMat::Hdr . clear
// Return value: Primitive(void)
cv_return_value_void cv_SparseMat_Hdr_clear(void* instance) {
    try {
        reinterpret_cast<cv::SparseMat::Hdr*>(instance)->clear();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::SparseMat::Node
void cv_SparseMat_Node_delete(void* instance) {
    delete reinterpret_cast<cv::SparseMat::Node*>(instance);
}
// parsed: cv::SparseMatConstIterator::node
// as:     cv::SparseMatConstIterator::node (method) cv::SparseMatConstIterator (trait) . node
// Return value: RawPtr[cv::SparseMat::Node (boxed)]
cv_return_value_const_void_X cv_SparseMatConstIterator_node_const(void* instance) {
    try {
        const cv::SparseMat::Node* ret = reinterpret_cast<cv::SparseMatConstIterator*>(instance)->node();
        return { Error::Code::StsOk, NULL, new const cv::SparseMat::Node(*ret) };
    } CVRS_CATCH(cv_return_value_const_void_X)
}

// parsed: cv::SparseMatConstIterator::seekEnd
// as:     cv::SparseMatConstIterator::seekEnd (method) cv::SparseMatConstIterator (trait) . seekEnd
// Return value: Primitive(void)
cv_return_value_void cv_SparseMatConstIterator_seekEnd(void* instance) {
    try {
        reinterpret_cast<cv::SparseMatConstIterator*>(instance)->seekEnd();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::SparseMatConstIterator
void cv_SparseMatConstIterator_delete(void* instance) {
    delete reinterpret_cast<cv::SparseMatConstIterator*>(instance);
}
// boxed class: cv::SparseMatIterator
void cv_SparseMatIterator_delete(void* instance) {
    delete reinterpret_cast<cv::SparseMatIterator*>(instance);
}
// parsed: cv::SparseMatIterator::node
// as:     cv::SparseMatIterator::node (method) cv::SparseMatIterator . node
// Return value: RawPtr[cv::SparseMat::Node (boxed)]
cv_return_value_void_X cv_SparseMatIterator_node_const(void* instance) {
    try {
        cv::SparseMat::Node* ret = reinterpret_cast<cv::SparseMatIterator*>(instance)->node();
        return { Error::Code::StsOk, NULL, new cv::SparseMat::Node(*ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::TermCriteria
void cv_TermCriteria_delete(void* instance) {
    delete reinterpret_cast<cv::TermCriteria*>(instance);
}
// parsed: cv::TermCriteria::type
// as:     cv::TermCriteria::type (method) cv::TermCriteria . type
// Return value: Primitive(int)
cv_return_value_int cv_TermCriteria_type_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::TermCriteria*>(instance)->type;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::TermCriteria::maxCount
// as:     cv::TermCriteria::maxCount (method) cv::TermCriteria . maxCount
// Return value: Primitive(int)
cv_return_value_int cv_TermCriteria_maxCount_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::TermCriteria*>(instance)->maxCount;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::TermCriteria::epsilon
// as:     cv::TermCriteria::epsilon (method) cv::TermCriteria . epsilon
// Return value: Primitive(double)
cv_return_value_double cv_TermCriteria_epsilon_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::TermCriteria*>(instance)->epsilon;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::TermCriteria::TermCriteria
// as:     cv::TermCriteria::TermCriteria (constructor) cv::TermCriteria . default
// Return value: cv::TermCriteria (boxed)
cv_return_value_void_X cv_TermCriteria_TermCriteria() {
    try {
        cv::TermCriteria* ret = new cv::TermCriteria();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::TermCriteria::TermCriteria
// as:     cv::TermCriteria::TermCriteria (constructor) cv::TermCriteria . new
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG Primitive(int) maxCount= Primitive(int) = 
// Arg ARG Primitive(double) epsilon= Primitive(double) = 
// Return value: cv::TermCriteria (boxed)
cv_return_value_void_X cv_TermCriteria_TermCriteria_int_int_double(int type, int maxCount, double epsilon) {
    try {
        cv::TermCriteria* ret = new cv::TermCriteria(type, maxCount, epsilon);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::TermCriteria::isValid
// as:     cv::TermCriteria::isValid (method) cv::TermCriteria . isValid
// Return value: Primitive(bool)
cv_return_value_bool cv_TermCriteria_isValid_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::TermCriteria*>(instance)->isValid();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// boxed class: cv::TickMeter
void cv_TickMeter_delete(void* instance) {
    delete reinterpret_cast<cv::TickMeter*>(instance);
}
// parsed: cv::TickMeter::TickMeter
// as:     cv::TickMeter::TickMeter (constructor) cv::TickMeter . default
// Return value: cv::TickMeter (boxed)
cv_return_value_void_X cv_TickMeter_TickMeter() {
    try {
        cv::TickMeter* ret = new cv::TickMeter();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::TickMeter::start
// as:     cv::TickMeter::start (method) cv::TickMeter . start
// Return value: Primitive(void)
cv_return_value_void cv_TickMeter_start(void* instance) {
    try {
        reinterpret_cast<cv::TickMeter*>(instance)->start();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::TickMeter::stop
// as:     cv::TickMeter::stop (method) cv::TickMeter . stop
// Return value: Primitive(void)
cv_return_value_void cv_TickMeter_stop(void* instance) {
    try {
        reinterpret_cast<cv::TickMeter*>(instance)->stop();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::TickMeter::getTimeTicks
// as:     cv::TickMeter::getTimeTicks (method) cv::TickMeter . getTimeTicks
// Return value: Primitive(int64)
cv_return_value_int64 cv_TickMeter_getTimeTicks_const(void* instance) {
    try {
        int64 ret = reinterpret_cast<cv::TickMeter*>(instance)->getTimeTicks();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int64)
}

// parsed: cv::TickMeter::getTimeMicro
// as:     cv::TickMeter::getTimeMicro (method) cv::TickMeter . getTimeMicro
// Return value: Primitive(double)
cv_return_value_double cv_TickMeter_getTimeMicro_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::TickMeter*>(instance)->getTimeMicro();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::TickMeter::getTimeMilli
// as:     cv::TickMeter::getTimeMilli (method) cv::TickMeter . getTimeMilli
// Return value: Primitive(double)
cv_return_value_double cv_TickMeter_getTimeMilli_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::TickMeter*>(instance)->getTimeMilli();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::TickMeter::getTimeSec
// as:     cv::TickMeter::getTimeSec (method) cv::TickMeter . getTimeSec
// Return value: Primitive(double)
cv_return_value_double cv_TickMeter_getTimeSec_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::TickMeter*>(instance)->getTimeSec();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::TickMeter::getCounter
// as:     cv::TickMeter::getCounter (method) cv::TickMeter . getCounter
// Return value: Primitive(int64)
cv_return_value_int64 cv_TickMeter_getCounter_const(void* instance) {
    try {
        int64 ret = reinterpret_cast<cv::TickMeter*>(instance)->getCounter();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int64)
}

// parsed: cv::TickMeter::reset
// as:     cv::TickMeter::reset (method) cv::TickMeter . reset
// Return value: Primitive(void)
cv_return_value_void cv_TickMeter_reset(void* instance) {
    try {
        reinterpret_cast<cv::TickMeter*>(instance)->reset();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::UMat
void cv_UMat_delete(void* instance) {
    delete reinterpret_cast<cv::UMat*>(instance);
}
// parsed: cv::UMat::flags
// as:     cv::UMat::flags (method) cv::UMat . flags
// Return value: Primitive(int)
cv_return_value_int cv_UMat_flags_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::UMat*>(instance)->flags;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::UMat::dims
// as:     cv::UMat::dims (method) cv::UMat . dims
// Return value: Primitive(int)
cv_return_value_int cv_UMat_dims_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::UMat*>(instance)->dims;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::UMat::rows
// as:     cv::UMat::rows (method) cv::UMat . rows
// Return value: Primitive(int)
cv_return_value_int cv_UMat_rows_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::UMat*>(instance)->rows;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::UMat::cols
// as:     cv::UMat::cols (method) cv::UMat . cols
// Return value: Primitive(int)
cv_return_value_int cv_UMat_cols_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::UMat*>(instance)->cols;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::UMat::usageFlags
// as:     cv::UMat::usageFlags (method) cv::UMat . usageFlags
// Return value: UMatUsageFlags (enum)
cv_return_value_UMatUsageFlags cv_UMat_usageFlags_const(void* instance) {
    try {
        UMatUsageFlags ret = reinterpret_cast<cv::UMat*>(instance)->usageFlags;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_UMatUsageFlags)
}

// parsed: cv::UMat::offset
// as:     cv::UMat::offset (method) cv::UMat . offset
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_UMat_offset_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::UMat*>(instance)->offset;
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::UMat::size
// as:     cv::UMat::size (method) cv::UMat . size
// Return value: cv::MatSize (boxed)
cv_return_value_void_X cv_UMat_size_const(void* instance) {
    try {
        cv::MatSize ret = reinterpret_cast<cv::UMat*>(instance)->size;
        return { Error::Code::StsOk, NULL, new cv::MatSize(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::step
// as:     cv::UMat::step (method) cv::UMat . step
// Return value: cv::MatStep (boxed)
cv_return_value_void_X cv_UMat_step_const(void* instance) {
    try {
        cv::MatStep ret = reinterpret_cast<cv::UMat*>(instance)->step;
        return { Error::Code::StsOk, NULL, new cv::MatStep(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::UMat
// as:     cv::UMat::UMat (constructor) cv::UMat . new
// Arg ARG UMatUsageFlags (enum) usageFlags= UMatUsageFlags (enum) = USAGE_DEFAULT
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_UMat_UMatUsageFlags(UMatUsageFlags usageFlags) {
    try {
        cv::UMat* ret = new cv::UMat(*reinterpret_cast<UMatUsageFlags*>(&usageFlags));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::UMat
// as:     cv::UMat::UMat (constructor) cv::UMat . new
// Arg ARG Primitive(int) rows= Primitive(int) = 
// Arg ARG Primitive(int) cols= Primitive(int) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG UMatUsageFlags (enum) usageFlags= UMatUsageFlags (enum) = USAGE_DEFAULT
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_UMat_int_int_int_UMatUsageFlags(int rows, int cols, int type, UMatUsageFlags usageFlags) {
    try {
        cv::UMat* ret = new cv::UMat(rows, cols, type, *reinterpret_cast<UMatUsageFlags*>(&usageFlags));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::UMat
// as:     cv::UMat::UMat (constructor) cv::UMat . new
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG UMatUsageFlags (enum) usageFlags= UMatUsageFlags (enum) = USAGE_DEFAULT
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_UMat_Size_int_UMatUsageFlags(SizeWrapper size, int type, UMatUsageFlags usageFlags) {
    try {
        cv::UMat* ret = new cv::UMat(*reinterpret_cast<cv::Size*>(&size), type, *reinterpret_cast<UMatUsageFlags*>(&usageFlags));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::UMat
// as:     cv::UMat::UMat (constructor) cv::UMat . new
// Arg ARG Primitive(int) rows= Primitive(int) = 
// Arg ARG Primitive(int) cols= Primitive(int) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG cv::Scalar (simple) s= cv::Scalar (simple) = 
// Arg ARG UMatUsageFlags (enum) usageFlags= UMatUsageFlags (enum) = USAGE_DEFAULT
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_UMat_int_int_int_Scalar_UMatUsageFlags(int rows, int cols, int type, ScalarWrapper s, UMatUsageFlags usageFlags) {
    try {
        cv::UMat* ret = new cv::UMat(rows, cols, type, *reinterpret_cast<const cv::Scalar*>(&s), *reinterpret_cast<UMatUsageFlags*>(&usageFlags));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::UMat
// as:     cv::UMat::UMat (constructor) cv::UMat . new
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG cv::Scalar (simple) s= cv::Scalar (simple) = 
// Arg ARG UMatUsageFlags (enum) usageFlags= UMatUsageFlags (enum) = USAGE_DEFAULT
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_UMat_Size_int_Scalar_UMatUsageFlags(SizeWrapper size, int type, ScalarWrapper s, UMatUsageFlags usageFlags) {
    try {
        cv::UMat* ret = new cv::UMat(*reinterpret_cast<cv::Size*>(&size), type, *reinterpret_cast<const cv::Scalar*>(&s), *reinterpret_cast<UMatUsageFlags*>(&usageFlags));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::UMat
// as:     cv::UMat::UMat (constructor) cv::UMat . new
// Arg ARG Primitive(int) ndims= Primitive(int) = 
// Arg ARG RawPtr[Primitive(int)] * sizes= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG UMatUsageFlags (enum) usageFlags= UMatUsageFlags (enum) = USAGE_DEFAULT
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_UMat_int_const_int_X_int_UMatUsageFlags(int ndims, const int* sizes, int type, UMatUsageFlags usageFlags) {
    try {
        cv::UMat* ret = new cv::UMat(ndims, sizes, type, *reinterpret_cast<UMatUsageFlags*>(&usageFlags));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::UMat
// as:     cv::UMat::UMat (constructor) cv::UMat . new
// Arg ARG Primitive(int) ndims= Primitive(int) = 
// Arg ARG RawPtr[Primitive(int)] * sizes= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG cv::Scalar (simple) s= cv::Scalar (simple) = 
// Arg ARG UMatUsageFlags (enum) usageFlags= UMatUsageFlags (enum) = USAGE_DEFAULT
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_UMat_int_const_int_X_int_Scalar_UMatUsageFlags(int ndims, const int* sizes, int type, ScalarWrapper s, UMatUsageFlags usageFlags) {
    try {
        cv::UMat* ret = new cv::UMat(ndims, sizes, type, *reinterpret_cast<const cv::Scalar*>(&s), *reinterpret_cast<UMatUsageFlags*>(&usageFlags));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::UMat
// as:     cv::UMat::UMat (constructor) cv::UMat . copy
// Arg ARG cv::UMat (boxed) m= cv::UMat (boxed) = 
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_UMat_UMat(void* m) {
    try {
        cv::UMat* ret = new cv::UMat(*reinterpret_cast<const cv::UMat*>(m));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::UMat
// as:     cv::UMat::UMat (constructor) cv::UMat . new
// Arg ARG cv::UMat (boxed) m= cv::UMat (boxed) = 
// Arg ARG cv::Range (boxed) rowRange= cv::Range (boxed) = 
// Arg ARG cv::Range (boxed) colRange= cv::Range (boxed) = Range::all()
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_UMat_UMat_Range_Range(void* m, void* rowRange, void* colRange) {
    try {
        cv::UMat* ret = new cv::UMat(*reinterpret_cast<const cv::UMat*>(m), *reinterpret_cast<const cv::Range*>(rowRange), *reinterpret_cast<const cv::Range*>(colRange));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::UMat
// as:     cv::UMat::UMat (constructor) cv::UMat . new
// Arg ARG cv::UMat (boxed) m= cv::UMat (boxed) = 
// Arg ARG cv::Rect (simple) roi= cv::Rect (simple) = 
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_UMat_UMat_Rect(void* m, RectWrapper roi) {
    try {
        cv::UMat* ret = new cv::UMat(*reinterpret_cast<const cv::UMat*>(m), *reinterpret_cast<const cv::Rect*>(&roi));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::UMat
// as:     cv::UMat::UMat (constructor) cv::UMat . new
// Arg ARG cv::UMat (boxed) m= cv::UMat (boxed) = 
// Arg ARG Vector[cv::Range (boxed)] ranges= Vector[cv::Range (boxed)] = 
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_UMat_UMat_VectorOfRange(void* m, void* ranges) {
    try {
        cv::UMat* ret = new cv::UMat(*reinterpret_cast<const cv::UMat*>(m), *reinterpret_cast<const std::vector<cv::Range>*>(ranges));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::getMat
// as:     cv::UMat::getMat (method) cv::UMat . getMat
// Arg ARG AccessFlag (enum) flags= AccessFlag (enum) = 
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv_UMat_getMat_const_AccessFlag(void* instance, AccessFlag flags) {
    try {
        cv::Mat ret = reinterpret_cast<cv::UMat*>(instance)->getMat(*reinterpret_cast<AccessFlag*>(&flags));
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::row
// as:     cv::UMat::row (method) cv::UMat . row
// Arg ARG Primitive(int) y= Primitive(int) = 
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_row_const_int(void* instance, int y) {
    try {
        cv::UMat ret = reinterpret_cast<cv::UMat*>(instance)->row(y);
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::col
// as:     cv::UMat::col (method) cv::UMat . col
// Arg ARG Primitive(int) x= Primitive(int) = 
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_col_const_int(void* instance, int x) {
    try {
        cv::UMat ret = reinterpret_cast<cv::UMat*>(instance)->col(x);
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::rowRange
// as:     cv::UMat::rowRange (method) cv::UMat . rowRange
// Arg ARG Primitive(int) startrow= Primitive(int) = 
// Arg ARG Primitive(int) endrow= Primitive(int) = 
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_rowRange_const_int_int(void* instance, int startrow, int endrow) {
    try {
        cv::UMat ret = reinterpret_cast<cv::UMat*>(instance)->rowRange(startrow, endrow);
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::rowRange
// as:     cv::UMat::rowRange (method) cv::UMat . rowRange
// Arg ARG cv::Range (boxed) r= cv::Range (boxed) = 
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_rowRange_const_Range(void* instance, void* r) {
    try {
        cv::UMat ret = reinterpret_cast<cv::UMat*>(instance)->rowRange(*reinterpret_cast<const cv::Range*>(r));
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::colRange
// as:     cv::UMat::colRange (method) cv::UMat . colRange
// Arg ARG Primitive(int) startcol= Primitive(int) = 
// Arg ARG Primitive(int) endcol= Primitive(int) = 
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_colRange_const_int_int(void* instance, int startcol, int endcol) {
    try {
        cv::UMat ret = reinterpret_cast<cv::UMat*>(instance)->colRange(startcol, endcol);
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::colRange
// as:     cv::UMat::colRange (method) cv::UMat . colRange
// Arg ARG cv::Range (boxed) r= cv::Range (boxed) = 
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_colRange_const_Range(void* instance, void* r) {
    try {
        cv::UMat ret = reinterpret_cast<cv::UMat*>(instance)->colRange(*reinterpret_cast<const cv::Range*>(r));
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::diag
// as:     cv::UMat::diag (method) cv::UMat . diag
// Arg ARG Primitive(int) d= Primitive(int) = 0
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_diag_const_int(void* instance, int d) {
    try {
        cv::UMat ret = reinterpret_cast<cv::UMat*>(instance)->diag(d);
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::diag
// as:     cv::UMat::diag (method) cv::UMat . diag
// Arg ARG cv::UMat (boxed) d= cv::UMat (boxed) = 
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_diag_UMat(void* d) {
    try {
        cv::UMat ret = cv::UMat::diag(*reinterpret_cast<const cv::UMat*>(d));
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::clone
// as:     cv::UMat::clone (method) cv::UMat . clone
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_clone_const(void* instance) {
    try {
        cv::UMat ret = reinterpret_cast<cv::UMat*>(instance)->clone();
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::copyTo
// as:     cv::UMat::copyTo (method) cv::UMat . copyTo
// Arg ARG cv::_OutputArray (boxed) m= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_UMat_copyTo_const__OutputArray(void* instance, void* m) {
    try {
        reinterpret_cast<cv::UMat*>(instance)->copyTo(*reinterpret_cast<cv::_OutputArray*>(m));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::UMat::copyTo
// as:     cv::UMat::copyTo (method) cv::UMat . copyTo
// Arg ARG cv::_OutputArray (boxed) m= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv_UMat_copyTo_const__OutputArray__InputArray(void* instance, void* m, void* mask) {
    try {
        reinterpret_cast<cv::UMat*>(instance)->copyTo(*reinterpret_cast<cv::_OutputArray*>(m), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::UMat::convertTo
// as:     cv::UMat::convertTo (method) cv::UMat . convertTo
// Arg ARG cv::_OutputArray (boxed) m= cv::_OutputArray (boxed) = 
// Arg ARG Primitive(int) rtype= Primitive(int) = 
// Arg ARG Primitive(double) alpha= Primitive(double) = 1
// Arg ARG Primitive(double) beta= Primitive(double) = 0
// Return value: Primitive(void)
cv_return_value_void cv_UMat_convertTo_const__OutputArray_int_double_double(void* instance, void* m, int rtype, double alpha, double beta) {
    try {
        reinterpret_cast<cv::UMat*>(instance)->convertTo(*reinterpret_cast<cv::_OutputArray*>(m), rtype, alpha, beta);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::UMat::assignTo
// as:     cv::UMat::assignTo (method) cv::UMat . assignTo
// Arg ARG cv::UMat (boxed) m= cv::UMat (boxed) = 
// Arg ARG Primitive(int) type= Primitive(int) = -1
// Return value: Primitive(void)
cv_return_value_void cv_UMat_assignTo_const_UMat_int(void* instance, void* m, int type) {
    try {
        reinterpret_cast<cv::UMat*>(instance)->assignTo(*reinterpret_cast<cv::UMat*>(m), type);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::UMat::setTo
// as:     cv::UMat::setTo (method) cv::UMat . setTo
// Arg ARG cv::_InputArray (boxed) value= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = noArray()
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_setTo__InputArray__InputArray(void* instance, void* value, void* mask) {
    try {
        cv::UMat ret = reinterpret_cast<cv::UMat*>(instance)->setTo(*reinterpret_cast<const cv::_InputArray*>(value), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::reshape
// as:     cv::UMat::reshape (method) cv::UMat . reshape
// Arg ARG Primitive(int) cn= Primitive(int) = 
// Arg ARG Primitive(int) rows= Primitive(int) = 0
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_reshape_const_int_int(void* instance, int cn, int rows) {
    try {
        cv::UMat ret = reinterpret_cast<cv::UMat*>(instance)->reshape(cn, rows);
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::reshape
// as:     cv::UMat::reshape (method) cv::UMat . reshape
// Arg ARG Primitive(int) cn= Primitive(int) = 
// Arg ARG Primitive(int) newndims= Primitive(int) = 
// Arg ARG RawPtr[Primitive(int)] * newsz= (ptr) RawPtr[Primitive(int)] = 
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_reshape_const_int_int_const_int_X(void* instance, int cn, int newndims, const int* newsz) {
    try {
        cv::UMat ret = reinterpret_cast<cv::UMat*>(instance)->reshape(cn, newndims, newsz);
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::t
// as:     cv::UMat::t (method) cv::UMat . t
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_t_const(void* instance) {
    try {
        cv::UMat ret = reinterpret_cast<cv::UMat*>(instance)->t();
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::inv
// as:     cv::UMat::inv (method) cv::UMat . inv
// Arg ARG Primitive(int) method= Primitive(int) = DECOMP_LU
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_inv_const_int(void* instance, int method) {
    try {
        cv::UMat ret = reinterpret_cast<cv::UMat*>(instance)->inv(method);
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::mul
// as:     cv::UMat::mul (method) cv::UMat . mul
// Arg ARG cv::_InputArray (boxed) m= cv::_InputArray (boxed) = 
// Arg ARG Primitive(double) scale= Primitive(double) = 1
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_mul_const__InputArray_double(void* instance, void* m, double scale) {
    try {
        cv::UMat ret = reinterpret_cast<cv::UMat*>(instance)->mul(*reinterpret_cast<const cv::_InputArray*>(m), scale);
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::dot
// as:     cv::UMat::dot (method) cv::UMat . dot
// Arg ARG cv::_InputArray (boxed) m= cv::_InputArray (boxed) = 
// Return value: Primitive(double)
cv_return_value_double cv_UMat_dot_const__InputArray(void* instance, void* m) {
    try {
        double ret = reinterpret_cast<cv::UMat*>(instance)->dot(*reinterpret_cast<const cv::_InputArray*>(m));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::UMat::zeros
// as:     cv::UMat::zeros (method) cv::UMat . zeros
// Arg ARG Primitive(int) rows= Primitive(int) = 
// Arg ARG Primitive(int) cols= Primitive(int) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_zeros_int_int_int(int rows, int cols, int type) {
    try {
        cv::UMat ret = cv::UMat::zeros(rows, cols, type);
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::zeros
// as:     cv::UMat::zeros (method) cv::UMat . zeros
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_zeros_Size_int(SizeWrapper size, int type) {
    try {
        cv::UMat ret = cv::UMat::zeros(*reinterpret_cast<cv::Size*>(&size), type);
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::zeros
// as:     cv::UMat::zeros (method) cv::UMat . zeros
// Arg ARG Primitive(int) ndims= Primitive(int) = 
// Arg ARG RawPtr[Primitive(int)] * sz= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_zeros_int_const_int_X_int(int ndims, const int* sz, int type) {
    try {
        cv::UMat ret = cv::UMat::zeros(ndims, sz, type);
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::ones
// as:     cv::UMat::ones (method) cv::UMat . ones
// Arg ARG Primitive(int) rows= Primitive(int) = 
// Arg ARG Primitive(int) cols= Primitive(int) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_ones_int_int_int(int rows, int cols, int type) {
    try {
        cv::UMat ret = cv::UMat::ones(rows, cols, type);
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::ones
// as:     cv::UMat::ones (method) cv::UMat . ones
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_ones_Size_int(SizeWrapper size, int type) {
    try {
        cv::UMat ret = cv::UMat::ones(*reinterpret_cast<cv::Size*>(&size), type);
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::ones
// as:     cv::UMat::ones (method) cv::UMat . ones
// Arg ARG Primitive(int) ndims= Primitive(int) = 
// Arg ARG RawPtr[Primitive(int)] * sz= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_ones_int_const_int_X_int(int ndims, const int* sz, int type) {
    try {
        cv::UMat ret = cv::UMat::ones(ndims, sz, type);
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::eye
// as:     cv::UMat::eye (method) cv::UMat . eye
// Arg ARG Primitive(int) rows= Primitive(int) = 
// Arg ARG Primitive(int) cols= Primitive(int) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_eye_int_int_int(int rows, int cols, int type) {
    try {
        cv::UMat ret = cv::UMat::eye(rows, cols, type);
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::eye
// as:     cv::UMat::eye (method) cv::UMat . eye
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_eye_Size_int(SizeWrapper size, int type) {
    try {
        cv::UMat ret = cv::UMat::eye(*reinterpret_cast<cv::Size*>(&size), type);
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::create
// as:     cv::UMat::create (method) cv::UMat . create
// Arg ARG Primitive(int) rows= Primitive(int) = 
// Arg ARG Primitive(int) cols= Primitive(int) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG UMatUsageFlags (enum) usageFlags= UMatUsageFlags (enum) = USAGE_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_UMat_create_int_int_int_UMatUsageFlags(void* instance, int rows, int cols, int type, UMatUsageFlags usageFlags) {
    try {
        reinterpret_cast<cv::UMat*>(instance)->create(rows, cols, type, *reinterpret_cast<UMatUsageFlags*>(&usageFlags));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::UMat::create
// as:     cv::UMat::create (method) cv::UMat . create
// Arg ARG cv::Size (simple) size= cv::Size (simple) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG UMatUsageFlags (enum) usageFlags= UMatUsageFlags (enum) = USAGE_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_UMat_create_Size_int_UMatUsageFlags(void* instance, SizeWrapper size, int type, UMatUsageFlags usageFlags) {
    try {
        reinterpret_cast<cv::UMat*>(instance)->create(*reinterpret_cast<cv::Size*>(&size), type, *reinterpret_cast<UMatUsageFlags*>(&usageFlags));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::UMat::create
// as:     cv::UMat::create (method) cv::UMat . create
// Arg ARG Vector[Primitive(int)] sizes= Vector[Primitive(int)] = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG UMatUsageFlags (enum) usageFlags= UMatUsageFlags (enum) = USAGE_DEFAULT
// Return value: Primitive(void)
cv_return_value_void cv_UMat_create_VectorOfint_int_UMatUsageFlags(void* instance, void* sizes, int type, UMatUsageFlags usageFlags) {
    try {
        reinterpret_cast<cv::UMat*>(instance)->create(*reinterpret_cast<const std::vector<int>*>(sizes), type, *reinterpret_cast<UMatUsageFlags*>(&usageFlags));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::UMat::addref
// as:     cv::UMat::addref (method) cv::UMat . addref
// Return value: Primitive(void)
cv_return_value_void cv_UMat_addref(void* instance) {
    try {
        reinterpret_cast<cv::UMat*>(instance)->addref();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::UMat::release
// as:     cv::UMat::release (method) cv::UMat . release
// Return value: Primitive(void)
cv_return_value_void cv_UMat_release(void* instance) {
    try {
        reinterpret_cast<cv::UMat*>(instance)->release();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::UMat::deallocate
// as:     cv::UMat::deallocate (method) cv::UMat . deallocate
// Return value: Primitive(void)
cv_return_value_void cv_UMat_deallocate(void* instance) {
    try {
        reinterpret_cast<cv::UMat*>(instance)->deallocate();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::UMat::locateROI
// as:     cv::UMat::locateROI (method) cv::UMat . locateROI
// Arg ARG cv::Size (simple) wholeSize= cv::Size (simple) = 
// Arg ARG cv::Point (simple) ofs= cv::Point (simple) = 
// Return value: Primitive(void)
cv_return_value_void cv_UMat_locateROI_const_Size_Point(void* instance, SizeWrapper& wholeSize, PointWrapper& ofs) {
    try {
        reinterpret_cast<cv::UMat*>(instance)->locateROI(*reinterpret_cast<cv::Size*>(&wholeSize), *reinterpret_cast<cv::Point*>(&ofs));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::UMat::adjustROI
// as:     cv::UMat::adjustROI (method) cv::UMat . adjustROI
// Arg ARG Primitive(int) dtop= Primitive(int) = 
// Arg ARG Primitive(int) dbottom= Primitive(int) = 
// Arg ARG Primitive(int) dleft= Primitive(int) = 
// Arg ARG Primitive(int) dright= Primitive(int) = 
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv_UMat_adjustROI_int_int_int_int(void* instance, int dtop, int dbottom, int dleft, int dright) {
    try {
        cv::UMat ret = reinterpret_cast<cv::UMat*>(instance)->adjustROI(dtop, dbottom, dleft, dright);
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::isContinuous
// as:     cv::UMat::isContinuous (method) cv::UMat . isContinuous
// Return value: Primitive(bool)
cv_return_value_bool cv_UMat_isContinuous_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::UMat*>(instance)->isContinuous();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::UMat::isSubmatrix
// as:     cv::UMat::isSubmatrix (method) cv::UMat . isSubmatrix
// Return value: Primitive(bool)
cv_return_value_bool cv_UMat_isSubmatrix_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::UMat*>(instance)->isSubmatrix();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::UMat::elemSize
// as:     cv::UMat::elemSize (method) cv::UMat . elemSize
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_UMat_elemSize_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::UMat*>(instance)->elemSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::UMat::elemSize1
// as:     cv::UMat::elemSize1 (method) cv::UMat . elemSize1
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_UMat_elemSize1_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::UMat*>(instance)->elemSize1();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::UMat::type
// as:     cv::UMat::type (method) cv::UMat . type
// Return value: Primitive(int)
cv_return_value_int cv_UMat_type_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::UMat*>(instance)->type();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::UMat::depth
// as:     cv::UMat::depth (method) cv::UMat . depth
// Return value: Primitive(int)
cv_return_value_int cv_UMat_depth_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::UMat*>(instance)->depth();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::UMat::channels
// as:     cv::UMat::channels (method) cv::UMat . channels
// Return value: Primitive(int)
cv_return_value_int cv_UMat_channels_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::UMat*>(instance)->channels();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::UMat::step1
// as:     cv::UMat::step1 (method) cv::UMat . step1
// Arg ARG Primitive(int) i= Primitive(int) = 0
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_UMat_step1_const_int(void* instance, int i) {
    try {
        size_t ret = reinterpret_cast<cv::UMat*>(instance)->step1(i);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::UMat::empty
// as:     cv::UMat::empty (method) cv::UMat . empty
// Return value: Primitive(bool)
cv_return_value_bool cv_UMat_empty_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::UMat*>(instance)->empty();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::UMat::total
// as:     cv::UMat::total (method) cv::UMat . total
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_UMat_total_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::UMat*>(instance)->total();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::UMat::checkVector
// as:     cv::UMat::checkVector (method) cv::UMat . checkVector
// Arg ARG Primitive(int) elemChannels= Primitive(int) = 
// Arg ARG Primitive(int) depth= Primitive(int) = -1
// Arg ARG Primitive(bool) requireContinuous= Primitive(bool) = true
// Return value: Primitive(int)
cv_return_value_int cv_UMat_checkVector_const_int_int_bool(void* instance, int elemChannels, int depth, bool requireContinuous) {
    try {
        int ret = reinterpret_cast<cv::UMat*>(instance)->checkVector(elemChannels, depth, requireContinuous);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::UMat::handle
// as:     cv::UMat::handle (method) cv::UMat . handle
// Arg ARG AccessFlag (enum) accessFlags= AccessFlag (enum) = 
// Return value: RawPtr[Primitive(void)]
cv_return_value_void_X cv_UMat_handle_const_AccessFlag(void* instance, AccessFlag accessFlags) {
    try {
        void* ret = reinterpret_cast<cv::UMat*>(instance)->handle(*reinterpret_cast<AccessFlag*>(&accessFlags));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::UMat::ndoffset
// as:     cv::UMat::ndoffset (method) cv::UMat . ndoffset
// Arg ARG RawPtr[Primitive(size_t)] * ofs= (ptr) RawPtr[Primitive(size_t)] = 
// Return value: Primitive(void)
cv_return_value_void cv_UMat_ndoffset_const_size_t_X(void* instance, size_t* ofs) {
    try {
        reinterpret_cast<cv::UMat*>(instance)->ndoffset(ofs);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::UMat::updateContinuityFlag
// as:     cv::UMat::updateContinuityFlag (method) cv::UMat . updateContinuityFlag
// Return value: Primitive(void)
cv_return_value_void cv_UMat_updateContinuityFlag(void* instance) {
    try {
        reinterpret_cast<cv::UMat*>(instance)->updateContinuityFlag();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::UMatData
void cv_UMatData_delete(void* instance) {
    delete reinterpret_cast<cv::UMatData*>(instance);
}
// parsed: cv::UMatData::lock
// as:     cv::UMatData::lock (method) cv::UMatData . lock
// Return value: Primitive(void)
cv_return_value_void cv_UMatData_lock(void* instance) {
    try {
        reinterpret_cast<cv::UMatData*>(instance)->lock();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::UMatData::unlock
// as:     cv::UMatData::unlock (method) cv::UMatData . unlock
// Return value: Primitive(void)
cv_return_value_void cv_UMatData_unlock(void* instance) {
    try {
        reinterpret_cast<cv::UMatData*>(instance)->unlock();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::UMatData::hostCopyObsolete
// as:     cv::UMatData::hostCopyObsolete (method) cv::UMatData . hostCopyObsolete
// Return value: Primitive(bool)
cv_return_value_bool cv_UMatData_hostCopyObsolete_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::UMatData*>(instance)->hostCopyObsolete();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::UMatData::deviceCopyObsolete
// as:     cv::UMatData::deviceCopyObsolete (method) cv::UMatData . deviceCopyObsolete
// Return value: Primitive(bool)
cv_return_value_bool cv_UMatData_deviceCopyObsolete_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::UMatData*>(instance)->deviceCopyObsolete();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::UMatData::deviceMemMapped
// as:     cv::UMatData::deviceMemMapped (method) cv::UMatData . deviceMemMapped
// Return value: Primitive(bool)
cv_return_value_bool cv_UMatData_deviceMemMapped_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::UMatData*>(instance)->deviceMemMapped();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::UMatData::copyOnMap
// as:     cv::UMatData::copyOnMap (method) cv::UMatData . copyOnMap
// Return value: Primitive(bool)
cv_return_value_bool cv_UMatData_copyOnMap_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::UMatData*>(instance)->copyOnMap();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::UMatData::tempUMat
// as:     cv::UMatData::tempUMat (method) cv::UMatData . tempUMat
// Return value: Primitive(bool)
cv_return_value_bool cv_UMatData_tempUMat_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::UMatData*>(instance)->tempUMat();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::UMatData::tempCopiedUMat
// as:     cv::UMatData::tempCopiedUMat (method) cv::UMatData . tempCopiedUMat
// Return value: Primitive(bool)
cv_return_value_bool cv_UMatData_tempCopiedUMat_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::UMatData*>(instance)->tempCopiedUMat();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::UMatData::markHostCopyObsolete
// as:     cv::UMatData::markHostCopyObsolete (method) cv::UMatData . markHostCopyObsolete
// Arg ARG Primitive(bool) flag= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_UMatData_markHostCopyObsolete_bool(void* instance, bool flag) {
    try {
        reinterpret_cast<cv::UMatData*>(instance)->markHostCopyObsolete(flag);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::UMatData::markDeviceCopyObsolete
// as:     cv::UMatData::markDeviceCopyObsolete (method) cv::UMatData . markDeviceCopyObsolete
// Arg ARG Primitive(bool) flag= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_UMatData_markDeviceCopyObsolete_bool(void* instance, bool flag) {
    try {
        reinterpret_cast<cv::UMatData*>(instance)->markDeviceCopyObsolete(flag);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::UMatData::markDeviceMemMapped
// as:     cv::UMatData::markDeviceMemMapped (method) cv::UMatData . markDeviceMemMapped
// Arg ARG Primitive(bool) flag= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_UMatData_markDeviceMemMapped_bool(void* instance, bool flag) {
    try {
        reinterpret_cast<cv::UMatData*>(instance)->markDeviceMemMapped(flag);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::_InputArray::getMat
// as:     cv::_InputArray::getMat (method) cv::_InputArray (trait) . getMat
// Arg ARG Primitive(int) idx= Primitive(int) = -1
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv__InputArray_getMat_const_int(void* instance, int idx) {
    try {
        cv::Mat ret = reinterpret_cast<cv::_InputArray*>(instance)->getMat(idx);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_InputArray::getMat_
// as:     cv::_InputArray::getMat_ (method) cv::_InputArray (trait) . getMat_
// Arg ARG Primitive(int) idx= Primitive(int) = -1
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv__InputArray_getMat__const_int(void* instance, int idx) {
    try {
        cv::Mat ret = reinterpret_cast<cv::_InputArray*>(instance)->getMat_(idx);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_InputArray::getUMat
// as:     cv::_InputArray::getUMat (method) cv::_InputArray (trait) . getUMat
// Arg ARG Primitive(int) idx= Primitive(int) = -1
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv__InputArray_getUMat_const_int(void* instance, int idx) {
    try {
        cv::UMat ret = reinterpret_cast<cv::_InputArray*>(instance)->getUMat(idx);
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_InputArray::getMatVector
// as:     cv::_InputArray::getMatVector (method) cv::_InputArray (trait) . getMatVector
// Arg ARG Vector[cv::Mat (boxed)] mv= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv__InputArray_getMatVector_const_VectorOfMat(void* instance, void* mv) {
    try {
        reinterpret_cast<cv::_InputArray*>(instance)->getMatVector(*reinterpret_cast<std::vector<cv::Mat>*>(mv));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::_InputArray::getUMatVector
// as:     cv::_InputArray::getUMatVector (method) cv::_InputArray (trait) . getUMatVector
// Arg ARG Vector[cv::UMat (boxed)] umv= Vector[cv::UMat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv__InputArray_getUMatVector_const_VectorOfUMat(void* instance, void* umv) {
    try {
        reinterpret_cast<cv::_InputArray*>(instance)->getUMatVector(*reinterpret_cast<std::vector<cv::UMat>*>(umv));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::_InputArray::getFlags
// as:     cv::_InputArray::getFlags (method) cv::_InputArray (trait) . getFlags
// Return value: Primitive(int)
cv_return_value_int cv__InputArray_getFlags_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::_InputArray*>(instance)->getFlags();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::_InputArray::getObj
// as:     cv::_InputArray::getObj (method) cv::_InputArray (trait) . getObj
// Return value: RawPtr[Primitive(void)]
cv_return_value_void_X cv__InputArray_getObj_const(void* instance) {
    try {
        void* ret = reinterpret_cast<cv::_InputArray*>(instance)->getObj();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_InputArray::getSz
// as:     cv::_InputArray::getSz (method) cv::_InputArray (trait) . getSz
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv__InputArray_getSz_const(void* instance) {
    try {
        cv::Size ret = reinterpret_cast<cv::_InputArray*>(instance)->getSz();
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::_InputArray::kind
// as:     cv::_InputArray::kind (method) cv::_InputArray (trait) . kind
// Return value: _InputArray::KindFlag (enum)
cv_return_value__InputArray_KindFlag cv__InputArray_kind_const(void* instance) {
    try {
        _InputArray::KindFlag ret = reinterpret_cast<cv::_InputArray*>(instance)->kind();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value__InputArray_KindFlag)
}

// parsed: cv::_InputArray::dims
// as:     cv::_InputArray::dims (method) cv::_InputArray (trait) . dims
// Arg ARG Primitive(int) i= Primitive(int) = -1
// Return value: Primitive(int)
cv_return_value_int cv__InputArray_dims_const_int(void* instance, int i) {
    try {
        int ret = reinterpret_cast<cv::_InputArray*>(instance)->dims(i);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::_InputArray::cols
// as:     cv::_InputArray::cols (method) cv::_InputArray (trait) . cols
// Arg ARG Primitive(int) i= Primitive(int) = -1
// Return value: Primitive(int)
cv_return_value_int cv__InputArray_cols_const_int(void* instance, int i) {
    try {
        int ret = reinterpret_cast<cv::_InputArray*>(instance)->cols(i);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::_InputArray::rows
// as:     cv::_InputArray::rows (method) cv::_InputArray (trait) . rows
// Arg ARG Primitive(int) i= Primitive(int) = -1
// Return value: Primitive(int)
cv_return_value_int cv__InputArray_rows_const_int(void* instance, int i) {
    try {
        int ret = reinterpret_cast<cv::_InputArray*>(instance)->rows(i);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::_InputArray::size
// as:     cv::_InputArray::size (method) cv::_InputArray (trait) . size
// Arg ARG Primitive(int) i= Primitive(int) = -1
// Return value: cv::Size (simple)
cv_return_value_SizeWrapper cv__InputArray_size_const_int(void* instance, int i) {
    try {
        cv::Size ret = reinterpret_cast<cv::_InputArray*>(instance)->size(i);
        return { Error::Code::StsOk, NULL, *reinterpret_cast<SizeWrapper*>(&ret) };
    } CVRS_CATCH(cv_return_value_SizeWrapper)
}

// parsed: cv::_InputArray::sizend
// as:     cv::_InputArray::sizend (method) cv::_InputArray (trait) . sizend
// Arg ARG RawPtr[Primitive(int)] * sz= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG Primitive(int) i= Primitive(int) = -1
// Return value: Primitive(int)
cv_return_value_int cv__InputArray_sizend_const_int_X_int(void* instance, int* sz, int i) {
    try {
        int ret = reinterpret_cast<cv::_InputArray*>(instance)->sizend(sz, i);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::_InputArray::sameSize
// as:     cv::_InputArray::sameSize (method) cv::_InputArray (trait) . sameSize
// Arg ARG cv::_InputArray (boxed) arr= cv::_InputArray (boxed) = 
// Return value: Primitive(bool)
cv_return_value_bool cv__InputArray_sameSize_const__InputArray(void* instance, void* arr) {
    try {
        bool ret = reinterpret_cast<cv::_InputArray*>(instance)->sameSize(*reinterpret_cast<const cv::_InputArray*>(arr));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::_InputArray::total
// as:     cv::_InputArray::total (method) cv::_InputArray (trait) . total
// Arg ARG Primitive(int) i= Primitive(int) = -1
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv__InputArray_total_const_int(void* instance, int i) {
    try {
        size_t ret = reinterpret_cast<cv::_InputArray*>(instance)->total(i);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::_InputArray::type
// as:     cv::_InputArray::type (method) cv::_InputArray (trait) . type
// Arg ARG Primitive(int) i= Primitive(int) = -1
// Return value: Primitive(int)
cv_return_value_int cv__InputArray_type_const_int(void* instance, int i) {
    try {
        int ret = reinterpret_cast<cv::_InputArray*>(instance)->type(i);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::_InputArray::depth
// as:     cv::_InputArray::depth (method) cv::_InputArray (trait) . depth
// Arg ARG Primitive(int) i= Primitive(int) = -1
// Return value: Primitive(int)
cv_return_value_int cv__InputArray_depth_const_int(void* instance, int i) {
    try {
        int ret = reinterpret_cast<cv::_InputArray*>(instance)->depth(i);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::_InputArray::channels
// as:     cv::_InputArray::channels (method) cv::_InputArray (trait) . channels
// Arg ARG Primitive(int) i= Primitive(int) = -1
// Return value: Primitive(int)
cv_return_value_int cv__InputArray_channels_const_int(void* instance, int i) {
    try {
        int ret = reinterpret_cast<cv::_InputArray*>(instance)->channels(i);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::_InputArray::isContinuous
// as:     cv::_InputArray::isContinuous (method) cv::_InputArray (trait) . isContinuous
// Arg ARG Primitive(int) i= Primitive(int) = -1
// Return value: Primitive(bool)
cv_return_value_bool cv__InputArray_isContinuous_const_int(void* instance, int i) {
    try {
        bool ret = reinterpret_cast<cv::_InputArray*>(instance)->isContinuous(i);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::_InputArray::isSubmatrix
// as:     cv::_InputArray::isSubmatrix (method) cv::_InputArray (trait) . isSubmatrix
// Arg ARG Primitive(int) i= Primitive(int) = -1
// Return value: Primitive(bool)
cv_return_value_bool cv__InputArray_isSubmatrix_const_int(void* instance, int i) {
    try {
        bool ret = reinterpret_cast<cv::_InputArray*>(instance)->isSubmatrix(i);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::_InputArray::empty
// as:     cv::_InputArray::empty (method) cv::_InputArray (trait) . empty
// Return value: Primitive(bool)
cv_return_value_bool cv__InputArray_empty_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::_InputArray*>(instance)->empty();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::_InputArray::copyTo
// as:     cv::_InputArray::copyTo (method) cv::_InputArray (trait) . copyTo
// Arg ARG cv::_OutputArray (boxed) arr= cv::_OutputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv__InputArray_copyTo_const__OutputArray(void* instance, void* arr) {
    try {
        reinterpret_cast<cv::_InputArray*>(instance)->copyTo(*reinterpret_cast<const cv::_OutputArray*>(arr));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::_InputArray::copyTo
// as:     cv::_InputArray::copyTo (method) cv::_InputArray (trait) . copyTo
// Arg ARG cv::_OutputArray (boxed) arr= cv::_OutputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv__InputArray_copyTo_const__OutputArray__InputArray(void* instance, void* arr, void* mask) {
    try {
        reinterpret_cast<cv::_InputArray*>(instance)->copyTo(*reinterpret_cast<const cv::_OutputArray*>(arr), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::_InputArray::offset
// as:     cv::_InputArray::offset (method) cv::_InputArray (trait) . offset
// Arg ARG Primitive(int) i= Primitive(int) = -1
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv__InputArray_offset_const_int(void* instance, int i) {
    try {
        size_t ret = reinterpret_cast<cv::_InputArray*>(instance)->offset(i);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::_InputArray::step
// as:     cv::_InputArray::step (method) cv::_InputArray (trait) . step
// Arg ARG Primitive(int) i= Primitive(int) = -1
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv__InputArray_step_const_int(void* instance, int i) {
    try {
        size_t ret = reinterpret_cast<cv::_InputArray*>(instance)->step(i);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::_InputArray::isMat
// as:     cv::_InputArray::isMat (method) cv::_InputArray (trait) . isMat
// Return value: Primitive(bool)
cv_return_value_bool cv__InputArray_isMat_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::_InputArray*>(instance)->isMat();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::_InputArray::isUMat
// as:     cv::_InputArray::isUMat (method) cv::_InputArray (trait) . isUMat
// Return value: Primitive(bool)
cv_return_value_bool cv__InputArray_isUMat_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::_InputArray*>(instance)->isUMat();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::_InputArray::isMatVector
// as:     cv::_InputArray::isMatVector (method) cv::_InputArray (trait) . isMatVector
// Return value: Primitive(bool)
cv_return_value_bool cv__InputArray_isMatVector_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::_InputArray*>(instance)->isMatVector();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::_InputArray::isUMatVector
// as:     cv::_InputArray::isUMatVector (method) cv::_InputArray (trait) . isUMatVector
// Return value: Primitive(bool)
cv_return_value_bool cv__InputArray_isUMatVector_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::_InputArray*>(instance)->isUMatVector();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::_InputArray::isMatx
// as:     cv::_InputArray::isMatx (method) cv::_InputArray (trait) . isMatx
// Return value: Primitive(bool)
cv_return_value_bool cv__InputArray_isMatx_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::_InputArray*>(instance)->isMatx();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::_InputArray::isVector
// as:     cv::_InputArray::isVector (method) cv::_InputArray (trait) . isVector
// Return value: Primitive(bool)
cv_return_value_bool cv__InputArray_isVector_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::_InputArray*>(instance)->isVector();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::_InputArray::isGpuMat
// as:     cv::_InputArray::isGpuMat (method) cv::_InputArray (trait) . isGpuMat
// Return value: Primitive(bool)
cv_return_value_bool cv__InputArray_isGpuMat_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::_InputArray*>(instance)->isGpuMat();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::_InputArray::isGpuMatVector
// as:     cv::_InputArray::isGpuMatVector (method) cv::_InputArray (trait) . isGpuMatVector
// Return value: Primitive(bool)
cv_return_value_bool cv__InputArray_isGpuMatVector_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::_InputArray*>(instance)->isGpuMatVector();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// boxed class: cv::_InputArray
void cv__InputArray_delete(void* instance) {
    delete reinterpret_cast<cv::_InputArray*>(instance);
}
// parsed: cv::_InputArray::_InputArray
// as:     cv::_InputArray::_InputArray (constructor) cv::_InputArray (trait) . default
// Return value: cv::_InputArray (boxed)
cv_return_value_void_X cv__InputArray__InputArray() {
    try {
        cv::_InputArray* ret = new cv::_InputArray();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_InputArray::_InputArray
// as:     cv::_InputArray::_InputArray (constructor) cv::_InputArray (trait) . new
// Arg ARG Primitive(int) _flags= Primitive(int) = 
// Arg ARG RawPtr[Primitive(void)] * _obj= (ptr) RawPtr[Primitive(void)] = 
// Return value: cv::_InputArray (boxed)
cv_return_value_void_X cv__InputArray__InputArray_int_void_X(int _flags, void* _obj) {
    try {
        cv::_InputArray* ret = new cv::_InputArray(_flags, _obj);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_InputArray::_InputArray
// as:     cv::_InputArray::_InputArray (constructor) cv::_InputArray (trait) . new
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: cv::_InputArray (boxed)
cv_return_value_void_X cv__InputArray__InputArray_Mat(void* m) {
    try {
        cv::_InputArray* ret = new cv::_InputArray(*reinterpret_cast<const cv::Mat*>(m));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_InputArray::_InputArray
// as:     cv::_InputArray::_InputArray (constructor) cv::_InputArray (trait) . new
// Arg ARG cv::MatExpr (boxed) expr= cv::MatExpr (boxed) = 
// Return value: cv::_InputArray (boxed)
cv_return_value_void_X cv__InputArray__InputArray_MatExpr(void* expr) {
    try {
        cv::_InputArray* ret = new cv::_InputArray(*reinterpret_cast<const cv::MatExpr*>(expr));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_InputArray::_InputArray
// as:     cv::_InputArray::_InputArray (constructor) cv::_InputArray (trait) . new
// Arg ARG Vector[cv::Mat (boxed)] vec= Vector[cv::Mat (boxed)] = 
// Return value: cv::_InputArray (boxed)
cv_return_value_void_X cv__InputArray__InputArray_VectorOfMat(void* vec) {
    try {
        cv::_InputArray* ret = new cv::_InputArray(*reinterpret_cast<const std::vector<cv::Mat>*>(vec));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_InputArray::_InputArray
// as:     cv::_InputArray::_InputArray (constructor) cv::_InputArray (trait) . new
// Arg ARG Vector[Primitive(bool)] vec= Vector[Primitive(bool)] = 
// Return value: cv::_InputArray (boxed)
cv_return_value_void_X cv__InputArray__InputArray_VectorOfbool(void* vec) {
    try {
        cv::_InputArray* ret = new cv::_InputArray(*reinterpret_cast<const std::vector<bool>*>(vec));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_InputArray::_InputArray
// as:     cv::_InputArray::_InputArray (constructor) cv::_InputArray (trait) . new
// Arg ARG Primitive(double) val= Primitive(double) = 
// Return value: cv::_InputArray (boxed)
cv_return_value_void_X cv__InputArray__InputArray_double(const double& val) {
    try {
        cv::_InputArray* ret = new cv::_InputArray(val);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_InputArray::_InputArray
// as:     cv::_InputArray::_InputArray (constructor) cv::_InputArray (trait) . new
// Arg ARG cv::UMat (boxed) um= cv::UMat (boxed) = 
// Return value: cv::_InputArray (boxed)
cv_return_value_void_X cv__InputArray__InputArray_UMat(void* um) {
    try {
        cv::_InputArray* ret = new cv::_InputArray(*reinterpret_cast<const cv::UMat*>(um));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_InputArray::_InputArray
// as:     cv::_InputArray::_InputArray (constructor) cv::_InputArray (trait) . new
// Arg ARG Vector[cv::UMat (boxed)] umv= Vector[cv::UMat (boxed)] = 
// Return value: cv::_InputArray (boxed)
cv_return_value_void_X cv__InputArray__InputArray_VectorOfUMat(void* umv) {
    try {
        cv::_InputArray* ret = new cv::_InputArray(*reinterpret_cast<const std::vector<cv::UMat>*>(umv));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::_InputOutputArray
void cv__InputOutputArray_delete(void* instance) {
    delete reinterpret_cast<cv::_InputOutputArray*>(instance);
}
// parsed: cv::_InputOutputArray::_InputOutputArray
// as:     cv::_InputOutputArray::_InputOutputArray (constructor) cv::_InputOutputArray (trait) . default
// Return value: cv::_InputOutputArray (boxed)
cv_return_value_void_X cv__InputOutputArray__InputOutputArray() {
    try {
        cv::_InputOutputArray* ret = new cv::_InputOutputArray();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_InputOutputArray::_InputOutputArray
// as:     cv::_InputOutputArray::_InputOutputArray (constructor) cv::_InputOutputArray (trait) . new
// Arg ARG Primitive(int) _flags= Primitive(int) = 
// Arg ARG RawPtr[Primitive(void)] * _obj= (ptr) RawPtr[Primitive(void)] = 
// Return value: cv::_InputOutputArray (boxed)
cv_return_value_void_X cv__InputOutputArray__InputOutputArray_int_void_X(int _flags, void* _obj) {
    try {
        cv::_InputOutputArray* ret = new cv::_InputOutputArray(_flags, _obj);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_InputOutputArray::_InputOutputArray
// as:     cv::_InputOutputArray::_InputOutputArray (constructor) cv::_InputOutputArray (trait) . new
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: cv::_InputOutputArray (boxed)
cv_return_value_void_X cv__InputOutputArray__InputOutputArray_Mat(void* m) {
    try {
        cv::_InputOutputArray* ret = new cv::_InputOutputArray(*reinterpret_cast<cv::Mat*>(m));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_InputOutputArray::_InputOutputArray
// as:     cv::_InputOutputArray::_InputOutputArray (constructor) cv::_InputOutputArray (trait) . new
// Arg ARG Vector[cv::Mat (boxed)] vec= Vector[cv::Mat (boxed)] = 
// Return value: cv::_InputOutputArray (boxed)
cv_return_value_void_X cv__InputOutputArray__InputOutputArray_VectorOfMat(void* vec) {
    try {
        cv::_InputOutputArray* ret = new cv::_InputOutputArray(*reinterpret_cast<std::vector<cv::Mat>*>(vec));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_InputOutputArray::_InputOutputArray
// as:     cv::_InputOutputArray::_InputOutputArray (constructor) cv::_InputOutputArray (trait) . new
// Arg ARG cv::UMat (boxed) m= cv::UMat (boxed) = 
// Return value: cv::_InputOutputArray (boxed)
cv_return_value_void_X cv__InputOutputArray__InputOutputArray_UMat(void* m) {
    try {
        cv::_InputOutputArray* ret = new cv::_InputOutputArray(*reinterpret_cast<cv::UMat*>(m));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_InputOutputArray::_InputOutputArray
// as:     cv::_InputOutputArray::_InputOutputArray (constructor) cv::_InputOutputArray (trait) . new
// Arg ARG Vector[cv::UMat (boxed)] vec= Vector[cv::UMat (boxed)] = 
// Return value: cv::_InputOutputArray (boxed)
cv_return_value_void_X cv__InputOutputArray__InputOutputArray_VectorOfUMat(void* vec) {
    try {
        cv::_InputOutputArray* ret = new cv::_InputOutputArray(*reinterpret_cast<std::vector<cv::UMat>*>(vec));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_OutputArray::fixedSize
// as:     cv::_OutputArray::fixedSize (method) cv::_OutputArray (trait) . fixedSize
// Return value: Primitive(bool)
cv_return_value_bool cv__OutputArray_fixedSize_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::_OutputArray*>(instance)->fixedSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::_OutputArray::fixedType
// as:     cv::_OutputArray::fixedType (method) cv::_OutputArray (trait) . fixedType
// Return value: Primitive(bool)
cv_return_value_bool cv__OutputArray_fixedType_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::_OutputArray*>(instance)->fixedType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::_OutputArray::needed
// as:     cv::_OutputArray::needed (method) cv::_OutputArray (trait) . needed
// Return value: Primitive(bool)
cv_return_value_bool cv__OutputArray_needed_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::_OutputArray*>(instance)->needed();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::_OutputArray::getMatRef
// as:     cv::_OutputArray::getMatRef (method) cv::_OutputArray (trait) . getMatRef
// Arg ARG Primitive(int) i= Primitive(int) = -1
// Return value: cv::Mat (boxed)
cv_return_value_void_X cv__OutputArray_getMatRef_const_int(void* instance, int i) {
    try {
        cv::Mat ret = reinterpret_cast<cv::_OutputArray*>(instance)->getMatRef(i);
        return { Error::Code::StsOk, NULL, new cv::Mat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_OutputArray::getUMatRef
// as:     cv::_OutputArray::getUMatRef (method) cv::_OutputArray (trait) . getUMatRef
// Arg ARG Primitive(int) i= Primitive(int) = -1
// Return value: cv::UMat (boxed)
cv_return_value_void_X cv__OutputArray_getUMatRef_const_int(void* instance, int i) {
    try {
        cv::UMat ret = reinterpret_cast<cv::_OutputArray*>(instance)->getUMatRef(i);
        return { Error::Code::StsOk, NULL, new cv::UMat(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_OutputArray::create
// as:     cv::_OutputArray::create (method) cv::_OutputArray (trait) . create
// Arg ARG cv::Size (simple) sz= cv::Size (simple) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG Primitive(int) i= Primitive(int) = -1
// Arg ARG Primitive(bool) allowTransposed= Primitive(bool) = false
// Arg ARG _OutputArray::DepthMask (enum) fixedDepthMask= _OutputArray::DepthMask (enum) = static_cast<_OutputArray::DepthMask>(0)
// Return value: Primitive(void)
cv_return_value_void cv__OutputArray_create_const_Size_int_int_bool__OutputArray_DepthMask(void* instance, SizeWrapper sz, int type, int i, bool allowTransposed, _OutputArray::DepthMask fixedDepthMask) {
    try {
        reinterpret_cast<cv::_OutputArray*>(instance)->create(*reinterpret_cast<cv::Size*>(&sz), type, i, allowTransposed, *reinterpret_cast<_OutputArray::DepthMask*>(&fixedDepthMask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::_OutputArray::create
// as:     cv::_OutputArray::create (method) cv::_OutputArray (trait) . create
// Arg ARG Primitive(int) rows= Primitive(int) = 
// Arg ARG Primitive(int) cols= Primitive(int) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG Primitive(int) i= Primitive(int) = -1
// Arg ARG Primitive(bool) allowTransposed= Primitive(bool) = false
// Arg ARG _OutputArray::DepthMask (enum) fixedDepthMask= _OutputArray::DepthMask (enum) = static_cast<_OutputArray::DepthMask>(0)
// Return value: Primitive(void)
cv_return_value_void cv__OutputArray_create_const_int_int_int_int_bool__OutputArray_DepthMask(void* instance, int rows, int cols, int type, int i, bool allowTransposed, _OutputArray::DepthMask fixedDepthMask) {
    try {
        reinterpret_cast<cv::_OutputArray*>(instance)->create(rows, cols, type, i, allowTransposed, *reinterpret_cast<_OutputArray::DepthMask*>(&fixedDepthMask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::_OutputArray::create
// as:     cv::_OutputArray::create (method) cv::_OutputArray (trait) . create
// Arg ARG Primitive(int) dims= Primitive(int) = 
// Arg ARG RawPtr[Primitive(int)] * size= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG Primitive(int) i= Primitive(int) = -1
// Arg ARG Primitive(bool) allowTransposed= Primitive(bool) = false
// Arg ARG _OutputArray::DepthMask (enum) fixedDepthMask= _OutputArray::DepthMask (enum) = static_cast<_OutputArray::DepthMask>(0)
// Return value: Primitive(void)
cv_return_value_void cv__OutputArray_create_const_int_const_int_X_int_int_bool__OutputArray_DepthMask(void* instance, int dims, const int* size, int type, int i, bool allowTransposed, _OutputArray::DepthMask fixedDepthMask) {
    try {
        reinterpret_cast<cv::_OutputArray*>(instance)->create(dims, size, type, i, allowTransposed, *reinterpret_cast<_OutputArray::DepthMask*>(&fixedDepthMask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::_OutputArray::createSameSize
// as:     cv::_OutputArray::createSameSize (method) cv::_OutputArray (trait) . createSameSize
// Arg ARG cv::_InputArray (boxed) arr= cv::_InputArray (boxed) = 
// Arg ARG Primitive(int) mtype= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv__OutputArray_createSameSize_const__InputArray_int(void* instance, void* arr, int mtype) {
    try {
        reinterpret_cast<cv::_OutputArray*>(instance)->createSameSize(*reinterpret_cast<const cv::_InputArray*>(arr), mtype);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::_OutputArray::release
// as:     cv::_OutputArray::release (method) cv::_OutputArray (trait) . release
// Return value: Primitive(void)
cv_return_value_void cv__OutputArray_release_const(void* instance) {
    try {
        reinterpret_cast<cv::_OutputArray*>(instance)->release();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::_OutputArray::clear
// as:     cv::_OutputArray::clear (method) cv::_OutputArray (trait) . clear
// Return value: Primitive(void)
cv_return_value_void cv__OutputArray_clear_const(void* instance) {
    try {
        reinterpret_cast<cv::_OutputArray*>(instance)->clear();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::_OutputArray::setTo
// as:     cv::_OutputArray::setTo (method) cv::_OutputArray (trait) . setTo
// Arg ARG cv::_InputArray (boxed) value= cv::_InputArray (boxed) = 
// Arg ARG cv::_InputArray (boxed) mask= cv::_InputArray (boxed) = _InputArray()
// Return value: Primitive(void)
cv_return_value_void cv__OutputArray_setTo_const__InputArray__InputArray(void* instance, void* value, void* mask) {
    try {
        reinterpret_cast<cv::_OutputArray*>(instance)->setTo(*reinterpret_cast<const cv::_InputArray*>(value), *reinterpret_cast<const cv::_InputArray*>(mask));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::_OutputArray::assign
// as:     cv::_OutputArray::assign (method) cv::_OutputArray (trait) . assign
// Arg ARG cv::UMat (boxed) u= cv::UMat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv__OutputArray_assign_const_UMat(void* instance, void* u) {
    try {
        reinterpret_cast<cv::_OutputArray*>(instance)->assign(*reinterpret_cast<const cv::UMat*>(u));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::_OutputArray::assign
// as:     cv::_OutputArray::assign (method) cv::_OutputArray (trait) . assign
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv__OutputArray_assign_const_Mat(void* instance, void* m) {
    try {
        reinterpret_cast<cv::_OutputArray*>(instance)->assign(*reinterpret_cast<const cv::Mat*>(m));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::_OutputArray::assign
// as:     cv::_OutputArray::assign (method) cv::_OutputArray (trait) . assign
// Arg ARG Vector[cv::UMat (boxed)] v= Vector[cv::UMat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv__OutputArray_assign_const_VectorOfUMat(void* instance, void* v) {
    try {
        reinterpret_cast<cv::_OutputArray*>(instance)->assign(*reinterpret_cast<const std::vector<cv::UMat>*>(v));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::_OutputArray::assign
// as:     cv::_OutputArray::assign (method) cv::_OutputArray (trait) . assign
// Arg ARG Vector[cv::Mat (boxed)] v= Vector[cv::Mat (boxed)] = 
// Return value: Primitive(void)
cv_return_value_void cv__OutputArray_assign_const_VectorOfMat(void* instance, void* v) {
    try {
        reinterpret_cast<cv::_OutputArray*>(instance)->assign(*reinterpret_cast<const std::vector<cv::Mat>*>(v));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::_OutputArray::move
// as:     cv::_OutputArray::move (method) cv::_OutputArray (trait) . move
// Arg ARG cv::UMat (boxed) u= cv::UMat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv__OutputArray_move_const_UMat(void* instance, void* u) {
    try {
        reinterpret_cast<cv::_OutputArray*>(instance)->move(*reinterpret_cast<cv::UMat*>(u));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::_OutputArray::move
// as:     cv::_OutputArray::move (method) cv::_OutputArray (trait) . move
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: Primitive(void)
cv_return_value_void cv__OutputArray_move_const_Mat(void* instance, void* m) {
    try {
        reinterpret_cast<cv::_OutputArray*>(instance)->move(*reinterpret_cast<cv::Mat*>(m));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::_OutputArray
void cv__OutputArray_delete(void* instance) {
    delete reinterpret_cast<cv::_OutputArray*>(instance);
}
// parsed: cv::_OutputArray::_OutputArray
// as:     cv::_OutputArray::_OutputArray (constructor) cv::_OutputArray (trait) . default
// Return value: cv::_OutputArray (boxed)
cv_return_value_void_X cv__OutputArray__OutputArray() {
    try {
        cv::_OutputArray* ret = new cv::_OutputArray();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_OutputArray::_OutputArray
// as:     cv::_OutputArray::_OutputArray (constructor) cv::_OutputArray (trait) . new
// Arg ARG Primitive(int) _flags= Primitive(int) = 
// Arg ARG RawPtr[Primitive(void)] * _obj= (ptr) RawPtr[Primitive(void)] = 
// Return value: cv::_OutputArray (boxed)
cv_return_value_void_X cv__OutputArray__OutputArray_int_void_X(int _flags, void* _obj) {
    try {
        cv::_OutputArray* ret = new cv::_OutputArray(_flags, _obj);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_OutputArray::_OutputArray
// as:     cv::_OutputArray::_OutputArray (constructor) cv::_OutputArray (trait) . new
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: cv::_OutputArray (boxed)
cv_return_value_void_X cv__OutputArray__OutputArray_Mat(void* m) {
    try {
        cv::_OutputArray* ret = new cv::_OutputArray(*reinterpret_cast<cv::Mat*>(m));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_OutputArray::_OutputArray
// as:     cv::_OutputArray::_OutputArray (constructor) cv::_OutputArray (trait) . new
// Arg ARG Vector[cv::Mat (boxed)] vec= Vector[cv::Mat (boxed)] = 
// Return value: cv::_OutputArray (boxed)
cv_return_value_void_X cv__OutputArray__OutputArray_VectorOfMat(void* vec) {
    try {
        cv::_OutputArray* ret = new cv::_OutputArray(*reinterpret_cast<std::vector<cv::Mat>*>(vec));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_OutputArray::_OutputArray
// as:     cv::_OutputArray::_OutputArray (constructor) cv::_OutputArray (trait) . new
// Arg ARG cv::UMat (boxed) m= cv::UMat (boxed) = 
// Return value: cv::_OutputArray (boxed)
cv_return_value_void_X cv__OutputArray__OutputArray_UMat(void* m) {
    try {
        cv::_OutputArray* ret = new cv::_OutputArray(*reinterpret_cast<cv::UMat*>(m));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::_OutputArray::_OutputArray
// as:     cv::_OutputArray::_OutputArray (constructor) cv::_OutputArray (trait) . new
// Arg ARG Vector[cv::UMat (boxed)] vec= Vector[cv::UMat (boxed)] = 
// Return value: cv::_OutputArray (boxed)
cv_return_value_void_X cv__OutputArray__OutputArray_VectorOfUMat(void* vec) {
    try {
        cv::_OutputArray* ret = new cv::_OutputArray(*reinterpret_cast<std::vector<cv::UMat>*>(vec));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::detail::CheckContext
void cv_CheckContext_delete(void* instance) {
    delete reinterpret_cast<cv::detail::CheckContext*>(instance);
}
// boxed class: cv::instr::NodeData
void cv_NodeData_delete(void* instance) {
    delete reinterpret_cast<cv::instr::NodeData*>(instance);
}
// parsed: cv::instr::NodeData::NodeData
// as:     cv::instr::NodeData::NodeData (constructor) cv::instr::NodeData . new
// Arg ARG RawPtr[Primitive(char)] * funName= (ptr) RawPtr[Primitive(char)] = 0
// Arg ARG RawPtr[Primitive(char)] * fileName= (ptr) RawPtr[Primitive(char)] = NULL
// Arg ARG Primitive(int) lineNum= Primitive(int) = 0
// Arg ARG RawPtr[Primitive(void)] * retAddress= (ptr) RawPtr[Primitive(void)] = NULL
// Arg ARG Primitive(bool) alwaysExpand= Primitive(bool) = false
// Arg ARG instr::TYPE (enum) instrType= instr::TYPE (enum) = TYPE_GENERAL
// Arg ARG instr::IMPL (enum) implType= instr::IMPL (enum) = IMPL_PLAIN
// Return value: cv::instr::NodeData (boxed)
cv_return_value_void_X cv_instr_NodeData_NodeData_const_char_X_const_char_X_int_void_X_bool_TYPE_IMPL(const char* funName, const char* fileName, int lineNum, void* retAddress, bool alwaysExpand, instr::TYPE instrType, instr::IMPL implType) {
    try {
        cv::instr::NodeData* ret = new cv::instr::NodeData(funName, fileName, lineNum, retAddress, alwaysExpand, *reinterpret_cast<instr::TYPE*>(&instrType), *reinterpret_cast<instr::IMPL*>(&implType));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::instr::NodeData::NodeData
// as:     cv::instr::NodeData::NodeData (constructor) cv::instr::NodeData . copy
// Arg ARG cv::instr::NodeData (boxed) ref= cv::instr::NodeData (boxed) = 
// Return value: cv::instr::NodeData (boxed)
cv_return_value_void_X cv_instr_NodeData_NodeData_NodeData(void* ref) {
    try {
        cv::instr::NodeData* ret = new cv::instr::NodeData(*reinterpret_cast<cv::instr::NodeData*>(ref));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::instr::NodeData::getTotalMs
// as:     cv::instr::NodeData::getTotalMs (method) cv::instr::NodeData . getTotalMs
// Return value: Primitive(double)
cv_return_value_double cv_instr_NodeData_getTotalMs_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::instr::NodeData*>(instance)->getTotalMs();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// parsed: cv::instr::NodeData::getMeanMs
// as:     cv::instr::NodeData::getMeanMs (method) cv::instr::NodeData . getMeanMs
// Return value: Primitive(double)
cv_return_value_double cv_instr_NodeData_getMeanMs_const(void* instance) {
    try {
        double ret = reinterpret_cast<cv::instr::NodeData*>(instance)->getMeanMs();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_double)
}

// boxed class: cv::instr::NodeDataTls
void cv_NodeDataTls_delete(void* instance) {
    delete reinterpret_cast<cv::instr::NodeDataTls*>(instance);
}
// parsed: cv::instr::NodeDataTls::NodeDataTls
// as:     cv::instr::NodeDataTls::NodeDataTls (constructor) cv::instr::NodeDataTls . default
// Return value: cv::instr::NodeDataTls (boxed)
cv_return_value_void_X cv_instr_NodeDataTls_NodeDataTls() {
    try {
        cv::instr::NodeDataTls* ret = new cv::instr::NodeDataTls();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::internal::WriteStructContext
void cv_WriteStructContext_delete(void* instance) {
    delete reinterpret_cast<cv::internal::WriteStructContext*>(instance);
}
// parsed: cv::internal::WriteStructContext::WriteStructContext
// as:     cv::internal::WriteStructContext::WriteStructContext (constructor) cv::internal::WriteStructContext . new
// Arg ARG cv::FileStorage (boxed) _fs= cv::FileStorage (boxed) = 
// Arg ARG string name= string = 
// Arg ARG Primitive(int) flags= Primitive(int) = 
// Arg ARG string typeName= string = String()
// Return value: cv::internal::WriteStructContext (boxed)
cv_return_value_void_X cv_internal_WriteStructContext_WriteStructContext_FileStorage_String_int_String(void* _fs, const char* name, int flags, const char* typeName) {
    try {
        cv::internal::WriteStructContext* ret = new cv::internal::WriteStructContext(*reinterpret_cast<cv::FileStorage*>(_fs), String(name), flags, String(typeName));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::ocl::Context
void cv_Context_delete(void* instance) {
    delete reinterpret_cast<cv::ocl::Context*>(instance);
}
// parsed: cv::ocl::Context::Context
// as:     cv::ocl::Context::Context (constructor) cv::ocl::Context . default
// Return value: cv::ocl::Context (boxed)
cv_return_value_void_X cv_ocl_Context_Context() {
    try {
        cv::ocl::Context* ret = new cv::ocl::Context();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Context::Context
// as:     cv::ocl::Context::Context (constructor) cv::ocl::Context . new
// Arg ARG Primitive(int) dtype= Primitive(int) = 
// Return value: cv::ocl::Context (boxed)
cv_return_value_void_X cv_ocl_Context_Context_int(int dtype) {
    try {
        cv::ocl::Context* ret = new cv::ocl::Context(dtype);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Context::Context
// as:     cv::ocl::Context::Context (constructor) cv::ocl::Context . copy
// Arg ARG cv::ocl::Context (boxed) c= cv::ocl::Context (boxed) = 
// Return value: cv::ocl::Context (boxed)
cv_return_value_void_X cv_ocl_Context_Context_Context(void* c) {
    try {
        cv::ocl::Context* ret = new cv::ocl::Context(*reinterpret_cast<const cv::ocl::Context*>(c));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Context::create
// as:     cv::ocl::Context::create (method) cv::ocl::Context . create
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Context_create(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Context*>(instance)->create();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Context::create
// as:     cv::ocl::Context::create (method) cv::ocl::Context . create
// Arg ARG Primitive(int) dtype= Primitive(int) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Context_create_int(void* instance, int dtype) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Context*>(instance)->create(dtype);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Context::ndevices
// as:     cv::ocl::Context::ndevices (method) cv::ocl::Context . ndevices
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_ocl_Context_ndevices_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::ocl::Context*>(instance)->ndevices();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::ocl::Context::device
// as:     cv::ocl::Context::device (method) cv::ocl::Context . device
// Arg ARG Primitive(size_t) idx= Primitive(size_t) = 
// Return value: cv::ocl::Device (boxed)
cv_return_value_void_X cv_ocl_Context_device_const_size_t(void* instance, std::size_t idx) {
    try {
        cv::ocl::Device ret = reinterpret_cast<cv::ocl::Context*>(instance)->device(idx);
        return { Error::Code::StsOk, NULL, new cv::ocl::Device(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Context::ptr
// as:     cv::ocl::Context::ptr (method) cv::ocl::Context . ptr
// Return value: RawPtr[Primitive(void)]
cv_return_value_void_X cv_ocl_Context_ptr_const(void* instance) {
    try {
        void* ret = reinterpret_cast<cv::ocl::Context*>(instance)->ptr();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Context::useSVM
// as:     cv::ocl::Context::useSVM (method) cv::ocl::Context . useSVM
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Context_useSVM_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Context*>(instance)->useSVM();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Context::setUseSVM
// as:     cv::ocl::Context::setUseSVM (method) cv::ocl::Context . setUseSVM
// Arg ARG Primitive(bool) enabled= Primitive(bool) = 
// Return value: Primitive(void)
cv_return_value_void cv_ocl_Context_setUseSVM_bool(void* instance, bool enabled) {
    try {
        reinterpret_cast<cv::ocl::Context*>(instance)->setUseSVM(enabled);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::ocl::Device
void cv_Device_delete(void* instance) {
    delete reinterpret_cast<cv::ocl::Device*>(instance);
}
// parsed: cv::ocl::Device::Device
// as:     cv::ocl::Device::Device (constructor) cv::ocl::Device . default
// Return value: cv::ocl::Device (boxed)
cv_return_value_void_X cv_ocl_Device_Device() {
    try {
        cv::ocl::Device* ret = new cv::ocl::Device();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Device::Device
// as:     cv::ocl::Device::Device (constructor) cv::ocl::Device . new
// Arg ARG RawPtr[Primitive(void)] * d= (ptr) RawPtr[Primitive(void)] = 
// Return value: cv::ocl::Device (boxed)
cv_return_value_void_X cv_ocl_Device_Device_void_X(void* d) {
    try {
        cv::ocl::Device* ret = new cv::ocl::Device(d);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Device::Device
// as:     cv::ocl::Device::Device (constructor) cv::ocl::Device . copy
// Arg ARG cv::ocl::Device (boxed) d= cv::ocl::Device (boxed) = 
// Return value: cv::ocl::Device (boxed)
cv_return_value_void_X cv_ocl_Device_Device_Device(void* d) {
    try {
        cv::ocl::Device* ret = new cv::ocl::Device(*reinterpret_cast<const cv::ocl::Device*>(d));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Device::set
// as:     cv::ocl::Device::set (method) cv::ocl::Device . set
// Arg ARG RawPtr[Primitive(void)] * d= (ptr) RawPtr[Primitive(void)] = 
// Return value: Primitive(void)
cv_return_value_void cv_ocl_Device_set_void_X(void* instance, void* d) {
    try {
        reinterpret_cast<cv::ocl::Device*>(instance)->set(d);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ocl::Device::name
// as:     cv::ocl::Device::name (method) cv::ocl::Device . name
// Return value: string
cv_return_value_char_X cv_ocl_Device_name_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::ocl::Device*>(instance)->name();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::ocl::Device::extensions
// as:     cv::ocl::Device::extensions (method) cv::ocl::Device . extensions
// Return value: string
cv_return_value_char_X cv_ocl_Device_extensions_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::ocl::Device*>(instance)->extensions();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::ocl::Device::isExtensionSupported
// as:     cv::ocl::Device::isExtensionSupported (method) cv::ocl::Device . isExtensionSupported
// Arg ARG string extensionName= string = 
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Device_isExtensionSupported_const_String(void* instance, const char* extensionName) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Device*>(instance)->isExtensionSupported(String(extensionName));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Device::version
// as:     cv::ocl::Device::version (method) cv::ocl::Device . version
// Return value: string
cv_return_value_char_X cv_ocl_Device_version_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::ocl::Device*>(instance)->version();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::ocl::Device::vendorName
// as:     cv::ocl::Device::vendorName (method) cv::ocl::Device . vendorName
// Return value: string
cv_return_value_char_X cv_ocl_Device_vendorName_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::ocl::Device*>(instance)->vendorName();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::ocl::Device::OpenCL_C_Version
// as:     cv::ocl::Device::OpenCL_C_Version (method) cv::ocl::Device . OpenCL_C_Version
// Return value: string
cv_return_value_char_X cv_ocl_Device_OpenCL_C_Version_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::ocl::Device*>(instance)->OpenCL_C_Version();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::ocl::Device::OpenCLVersion
// as:     cv::ocl::Device::OpenCLVersion (method) cv::ocl::Device . OpenCLVersion
// Return value: string
cv_return_value_char_X cv_ocl_Device_OpenCLVersion_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::ocl::Device*>(instance)->OpenCLVersion();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::ocl::Device::deviceVersionMajor
// as:     cv::ocl::Device::deviceVersionMajor (method) cv::ocl::Device . deviceVersionMajor
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_deviceVersionMajor_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->deviceVersionMajor();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::deviceVersionMinor
// as:     cv::ocl::Device::deviceVersionMinor (method) cv::ocl::Device . deviceVersionMinor
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_deviceVersionMinor_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->deviceVersionMinor();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::driverVersion
// as:     cv::ocl::Device::driverVersion (method) cv::ocl::Device . driverVersion
// Return value: string
cv_return_value_char_X cv_ocl_Device_driverVersion_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::ocl::Device*>(instance)->driverVersion();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::ocl::Device::ptr
// as:     cv::ocl::Device::ptr (method) cv::ocl::Device . ptr
// Return value: RawPtr[Primitive(void)]
cv_return_value_void_X cv_ocl_Device_ptr_const(void* instance) {
    try {
        void* ret = reinterpret_cast<cv::ocl::Device*>(instance)->ptr();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Device::type
// as:     cv::ocl::Device::type (method) cv::ocl::Device . type
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_type_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->type();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::addressBits
// as:     cv::ocl::Device::addressBits (method) cv::ocl::Device . addressBits
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_addressBits_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->addressBits();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::available
// as:     cv::ocl::Device::available (method) cv::ocl::Device . available
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Device_available_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Device*>(instance)->available();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Device::compilerAvailable
// as:     cv::ocl::Device::compilerAvailable (method) cv::ocl::Device . compilerAvailable
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Device_compilerAvailable_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Device*>(instance)->compilerAvailable();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Device::linkerAvailable
// as:     cv::ocl::Device::linkerAvailable (method) cv::ocl::Device . linkerAvailable
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Device_linkerAvailable_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Device*>(instance)->linkerAvailable();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Device::doubleFPConfig
// as:     cv::ocl::Device::doubleFPConfig (method) cv::ocl::Device . doubleFPConfig
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_doubleFPConfig_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->doubleFPConfig();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::singleFPConfig
// as:     cv::ocl::Device::singleFPConfig (method) cv::ocl::Device . singleFPConfig
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_singleFPConfig_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->singleFPConfig();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::halfFPConfig
// as:     cv::ocl::Device::halfFPConfig (method) cv::ocl::Device . halfFPConfig
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_halfFPConfig_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->halfFPConfig();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::endianLittle
// as:     cv::ocl::Device::endianLittle (method) cv::ocl::Device . endianLittle
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Device_endianLittle_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Device*>(instance)->endianLittle();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Device::errorCorrectionSupport
// as:     cv::ocl::Device::errorCorrectionSupport (method) cv::ocl::Device . errorCorrectionSupport
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Device_errorCorrectionSupport_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Device*>(instance)->errorCorrectionSupport();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Device::executionCapabilities
// as:     cv::ocl::Device::executionCapabilities (method) cv::ocl::Device . executionCapabilities
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_executionCapabilities_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->executionCapabilities();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::globalMemCacheSize
// as:     cv::ocl::Device::globalMemCacheSize (method) cv::ocl::Device . globalMemCacheSize
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_ocl_Device_globalMemCacheSize_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::ocl::Device*>(instance)->globalMemCacheSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::ocl::Device::globalMemCacheType
// as:     cv::ocl::Device::globalMemCacheType (method) cv::ocl::Device . globalMemCacheType
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_globalMemCacheType_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->globalMemCacheType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::globalMemCacheLineSize
// as:     cv::ocl::Device::globalMemCacheLineSize (method) cv::ocl::Device . globalMemCacheLineSize
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_globalMemCacheLineSize_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->globalMemCacheLineSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::globalMemSize
// as:     cv::ocl::Device::globalMemSize (method) cv::ocl::Device . globalMemSize
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_ocl_Device_globalMemSize_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::ocl::Device*>(instance)->globalMemSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::ocl::Device::localMemSize
// as:     cv::ocl::Device::localMemSize (method) cv::ocl::Device . localMemSize
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_ocl_Device_localMemSize_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::ocl::Device*>(instance)->localMemSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::ocl::Device::localMemType
// as:     cv::ocl::Device::localMemType (method) cv::ocl::Device . localMemType
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_localMemType_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->localMemType();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::hostUnifiedMemory
// as:     cv::ocl::Device::hostUnifiedMemory (method) cv::ocl::Device . hostUnifiedMemory
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Device_hostUnifiedMemory_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Device*>(instance)->hostUnifiedMemory();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Device::imageSupport
// as:     cv::ocl::Device::imageSupport (method) cv::ocl::Device . imageSupport
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Device_imageSupport_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Device*>(instance)->imageSupport();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Device::imageFromBufferSupport
// as:     cv::ocl::Device::imageFromBufferSupport (method) cv::ocl::Device . imageFromBufferSupport
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Device_imageFromBufferSupport_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Device*>(instance)->imageFromBufferSupport();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Device::imagePitchAlignment
// as:     cv::ocl::Device::imagePitchAlignment (method) cv::ocl::Device . imagePitchAlignment
// Return value: Primitive(uint)
cv_return_value_unsigned_int cv_ocl_Device_imagePitchAlignment_const(void* instance) {
    try {
        uint ret = reinterpret_cast<cv::ocl::Device*>(instance)->imagePitchAlignment();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_unsigned_int)
}

// parsed: cv::ocl::Device::imageBaseAddressAlignment
// as:     cv::ocl::Device::imageBaseAddressAlignment (method) cv::ocl::Device . imageBaseAddressAlignment
// Return value: Primitive(uint)
cv_return_value_unsigned_int cv_ocl_Device_imageBaseAddressAlignment_const(void* instance) {
    try {
        uint ret = reinterpret_cast<cv::ocl::Device*>(instance)->imageBaseAddressAlignment();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_unsigned_int)
}

// parsed: cv::ocl::Device::intelSubgroupsSupport
// as:     cv::ocl::Device::intelSubgroupsSupport (method) cv::ocl::Device . intelSubgroupsSupport
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Device_intelSubgroupsSupport_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Device*>(instance)->intelSubgroupsSupport();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Device::image2DMaxWidth
// as:     cv::ocl::Device::image2DMaxWidth (method) cv::ocl::Device . image2DMaxWidth
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_ocl_Device_image2DMaxWidth_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::ocl::Device*>(instance)->image2DMaxWidth();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::ocl::Device::image2DMaxHeight
// as:     cv::ocl::Device::image2DMaxHeight (method) cv::ocl::Device . image2DMaxHeight
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_ocl_Device_image2DMaxHeight_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::ocl::Device*>(instance)->image2DMaxHeight();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::ocl::Device::image3DMaxWidth
// as:     cv::ocl::Device::image3DMaxWidth (method) cv::ocl::Device . image3DMaxWidth
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_ocl_Device_image3DMaxWidth_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::ocl::Device*>(instance)->image3DMaxWidth();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::ocl::Device::image3DMaxHeight
// as:     cv::ocl::Device::image3DMaxHeight (method) cv::ocl::Device . image3DMaxHeight
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_ocl_Device_image3DMaxHeight_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::ocl::Device*>(instance)->image3DMaxHeight();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::ocl::Device::image3DMaxDepth
// as:     cv::ocl::Device::image3DMaxDepth (method) cv::ocl::Device . image3DMaxDepth
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_ocl_Device_image3DMaxDepth_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::ocl::Device*>(instance)->image3DMaxDepth();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::ocl::Device::imageMaxBufferSize
// as:     cv::ocl::Device::imageMaxBufferSize (method) cv::ocl::Device . imageMaxBufferSize
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_ocl_Device_imageMaxBufferSize_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::ocl::Device*>(instance)->imageMaxBufferSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::ocl::Device::imageMaxArraySize
// as:     cv::ocl::Device::imageMaxArraySize (method) cv::ocl::Device . imageMaxArraySize
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_ocl_Device_imageMaxArraySize_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::ocl::Device*>(instance)->imageMaxArraySize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::ocl::Device::vendorID
// as:     cv::ocl::Device::vendorID (method) cv::ocl::Device . vendorID
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_vendorID_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->vendorID();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::isAMD
// as:     cv::ocl::Device::isAMD (method) cv::ocl::Device . isAMD
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Device_isAMD_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Device*>(instance)->isAMD();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Device::isIntel
// as:     cv::ocl::Device::isIntel (method) cv::ocl::Device . isIntel
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Device_isIntel_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Device*>(instance)->isIntel();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Device::isNVidia
// as:     cv::ocl::Device::isNVidia (method) cv::ocl::Device . isNVidia
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Device_isNVidia_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Device*>(instance)->isNVidia();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Device::maxClockFrequency
// as:     cv::ocl::Device::maxClockFrequency (method) cv::ocl::Device . maxClockFrequency
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_maxClockFrequency_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->maxClockFrequency();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::maxComputeUnits
// as:     cv::ocl::Device::maxComputeUnits (method) cv::ocl::Device . maxComputeUnits
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_maxComputeUnits_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->maxComputeUnits();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::maxConstantArgs
// as:     cv::ocl::Device::maxConstantArgs (method) cv::ocl::Device . maxConstantArgs
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_maxConstantArgs_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->maxConstantArgs();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::maxConstantBufferSize
// as:     cv::ocl::Device::maxConstantBufferSize (method) cv::ocl::Device . maxConstantBufferSize
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_ocl_Device_maxConstantBufferSize_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::ocl::Device*>(instance)->maxConstantBufferSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::ocl::Device::maxMemAllocSize
// as:     cv::ocl::Device::maxMemAllocSize (method) cv::ocl::Device . maxMemAllocSize
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_ocl_Device_maxMemAllocSize_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::ocl::Device*>(instance)->maxMemAllocSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::ocl::Device::maxParameterSize
// as:     cv::ocl::Device::maxParameterSize (method) cv::ocl::Device . maxParameterSize
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_ocl_Device_maxParameterSize_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::ocl::Device*>(instance)->maxParameterSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::ocl::Device::maxReadImageArgs
// as:     cv::ocl::Device::maxReadImageArgs (method) cv::ocl::Device . maxReadImageArgs
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_maxReadImageArgs_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->maxReadImageArgs();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::maxWriteImageArgs
// as:     cv::ocl::Device::maxWriteImageArgs (method) cv::ocl::Device . maxWriteImageArgs
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_maxWriteImageArgs_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->maxWriteImageArgs();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::maxSamplers
// as:     cv::ocl::Device::maxSamplers (method) cv::ocl::Device . maxSamplers
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_maxSamplers_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->maxSamplers();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::maxWorkGroupSize
// as:     cv::ocl::Device::maxWorkGroupSize (method) cv::ocl::Device . maxWorkGroupSize
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_ocl_Device_maxWorkGroupSize_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::ocl::Device*>(instance)->maxWorkGroupSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::ocl::Device::maxWorkItemDims
// as:     cv::ocl::Device::maxWorkItemDims (method) cv::ocl::Device . maxWorkItemDims
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_maxWorkItemDims_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->maxWorkItemDims();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::maxWorkItemSizes
// as:     cv::ocl::Device::maxWorkItemSizes (method) cv::ocl::Device . maxWorkItemSizes
// Arg ARG RawPtr[Primitive(size_t)] * unnamed_arg= (ptr) RawPtr[Primitive(size_t)] = 
// Return value: Primitive(void)
cv_return_value_void cv_ocl_Device_maxWorkItemSizes_const_size_t_X(void* instance, size_t* unnamed_arg) {
    try {
        reinterpret_cast<cv::ocl::Device*>(instance)->maxWorkItemSizes(unnamed_arg);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ocl::Device::memBaseAddrAlign
// as:     cv::ocl::Device::memBaseAddrAlign (method) cv::ocl::Device . memBaseAddrAlign
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_memBaseAddrAlign_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->memBaseAddrAlign();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::nativeVectorWidthChar
// as:     cv::ocl::Device::nativeVectorWidthChar (method) cv::ocl::Device . nativeVectorWidthChar
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_nativeVectorWidthChar_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->nativeVectorWidthChar();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::nativeVectorWidthShort
// as:     cv::ocl::Device::nativeVectorWidthShort (method) cv::ocl::Device . nativeVectorWidthShort
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_nativeVectorWidthShort_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->nativeVectorWidthShort();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::nativeVectorWidthInt
// as:     cv::ocl::Device::nativeVectorWidthInt (method) cv::ocl::Device . nativeVectorWidthInt
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_nativeVectorWidthInt_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->nativeVectorWidthInt();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::nativeVectorWidthLong
// as:     cv::ocl::Device::nativeVectorWidthLong (method) cv::ocl::Device . nativeVectorWidthLong
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_nativeVectorWidthLong_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->nativeVectorWidthLong();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::nativeVectorWidthFloat
// as:     cv::ocl::Device::nativeVectorWidthFloat (method) cv::ocl::Device . nativeVectorWidthFloat
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_nativeVectorWidthFloat_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->nativeVectorWidthFloat();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::nativeVectorWidthDouble
// as:     cv::ocl::Device::nativeVectorWidthDouble (method) cv::ocl::Device . nativeVectorWidthDouble
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_nativeVectorWidthDouble_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->nativeVectorWidthDouble();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::nativeVectorWidthHalf
// as:     cv::ocl::Device::nativeVectorWidthHalf (method) cv::ocl::Device . nativeVectorWidthHalf
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_nativeVectorWidthHalf_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->nativeVectorWidthHalf();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::preferredVectorWidthChar
// as:     cv::ocl::Device::preferredVectorWidthChar (method) cv::ocl::Device . preferredVectorWidthChar
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_preferredVectorWidthChar_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->preferredVectorWidthChar();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::preferredVectorWidthShort
// as:     cv::ocl::Device::preferredVectorWidthShort (method) cv::ocl::Device . preferredVectorWidthShort
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_preferredVectorWidthShort_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->preferredVectorWidthShort();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::preferredVectorWidthInt
// as:     cv::ocl::Device::preferredVectorWidthInt (method) cv::ocl::Device . preferredVectorWidthInt
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_preferredVectorWidthInt_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->preferredVectorWidthInt();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::preferredVectorWidthLong
// as:     cv::ocl::Device::preferredVectorWidthLong (method) cv::ocl::Device . preferredVectorWidthLong
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_preferredVectorWidthLong_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->preferredVectorWidthLong();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::preferredVectorWidthFloat
// as:     cv::ocl::Device::preferredVectorWidthFloat (method) cv::ocl::Device . preferredVectorWidthFloat
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_preferredVectorWidthFloat_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->preferredVectorWidthFloat();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::preferredVectorWidthDouble
// as:     cv::ocl::Device::preferredVectorWidthDouble (method) cv::ocl::Device . preferredVectorWidthDouble
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_preferredVectorWidthDouble_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->preferredVectorWidthDouble();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::preferredVectorWidthHalf
// as:     cv::ocl::Device::preferredVectorWidthHalf (method) cv::ocl::Device . preferredVectorWidthHalf
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Device_preferredVectorWidthHalf_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::Device*>(instance)->preferredVectorWidthHalf();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Device::printfBufferSize
// as:     cv::ocl::Device::printfBufferSize (method) cv::ocl::Device . printfBufferSize
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_ocl_Device_printfBufferSize_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::ocl::Device*>(instance)->printfBufferSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::ocl::Device::profilingTimerResolution
// as:     cv::ocl::Device::profilingTimerResolution (method) cv::ocl::Device . profilingTimerResolution
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_ocl_Device_profilingTimerResolution_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::ocl::Device*>(instance)->profilingTimerResolution();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::ocl::Device::getDefault
// as:     cv::ocl::Device::getDefault (method) cv::ocl::Device . getDefault
// Return value: cv::ocl::Device (boxed)
cv_return_value_void_X cv_ocl_Device_getDefault() {
    try {
        cv::ocl::Device ret = cv::ocl::Device::getDefault();
        return { Error::Code::StsOk, NULL, new cv::ocl::Device(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::ocl::Image2D
void cv_Image2D_delete(void* instance) {
    delete reinterpret_cast<cv::ocl::Image2D*>(instance);
}
// parsed: cv::ocl::Image2D::Image2D
// as:     cv::ocl::Image2D::Image2D (constructor) cv::ocl::Image2D . default
// Return value: cv::ocl::Image2D (boxed)
cv_return_value_void_X cv_ocl_Image2D_Image2D() {
    try {
        cv::ocl::Image2D* ret = new cv::ocl::Image2D();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Image2D::Image2D
// as:     cv::ocl::Image2D::Image2D (constructor) cv::ocl::Image2D . new
// Arg ARG cv::UMat (boxed) src= cv::UMat (boxed) = 
// Arg ARG Primitive(bool) norm= Primitive(bool) = false
// Arg ARG Primitive(bool) alias= Primitive(bool) = false
// Return value: cv::ocl::Image2D (boxed)
cv_return_value_void_X cv_ocl_Image2D_Image2D_UMat_bool_bool(void* src, bool norm, bool alias) {
    try {
        cv::ocl::Image2D* ret = new cv::ocl::Image2D(*reinterpret_cast<const cv::UMat*>(src), norm, alias);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Image2D::Image2D
// as:     cv::ocl::Image2D::Image2D (constructor) cv::ocl::Image2D . copy
// Arg ARG cv::ocl::Image2D (boxed) i= cv::ocl::Image2D (boxed) = 
// Return value: cv::ocl::Image2D (boxed)
cv_return_value_void_X cv_ocl_Image2D_Image2D_Image2D(void* i) {
    try {
        cv::ocl::Image2D* ret = new cv::ocl::Image2D(*reinterpret_cast<const cv::ocl::Image2D*>(i));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Image2D::canCreateAlias
// as:     cv::ocl::Image2D::canCreateAlias (method) cv::ocl::Image2D . canCreateAlias
// Arg ARG cv::UMat (boxed) u= cv::UMat (boxed) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Image2D_canCreateAlias_UMat(void* u) {
    try {
        bool ret = cv::ocl::Image2D::canCreateAlias(*reinterpret_cast<const cv::UMat*>(u));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Image2D::isFormatSupported
// as:     cv::ocl::Image2D::isFormatSupported (method) cv::ocl::Image2D . isFormatSupported
// Arg ARG Primitive(int) depth= Primitive(int) = 
// Arg ARG Primitive(int) cn= Primitive(int) = 
// Arg ARG Primitive(bool) norm= Primitive(bool) = 
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Image2D_isFormatSupported_int_int_bool(int depth, int cn, bool norm) {
    try {
        bool ret = cv::ocl::Image2D::isFormatSupported(depth, cn, norm);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Image2D::ptr
// as:     cv::ocl::Image2D::ptr (method) cv::ocl::Image2D . ptr
// Return value: RawPtr[Primitive(void)]
cv_return_value_void_X cv_ocl_Image2D_ptr_const(void* instance) {
    try {
        void* ret = reinterpret_cast<cv::ocl::Image2D*>(instance)->ptr();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::ocl::Kernel
void cv_Kernel_delete(void* instance) {
    delete reinterpret_cast<cv::ocl::Kernel*>(instance);
}
// parsed: cv::ocl::Kernel::Kernel
// as:     cv::ocl::Kernel::Kernel (constructor) cv::ocl::Kernel . default
// Return value: cv::ocl::Kernel (boxed)
cv_return_value_void_X cv_ocl_Kernel_Kernel() {
    try {
        cv::ocl::Kernel* ret = new cv::ocl::Kernel();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Kernel::Kernel
// as:     cv::ocl::Kernel::Kernel (constructor) cv::ocl::Kernel . copy
// Arg ARG cv::ocl::Kernel (boxed) k= cv::ocl::Kernel (boxed) = 
// Return value: cv::ocl::Kernel (boxed)
cv_return_value_void_X cv_ocl_Kernel_Kernel_Kernel(void* k) {
    try {
        cv::ocl::Kernel* ret = new cv::ocl::Kernel(*reinterpret_cast<const cv::ocl::Kernel*>(k));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Kernel::empty
// as:     cv::ocl::Kernel::empty (method) cv::ocl::Kernel . empty
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Kernel_empty_const(void* instance) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Kernel*>(instance)->empty();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Kernel::set
// as:     cv::ocl::Kernel::set (method) cv::ocl::Kernel . set
// Arg ARG Primitive(int) i= Primitive(int) = 
// Arg ARG RawPtr[Primitive(void)] * value= (ptr) RawPtr[Primitive(void)] = 
// Arg ARG Primitive(size_t) sz= Primitive(size_t) = 
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Kernel_set_int_const_void_X_size_t(void* instance, int i, const void* value, std::size_t sz) {
    try {
        int ret = reinterpret_cast<cv::ocl::Kernel*>(instance)->set(i, value, sz);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Kernel::set
// as:     cv::ocl::Kernel::set (method) cv::ocl::Kernel . set
// Arg ARG Primitive(int) i= Primitive(int) = 
// Arg ARG cv::UMat (boxed) m= cv::UMat (boxed) = 
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Kernel_set_int_UMat(void* instance, int i, void* m) {
    try {
        int ret = reinterpret_cast<cv::ocl::Kernel*>(instance)->set(i, *reinterpret_cast<const cv::UMat*>(m));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Kernel::set
// as:     cv::ocl::Kernel::set (method) cv::ocl::Kernel . set
// Arg ARG Primitive(int) i= Primitive(int) = 
// Arg ARG cv::ocl::KernelArg (boxed) arg= cv::ocl::KernelArg (boxed) = 
// Return value: Primitive(int)
cv_return_value_int cv_ocl_Kernel_set_int_KernelArg(void* instance, int i, void* arg) {
    try {
        int ret = reinterpret_cast<cv::ocl::Kernel*>(instance)->set(i, *reinterpret_cast<const cv::ocl::KernelArg*>(arg));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::Kernel::run
// as:     cv::ocl::Kernel::run (method) cv::ocl::Kernel . run
// Arg ARG Primitive(int) dims= Primitive(int) = 
// Arg ARG RawPtr[Primitive(size_t)] * globalsize= (ptr) RawPtr[Primitive(size_t)] = 
// Arg ARG RawPtr[Primitive(size_t)] * localsize= (ptr) RawPtr[Primitive(size_t)] = 
// Arg ARG Primitive(bool) sync= Primitive(bool) = 
// Arg ARG cv::ocl::Queue (boxed) q= cv::ocl::Queue (boxed) = Queue()
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Kernel_run_int_size_t_X_size_t_X_bool_Queue(void* instance, int dims, size_t* globalsize, size_t* localsize, bool sync, void* q) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Kernel*>(instance)->run(dims, globalsize, localsize, sync, *reinterpret_cast<const cv::ocl::Queue*>(q));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Kernel::runTask
// as:     cv::ocl::Kernel::runTask (method) cv::ocl::Kernel . runTask
// Arg ARG Primitive(bool) sync= Primitive(bool) = 
// Arg ARG cv::ocl::Queue (boxed) q= cv::ocl::Queue (boxed) = Queue()
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Kernel_runTask_bool_Queue(void* instance, bool sync, void* q) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Kernel*>(instance)->runTask(sync, *reinterpret_cast<const cv::ocl::Queue*>(q));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Kernel::runProfiling
// as:     cv::ocl::Kernel::runProfiling (method) cv::ocl::Kernel . runProfiling
// Arg ARG Primitive(int) dims= Primitive(int) = 
// Arg ARG RawPtr[Primitive(size_t)] * globalsize= (ptr) RawPtr[Primitive(size_t)] = 
// Arg ARG RawPtr[Primitive(size_t)] * localsize= (ptr) RawPtr[Primitive(size_t)] = 
// Arg ARG cv::ocl::Queue (boxed) q= cv::ocl::Queue (boxed) = Queue()
// Return value: Primitive(int64)
cv_return_value_int64 cv_ocl_Kernel_runProfiling_int_size_t_X_size_t_X_Queue(void* instance, int dims, size_t* globalsize, size_t* localsize, void* q) {
    try {
        int64 ret = reinterpret_cast<cv::ocl::Kernel*>(instance)->runProfiling(dims, globalsize, localsize, *reinterpret_cast<const cv::ocl::Queue*>(q));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int64)
}

// parsed: cv::ocl::Kernel::workGroupSize
// as:     cv::ocl::Kernel::workGroupSize (method) cv::ocl::Kernel . workGroupSize
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_ocl_Kernel_workGroupSize_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::ocl::Kernel*>(instance)->workGroupSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::ocl::Kernel::preferedWorkGroupSizeMultiple
// as:     cv::ocl::Kernel::preferedWorkGroupSizeMultiple (method) cv::ocl::Kernel . preferedWorkGroupSizeMultiple
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_ocl_Kernel_preferedWorkGroupSizeMultiple_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::ocl::Kernel*>(instance)->preferedWorkGroupSizeMultiple();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::ocl::Kernel::compileWorkGroupSize
// as:     cv::ocl::Kernel::compileWorkGroupSize (method) cv::ocl::Kernel . compileWorkGroupSize
// Arg ARG RawPtr[Primitive(size_t)] * wsz= (ptr) RawPtr[Primitive(size_t)] = 
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Kernel_compileWorkGroupSize_const_size_t_X(void* instance, size_t* wsz) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Kernel*>(instance)->compileWorkGroupSize(wsz);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Kernel::localMemSize
// as:     cv::ocl::Kernel::localMemSize (method) cv::ocl::Kernel . localMemSize
// Return value: Primitive(size_t)
cv_return_value_std_size_t cv_ocl_Kernel_localMemSize_const(void* instance) {
    try {
        size_t ret = reinterpret_cast<cv::ocl::Kernel*>(instance)->localMemSize();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_std_size_t)
}

// parsed: cv::ocl::Kernel::ptr
// as:     cv::ocl::Kernel::ptr (method) cv::ocl::Kernel . ptr
// Return value: RawPtr[Primitive(void)]
cv_return_value_void_X cv_ocl_Kernel_ptr_const(void* instance) {
    try {
        void* ret = reinterpret_cast<cv::ocl::Kernel*>(instance)->ptr();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::ocl::KernelArg
void cv_KernelArg_delete(void* instance) {
    delete reinterpret_cast<cv::ocl::KernelArg*>(instance);
}
// parsed: cv::ocl::KernelArg::KernelArg
// as:     cv::ocl::KernelArg::KernelArg (constructor) cv::ocl::KernelArg . new
// Arg ARG Primitive(int) _flags= Primitive(int) = 
// Arg ARG RawPtr[cv::UMat (boxed)] * _m= (ptr) RawPtr[cv::UMat (boxed)] = 
// Arg ARG Primitive(int) wscale= Primitive(int) = 1
// Arg ARG Primitive(int) iwscale= Primitive(int) = 1
// Arg ARG RawPtr[Primitive(void)] * _obj= (ptr) RawPtr[Primitive(void)] = 0
// Arg ARG Primitive(size_t) _sz= Primitive(size_t) = 0
// Return value: cv::ocl::KernelArg (boxed)
cv_return_value_void_X cv_ocl_KernelArg_KernelArg_int_UMat_int_int_const_void_X_size_t(int _flags, void* _m, int wscale, int iwscale, const void* _obj, std::size_t _sz) {
    try {
        cv::ocl::KernelArg* ret = new cv::ocl::KernelArg(_flags, reinterpret_cast<cv::UMat*>(_m), wscale, iwscale, _obj, _sz);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::KernelArg::KernelArg
// as:     cv::ocl::KernelArg::KernelArg (constructor) cv::ocl::KernelArg . default
// Return value: cv::ocl::KernelArg (boxed)
cv_return_value_void_X cv_ocl_KernelArg_KernelArg() {
    try {
        cv::ocl::KernelArg* ret = new cv::ocl::KernelArg();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::KernelArg::Local
// as:     cv::ocl::KernelArg::Local (method) cv::ocl::KernelArg . Local
// Arg ARG Primitive(size_t) localMemSize= Primitive(size_t) = 
// Return value: cv::ocl::KernelArg (boxed)
cv_return_value_void_X cv_ocl_KernelArg_Local_size_t(std::size_t localMemSize) {
    try {
        cv::ocl::KernelArg ret = cv::ocl::KernelArg::Local(localMemSize);
        return { Error::Code::StsOk, NULL, new cv::ocl::KernelArg(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::KernelArg::PtrWriteOnly
// as:     cv::ocl::KernelArg::PtrWriteOnly (method) cv::ocl::KernelArg . PtrWriteOnly
// Arg ARG cv::UMat (boxed) m= cv::UMat (boxed) = 
// Return value: cv::ocl::KernelArg (boxed)
cv_return_value_void_X cv_ocl_KernelArg_PtrWriteOnly_UMat(void* m) {
    try {
        cv::ocl::KernelArg ret = cv::ocl::KernelArg::PtrWriteOnly(*reinterpret_cast<const cv::UMat*>(m));
        return { Error::Code::StsOk, NULL, new cv::ocl::KernelArg(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::KernelArg::PtrReadOnly
// as:     cv::ocl::KernelArg::PtrReadOnly (method) cv::ocl::KernelArg . PtrReadOnly
// Arg ARG cv::UMat (boxed) m= cv::UMat (boxed) = 
// Return value: cv::ocl::KernelArg (boxed)
cv_return_value_void_X cv_ocl_KernelArg_PtrReadOnly_UMat(void* m) {
    try {
        cv::ocl::KernelArg ret = cv::ocl::KernelArg::PtrReadOnly(*reinterpret_cast<const cv::UMat*>(m));
        return { Error::Code::StsOk, NULL, new cv::ocl::KernelArg(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::KernelArg::PtrReadWrite
// as:     cv::ocl::KernelArg::PtrReadWrite (method) cv::ocl::KernelArg . PtrReadWrite
// Arg ARG cv::UMat (boxed) m= cv::UMat (boxed) = 
// Return value: cv::ocl::KernelArg (boxed)
cv_return_value_void_X cv_ocl_KernelArg_PtrReadWrite_UMat(void* m) {
    try {
        cv::ocl::KernelArg ret = cv::ocl::KernelArg::PtrReadWrite(*reinterpret_cast<const cv::UMat*>(m));
        return { Error::Code::StsOk, NULL, new cv::ocl::KernelArg(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::KernelArg::ReadWrite
// as:     cv::ocl::KernelArg::ReadWrite (method) cv::ocl::KernelArg . ReadWrite
// Arg ARG cv::UMat (boxed) m= cv::UMat (boxed) = 
// Arg ARG Primitive(int) wscale= Primitive(int) = 1
// Arg ARG Primitive(int) iwscale= Primitive(int) = 1
// Return value: cv::ocl::KernelArg (boxed)
cv_return_value_void_X cv_ocl_KernelArg_ReadWrite_UMat_int_int(void* m, int wscale, int iwscale) {
    try {
        cv::ocl::KernelArg ret = cv::ocl::KernelArg::ReadWrite(*reinterpret_cast<const cv::UMat*>(m), wscale, iwscale);
        return { Error::Code::StsOk, NULL, new cv::ocl::KernelArg(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::KernelArg::ReadWriteNoSize
// as:     cv::ocl::KernelArg::ReadWriteNoSize (method) cv::ocl::KernelArg . ReadWriteNoSize
// Arg ARG cv::UMat (boxed) m= cv::UMat (boxed) = 
// Arg ARG Primitive(int) wscale= Primitive(int) = 1
// Arg ARG Primitive(int) iwscale= Primitive(int) = 1
// Return value: cv::ocl::KernelArg (boxed)
cv_return_value_void_X cv_ocl_KernelArg_ReadWriteNoSize_UMat_int_int(void* m, int wscale, int iwscale) {
    try {
        cv::ocl::KernelArg ret = cv::ocl::KernelArg::ReadWriteNoSize(*reinterpret_cast<const cv::UMat*>(m), wscale, iwscale);
        return { Error::Code::StsOk, NULL, new cv::ocl::KernelArg(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::KernelArg::ReadOnly
// as:     cv::ocl::KernelArg::ReadOnly (method) cv::ocl::KernelArg . ReadOnly
// Arg ARG cv::UMat (boxed) m= cv::UMat (boxed) = 
// Arg ARG Primitive(int) wscale= Primitive(int) = 1
// Arg ARG Primitive(int) iwscale= Primitive(int) = 1
// Return value: cv::ocl::KernelArg (boxed)
cv_return_value_void_X cv_ocl_KernelArg_ReadOnly_UMat_int_int(void* m, int wscale, int iwscale) {
    try {
        cv::ocl::KernelArg ret = cv::ocl::KernelArg::ReadOnly(*reinterpret_cast<const cv::UMat*>(m), wscale, iwscale);
        return { Error::Code::StsOk, NULL, new cv::ocl::KernelArg(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::KernelArg::WriteOnly
// as:     cv::ocl::KernelArg::WriteOnly (method) cv::ocl::KernelArg . WriteOnly
// Arg ARG cv::UMat (boxed) m= cv::UMat (boxed) = 
// Arg ARG Primitive(int) wscale= Primitive(int) = 1
// Arg ARG Primitive(int) iwscale= Primitive(int) = 1
// Return value: cv::ocl::KernelArg (boxed)
cv_return_value_void_X cv_ocl_KernelArg_WriteOnly_UMat_int_int(void* m, int wscale, int iwscale) {
    try {
        cv::ocl::KernelArg ret = cv::ocl::KernelArg::WriteOnly(*reinterpret_cast<const cv::UMat*>(m), wscale, iwscale);
        return { Error::Code::StsOk, NULL, new cv::ocl::KernelArg(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::KernelArg::ReadOnlyNoSize
// as:     cv::ocl::KernelArg::ReadOnlyNoSize (method) cv::ocl::KernelArg . ReadOnlyNoSize
// Arg ARG cv::UMat (boxed) m= cv::UMat (boxed) = 
// Arg ARG Primitive(int) wscale= Primitive(int) = 1
// Arg ARG Primitive(int) iwscale= Primitive(int) = 1
// Return value: cv::ocl::KernelArg (boxed)
cv_return_value_void_X cv_ocl_KernelArg_ReadOnlyNoSize_UMat_int_int(void* m, int wscale, int iwscale) {
    try {
        cv::ocl::KernelArg ret = cv::ocl::KernelArg::ReadOnlyNoSize(*reinterpret_cast<const cv::UMat*>(m), wscale, iwscale);
        return { Error::Code::StsOk, NULL, new cv::ocl::KernelArg(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::KernelArg::WriteOnlyNoSize
// as:     cv::ocl::KernelArg::WriteOnlyNoSize (method) cv::ocl::KernelArg . WriteOnlyNoSize
// Arg ARG cv::UMat (boxed) m= cv::UMat (boxed) = 
// Arg ARG Primitive(int) wscale= Primitive(int) = 1
// Arg ARG Primitive(int) iwscale= Primitive(int) = 1
// Return value: cv::ocl::KernelArg (boxed)
cv_return_value_void_X cv_ocl_KernelArg_WriteOnlyNoSize_UMat_int_int(void* m, int wscale, int iwscale) {
    try {
        cv::ocl::KernelArg ret = cv::ocl::KernelArg::WriteOnlyNoSize(*reinterpret_cast<const cv::UMat*>(m), wscale, iwscale);
        return { Error::Code::StsOk, NULL, new cv::ocl::KernelArg(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::KernelArg::Constant
// as:     cv::ocl::KernelArg::Constant (method) cv::ocl::KernelArg . Constant
// Arg ARG cv::Mat (boxed) m= cv::Mat (boxed) = 
// Return value: cv::ocl::KernelArg (boxed)
cv_return_value_void_X cv_ocl_KernelArg_Constant_Mat(void* m) {
    try {
        cv::ocl::KernelArg ret = cv::ocl::KernelArg::Constant(*reinterpret_cast<const cv::Mat*>(m));
        return { Error::Code::StsOk, NULL, new cv::ocl::KernelArg(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::ocl::Platform
void cv_Platform_delete(void* instance) {
    delete reinterpret_cast<cv::ocl::Platform*>(instance);
}
// parsed: cv::ocl::Platform::Platform
// as:     cv::ocl::Platform::Platform (constructor) cv::ocl::Platform . default
// Return value: cv::ocl::Platform (boxed)
cv_return_value_void_X cv_ocl_Platform_Platform() {
    try {
        cv::ocl::Platform* ret = new cv::ocl::Platform();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Platform::Platform
// as:     cv::ocl::Platform::Platform (constructor) cv::ocl::Platform . copy
// Arg ARG cv::ocl::Platform (boxed) p= cv::ocl::Platform (boxed) = 
// Return value: cv::ocl::Platform (boxed)
cv_return_value_void_X cv_ocl_Platform_Platform_Platform(void* p) {
    try {
        cv::ocl::Platform* ret = new cv::ocl::Platform(*reinterpret_cast<const cv::ocl::Platform*>(p));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Platform::ptr
// as:     cv::ocl::Platform::ptr (method) cv::ocl::Platform . ptr
// Return value: RawPtr[Primitive(void)]
cv_return_value_void_X cv_ocl_Platform_ptr_const(void* instance) {
    try {
        void* ret = reinterpret_cast<cv::ocl::Platform*>(instance)->ptr();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Platform::getDefault
// as:     cv::ocl::Platform::getDefault (method) cv::ocl::Platform . getDefault
// Return value: cv::ocl::Platform (boxed)
cv_return_value_void_X cv_ocl_Platform_getDefault() {
    try {
        cv::ocl::Platform ret = cv::ocl::Platform::getDefault();
        return { Error::Code::StsOk, NULL, new cv::ocl::Platform(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::ocl::PlatformInfo
void cv_PlatformInfo_delete(void* instance) {
    delete reinterpret_cast<cv::ocl::PlatformInfo*>(instance);
}
// parsed: cv::ocl::PlatformInfo::PlatformInfo
// as:     cv::ocl::PlatformInfo::PlatformInfo (constructor) cv::ocl::PlatformInfo . default
// Return value: cv::ocl::PlatformInfo (boxed)
cv_return_value_void_X cv_ocl_PlatformInfo_PlatformInfo() {
    try {
        cv::ocl::PlatformInfo* ret = new cv::ocl::PlatformInfo();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::PlatformInfo::PlatformInfo
// as:     cv::ocl::PlatformInfo::PlatformInfo (constructor) cv::ocl::PlatformInfo . new
// Arg ARG RawPtr[Primitive(void)] * id= (ptr) RawPtr[Primitive(void)] = 
// Return value: cv::ocl::PlatformInfo (boxed)
cv_return_value_void_X cv_ocl_PlatformInfo_PlatformInfo_void_X(void* id) {
    try {
        cv::ocl::PlatformInfo* ret = new cv::ocl::PlatformInfo(id);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::PlatformInfo::PlatformInfo
// as:     cv::ocl::PlatformInfo::PlatformInfo (constructor) cv::ocl::PlatformInfo . copy
// Arg ARG cv::ocl::PlatformInfo (boxed) i= cv::ocl::PlatformInfo (boxed) = 
// Return value: cv::ocl::PlatformInfo (boxed)
cv_return_value_void_X cv_ocl_PlatformInfo_PlatformInfo_PlatformInfo(void* i) {
    try {
        cv::ocl::PlatformInfo* ret = new cv::ocl::PlatformInfo(*reinterpret_cast<const cv::ocl::PlatformInfo*>(i));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::PlatformInfo::name
// as:     cv::ocl::PlatformInfo::name (method) cv::ocl::PlatformInfo . name
// Return value: string
cv_return_value_char_X cv_ocl_PlatformInfo_name_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::ocl::PlatformInfo*>(instance)->name();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::ocl::PlatformInfo::vendor
// as:     cv::ocl::PlatformInfo::vendor (method) cv::ocl::PlatformInfo . vendor
// Return value: string
cv_return_value_char_X cv_ocl_PlatformInfo_vendor_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::ocl::PlatformInfo*>(instance)->vendor();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::ocl::PlatformInfo::version
// as:     cv::ocl::PlatformInfo::version (method) cv::ocl::PlatformInfo . version
// Return value: string
cv_return_value_char_X cv_ocl_PlatformInfo_version_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::ocl::PlatformInfo*>(instance)->version();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::ocl::PlatformInfo::deviceNumber
// as:     cv::ocl::PlatformInfo::deviceNumber (method) cv::ocl::PlatformInfo . deviceNumber
// Return value: Primitive(int)
cv_return_value_int cv_ocl_PlatformInfo_deviceNumber_const(void* instance) {
    try {
        int ret = reinterpret_cast<cv::ocl::PlatformInfo*>(instance)->deviceNumber();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::ocl::PlatformInfo::getDevice
// as:     cv::ocl::PlatformInfo::getDevice (method) cv::ocl::PlatformInfo . getDevice
// Arg ARG cv::ocl::Device (boxed) device= cv::ocl::Device (boxed) = 
// Arg ARG Primitive(int) d= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_ocl_PlatformInfo_getDevice_const_Device_int(void* instance, void* device, int d) {
    try {
        reinterpret_cast<cv::ocl::PlatformInfo*>(instance)->getDevice(*reinterpret_cast<cv::ocl::Device*>(device), d);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::ocl::Program
void cv_Program_delete(void* instance) {
    delete reinterpret_cast<cv::ocl::Program*>(instance);
}
// parsed: cv::ocl::Program::ptr
// as:     cv::ocl::Program::ptr (method) cv::ocl::Program . ptr
// Return value: RawPtr[Primitive(void)]
cv_return_value_void_X cv_ocl_Program_ptr_const(void* instance) {
    try {
        void* ret = reinterpret_cast<cv::ocl::Program*>(instance)->ptr();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Program::getBinary
// as:     cv::ocl::Program::getBinary (method) cv::ocl::Program . getBinary
// Arg ARG Vector[Primitive(char)] binary= Vector[Primitive(char)] = 
// Return value: Primitive(void)
cv_return_value_void cv_ocl_Program_getBinary_const_VectorOfchar(void* instance, void* binary) {
    try {
        reinterpret_cast<cv::ocl::Program*>(instance)->getBinary(*reinterpret_cast<std::vector<char>*>(binary));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ocl::Program::read
// as:     cv::ocl::Program::read (method) cv::ocl::Program . read
// Arg ARG string buf= string = 
// Arg ARG string buildflags= string = 
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Program_read_String_String(void* instance, const char* buf, const char* buildflags) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Program*>(instance)->read(String(buf), String(buildflags));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Program::write
// as:     cv::ocl::Program::write (method) cv::ocl::Program . write
// Arg ARG string buf= string = 
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Program_write_const_String(void* instance, const char** buf) {
    try {
        cv::String buf_out;
        bool ret = reinterpret_cast<cv::ocl::Program*>(instance)->write(buf_out);
        *buf = strdup(buf_out.c_str());
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Program::getPrefix
// as:     cv::ocl::Program::getPrefix (method) cv::ocl::Program . getPrefix
// Return value: string
cv_return_value_char_X cv_ocl_Program_getPrefix_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::ocl::Program*>(instance)->getPrefix();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// parsed: cv::ocl::Program::getPrefix
// as:     cv::ocl::Program::getPrefix (method) cv::ocl::Program . getPrefix
// Arg ARG string buildflags= string = 
// Return value: string
cv_return_value_char_X cv_ocl_Program_getPrefix_String(const char* buildflags) {
    try {
        String ret = cv::ocl::Program::getPrefix(String(buildflags));
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_char_X)
}

// boxed class: cv::ocl::ProgramSource
void cv_ProgramSource_delete(void* instance) {
    delete reinterpret_cast<cv::ocl::ProgramSource*>(instance);
}
// parsed: cv::ocl::ProgramSource::ProgramSource
// as:     cv::ocl::ProgramSource::ProgramSource (constructor) cv::ocl::ProgramSource . default
// Return value: cv::ocl::ProgramSource (boxed)
cv_return_value_void_X cv_ocl_ProgramSource_ProgramSource() {
    try {
        cv::ocl::ProgramSource* ret = new cv::ocl::ProgramSource();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::ProgramSource::ProgramSource
// as:     cv::ocl::ProgramSource::ProgramSource (constructor) cv::ocl::ProgramSource . new
// Arg ARG string module= string = 
// Arg ARG string name= string = 
// Arg ARG string codeStr= string = 
// Arg ARG string codeHash= string = 
// Return value: cv::ocl::ProgramSource (boxed)
cv_return_value_void_X cv_ocl_ProgramSource_ProgramSource_String_String_String_String(const char* module, const char* name, const char* codeStr, const char* codeHash) {
    try {
        cv::ocl::ProgramSource* ret = new cv::ocl::ProgramSource(String(module), String(name), String(codeStr), String(codeHash));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::ProgramSource::ProgramSource
// as:     cv::ocl::ProgramSource::ProgramSource (constructor) cv::ocl::ProgramSource . new
// Arg ARG string prog= string = 
// Return value: cv::ocl::ProgramSource (boxed)
cv_return_value_void_X cv_ocl_ProgramSource_ProgramSource_String(const char* prog) {
    try {
        cv::ocl::ProgramSource* ret = new cv::ocl::ProgramSource(String(prog));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::ProgramSource::source
// as:     cv::ocl::ProgramSource::source (method) cv::ocl::ProgramSource . source
// Return value: string
cv_return_value_const_char_X cv_ocl_ProgramSource_source_const(void* instance) {
    try {
        String ret = reinterpret_cast<cv::ocl::ProgramSource*>(instance)->source();
        return { Error::Code::StsOk, NULL, strdup(ret.c_str()) };
    } CVRS_CATCH(cv_return_value_const_char_X)
}

// parsed: cv::ocl::ProgramSource::hash
// as:     cv::ocl::ProgramSource::hash (method) cv::ocl::ProgramSource . hash
// Return value: Primitive(uint64)
cv_return_value_uint64 cv_ocl_ProgramSource_hash_const(void* instance) {
    try {
        uint64 ret = reinterpret_cast<cv::ocl::ProgramSource*>(instance)->hash();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_uint64)
}

// parsed: cv::ocl::ProgramSource::fromBinary
// as:     cv::ocl::ProgramSource::fromBinary (method) cv::ocl::ProgramSource . fromBinary
// Arg ARG string module= string = 
// Arg ARG string name= string = 
// Arg ARG RawPtr[Primitive(unsigned char)] * binary= (ptr) RawPtr[Primitive(unsigned char)] = 
// Arg ARG Primitive(size_t) size= Primitive(size_t) = 
// Arg ARG string buildOptions= string = cv::String()
// Return value: cv::ocl::ProgramSource (boxed)
cv_return_value_void_X cv_ocl_ProgramSource_fromBinary_String_String_const_unsigned_char_X_size_t_String(const char* module, const char* name, const unsigned char* binary, std::size_t size, const char* buildOptions) {
    try {
        cv::ocl::ProgramSource ret = cv::ocl::ProgramSource::fromBinary(String(module), String(name), binary, size, String(buildOptions));
        return { Error::Code::StsOk, NULL, new cv::ocl::ProgramSource(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::ProgramSource::fromSPIR
// as:     cv::ocl::ProgramSource::fromSPIR (method) cv::ocl::ProgramSource . fromSPIR
// Arg ARG string module= string = 
// Arg ARG string name= string = 
// Arg ARG RawPtr[Primitive(unsigned char)] * binary= (ptr) RawPtr[Primitive(unsigned char)] = 
// Arg ARG Primitive(size_t) size= Primitive(size_t) = 
// Arg ARG string buildOptions= string = cv::String()
// Return value: cv::ocl::ProgramSource (boxed)
cv_return_value_void_X cv_ocl_ProgramSource_fromSPIR_String_String_const_unsigned_char_X_size_t_String(const char* module, const char* name, const unsigned char* binary, std::size_t size, const char* buildOptions) {
    try {
        cv::ocl::ProgramSource ret = cv::ocl::ProgramSource::fromSPIR(String(module), String(name), binary, size, String(buildOptions));
        return { Error::Code::StsOk, NULL, new cv::ocl::ProgramSource(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::ocl::Queue
void cv_Queue_delete(void* instance) {
    delete reinterpret_cast<cv::ocl::Queue*>(instance);
}
// parsed: cv::ocl::Queue::Queue
// as:     cv::ocl::Queue::Queue (constructor) cv::ocl::Queue . default
// Return value: cv::ocl::Queue (boxed)
cv_return_value_void_X cv_ocl_Queue_Queue() {
    try {
        cv::ocl::Queue* ret = new cv::ocl::Queue();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Queue::Queue
// as:     cv::ocl::Queue::Queue (constructor) cv::ocl::Queue . new
// Arg ARG cv::ocl::Context (boxed) c= cv::ocl::Context (boxed) = 
// Arg ARG cv::ocl::Device (boxed) d= cv::ocl::Device (boxed) = Device()
// Return value: cv::ocl::Queue (boxed)
cv_return_value_void_X cv_ocl_Queue_Queue_Context_Device(void* c, void* d) {
    try {
        cv::ocl::Queue* ret = new cv::ocl::Queue(*reinterpret_cast<const cv::ocl::Context*>(c), *reinterpret_cast<const cv::ocl::Device*>(d));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Queue::Queue
// as:     cv::ocl::Queue::Queue (constructor) cv::ocl::Queue . copy
// Arg ARG cv::ocl::Queue (boxed) q= cv::ocl::Queue (boxed) = 
// Return value: cv::ocl::Queue (boxed)
cv_return_value_void_X cv_ocl_Queue_Queue_Queue(void* q) {
    try {
        cv::ocl::Queue* ret = new cv::ocl::Queue(*reinterpret_cast<const cv::ocl::Queue*>(q));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Queue::create
// as:     cv::ocl::Queue::create (method) cv::ocl::Queue . create
// Arg ARG cv::ocl::Context (boxed) c= cv::ocl::Context (boxed) = Context()
// Arg ARG cv::ocl::Device (boxed) d= cv::ocl::Device (boxed) = Device()
// Return value: Primitive(bool)
cv_return_value_bool cv_ocl_Queue_create_Context_Device(void* instance, void* c, void* d) {
    try {
        bool ret = reinterpret_cast<cv::ocl::Queue*>(instance)->create(*reinterpret_cast<const cv::ocl::Context*>(c), *reinterpret_cast<const cv::ocl::Device*>(d));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::ocl::Queue::finish
// as:     cv::ocl::Queue::finish (method) cv::ocl::Queue . finish
// Return value: Primitive(void)
cv_return_value_void cv_ocl_Queue_finish(void* instance) {
    try {
        reinterpret_cast<cv::ocl::Queue*>(instance)->finish();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ocl::Queue::ptr
// as:     cv::ocl::Queue::ptr (method) cv::ocl::Queue . ptr
// Return value: RawPtr[Primitive(void)]
cv_return_value_void_X cv_ocl_Queue_ptr_const(void* instance) {
    try {
        void* ret = reinterpret_cast<cv::ocl::Queue*>(instance)->ptr();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Queue::getDefault
// as:     cv::ocl::Queue::getDefault (method) cv::ocl::Queue . getDefault
// Return value: cv::ocl::Queue (boxed)
cv_return_value_void_X cv_ocl_Queue_getDefault() {
    try {
        cv::ocl::Queue ret = cv::ocl::Queue::getDefault();
        return { Error::Code::StsOk, NULL, new cv::ocl::Queue(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Queue::getProfilingQueue
// as:     cv::ocl::Queue::getProfilingQueue (method) cv::ocl::Queue . getProfilingQueue
// Return value: cv::ocl::Queue (boxed)
cv_return_value_void_X cv_ocl_Queue_getProfilingQueue_const(void* instance) {
    try {
        cv::ocl::Queue ret = reinterpret_cast<cv::ocl::Queue*>(instance)->getProfilingQueue();
        return { Error::Code::StsOk, NULL, new cv::ocl::Queue(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// boxed class: cv::ocl::Timer
void cv_Timer_delete(void* instance) {
    delete reinterpret_cast<cv::ocl::Timer*>(instance);
}
// parsed: cv::ocl::Timer::Timer
// as:     cv::ocl::Timer::Timer (constructor) cv::ocl::Timer . new
// Arg ARG cv::ocl::Queue (boxed) q= cv::ocl::Queue (boxed) = 
// Return value: cv::ocl::Timer (boxed)
cv_return_value_void_X cv_ocl_Timer_Timer_Queue(void* q) {
    try {
        cv::ocl::Timer* ret = new cv::ocl::Timer(*reinterpret_cast<const cv::ocl::Queue*>(q));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::ocl::Timer::start
// as:     cv::ocl::Timer::start (method) cv::ocl::Timer . start
// Return value: Primitive(void)
cv_return_value_void cv_ocl_Timer_start(void* instance) {
    try {
        reinterpret_cast<cv::ocl::Timer*>(instance)->start();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ocl::Timer::stop
// as:     cv::ocl::Timer::stop (method) cv::ocl::Timer . stop
// Return value: Primitive(void)
cv_return_value_void cv_ocl_Timer_stop(void* instance) {
    try {
        reinterpret_cast<cv::ocl::Timer*>(instance)->stop();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::ocl::Timer::durationNS
// as:     cv::ocl::Timer::durationNS (method) cv::ocl::Timer . durationNS
// Return value: Primitive(uint64)
cv_return_value_uint64 cv_ocl_Timer_durationNS_const(void* instance) {
    try {
        uint64 ret = reinterpret_cast<cv::ocl::Timer*>(instance)->durationNS();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_uint64)
}

// boxed class: cv::ocl::internal::ProgramEntry
void cv_ProgramEntry_delete(void* instance) {
    delete reinterpret_cast<cv::ocl::internal::ProgramEntry*>(instance);
}
// parsed: cv::utils::AllocatorStatisticsInterface::getCurrentUsage
// as:     cv::utils::AllocatorStatisticsInterface::getCurrentUsage (method) cv::utils::AllocatorStatisticsInterface (trait) . getCurrentUsage
// Return value: Primitive(uint64_t)
cv_return_value_uint64_t cv_utils_AllocatorStatisticsInterface_getCurrentUsage_const(void* instance) {
    try {
        uint64_t ret = reinterpret_cast<cv::utils::AllocatorStatisticsInterface*>(instance)->getCurrentUsage();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_uint64_t)
}

// parsed: cv::utils::AllocatorStatisticsInterface::getTotalUsage
// as:     cv::utils::AllocatorStatisticsInterface::getTotalUsage (method) cv::utils::AllocatorStatisticsInterface (trait) . getTotalUsage
// Return value: Primitive(uint64_t)
cv_return_value_uint64_t cv_utils_AllocatorStatisticsInterface_getTotalUsage_const(void* instance) {
    try {
        uint64_t ret = reinterpret_cast<cv::utils::AllocatorStatisticsInterface*>(instance)->getTotalUsage();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_uint64_t)
}

// parsed: cv::utils::AllocatorStatisticsInterface::getNumberOfAllocations
// as:     cv::utils::AllocatorStatisticsInterface::getNumberOfAllocations (method) cv::utils::AllocatorStatisticsInterface (trait) . getNumberOfAllocations
// Return value: Primitive(uint64_t)
cv_return_value_uint64_t cv_utils_AllocatorStatisticsInterface_getNumberOfAllocations_const(void* instance) {
    try {
        uint64_t ret = reinterpret_cast<cv::utils::AllocatorStatisticsInterface*>(instance)->getNumberOfAllocations();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_uint64_t)
}

// parsed: cv::utils::AllocatorStatisticsInterface::getPeakUsage
// as:     cv::utils::AllocatorStatisticsInterface::getPeakUsage (method) cv::utils::AllocatorStatisticsInterface (trait) . getPeakUsage
// Return value: Primitive(uint64_t)
cv_return_value_uint64_t cv_utils_AllocatorStatisticsInterface_getPeakUsage_const(void* instance) {
    try {
        uint64_t ret = reinterpret_cast<cv::utils::AllocatorStatisticsInterface*>(instance)->getPeakUsage();
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_uint64_t)
}

// parsed: cv::utils::AllocatorStatisticsInterface::resetPeakUsage
// as:     cv::utils::AllocatorStatisticsInterface::resetPeakUsage (method) cv::utils::AllocatorStatisticsInterface (trait) . resetPeakUsage
// Return value: Primitive(void)
cv_return_value_void cv_utils_AllocatorStatisticsInterface_resetPeakUsage(void* instance) {
    try {
        reinterpret_cast<cv::utils::AllocatorStatisticsInterface*>(instance)->resetPeakUsage();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// boxed class: cv::utils::logging::LogTag
void cv_LogTag_delete(void* instance) {
    delete reinterpret_cast<cv::utils::logging::LogTag*>(instance);
}
// parsed: cv::utils::logging::LogTag::LogTag
// as:     cv::utils::logging::LogTag::LogTag (constructor) cv::utils::logging::LogTag . new
// Arg ARG RawPtr[Primitive(char)] * _name= (ptr) RawPtr[Primitive(char)] = 
// Arg ARG utils::logging::LogLevel (enum) _level= utils::logging::LogLevel (enum) = 
// Return value: cv::utils::logging::LogTag (boxed)
cv_return_value_void_X cv_utils_logging_LogTag_LogTag_const_char_X_LogLevel(const char* _name, utils::logging::LogLevel _level) {
    try {
        cv::utils::logging::LogTag* ret = new cv::utils::logging::LogTag(_name, *reinterpret_cast<utils::logging::LogLevel*>(&_level));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_void_X)
}



} // extern "C"

