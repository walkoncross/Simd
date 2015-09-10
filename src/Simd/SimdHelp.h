/*
* Simd Library (http://simd.sourceforge.net).
*
* Copyright (c) 2011-2015 Yermalayeu Ihar.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy 
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell 
* copies of the Software, and to permit persons to whom the Software is 
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in 
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/

/*                                                                                    
* File name   : SimdHelp.h                                                       
* Description : This file contains additional information about Simd Library needed for help generated by Doxygen.                
*/

/*!
    \mainpage

    This is the reference documentation of <a href="http://simd.sourceforge.net">Simd Library</a>,
    the C++ image processing library.
    This documentation have been generated using the tool <a href="http://www.doxygen.org">doxygen</a>.
    It contains a detailed description of all classes and functions of the %Simd Library.
    If you have downloaded the %Simd Library package, you actually have a local copy of these pages in the
    \c simd/doc/help/ directory.

    Use the menu above to navigate through the documentation pages.
    As a first step, you may look at the list of <a href="modules.html">available modules</a>.
*/

/*! @defgroup simd_overview Simd Library Overview */
/*@{*/
/*!
    \page foo2

    The <b>%Simd Library</b> is a free open source image processing library, designed for C and C++ programmers.
    It provides many useful high performance algorithms for image processing such as: pixel format conversion, image scaling and filtration, 
    extraction of statistic information from images, motion detection.
    
    \n\n The algorithms are optimized with using of different SIMD CPU extensions. 
    In particular the library supports following CPU extensions: SSE, SSE2, SSSE3, SSE4.1, SSE4.2, AVX and AVX2 for x86/x64, VMX(Altivec) and VSX(Power7) for PowerPC.

    \n\n The %Simd Library has C API and also contains useful C++ classes and functions to facilitate access to C API.
    The library supports dynamic and static linking, 32-bit and 64-bit Windows and Linux, MSVS and G++ compilers, MSVS project and CMake build systems.

    \section s1 Library folder's structure

    The %Simd Library has next folder's structure:
     - \c simd/src/Simd/ - contains source codes of the library.
     - \c simd/src/Test/ - contains test framework of the library.
     - \c simd/prj/vs11/ - contains project files of Microsoft Visual Studio 2012.
     - \c simd/prj/cmd/ - contains additional scripts needed for building of the library in Windows.
     - \c simd/prj/cmake/ - contains files of CMake build systems.
     - \c simd/prj/sh/ - contains additional scripts needed for building of the library in Linux.
     - \c simd/prj/txt/ - contains text files needed for building of the library.
     - \c simd/doc/ - contains documentation of the library.
     - \c simd/doc/src/ - contains scripts for generation of this documentation by <a href="http://www.doxygen.org">doxygen</a>.

     \section s2 The library using

     If you use the library from C code you must include:
     \code
     #include "Simd/Simd.h"
     \endcode

     And to use the library from C++ code you must include:
     \code
     #include "Simd/Simd.hpp"
     \endcode

     \section s3 Test Framework

     The test suite is needed for testing of correctness of work of the library and also for performance testing of the library.
*/
/*@}*/

/*! @defgroup c_types C Types
    \short Types of %Simd Library C API.
*/

/*! @defgroup cpp_types C++ Types
    \short C++ API Types of %Simd Library.
*/

/*! @ingroup cpp_types
    @defgroup cpp_allocator struct Allocator
    \short Allocator structure and related functions. 
*/

/*! @ingroup cpp_types
    @defgroup cpp_point struct Point
    \short Point structure and related functions. 
*/

/*! @ingroup cpp_point
    @defgroup cpp_point_functions Related Functions 
    \short Related functions for Point structure. 
*/

/*! @ingroup cpp_types
    @defgroup cpp_rectangle struct Rectangle
    \short Rectangle structure and related functions. 
*/

/*! @ingroup cpp_rectangle
    @defgroup cpp_rectangle_functions Related Functions 
    \short Related functions for Rectangle structure. 
*/

/*! @ingroup cpp_types
    @defgroup cpp_view struct View
    \short View structure and related functions. 
*/

/*! @ingroup cpp_view
    @defgroup cpp_view_functions Related Functions 
    \short Related functions for View structure. 
*/

/*! @ingroup cpp_types
@defgroup cpp_frame struct Frame
\short Frame structure and related functions.
*/

/*! @ingroup cpp_frame
@defgroup cpp_frame_functions Related Functions
\short Related functions for Frame structure.
*/

/*! @defgroup functions Functions
    \short Functions of %Simd Library API.
*/

/*! @ingroup functions
    @defgroup info Info
    \short Functions with information about library.
*/

/*! @ingroup functions
    @defgroup memory Memory Utilities
    \short Functions for memory management.
*/

/*! @ingroup functions
    @defgroup hash Hash Functions
    \short Functions for hash estimation.
*/

