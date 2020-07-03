# Install script for directory: /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/lib

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
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/IR/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/FuzzMutate/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/IRReader/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/CodeGen/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/BinaryFormat/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/Bitcode/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/Bitstream/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/Transforms/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/Linker/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/Analysis/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/LTO/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/MC/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/MCA/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/Object/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/ObjectYAML/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/Option/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/Remarks/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/DebugInfo/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/ExecutionEngine/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/Target/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/AsmParser/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/LineEditor/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/ProfileData/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/Passes/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/TextAPI/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/ToolDrivers/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/XRay/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/Testing/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/WindowsManifest/cmake_install.cmake")

endif()

