file(REMOVE_RECURSE
  "../../../../lib/clang/9.0.0/lib/darwin/libclang_rt.asan_iossim_dynamic.dylib"
  "../../../../lib/clang/9.0.0/lib/darwin/libclang_rt.asan_iossim_dynamic.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clang_rt.asan_iossim_dynamic.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()