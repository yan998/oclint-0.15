# Install script for directory: /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/projects/compiler-rt/lib/xray

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang_rt.xray_osxx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/darwin" TYPE STATIC_LIBRARY FILES "/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/clang/9.0.0/lib/darwin/libclang_rt.xray_osx.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/darwin/libclang_rt.xray_osx.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/darwin/libclang_rt.xray_osx.a")
    execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/darwin/libclang_rt.xray_osx.a")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang_rt.xray-fdr_osxx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/darwin" TYPE STATIC_LIBRARY FILES "/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/clang/9.0.0/lib/darwin/libclang_rt.xray-fdr_osx.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/darwin/libclang_rt.xray-fdr_osx.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/darwin/libclang_rt.xray-fdr_osx.a")
    execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/darwin/libclang_rt.xray-fdr_osx.a")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang_rt.xray-basic_osxx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/darwin" TYPE STATIC_LIBRARY FILES "/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/clang/9.0.0/lib/darwin/libclang_rt.xray-basic_osx.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/darwin/libclang_rt.xray-basic_osx.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/darwin/libclang_rt.xray-basic_osx.a")
    execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/darwin/libclang_rt.xray-basic_osx.a")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang_rt.xray-profiling_osxx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/darwin" TYPE STATIC_LIBRARY FILES "/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/clang/9.0.0/lib/darwin/libclang_rt.xray-profiling_osx.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/darwin/libclang_rt.xray-profiling_osx.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/darwin/libclang_rt.xray-profiling_osx.a")
    execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/lib/darwin/libclang_rt.xray-profiling_osx.a")
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/projects/compiler-rt/lib/xray/tests/cmake_install.cmake")

endif()

