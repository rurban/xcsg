lib_LTLIBRARIES = libcsplines.la
AM_CXXFLAGS = -DCSPLINES_IMPLEMENTATION -I.
libcsplines_la_LDFLAGS = -no-undefined -lm
libcsplines_la_SOURCES = \
	ap/ap.cpp \
	ap/ap.h \
	ap/apvt.h \
	ap/spline3.cpp \
	ap/spline3.h \
	csplines_config.h \
	spline_path.cpp \
	spline_path.h

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
