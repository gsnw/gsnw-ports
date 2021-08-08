--- storage/rocksdb/rocksdb/port/jemalloc_helper.h.orig	2021-08-08 14:56:56.138050000 +0200
+++ storage/rocksdb/rocksdb/port/jemalloc_helper.h	2021-08-08 08:49:24.140735000 +0200
@@ -26,6 +26,10 @@
 #include <jemalloc/jemalloc.h>
 #endif
 
+#ifdef __FreeBSD__
+#define JEMALLOC_USABLE_SIZE_CONST const
+#endif
+
 #ifndef JEMALLOC_CXX_THROW
 #define JEMALLOC_CXX_THROW
 #endif
