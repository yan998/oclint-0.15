file(REMOVE_RECURSE
  "../../../../lib/clang/9.0.0/lib/darwin/libclang_rt.fuzzer_ios.a"
  "../../../../lib/clang/9.0.0/lib/darwin/libclang_rt.fuzzer_ios.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clang_rt.fuzzer_ios.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
