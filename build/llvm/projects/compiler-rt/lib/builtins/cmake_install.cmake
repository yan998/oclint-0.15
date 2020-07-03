# Install script for directory: /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/projects/compiler-rt/lib/builtins

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang_rt.cc_kextx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/darwin" TYPE FILE FILES "/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/./lib/clang/9.0.0/lib/darwin/libclang_rt.cc_kext.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang_rt.cc_kext_iosx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/darwin" TYPE FILE FILES "/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/./lib/clang/9.0.0/lib/darwin/libclang_rt.cc_kext_ios.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang_rt.osxx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/darwin" TYPE FILE FILES "/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/./lib/clang/9.0.0/lib/darwin/libclang_rt.osx.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang_rt.iosx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/darwin" TYPE FILE FILES "/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/./lib/clang/9.0.0/lib/darwin/libclang_rt.ios.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang_rt.soft_picx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/macho_embedded" TYPE FILE FILES "/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/./lib/clang/9.0.0/lib/macho_embedded/libclang_rt.soft_pic.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang_rt.soft_staticx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/macho_embedded" TYPE FILE FILES "/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/./lib/clang/9.0.0/lib/macho_embedded/libclang_rt.soft_static.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang_rt.hard_picx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/macho_embedded" TYPE FILE FILES "/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/./lib/clang/9.0.0/lib/macho_embedded/libclang_rt.hard_pic.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang_rt.hard_staticx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/macho_embedded" TYPE FILE FILES "/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/./lib/clang/9.0.0/lib/macho_embedded/libclang_rt.hard_static.a")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/projects/compiler-rt/lib/builtins/Darwin-excludes/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/projects/compiler-rt/lib/builtins/macho_embedded/cmake_install.cmake")

endif()

