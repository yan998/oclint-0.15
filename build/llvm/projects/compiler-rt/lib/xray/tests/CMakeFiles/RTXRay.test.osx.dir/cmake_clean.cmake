file(REMOVE_RECURSE
  "libRTXRay.test.osx.a"
  "libRTXRay.test.osx.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang C CXX)
  include(CMakeFiles/RTXRay.test.osx.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
