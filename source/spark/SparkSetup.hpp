#ifndef __SPARK_SPARKSETUP_HPP_INCLUDED__
#define __SPARK_SPARKSETUP_HPP_INCLUDED__

#include "SparkLibConfig.hpp"
/**
* @Brief Version of the sparkling library:
*/
#define SPARK_VERSION				0x001
#define SPARK_VERSION_MAJOR			0x001
#define SPARK_VERSION_MINOR			0x000

/**
* @Brief Supported Platforms:
*/
#define SPARK_PLATFORM_UNKNOWN		0x00000000
#define SPARK_PLATFORM_WINDOWS		0x00010000
#define SPARK_PLATFORM_LINUX		0x00020000
#define SPARK_PLATFORM_APPLE		0x00040000
#define SPARK_PLATFORM_IOS			0x00080000
#define SPARK_PLATFORM_ANDROID		0x00100000
#define SPARK_PLATFORM_UNIX			0x00200000
#define SPARK_PLATFORM_QNXNTO		0x00400000
#define SPARK_PLATFORM_WEBGL		0x00800000

/**
* @Brief Define the platform:
*/
#ifdef __WEBGL__
#   define SPARK_PLATFORM SPARK_PLATFORM_WEBGL
#elif defined(_WIN32) || defined(_WIN64) || defined(WIN32) || defined(WIN64)
#	define SPARK_PLATFORM SPARK_PLATFORM_WINDOWS
#elif defined(__ANDROID__)
#   define SPARK_PLATFORM SPARK_PLATFORM_ANDROID
#elif defined(__linux) || defined(__linux__)
#   define SPARK_PLATFORM SPARK_PLATFORM_LINUX
#elif defined (__APPLE__)
#   define SPARK_PLATFORM SPARK_PLATFORM_APPLE
#elif defined(__unix) || defined(__unix__)
#   define SPARK_PLATFORM SPARK_PLATFORM_UNIX
#else
#	define SPARK_PLATFORM SPARK_PLATFORM_UNKNOWN
#endif

/**
* @Brief Supported Compilers
*/
#define SPARK_COMPILER_UNKNOWN		0x00000000
#define SPARK_COMPILER_VC2010		0x00010000
#define SPARK_COMPILER_VC2012		0x00020000
#define SPARK_COMPILER_GCC          0x00040000
#define SPARK_COMPILER_CLANG		0x00080000
#define SPARK_COMPILER_VC2013		0x00100000
#define SPARK_COMPILER_VC2015		0x00200000
#define SPARK_COMPILER_VC2017		0x00400000
#define SPARK_COMPILER_VC2019		0x00800000
#define SPARK_COMPILER_VC2022		0x01000000

/**
* Define the Compiler:
* SYMBOL: _MSC_VER Microsoft Compiler Version:
*/
#ifdef _MSC_VER
#	if (_MSC_VER == 1600)
#		define SPARK_COMPILER SPARK_COMPILER_VC2010
#	endif
#	if (_MSC_VER == 1700)
#		define SPARK_COMPILER SPARK_COMPILER_VC2012
#	endif
#   if (_MSC_VER == 1800)
#		define SPARK_COMPILER SPARK_COMPILER_VC2013
#	endif
#   if (_MSC_VER == 1900)
#		define SPARK_COMPILER SPARK_COMPILER_VC2015
#	endif
#   if ((_MSC_VER >= 1910) & (_MSC_VER < 1920))
#		define SPARK_COMPILER SPARK_COMPILER_VC2017
#	endif
#	if ((_MSC_VER >= 1920) & (_MSC_VER < 1929))
#		define SPARK_COMPILER SPARK_COMPILER_VC2019
#	endif
#	if (_MSC_VER >= 1930)
#		define SPARK_COMPILER SPARK_COMPILER_VC2022
#	endif
#elif defined(__GNUC__)
#	define SPARK_COMPILER SPARK_COMPILER_GCC
#elif defined(__clang__)
#   define PARK_COMPILER SPARK_COMPILER_CLANG
#else
#	define SPARK_COMPILER SPARK_COMPILER_UNKNOWN
#endif
#endif