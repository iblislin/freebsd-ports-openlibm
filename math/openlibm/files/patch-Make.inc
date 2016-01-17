--- Make.inc.orig	2014-12-01 13:10:35 UTC
+++ Make.inc
@@ -7,10 +7,11 @@ VERSION = 0.4
 SOMAJOR = 1
 SOMINOR = 0
 DESTDIR =
-prefix = /usr/local
-bindir = $(prefix)/bin
-libdir = $(prefix)/lib
-includedir = $(prefix)/include
+prefix ?= /usr/local
+bindir ?= $(prefix)/bin
+libdir ?= $(prefix)/lib
+libdatadir ?= $(prefix)/libdata
+includedir ?= $(prefix)/include
 
 USEGCC = 1
 USECLANG = 0
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