/*! @ingroup functions
    @defgroup reordering Byte Reordering
    \short Functions for bytes reordering.
*/

/*! @ingroup functions
    @defgroup conversion Conversion
    \short Functions for image format conversions.
*/

/*! @ingroup conversion
	@defgroup universal_conversion Universal
	\short Universal functions for image format conversions.
*/

/*! @ingroup conversion
    @defgroup bayer_conversion Bayer 
    \short Functions for Bayer image conversions.
*/

/*! @ingroup conversion
    @defgroup bgr_conversion BGR-24 
    \short Functions for BGR-24 image conversions.
*/

/*! @ingroup conversion
    @defgroup bgra_conversion BGRA-32 
    \short Functions for BGRA-32 image conversions.
*/

/*! @ingroup conversion
    @defgroup gray_conversion Gray-8 
    \short Functions for Gray-8 image conversions.
*/

/*! @ingroup conversion
    @defgroup yuv_conversion YUV 
    \short Functions for YUV image conversions.
*/

/*! @ingroup conversion
    @defgroup other_conversion Other 
    \short Functions for other image format conversions.
*/

/*! @ingroup functions
    @defgroup drawing Drawing
    \short Functions for image drawing.
*/

/*! @ingroup functions
    @defgroup correlation Correlation
    \short Functions for estimation of correlation.
*/

/*! @ingroup functions
    @defgroup histogram Histogram
    \short Functions for estimation of image histogram.
*/

/*! @ingroup functions
    @defgroup integral Integral
    \short Functions for estimation of integral image.
*/

/*! @ingroup functions
    @defgroup operation Operations
    \short Various mathematical operations with images.
*/

/*! @ingroup functions
    @defgroup filter Filters
    \short Various image filters.
*/

/*! @ingroup filter
    @defgroup median_filter Median Filters
    \short Median image filters.
*/

/*! @ingroup filter
    @defgroup sobel_filter Sobel Filters
    \short Sobel image filters.
*/

/*! @ingroup filter
    @defgroup laplace_filter Laplace Filters
    \short Laplace image filters.
*/

/*! @ingroup filter
    @defgroup other_filter Other Filters
    \short Other image filters.
*/

/*! @ingroup functions
    @defgroup resizing Resizing
    \short Functions for image resizing.
*/

/*! @ingroup functions
    @defgroup shifting Shifting
    \short Functions for image shifting.
*/

/*! @ingroup functions
    @defgroup copying Copying
    \short Functions for image copying.
*/

/*! @ingroup functions
    @defgroup filling Filling
    \short Functions for image filling.
*/

/*! @ingroup functions
    @defgroup binarization Binarization
    \short Functions for image binarization.
*/

/*! @ingroup functions
    @defgroup statistic Statistic
    \short Functions for image statistic estimation.
*/

/*! @ingroup statistic
    @defgroup conditional Conditional
    \short Functions for conditional estimation of image statistic.
*/

/*! @ingroup statistic
    @defgroup col_statistic Columns Statistic
    \short Estimation of image statistic for separate columns.
*/

/*! @ingroup statistic
    @defgroup row_statistic Rows Statistic
    \short Estimation of image statistic for separate rows.
*/

/*! @ingroup statistic
    @defgroup sobel_statistic Sobel Statistic
    \short Getting of statistic related with Sobel filters.
*/

/*! @ingroup statistic
    @defgroup other_statistic Other Statistic
    \short Estimation of various image statistic.
*/

/*! @ingroup functions
    @defgroup motion_detection Motion Detection
    \short Functions for motion detection.
*/

/*! @ingroup motion_detection
    @defgroup texture_estimation Texture Estimation
    \short Functions for estimation of background texture.
*/

/*! @ingroup motion_detection
    @defgroup difference_estimation Difference Estimation
    \short Functions for estimation of difference between current frame and background.
*/

/*! @ingroup motion_detection
    @defgroup segmentation Segmentation
    \short Functions for image segmentation.
*/

/*! @ingroup motion_detection
    @defgroup interference Interference Detection
    \short Functions for detection of interference in motion detection algorithm.
*/

/*! @ingroup motion_detection
    @defgroup contour Contour Extraction
    \short Functions for contour extraction.
*/

/*! @ingroup motion_detection
    @defgroup background Background Updating
    \short Functions for background updating.
*/

/*! @ingroup motion_detection
    @defgroup edge_background Edge Background Updating
    \short Functions for edge background updating.
*/

/*! @ingroup functions
    @defgroup face_recognition Face Recognition
    \short Functions for face recognition.
*/

/*! @ingroup functions
    @defgroup svm SVM
    \short Support Vector Machine's functions.
*/

#ifndef __SimdHelp_h__
#define __SimdHelp_h__
#endif//__SimdHelp_h__

