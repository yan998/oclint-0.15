file(REMOVE_RECURSE
  "../../../../lib/clang/9.0.0/lib/darwin/libclang_rt.ubsan_minimal_osx.a"
  "../../../../lib/clang/9.0.0/lib/darwin/libclang_rt.ubsan_minimal_osx.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clang_rt.ubsan_minimal_osx.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
