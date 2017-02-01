/* This config.h is created specifically for the visual studio build. */

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#undef ENABLE_NLS

/* Define to 1 if you have the `localtime_r' function. */
/* #undef HAVE_LOCALTIME_R */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#ifdef _MSC_VER 
#if _MSC_VER >= 1600
#define HAVE_STDINT_H 1
#else
typedef unsigned __int16 uint16_t;
typedef __int16 int16_t;
typedef unsigned __int32 uint32_t;
typedef __int32 int32_t;
#endif
#endif

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "libexif"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "libexif-devel@lists.sourceforge.net"

/* Define to the full name of this package. */
#define PACKAGE_NAME "EXIF library"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "EXIF library 0.6.21"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "libexif"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.6.21"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "0.6.21"

typedef int ssize_t;
#define  inline __inline


