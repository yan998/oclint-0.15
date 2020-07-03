file(REMOVE_RECURSE
  "../../../lib/clang/9.0.0/include/sanitizer/allocator_interface.h"
  "../../../lib/clang/9.0.0/include/sanitizer/asan_interface.h"
  "../../../lib/clang/9.0.0/include/sanitizer/common_interface_defs.h"
  "../../../lib/clang/9.0.0/include/sanitizer/coverage_interface.h"
  "../../../lib/clang/9.0.0/include/sanitizer/dfsan_interface.h"
  "../../../lib/clang/9.0.0/include/sanitizer/hwasan_interface.h"
  "../../../lib/clang/9.0.0/include/sanitizer/linux_syscall_hooks.h"
  "../../../lib/clang/9.0.0/include/sanitizer/lsan_interface.h"
  "../../../lib/clang/9.0.0/include/sanitizer/msan_interface.h"
  "../../../lib/clang/9.0.0/include/sanitizer/netbsd_syscall_hooks.h"
  "../../../lib/clang/9.0.0/include/sanitizer/scudo_interface.h"
  "../../../lib/clang/9.0.0/include/sanitizer/tsan_interface.h"
  "../../../lib/clang/9.0.0/include/sanitizer/tsan_interface_atomic.h"
  "../../../lib/clang/9.0.0/include/xray/xray_interface.h"
  "../../../lib/clang/9.0.0/include/xray/xray_log_interface.h"
  "../../../lib/clang/9.0.0/include/xray/xray_records.h"
  "CMakeFiles/compiler-rt-headers"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/compiler-rt-headers.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
