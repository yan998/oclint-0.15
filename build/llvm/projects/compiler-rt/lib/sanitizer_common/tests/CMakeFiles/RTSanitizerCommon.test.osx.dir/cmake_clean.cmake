file(REMOVE_RECURSE
  "libRTSanitizerCommon.test.osx.a"
  "libRTSanitizerCommon.test.osx.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/RTSanitizerCommon.test.osx.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
