#define JPEG_LIB_VERSION  80
#define LIBJPEG_TURBO_VERSION  2.1.5.1
#define LIBJPEG_TURBO_VERSION_NUMBER  2001005

#define C_ARITH_CODING_SUPPORTED
#define D_ARITH_CODING_SUPPORTED
/* #undef MEM_SRCDST_SUPPORTED */
#define WITH_SIMD

#define BITS_IN_JSAMPLE  8      /* use 8 or 12 */

#undef RIGHT_SHIFT_IS_UNSIGNED

/* Define "boolean" as unsigned char, not int, per Windows custom */
#ifndef __RPCNDR_H__            /* don't conflict if rpcndr.h already read */
typedef unsigned char boolean;
#endif
#define HAVE_BOOLEAN            /* prevent jmorecfg.h from redefining it */

/* Define "INT32" as int, not long, per Windows custom */
#if !(defined(_BASETSD_H_) || defined(_BASETSD_H))   /* don't conflict if basetsd.h already read */
typedef short INT16;
typedef signed int INT32;
#endif
#define XMD_H                   /* prevent jmorecfg.h from redefining it */
