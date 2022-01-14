--- FindCURSES.cmake.orig	2022-01-14 20:16:27.580313000 +0100
+++ FindCURSES.cmake	2022-01-14 20:17:37.558458000 +0100
@@ -58,7 +58,11 @@
     set(HAVE_LIBNCURSES 1)
     set(CURSES_INCLUDE "<ncurses.h>")
 
-    set(CURSES_LIBRARY ${PC_NCurses_LINK_LIBRARIES})
+    find_library(CURSES_LIBRARY
+      NAMES ncurses
+      PATHS ${PC_NCurses_LIBRARY_DIRS}
+    )
+
     set(CURSES_VERSION ${PC_NCurses_VERSION})
 
     include(FindPackageHandleStandardArgs)
