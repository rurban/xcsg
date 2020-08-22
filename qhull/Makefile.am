lib_LTLIBRARIES = libqhull.la
AM_CXXFLAGS = -DQHULL_IMPLEMENTATION -I.
# -lqhull_r
libqhull_la_LDFLAGS = -no-undefined -lm -lqt
# libqhullcpp: Compile libqhull_r and Qhull together due to use of setjmp/longjmp()
libqhull_la_SOURCES = \
	qhull2d.cpp \
	qvec3d.h \
	qvec3d.cpp \
	qhull3d.h \
	qhull2d.h \
	qhull3d.cpp \
	qhull_config.h \
	libqhullcpp/Coordinates.cpp \
	libqhullcpp/Coordinates.h \
	libqhullcpp/PointCoordinates.cpp \
	libqhullcpp/PointCoordinates.h \
	libqhullcpp/Qhull.cpp \
	libqhullcpp/Qhull.h \
	libqhullcpp/QhullError.h \
	libqhullcpp/QhullFacet.cpp \
	libqhullcpp/QhullFacet.h \
	libqhullcpp/QhullFacetList.cpp \
	libqhullcpp/QhullFacetList.h \
	libqhullcpp/QhullFacetSet.cpp \
	libqhullcpp/QhullFacetSet.h \
	libqhullcpp/QhullHyperplane.cpp \
	libqhullcpp/QhullHyperplane.h \
	libqhullcpp/QhullIterator.h \
	libqhullcpp/QhullLinkedList.h \
	libqhullcpp/QhullPoint.cpp \
	libqhullcpp/QhullPoint.h \
	libqhullcpp/QhullPointSet.cpp \
	libqhullcpp/QhullPointSet.h \
	libqhullcpp/QhullPoints.cpp \
	libqhullcpp/QhullPoints.h \
	libqhullcpp/QhullQh.cpp \
	libqhullcpp/QhullQh.h \
	libqhullcpp/QhullRidge.cpp \
	libqhullcpp/QhullRidge.h \
	libqhullcpp/QhullSet.cpp \
	libqhullcpp/QhullSet.h \
	libqhullcpp/QhullSets.h \
	libqhullcpp/QhullStat.cpp \
	libqhullcpp/QhullStat.h \
	libqhullcpp/QhullVertex.cpp \
	libqhullcpp/QhullVertex.h \
	libqhullcpp/QhullVertexSet.cpp \
	libqhullcpp/QhullVertexSet.h \
	libqhullcpp/RboxPoints.cpp \
	libqhullcpp/RboxPoints.h \
	libqhullcpp/RoadError.cpp \
	libqhullcpp/RoadError.h \
	libqhullcpp/RoadLogEvent.cpp \
	libqhullcpp/RoadLogEvent.h \
	libqhullcpp/functionObjects.h \
	libqhull_r/geom2_r.c \
	libqhull_r/geom_r.c \
	libqhull_r/geom_r.h \
	libqhull_r/global_r.c \
	libqhull_r/io_r.c \
	libqhull_r/io_r.h \
	libqhull_r/libqhull_r.c \
	libqhull_r/libqhull_r.h \
	libqhull_r/mem_r.c \
	libqhull_r/mem_r.h \
	libqhull_r/merge_r.c \
	libqhull_r/merge_r.h \
	libqhull_r/poly2_r.c \
	libqhull_r/poly_r.c \
	libqhull_r/poly_r.h \
	libqhull_r/qhull_ra.h \
	libqhull_r/qset_r.c \
	libqhull_r/qset_r.h \
	libqhull_r/random_r.c \
	libqhull_r/random_r.h \
	libqhull_r/rboxlib_r.c \
	libqhull_r/stat_r.c \
	libqhull_r/stat_r.h \
	libqhull_r/user_r.h \
	libqhull_r/usermem_r.c \
	libqhull_r/userprintf_r.c

# emacs flymake-mode
check-syntax:
	test -n "$(CHK_SOURCES)" && \
	  nice $(COMPILE) -O0 -o /dev/null -S $(CHK_SOURCES)
.PHONY: check-syntax
