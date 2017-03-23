AC_PREREQ([2.61])
AC_INIT([libfoolist], [0.1.0] [edjunior@gmail.com])
AM_INIT_AUTOMAKE([1.10 no-define foreign subdir-objects])
AC_CANONICAL_HOST
AM_MAINTAINER_MODE

AC_CONFIG_MACRO_DIRS([m4])

LIBFOOLIST_SO_VERSION=0.1.0

AC_ARG_ENABLE([debug],
	      AS_HELP_STRING([--enable-debug],
			     [enable debug @<:@not default@:>@]),
	      [enable_debug=$enableval],
	      [enable_debug=no])
if test $enable_debug = yes; then
  AC_DEFINE([ENABLE_DEBUG], 1, [Enable debug])
fi

AC_LANG(C)

AC_PROG_LIBTOOL
LT_INIT

# Checks for header files
AC_CONFIG_HEADERS([config.h])

AC_CONFIG_FILES([Makefile lib/Makefile])
AC_OUTPUT
