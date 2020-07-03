file(REMOVE_RECURSE
  "../../../../lib/clang/9.0.0/lib/darwin/libclang_rt.fuzzer_no_main_osx.a"
  "../../../../lib/clang/9.0.0/lib/darwin/libclang_rt.fuzzer_no_main_osx.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clang_rt.fuzzer_no_main_osx.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
