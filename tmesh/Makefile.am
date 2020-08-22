lib_LTLIBRARIES = libtmesh.la
AM_CFLAGS = -DTMESH_IMPLEMENTATION -I.
libtmesh_la_LDFLAGS = -no-undefined -lm
libtmesh_la_SOURCES = \
	libtess2/Source/bucketalloc.c \
	libtess2/Source/dict.c \
	libtess2/Source/geom.c \
	libtess2/Source/mesh.c \
	libtess2/Source/priorityq.c \
	libtess2/Source/sweep.c \
	libtess2/Source/tess.c \
	libtess2/Include/tesselator.h \
	tmesh_config.h

# emacs flymake-mode
check-syntax:
	test -n "$(CHK_SOURCES)" && \
	  nice $(COMPILE) -O0 -o /dev/null -S $(CHK_SOURCES)
.PHONY: check-syntax
