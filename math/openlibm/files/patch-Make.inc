--- Make.inc.orig	2014-12-01 13:10:35 UTC
+++ Make.inc
@@ -7,9 +7,10 @@ VERSION = 0.4
 SOMAJOR = 1
 SOMINOR = 0
 DESTDIR =
-prefix = /usr/local
+prefix ?= /usr/local
 bindir = $(prefix)/bin
 libdir = $(prefix)/lib
+libdatadir = $(prefix)/lib
 includedir = $(prefix)/include
 
 USEGCC = 1
@@ -20,6 +21,11 @@ USEGCC = 0
 USECLANG = 1
 endif
 
+ifeq ($(OS), FreeBSD)
+USEGCC = 0
+USECLANG = 1
+endif
+
 AR = ar
 
 ifeq ($(USECLANG),1)
@@ -90,6 +96,7 @@ ifeq ($(OS), FreeBSD)
 SHLIB_EXT = so
 SONAME_FLAG = -soname
 CFLAGS_add+=-fPIC
+libdatadir = $(prefix)/libdata
 endif
 
 ifeq ($(OS), Darwin)
