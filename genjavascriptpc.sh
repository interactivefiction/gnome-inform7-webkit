#!/bin/bash
cat << EOF > ./src/webkit/javascriptcoregtk-1.0.pc
prefix="$PWD/src/webkit"
prefix=/usr/local
exec_prefix=\${prefix}
libdir=\${exec_prefix}/lib
includedir=\${prefix}/include

Name: JavaScriptCoreGTK+
Description: GTK+ version of the JavaScriptCore engine
Version: 1.10.2
Requires: glib-2.0
Libs: -L\${libdir} -ljavascriptcoregtk-1.0
Cflags: -I\${includedir}/webkitgtk-1.0
EOF
