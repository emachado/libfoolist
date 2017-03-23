AM_CFLAGS = -Wall
AM_LDFLAGS = -rdynamic

lib_LTLIBRARIES = libfoolist.la
libfoolist_la_SOURCES = foolist.c

TESTS = test_lib
test_lib_SOURCES = tests/test_libfoolist.c
test_lib_LDADD = libfoolist.la

noinst_PROGRAMS = $(TESTS)
