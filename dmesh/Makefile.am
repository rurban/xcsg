lib_LTLIBRARIES = libdmesh.la
AM_CXXFLAGS = -DDMESH_IMPLEMENTATION -I.
libdmesh_la_LDFLAGS = -no-undefined -lm
libdmesh_la_SOURCES = \
	dbox2d.cpp \
	dbox2d.h \
	dcircle.cpp \
	dcircle.h \
	dcoedge.cpp \
	dcoedge.h \
	dedge.cpp \
	dedge.h \
	dentity.cpp \
	dentity.h \
	dline2d.cpp \
	dline2d.h \
	dloop.cpp \
	dloop.h \
	dloop_optimizer.cpp \
	dloop_optimizer.h \
	dmesh.cpp \
	dmesh.h \
	dpos2d.cpp \
	dpos2d.h \
	dprofile.cpp \
	dprofile.h \
	dtriangle.cpp \
	dtriangle.h \
	dvec2d.cpp \
	dvec2d.h \
	dvertex.cpp \
	dvertex.h

# emacs flymake-mode
check-syntax:
	test -n "$(CHK_SOURCES)" && \
	  nice $(COMPILE) -O0 -o /dev/null -S $(CHK_SOURCES)
.PHONY: check-syntax
