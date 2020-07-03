# Install script for directory: /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/unittests

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm-install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/ADT/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/Analysis/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/AsmParser/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/BinaryFormat/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/Bitcode/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/Bitstream/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/CodeGen/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/DebugInfo/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/Demangle/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/ExecutionEngine/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/FuzzMutate/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/IR/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/LineEditor/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/Linker/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/MC/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/MI/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/Object/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/ObjectYAML/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/Option/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/Remarks/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/Passes/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/ProfileData/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/Support/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/TextAPI/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/Target/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/Transforms/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/XRay/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/unittests/tools/cmake_install.cmake")

endif()

