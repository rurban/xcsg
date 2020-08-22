## Makefile.am
LDADD = ../csplines/libcsplines.la \
	../dmesh/libdmesh.la \
	../tmesh/libtmesh.la \
	../qhull/libqhull.la \
	-lpthread
AM_CXXFLAGS = \
	-DBOOST_ERROR_CODE_HEADER_ONLY \
	-DBOOST_SYSTEM_NO_DEPRECATED \
	-I/usr/local/include \
	-I.. -I. \
	-I../../carve/include \
	-I../../carve/common
# `wx-config --cxxflags`
bin_PROGRAMS = xcsg

xcsg_SOURCES = \
	amf_file.cpp \
	amf_file.h \
	boolean_timer.cpp \
	boolean_timer.h \
	boost_command_line.cpp \
	boost_command_line.h \
	carve_boolean.cpp \
	carve_boolean.h \
	carve_boolean_thread.cpp \
	carve_boolean_thread.h \
	carve_mesh_thread.cpp \
	carve_mesh_thread.h \
	carve_minkowski_hull.cpp \
	carve_minkowski_hull.h \
	carve_minkowski_thread.cpp \
	carve_minkowski_thread.h \
	carve_triangulate.cpp \
	carve_triangulate.h \
	carve_triangulate_face.cpp \
	carve_triangulate_face.h \
	cf_xmlNode.cpp \
	cf_xmlNode.h \
	cf_xmlTree.cpp \
	cf_xmlTree.h \
	clipper_boolean.cpp \
	clipper_boolean.h \
	clipper_csg/clipper.cpp \
	clipper_csg/clipper_csg_config.h \
	clipper_csg/clipper_offset.cpp \
	clipper_csg/clipper_offset.h \
	clipper_csg/clipper_profile.cpp \
	clipper_csg/clipper_profile.h \
	clipper_csg/contour2d.cpp \
	clipper_csg/contour2d.h \
	clipper_csg/dmesh_adapter.cpp \
	clipper_csg/dmesh_adapter.h \
	clipper_csg/polygon2d.cpp \
	clipper_csg/polygon2d.h \
	clipper_csg/polymesh2d.cpp \
	clipper_csg/polymesh2d.h \
	clipper_csg/polyset2d.cpp \
	clipper_csg/polyset2d.h \
	clipper_csg/tmesh_adapter.cpp \
	clipper_csg/tmesh_adapter.h \
	clipper_csg/vmap2d.cpp \
	clipper_csg/vmap2d.h \
	dxf_file.cpp \
	dxf_file.h \
	extrude_mesh.cpp \
	extrude_mesh.h \
	geodesic_sphere.cpp \
	geodesic_sphere.h \
	main.cpp \
	mesh_utils.cpp \
	mesh_utils.h \
	openscad_csg.cpp \
	openscad_csg.h \
	out_triangles.cpp \
	out_triangles.h \
	polymesh3d.cpp \
	polymesh3d.h \
	primitives2d.cpp \
	primitives2d.h \
	primitives3d.cpp \
	primitives3d.h \
	project_mesh.cpp \
	project_mesh.h \
	safe_queue.h \
	std_filename.cpp \
	std_filename.h \
	svg_file.cpp \
	svg_file.h \
	sweep_mesh.cpp \
	sweep_mesh.h \
	sweep_path.cpp \
	sweep_path.h \
	sweep_path_linear.cpp \
	sweep_path_linear.h \
	sweep_path_rotate.cpp \
	sweep_path_rotate.h \
	sweep_path_spline.cpp \
	sweep_path_spline.h \
	sweep_path_transform.cpp \
	sweep_path_transform.h \
	tin_mesh.cpp \
	tin_mesh.h \
	version.h \
	xcircle.cpp \
	xcircle.h \
	xcone.cpp \
	xcone.h \
	xcsg_factory.cpp \
	xcsg_factory.h \
	xcsg_main.cpp \
	xcsg_main.h \
	xcube.cpp \
	xcube.h \
	xcuboid.cpp \
	xcuboid.h \
	xcylinder.cpp \
	xcylinder.h \
	xdifference2d.cpp \
	xdifference2d.h \
	xdifference3d.cpp \
	xdifference3d.h \
	xface.cpp \
	xface.h \
	xfill2d.cpp \
	xfill2d.h \
	xhull2d.cpp \
	xhull2d.h \
	xhull3d.cpp \
	xhull3d.h \
	xintersection2d.cpp \
	xintersection2d.h \
	xintersection3d.cpp \
	xintersection3d.h \
	xlinear_extrude.cpp \
	xlinear_extrude.h \
	xminkowski2d.cpp \
	xminkowski2d.h \
	xminkowski3d.cpp \
	xminkowski3d.h \
	xoffset2d.cpp \
	xoffset2d.h \
	xpolygon.cpp \
	xpolygon.h \
	xpolyhedron.cpp \
	xpolyhedron.h \
	xprojection2d.cpp \
	xprojection2d.h \
	xrectangle.cpp \
	xrectangle.h \
	xrotate_extrude.h \
	xshape.cpp \
	xshape.h \
	xshape2d.cpp \
	xshape2d.h \
	xshape2d_collector.cpp \
	xshape2d_collector.h \
	xsoffset2d.cpp \
	xsoffset2d.h \
	xsolid.cpp \
	xsolid.h \
	xsolid_collector.cpp \
	xsolid_collector.h \
	xsphere.cpp \
	xsphere.h \
	xspline_path.cpp \
	xspline_path.h \
	xsquare.cpp \
	xsquare.h \
	xsweep.cpp \
	xsweep.h \
	xtin_model.cpp \
	xtin_model.h \
	xtmatrix.cpp \
	xtmatrix.h \
	xtransform_extrude.cpp \
	xtransform_extrude.h \
	xunion2d.cpp \
	xunion2d.h \
	xunion3d.cpp \
	xunion3d.h \
	xrotate_extrude.cpp

.c.i:
	$(AM_V_CC)depbase=`echo $@ | sed 's|[^/]*$$|$(DEPDIR)/&|;s|\.o$$||'`;\
	$(COMPILE) -c -E -o $@ $<

.c.ii: # no linemarkers
	$(AM_V_CC)depbase=`echo $@ | sed 's|[^/]*$$|$(DEPDIR)/&|;s|\.o$$||'`;\
	$(COMPILE) -c -E -P -o $@ $<

.c.ic: # replace the original .c with the expanded version.
	$(AM_V_CC)depbase=`echo $@ | sed 's|[^/]*$$|$(DEPDIR)/&|;s|\.o$$||'`;\
	$(COMPILE) -c -E -P -o $@ $<
	$(CLANG_FORMAT) -i $@
	$(am__mv) $< $<.orig
	$(am__mv) $@ $<

# emacs flymake-mode
check-syntax:
	test -n "$(CHK_SOURCES)" && \
	  nice $(COMPILE) -O0 -o /dev/null -S $(CHK_SOURCES)
.PHONY: check-syntax
