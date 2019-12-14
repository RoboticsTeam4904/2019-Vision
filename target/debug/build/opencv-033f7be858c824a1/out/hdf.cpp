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
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/hdf.hpp"
#include "/Users/ianlum/.cargo/registry/src/github.com-1ecc6299db9ec823/opencv-0.23.0/headers/4.1/opencv2/hdf/hdf5.hpp"

extern "C" {

// parsed: cv::hdf::open
// as:     cv::hdf::open (function)
// Arg ARG string HDF5Filename= string = 
// Return value: SmartPtr[cv::hdf::HDF5 (boxed)]
cv_return_value_void_X cv_hdf_open_String(const char* HDF5Filename) {
    try {
        Ptr<cv::hdf::HDF5> ret = cv::hdf::open(String(HDF5Filename));
        return { Error::Code::StsOk, NULL, new Ptr<cv::hdf::HDF5>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::hdf::HDF5::close
// as:     cv::hdf::HDF5::close (method) cv::hdf::HDF5 (trait) . close
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_close(void* instance) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->close();
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::grcreate
// as:     cv::hdf::HDF5::grcreate (method) cv::hdf::HDF5 (trait) . grcreate
// Arg ARG string grlabel= string = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_grcreate_String(void* instance, const char* grlabel) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->grcreate(String(grlabel));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::hlexists
// as:     cv::hdf::HDF5::hlexists (method) cv::hdf::HDF5 (trait) . hlexists
// Arg ARG string label= string = 
// Return value: Primitive(bool)
cv_return_value_bool cv_hdf_HDF5_hlexists_const_String(void* instance, const char* label) {
    try {
        bool ret = reinterpret_cast<cv::hdf::HDF5*>(instance)->hlexists(String(label));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::hdf::HDF5::atexists
// as:     cv::hdf::HDF5::atexists (method) cv::hdf::HDF5 (trait) . atexists
// Arg ARG string atlabel= string = 
// Return value: Primitive(bool)
cv_return_value_bool cv_hdf_HDF5_atexists_const_String(void* instance, const char* atlabel) {
    try {
        bool ret = reinterpret_cast<cv::hdf::HDF5*>(instance)->atexists(String(atlabel));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_bool)
}

// parsed: cv::hdf::HDF5::atdelete
// as:     cv::hdf::HDF5::atdelete (method) cv::hdf::HDF5 (trait) . atdelete
// Arg ARG string atlabel= string = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_atdelete_String(void* instance, const char* atlabel) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->atdelete(String(atlabel));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::atwrite
// as:     cv::hdf::HDF5::atwrite (method) cv::hdf::HDF5 (trait) . atwrite
// Arg ARG Primitive(int) value= Primitive(int) = 
// Arg ARG string atlabel= string = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_atwrite_int_String(void* instance, int value, const char* atlabel) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->atwrite(value, String(atlabel));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::atread
// as:     cv::hdf::HDF5::atread (method) cv::hdf::HDF5 (trait) . atread
// Arg ARG RawPtr[Primitive(int)] * value= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG string atlabel= string = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_atread_int_X_String(void* instance, int* value, const char* atlabel) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->atread(value, String(atlabel));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::atwrite
// as:     cv::hdf::HDF5::atwrite (method) cv::hdf::HDF5 (trait) . atwrite
// Arg ARG Primitive(double) value= Primitive(double) = 
// Arg ARG string atlabel= string = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_atwrite_double_String(void* instance, double value, const char* atlabel) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->atwrite(value, String(atlabel));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::atread
// as:     cv::hdf::HDF5::atread (method) cv::hdf::HDF5 (trait) . atread
// Arg ARG RawPtr[Primitive(double)] * value= (ptr) RawPtr[Primitive(double)] = 
// Arg ARG string atlabel= string = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_atread_double_X_String(void* instance, double* value, const char* atlabel) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->atread(value, String(atlabel));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::atwrite
// as:     cv::hdf::HDF5::atwrite (method) cv::hdf::HDF5 (trait) . atwrite
// Arg ARG string value= string = 
// Arg ARG string atlabel= string = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_atwrite_String_String(void* instance, const char* value, const char* atlabel) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->atwrite(String(value), String(atlabel));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::atwrite
// as:     cv::hdf::HDF5::atwrite (method) cv::hdf::HDF5 (trait) . atwrite
// Arg ARG cv::_InputArray (boxed) value= cv::_InputArray (boxed) = 
// Arg ARG string atlabel= string = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_atwrite__InputArray_String(void* instance, void* value, const char* atlabel) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->atwrite(*reinterpret_cast<const cv::_InputArray*>(value), String(atlabel));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::atread
// as:     cv::hdf::HDF5::atread (method) cv::hdf::HDF5 (trait) . atread
// Arg ARG cv::_OutputArray (boxed) value= cv::_OutputArray (boxed) = 
// Arg ARG string atlabel= string = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_atread__OutputArray_String(void* instance, void* value, const char* atlabel) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->atread(*reinterpret_cast<cv::_OutputArray*>(value), String(atlabel));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::dscreate
// as:     cv::hdf::HDF5::dscreate (method) cv::hdf::HDF5 (trait) . dscreate
// Arg ARG Primitive(int) rows= Primitive(int) = 
// Arg ARG Primitive(int) cols= Primitive(int) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG string dslabel= string = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_dscreate_const_int_int_int_String(void* instance, int rows, int cols, int type, const char* dslabel) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->dscreate(rows, cols, type, String(dslabel));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::dscreate
// as:     cv::hdf::HDF5::dscreate (method) cv::hdf::HDF5 (trait) . dscreate
// Arg ARG Primitive(int) rows= Primitive(int) = 
// Arg ARG Primitive(int) cols= Primitive(int) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG string dslabel= string = 
// Arg ARG Primitive(int) compresslevel= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_dscreate_const_int_int_int_String_int(void* instance, int rows, int cols, int type, const char* dslabel, int compresslevel) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->dscreate(rows, cols, type, String(dslabel), compresslevel);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::dscreate
// as:     cv::hdf::HDF5::dscreate (method) cv::hdf::HDF5 (trait) . dscreate
// Arg ARG Primitive(int) rows= Primitive(int) = 
// Arg ARG Primitive(int) cols= Primitive(int) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG string dslabel= string = 
// Arg ARG Primitive(int) compresslevel= Primitive(int) = 
// Arg ARG Vector[Primitive(int)] dims_chunks= Vector[Primitive(int)] = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_dscreate_const_int_int_int_String_int_VectorOfint(void* instance, int rows, int cols, int type, const char* dslabel, int compresslevel, void* dims_chunks) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->dscreate(rows, cols, type, String(dslabel), compresslevel, *reinterpret_cast<const std::vector<int>*>(dims_chunks));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::dscreate
// as:     cv::hdf::HDF5::dscreate (method) cv::hdf::HDF5 (trait) . dscreate
// Arg ARG Primitive(int) rows= Primitive(int) = 
// Arg ARG Primitive(int) cols= Primitive(int) = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG string dslabel= string = 
// Arg ARG Primitive(int) compresslevel= Primitive(int) = 
// Arg ARG RawPtr[Primitive(int)] * dims_chunks= (ptr) RawPtr[Primitive(int)] = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_dscreate_const_int_int_int_String_int_const_int_X(void* instance, int rows, int cols, int type, const char* dslabel, int compresslevel, const int* dims_chunks) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->dscreate(rows, cols, type, String(dslabel), compresslevel, dims_chunks);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::dscreate
// as:     cv::hdf::HDF5::dscreate (method) cv::hdf::HDF5 (trait) . dscreate
// Arg ARG Primitive(int) n_dims= Primitive(int) = 
// Arg ARG RawPtr[Primitive(int)] * sizes= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG string dslabel= string = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_dscreate_const_int_const_int_X_int_String(void* instance, int n_dims, const int* sizes, int type, const char* dslabel) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->dscreate(n_dims, sizes, type, String(dslabel));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::dscreate
// as:     cv::hdf::HDF5::dscreate (method) cv::hdf::HDF5 (trait) . dscreate
// Arg ARG Primitive(int) n_dims= Primitive(int) = 
// Arg ARG RawPtr[Primitive(int)] * sizes= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG string dslabel= string = 
// Arg ARG Primitive(int) compresslevel= Primitive(int) = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_dscreate_const_int_const_int_X_int_String_int(void* instance, int n_dims, const int* sizes, int type, const char* dslabel, int compresslevel) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->dscreate(n_dims, sizes, type, String(dslabel), compresslevel);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::dscreate
// as:     cv::hdf::HDF5::dscreate (method) cv::hdf::HDF5 (trait) . dscreate
// Arg ARG Vector[Primitive(int)] sizes= Vector[Primitive(int)] = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG string dslabel= string = 
// Arg ARG Primitive(int) compresslevel= Primitive(int) = HDF5::H5_NONE
// Arg ARG Vector[Primitive(int)] dims_chunks= Vector[Primitive(int)] = vector<int>()
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_dscreate_const_VectorOfint_int_String_int_VectorOfint(void* instance, void* sizes, int type, const char* dslabel, int compresslevel, void* dims_chunks) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->dscreate(*reinterpret_cast<const std::vector<int>*>(sizes), type, String(dslabel), compresslevel, *reinterpret_cast<const std::vector<int>*>(dims_chunks));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::dscreate
// as:     cv::hdf::HDF5::dscreate (method) cv::hdf::HDF5 (trait) . dscreate
// Arg ARG Primitive(int) n_dims= Primitive(int) = 
// Arg ARG RawPtr[Primitive(int)] * sizes= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG Primitive(int) type= Primitive(int) = 
// Arg ARG string dslabel= string = 
// Arg ARG Primitive(int) compresslevel= Primitive(int) = 
// Arg ARG RawPtr[Primitive(int)] * dims_chunks= (ptr) RawPtr[Primitive(int)] = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_dscreate_const_int_const_int_X_int_String_int_const_int_X(void* instance, int n_dims, const int* sizes, int type, const char* dslabel, int compresslevel, const int* dims_chunks) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->dscreate(n_dims, sizes, type, String(dslabel), compresslevel, dims_chunks);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::dsgetsize
// as:     cv::hdf::HDF5::dsgetsize (method) cv::hdf::HDF5 (trait) . dsgetsize
// Arg ARG string dslabel= string = 
// Arg ARG Primitive(int) dims_flag= Primitive(int) = HDF5::H5_GETDIMS
// Return value: Vector[Primitive(int)]
cv_return_value_void_X cv_hdf_HDF5_dsgetsize_const_String_int(void* instance, const char* dslabel, int dims_flag) {
    try {
        std::vector<int> ret = reinterpret_cast<cv::hdf::HDF5*>(instance)->dsgetsize(String(dslabel), dims_flag);
        return { Error::Code::StsOk, NULL, new std::vector<int>(ret) };
    } CVRS_CATCH(cv_return_value_void_X)
}

// parsed: cv::hdf::HDF5::dsgettype
// as:     cv::hdf::HDF5::dsgettype (method) cv::hdf::HDF5 (trait) . dsgettype
// Arg ARG string dslabel= string = 
// Return value: Primitive(int)
cv_return_value_int cv_hdf_HDF5_dsgettype_const_String(void* instance, const char* dslabel) {
    try {
        int ret = reinterpret_cast<cv::hdf::HDF5*>(instance)->dsgettype(String(dslabel));
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::hdf::HDF5::dswrite
// as:     cv::hdf::HDF5::dswrite (method) cv::hdf::HDF5 (trait) . dswrite
// Arg ARG cv::_InputArray (boxed) Array= cv::_InputArray (boxed) = 
// Arg ARG string dslabel= string = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_dswrite_const__InputArray_String(void* instance, void* Array, const char* dslabel) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->dswrite(*reinterpret_cast<const cv::_InputArray*>(Array), String(dslabel));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::dswrite
// as:     cv::hdf::HDF5::dswrite (method) cv::hdf::HDF5 (trait) . dswrite
// Arg ARG cv::_InputArray (boxed) Array= cv::_InputArray (boxed) = 
// Arg ARG string dslabel= string = 
// Arg ARG RawPtr[Primitive(int)] * dims_offset= (ptr) RawPtr[Primitive(int)] = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_dswrite_const__InputArray_String_const_int_X(void* instance, void* Array, const char* dslabel, const int* dims_offset) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->dswrite(*reinterpret_cast<const cv::_InputArray*>(Array), String(dslabel), dims_offset);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::dswrite
// as:     cv::hdf::HDF5::dswrite (method) cv::hdf::HDF5 (trait) . dswrite
// Arg ARG cv::_InputArray (boxed) Array= cv::_InputArray (boxed) = 
// Arg ARG string dslabel= string = 
// Arg ARG Vector[Primitive(int)] dims_offset= Vector[Primitive(int)] = 
// Arg ARG Vector[Primitive(int)] dims_counts= Vector[Primitive(int)] = vector<int>()
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_dswrite_const__InputArray_String_VectorOfint_VectorOfint(void* instance, void* Array, const char* dslabel, void* dims_offset, void* dims_counts) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->dswrite(*reinterpret_cast<const cv::_InputArray*>(Array), String(dslabel), *reinterpret_cast<const std::vector<int>*>(dims_offset), *reinterpret_cast<const std::vector<int>*>(dims_counts));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::dswrite
// as:     cv::hdf::HDF5::dswrite (method) cv::hdf::HDF5 (trait) . dswrite
// Arg ARG cv::_InputArray (boxed) Array= cv::_InputArray (boxed) = 
// Arg ARG string dslabel= string = 
// Arg ARG RawPtr[Primitive(int)] * dims_offset= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG RawPtr[Primitive(int)] * dims_counts= (ptr) RawPtr[Primitive(int)] = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_dswrite_const__InputArray_String_const_int_X_const_int_X(void* instance, void* Array, const char* dslabel, const int* dims_offset, const int* dims_counts) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->dswrite(*reinterpret_cast<const cv::_InputArray*>(Array), String(dslabel), dims_offset, dims_counts);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::dsinsert
// as:     cv::hdf::HDF5::dsinsert (method) cv::hdf::HDF5 (trait) . dsinsert
// Arg ARG cv::_InputArray (boxed) Array= cv::_InputArray (boxed) = 
// Arg ARG string dslabel= string = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_dsinsert_const__InputArray_String(void* instance, void* Array, const char* dslabel) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->dsinsert(*reinterpret_cast<const cv::_InputArray*>(Array), String(dslabel));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::dsinsert
// as:     cv::hdf::HDF5::dsinsert (method) cv::hdf::HDF5 (trait) . dsinsert
// Arg ARG cv::_InputArray (boxed) Array= cv::_InputArray (boxed) = 
// Arg ARG string dslabel= string = 
// Arg ARG RawPtr[Primitive(int)] * dims_offset= (ptr) RawPtr[Primitive(int)] = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_dsinsert_const__InputArray_String_const_int_X(void* instance, void* Array, const char* dslabel, const int* dims_offset) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->dsinsert(*reinterpret_cast<const cv::_InputArray*>(Array), String(dslabel), dims_offset);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::dsinsert
// as:     cv::hdf::HDF5::dsinsert (method) cv::hdf::HDF5 (trait) . dsinsert
// Arg ARG cv::_InputArray (boxed) Array= cv::_InputArray (boxed) = 
// Arg ARG string dslabel= string = 
// Arg ARG Vector[Primitive(int)] dims_offset= Vector[Primitive(int)] = 
// Arg ARG Vector[Primitive(int)] dims_counts= Vector[Primitive(int)] = vector<int>()
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_dsinsert_const__InputArray_String_VectorOfint_VectorOfint(void* instance, void* Array, const char* dslabel, void* dims_offset, void* dims_counts) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->dsinsert(*reinterpret_cast<const cv::_InputArray*>(Array), String(dslabel), *reinterpret_cast<const std::vector<int>*>(dims_offset), *reinterpret_cast<const std::vector<int>*>(dims_counts));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::dsinsert
// as:     cv::hdf::HDF5::dsinsert (method) cv::hdf::HDF5 (trait) . dsinsert
// Arg ARG cv::_InputArray (boxed) Array= cv::_InputArray (boxed) = 
// Arg ARG string dslabel= string = 
// Arg ARG RawPtr[Primitive(int)] * dims_offset= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG RawPtr[Primitive(int)] * dims_counts= (ptr) RawPtr[Primitive(int)] = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_dsinsert_const__InputArray_String_const_int_X_const_int_X(void* instance, void* Array, const char* dslabel, const int* dims_offset, const int* dims_counts) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->dsinsert(*reinterpret_cast<const cv::_InputArray*>(Array), String(dslabel), dims_offset, dims_counts);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::dsread
// as:     cv::hdf::HDF5::dsread (method) cv::hdf::HDF5 (trait) . dsread
// Arg ARG cv::_OutputArray (boxed) Array= cv::_OutputArray (boxed) = 
// Arg ARG string dslabel= string = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_dsread_const__OutputArray_String(void* instance, void* Array, const char* dslabel) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->dsread(*reinterpret_cast<cv::_OutputArray*>(Array), String(dslabel));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::dsread
// as:     cv::hdf::HDF5::dsread (method) cv::hdf::HDF5 (trait) . dsread
// Arg ARG cv::_OutputArray (boxed) Array= cv::_OutputArray (boxed) = 
// Arg ARG string dslabel= string = 
// Arg ARG RawPtr[Primitive(int)] * dims_offset= (ptr) RawPtr[Primitive(int)] = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_dsread_const__OutputArray_String_const_int_X(void* instance, void* Array, const char* dslabel, const int* dims_offset) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->dsread(*reinterpret_cast<cv::_OutputArray*>(Array), String(dslabel), dims_offset);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::dsread
// as:     cv::hdf::HDF5::dsread (method) cv::hdf::HDF5 (trait) . dsread
// Arg ARG cv::_OutputArray (boxed) Array= cv::_OutputArray (boxed) = 
// Arg ARG string dslabel= string = 
// Arg ARG Vector[Primitive(int)] dims_offset= Vector[Primitive(int)] = 
// Arg ARG Vector[Primitive(int)] dims_counts= Vector[Primitive(int)] = vector<int>()
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_dsread_const__OutputArray_String_VectorOfint_VectorOfint(void* instance, void* Array, const char* dslabel, void* dims_offset, void* dims_counts) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->dsread(*reinterpret_cast<cv::_OutputArray*>(Array), String(dslabel), *reinterpret_cast<const std::vector<int>*>(dims_offset), *reinterpret_cast<const std::vector<int>*>(dims_counts));
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::dsread
// as:     cv::hdf::HDF5::dsread (method) cv::hdf::HDF5 (trait) . dsread
// Arg ARG cv::_OutputArray (boxed) Array= cv::_OutputArray (boxed) = 
// Arg ARG string dslabel= string = 
// Arg ARG RawPtr[Primitive(int)] * dims_offset= (ptr) RawPtr[Primitive(int)] = 
// Arg ARG RawPtr[Primitive(int)] * dims_counts= (ptr) RawPtr[Primitive(int)] = 
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_dsread_const__OutputArray_String_const_int_X_const_int_X(void* instance, void* Array, const char* dslabel, const int* dims_offset, const int* dims_counts) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->dsread(*reinterpret_cast<cv::_OutputArray*>(Array), String(dslabel), dims_offset, dims_counts);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::kpgetsize
// as:     cv::hdf::HDF5::kpgetsize (method) cv::hdf::HDF5 (trait) . kpgetsize
// Arg ARG string kplabel= string = 
// Arg ARG Primitive(int) dims_flag= Primitive(int) = HDF5::H5_GETDIMS
// Return value: Primitive(int)
cv_return_value_int cv_hdf_HDF5_kpgetsize_const_String_int(void* instance, const char* kplabel, int dims_flag) {
    try {
        int ret = reinterpret_cast<cv::hdf::HDF5*>(instance)->kpgetsize(String(kplabel), dims_flag);
        return { Error::Code::StsOk, NULL, ret };
    } CVRS_CATCH(cv_return_value_int)
}

// parsed: cv::hdf::HDF5::kpcreate
// as:     cv::hdf::HDF5::kpcreate (method) cv::hdf::HDF5 (trait) . kpcreate
// Arg ARG Primitive(int) size= Primitive(int) = 
// Arg ARG string kplabel= string = 
// Arg ARG Primitive(int) compresslevel= Primitive(int) = H5_NONE
// Arg ARG Primitive(int) chunks= Primitive(int) = H5_NONE
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_kpcreate_const_int_String_int_int(void* instance, int size, const char* kplabel, int compresslevel, int chunks) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->kpcreate(size, String(kplabel), compresslevel, chunks);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::kpwrite
// as:     cv::hdf::HDF5::kpwrite (method) cv::hdf::HDF5 (trait) . kpwrite
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG string kplabel= string = 
// Arg ARG Primitive(int) offset= Primitive(int) = H5_NONE
// Arg ARG Primitive(int) counts= Primitive(int) = H5_NONE
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_kpwrite_const_VectorOfKeyPoint_String_int_int(void* instance, void* keypoints, const char* kplabel, int offset, int counts) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->kpwrite(*reinterpret_cast<const std::vector<cv::KeyPoint>*>(keypoints), String(kplabel), offset, counts);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::kpinsert
// as:     cv::hdf::HDF5::kpinsert (method) cv::hdf::HDF5 (trait) . kpinsert
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG string kplabel= string = 
// Arg ARG Primitive(int) offset= Primitive(int) = H5_NONE
// Arg ARG Primitive(int) counts= Primitive(int) = H5_NONE
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_kpinsert_const_VectorOfKeyPoint_String_int_int(void* instance, void* keypoints, const char* kplabel, int offset, int counts) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->kpinsert(*reinterpret_cast<const std::vector<cv::KeyPoint>*>(keypoints), String(kplabel), offset, counts);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}

// parsed: cv::hdf::HDF5::kpread
// as:     cv::hdf::HDF5::kpread (method) cv::hdf::HDF5 (trait) . kpread
// Arg ARG Vector[cv::KeyPoint (simple)] keypoints= Vector[cv::KeyPoint (simple)] = 
// Arg ARG string kplabel= string = 
// Arg ARG Primitive(int) offset= Primitive(int) = H5_NONE
// Arg ARG Primitive(int) counts= Primitive(int) = H5_NONE
// Return value: Primitive(void)
cv_return_value_void cv_hdf_HDF5_kpread_const_VectorOfKeyPoint_String_int_int(void* instance, void* keypoints, const char* kplabel, int offset, int counts) {
    try {
        reinterpret_cast<cv::hdf::HDF5*>(instance)->kpread(*reinterpret_cast<std::vector<cv::KeyPoint>*>(keypoints), String(kplabel), offset, counts);
        return { Error::Code::StsOk, NULL };
    } CVRS_CATCH(cv_return_value_void)
}



} // extern "C"

