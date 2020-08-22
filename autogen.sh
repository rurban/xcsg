#!/bin/sh
touch NEWS ChangeLog AUTHORS
ln -s README.ms README
test -d build-aux || mkdir build-aux
autoreconf -fi
automake --add-missing
