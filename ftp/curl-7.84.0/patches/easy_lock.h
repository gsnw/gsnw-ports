--- lib/easy_lock.h.orig	2022-06-28 06:32:35.213682929 +0200
+++ lib/easy_lock.h	2022-06-28 06:33:11.773262901 +0200
@@ -36,6 +36,9 @@
 
 #elif defined (HAVE_ATOMIC)
 #include <stdatomic.h>
+#if defined(HAVE_SCHED_YIELD)
+#include <sched.h>
+#endif
 
 #define curl_simple_lock atomic_bool
 #define CURL_SIMPLE_LOCK_INIT false
