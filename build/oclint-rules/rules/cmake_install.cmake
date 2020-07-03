# Install script for directory: /Users/wangyan/Documents/OCLint/oclint-0.15/oclint-rules/rules

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "None")
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
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/oclint-rules/rules/basic/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/oclint-rules/rules/cocoa/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/oclint-rules/rules/convention/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/oclint-rules/rules/design/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/oclint-rules/rules/empty/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/oclint-rules/rules/migration/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/oclint-rules/rules/naming/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/oclint-rules/rules/redundant/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/oclint-rules/rules/size/cmake_install.cmake")
  include("/Users/wangyan/Documents/OCLint/oclint-0.15/build/oclint-rules/rules/unused/cmake_install.cmake")

endif()

