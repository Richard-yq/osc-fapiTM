/*******************************************************************************
*
* Copyright (c) 2020 Intel.
* 
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
* 
* http://www.apache.org/licenses/LICENSE-2.0
* 
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
* 
*
*******************************************************************************/
/*! \file common_typedef_xran.h
    \brief  This header file defines those data type both used by eNB and UE.
*/

#ifndef _COMMON_TYPEDEF_XRAN_H_
#define _COMMON_TYPEDEF_XRAN_H_

#include <stdint.h>

#include <stdio.h>
#include <stdbool.h>

/*!
    \struct COMPLEX32
    \brief Defines 64-bit complex structure; both real part and image part have 32 bit width.
*/
typedef struct {
    float re; /*!< 32-bit real part */
    float im; /*!< 32-bit image part */
} COMPLEX32;

//! @{
/*!
    \struct complex_int16_t
    \brief Defines 32-bit complex structure; both real part and image part have 16 bit width.
    \brief Same defines as COMPLEX16
*/
typedef struct {
    int16_t re; /*!< 16-bit real part */
    int16_t im; /*!< 16-bit image part */
}complex_int16_t,COMPLEX16;
//! @}

/*!
    \struct complex_int32_t
    \brief Defines 64-bit complex structure; both real part and image part have 32 bit width.
*/
typedef struct {
    int32_t re; /*!< 32-bit real part */
    int32_t im; /*!< 32-bit image part */
}complex_int32_t;

/*!
    \struct complex_float
    \brief Defines 64-bit complex structure; both real part and image part have 32 bit width.
*/
typedef struct {
    float re; /*!< 32-bit real part */
    float im; /*!< 32-bit image part */
}complex_float;

/*!
    \struct complex_double
    \brief Defines 128-bit complex structure; both real part and image part have 64 bit width.
*/
typedef struct {
    double re; /*!< 64-bit real part */
    double im; /*!< 64-bit image part */
}complex_double;

/*!
    \typedef half
    \brief half is a 16-bit IEEE floating-point standard number format.
    \note In future this will be known as `short float' or `__fp16'.
    \note Older compilers must provide proxy support for it as a plain 16-bit integer
*/
typedef int16_t half;

/*!
    \struct complex_half
    \brief Defines 32-bit complex structure; both real part and image part have 16 bit width.
*/
typedef struct {
    half re; /*!< 16-bit real part */
    half im; /*!< 16-bit image part */
}complex_half;

/*!
    \enum instruction_cpu_support
    \brief Define instruction the CPU can support.
*/
typedef enum{
    CPU_GENERIC, /*!< C */
    SSE4_2,      /*!< SSE4_2 */
    AVX,         /*!< AVX */
    AVX2,        /*!< AVX2 */
    AVX_512,     /*!< AVX512 */
}instruction_cpu_support;

/*!
    \enum bblib_modulation_order
    \brief Common enums for modulation order.
*/
enum bblib_modulation_order {
    BBLIB_BPSK   = 1, /*!< BPSK */
    BBLIB_QPSK   = 2, /*!< QPSK */
    BBLIB_PAM4   = 3, /*!< PAM4 */
    BBLIB_QAM16  = 4, /*!< QAM16 */
    BBLIB_PAM8   = 5, /*!< PAM8 */
    BBLIB_QAM64  = 6, /*!< QAM64 */
    BBLIB_PAM16  = 7, /*!< PAM16 */
    BBLIB_QAM256 = 8  /*!< QAM256 */
};


#ifdef _WIN64
#define __align(x) __declspec(align(x))
#else
#define __align(x) __attribute__((aligned(x)))
#define _aligned_malloc(x,y) memalign(y,x)
#endif

/* Test time and loops for unit test */
#define TIME 40
#define LOOP 30

#endif /* #ifndef _COMMON_TYPEDEF_H_ */

