--- storage/innobase/include/buf0types.h.orig	2021-12-23 18:21:43.106905000 +0100
+++ storage/innobase/include/buf0types.h	2021-12-23 18:22:43.743643000 +0100
@@ -191,7 +191,7 @@
   /** Acquire an exclusive lock */
   inline void lock();
 
-#ifdef UNIV_DEBUG
+#if defined(UNIV_DEBUG) || defined(__FreeBSD__)
   /** @return whether an exclusive lock is being held by any thread */
   bool is_write_locked() const { return rw_lock::is_write_locked(); }
 #endif
