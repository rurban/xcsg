#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([xcsg], [VERSION], [arnholm@arnholm.org])
AC_CONFIG_AUX_DIR([build-aux])
# AC_CONFIG_SRCDIR([qhull/qhull2d.cpp])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([1.14 subdir-objects no-define dist-xz])

# Checks for programs.
AC_PROG_AWK
AC_PROG_CXX
AC_PROG_CC
# prefer gcc-ar over ar (lto + plugins)
AC_CHECK_PROGS([AR], [gcc-ar ar], [ar])
AC_CHECK_PROGS([RANLIB], [gcc-ranlib ranlib], [ranlib])
AC_PROG_LN_S
AC_PROG_MAKE_SET
LT_INIT

if test x$enable_shared = xyes; then
   AC_DEFINE([ENABLE_SHARED],1,[Define to 1 if a shared library will be built])
   LTEXEC="\${top_builddir}/libtool --mode=execute"
fi
AM_CONDITIONAL([ENABLE_SHARED], [test "x$enable_shared" = xyes])
AC_SUBST(LTEXEC)

# Checks for libraries.
AC_CHECK_LIB([m], [floor])
# Checks for header files.
AC_CHECK_HEADERS([float.h limits.h stddef.h stdlib.h string.h unistd.h])

AC_LANG_PUSH([C++])
#AC_CHECK_LIB([boost], [main])
AC_CHECK_LIB([boost_program_options], [main])
AC_CHECK_LIB([boost_system], [main])
AC_CHECK_LIB([boost_filesystem], [main])
AC_CHECK_LIB([boost_thread], [main])
# libqhull is in fedora, but libqhullcpp does setjmp into it. So we use our sources
#AC_CHECK_LIB([qhull_r], [qh_qhull])
#AC_CHECK_LIB([QtCore], [qInitResourceIO]) # broken

AC_CHECK_HEADERS([QtCore/QList boost/filesystem.hpp])
AC_LANG_POP([C++])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_C_INLINE
AC_TYPE_SIZE_T
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T
AC_CHECK_TYPES([ptrdiff_t])

# Checks for library functions.
AC_FUNC_ERROR_AT_LINE
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_FUNC_STRTOD
AC_CHECK_FUNCS([floor memset pow sqrt strchr strpbrk strrchr strstr strtol])

CFLAGS="$CFLAGS -W -Wno-clobbered -fPIC -DNOPCH -fexceptions -Os"
CXXFLAGS="$CXXFLAGS -std=c++0x -W -Wno-clobbered -fPIC -DNOPCH -fexceptions -Os"

AC_CONFIG_FILES([
        Makefile
        csplines/Makefile
        dmesh/Makefile
        tmesh/Makefile
        xcsg/Makefile
])
AC_OUTPUT
