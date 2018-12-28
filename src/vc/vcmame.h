//---------------------------------------------------------------------------
// Copyright (c) 2018 Michael G. Brehm
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//---------------------------------------------------------------------------

#ifndef __VCMAME_H_
#define __VCMAME_H_
#pragma once

//
// COMPATIBILITY
//
#define LSB_FIRST 1
#define CLIB_DECL __cdecl
#define DECL_SPEC __cdecl
#define inline __inline
#define __inline__ __inline
#define INLINE static __inline
#define DIRECTINPUT_VERSION 0x0500
#define DIRECTDRAW_VERSION 0x0300
#define NONAMELESSUNION
#pragma warning(disable:4146)			// "unary minus operator applied to unsigned type"

//
// DEPRECATIONS
//
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

#define TINY_COMPILE 1
#define TINY_NAME driver_mspacman
#define TINY_POINTER &driver_mspacman

//
// MAME_DEBUG
//
#ifdef _DEBUG
#define MAME_DEBUG
#endif

//
// M68000 CORES
//
//#define A68K0						// Assembler-based M68000 CPU Core
//#define A68K2						// Assembler-based M68020 CPU Core

//
// HAS_CPU
//
#define HAS_Z80 1
#define HAS_8080 0
#define HAS_8085A 0
#define HAS_M6502 0
#define HAS_M65C02 0
//#define HAS_M65SC02 0
//#define HAS_M65CE02 0
//#define HAS_M6509 0
#define HAS_M6510 0
//#define HAS_M6510T 0
//#define HAS_M7501 0
//#define HAS_M8502 0
//#define HAS_M4510 0
#define HAS_N2A03 0
#define HAS_H6280 0
#define HAS_I86 0
//#define HAS_I88 0
#define HAS_I186 0
//#define HAS_I188 0
//#define HAS_I286 0
#define HAS_V20 0
#define HAS_V30 0
#define HAS_V33 0
#define HAS_I8035 0
#define HAS_I8039 0
#define HAS_I8048 0
#define HAS_N7751 0
#define HAS_I8X41 0
#define HAS_M6800 0
#define HAS_M6801 0
#define HAS_M6802 0
#define HAS_M6803 0
#define HAS_M6808 0
#define HAS_HD63701 0
#define HAS_NSC8105 0
#define HAS_M6805 0
#define HAS_M68705 0
#define HAS_HD63705 0
#define HAS_HD6309 0
#define HAS_M6809 0
#define HAS_KONAMI 0
#define HAS_M68000 0
#define HAS_M68010 0
#define HAS_M68EC020 0
#define HAS_M68020 0
#define HAS_T11 0
#define HAS_S2650 1
#define HAS_TMS34010 0
#define HAS_TMS34020 0				// 0.57
//#define HAS_TMS9900 0
//#define HAS_TMS9940 0
#define HAS_TMS9980 0
//#define HAS_TMS9985 0
//#define HAS_TMS9989 0
#define HAS_TMS9995 0
//#define HAS_TMS99105A 0
//#define HAS_TMS99110A 0
#define HAS_Z8000 0
#define HAS_TMS32010 0				// 0.62
#define HAS_CCPU 0
#define HAS_ADSP2100 0
#define HAS_ADSP2101 0				// 0.62
#define HAS_ADSP2105 0
#define HAS_PSXCPU 0
#define HAS_ASAP 0
#define HAS_UPD7810 0
#define HAS_V60 0					// 0.56
#define HAS_Z180 0					// 0.57
#define HAS_ARM 0					// 0.58
#define HAS_JAGUAR 0				// 0.62
#define HAS_R3000 0					// 0.59
#define HAS_TMS32031 0				// 0.62
#define HAS_SH2 0					// 0.59
#define HAS_V70 0					// 0.62
#define HAS_DSP32C 0				// 0.62
#define HAS_DECO16 0				// 0.63
#define HAS_TMS32025 0				// 0.63
#define HAS_ADSP2115 0				// 0.63
#define HAS_UPD7807 0				// 0.63
#define HAS_R4600 0					// 0.63
#define HAS_R5000 0					// 0.63
//#define HAS_TI990_10 0			
#define HAS_PIC16C54 0				// 0.67
#define HAS_PIC16C55 0				// 0.67
#define HAS_PIC16C56 0				// 0.67
#define HAS_PIC16C57 0				// 0.67
#define HAS_PIC16C58 0				// 0.67
#define HAS_G65816 0				// 0.72
#define HAS_SPC700 0				// 0.72
#define HAS_E132XS 0				// 0.73
#define HAS_ADSP2104 0				// 0.78

// 
// HAS_SOUND
//
#define HAS_CUSTOM 0
#define HAS_SAMPLES 0
#define HAS_DAC 0
#define HAS_DISCRETE 0
#define HAS_AY8910 1
#define HAS_YM2203 0
// enable only one of the following two
//#define HAS_YM2151 0
#define HAS_YM2151_ALT 0
#define HAS_YM2608 0
#define HAS_YM2610 0
#define HAS_YM2610B 0
#define HAS_YM2612 0
#define HAS_YM3438 0
#define HAS_YM2413 0
#define HAS_YM3812 0
#define HAS_YMZ280B 0
#define HAS_YM3526 0
#define HAS_Y8950 0
#define HAS_SN76477 0
#define HAS_SN76496 1
#define HAS_POKEY 0
#define HAS_NES 0
#define HAS_ASTROCADE 0
#define HAS_NAMCO 1
#define HAS_TMS36XX 0
#define HAS_TMS5110 0
#define HAS_TMS5220 0
#define HAS_VLM5030 0
#define HAS_ADPCM 0
#define HAS_OKIM6295 0
#define HAS_MSM5205 0
#define HAS_UPD7759 0
#define HAS_HC55516 0
#define HAS_K005289 0
#define HAS_K007232 0
#define HAS_K051649 0
#define HAS_K053260 0
#define HAS_K054539 0
#define HAS_SEGAPCM 0
#define HAS_RF5C68 0
#define HAS_CEM3394 0
#define HAS_C140 0
#define HAS_QSOUND 0
#define HAS_SAA1099 0
#define HAS_IREMGA20 0
#define HAS_ES5505 0
#define HAS_ES5506 0
#define HAS_MSM5232 0			// 0.57
#define HAS_BSMT2000 0			// 0.57
#define HAS_YMF278B 0			// 0.62
#define HAS_NAMCONA 0			// 0.63
#define HAS_GAELCO_CG1V 0		// 0.63
#define HAS_GAELCO_GAE1 0		// 0.63
#define HAS_X1_010 0			// 0.65
#define HAS_YMF262 0			// 0.66
#define HAS_MULTIPCM 0			// 0.67
#define HAS_C6280 0				// 0.67
#define HAS_TIA 0				// 0.68
#define HAS_SP0250 0			// 0.72
#define HAS_SCSP 0				// 0.77
#define HAS_PSXSPU 0			// 0.78
#define HAS_YMF271 0			// 0.78

//---------------------------------------------------------------------------

#endif		// __VCMAME_H_
