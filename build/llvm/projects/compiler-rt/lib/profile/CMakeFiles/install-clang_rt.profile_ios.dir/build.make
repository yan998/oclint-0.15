# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.16.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.16.4/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/wangyan/Documents/OCLint/oclint-0.15/llvm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm

# Utility rule file for install-clang_rt.profile_ios.

# Include the progress variables for this target.
include projects/compiler-rt/lib/profile/CMakeFiles/install-clang_rt.profile_ios.dir/progress.make

projects/compiler-rt/lib/profile/CMakeFiles/install-clang_rt.profile_ios: lib/clang/9.0.0/lib/darwin/libclang_rt.profile_ios.a
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/projects/compiler-rt/lib/profile && /usr/local/Cellar/cmake/3.16.4/bin/cmake -DCMAKE_INSTALL_COMPONENT=clang_rt.profile_ios -P /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/cmake_install.cmake

install-clang_rt.profile_ios: projects/compiler-rt/lib/profile/CMakeFiles/install-clang_rt.profile_ios
install-clang_rt.profile_ios: projects/compiler-rt/lib/profile/CMakeFiles/install-clang_rt.profile_ios.dir/build.make

.PHONY : install-clang_rt.profile_ios

# Rule to build all files generated by this target.
projects/compiler-rt/lib/profile/CMakeFiles/install-clang_rt.profile_ios.dir/build: install-clang_rt.profile_ios

.PHONY : projects/compiler-rt/lib/profile/CMakeFiles/install-clang_rt.profile_ios.dir/build

projects/compiler-rt/lib/profile/CMakeFiles/install-clang_rt.profile_ios.dir/clean:
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/projects/compiler-rt/lib/profile && $(CMAKE_COMMAND) -P CMakeFiles/install-clang_rt.profile_ios.dir/cmake_clean.cmake
.PHONY : projects/compiler-rt/lib/profile/CMakeFiles/install-clang_rt.profile_ios.dir/clean

projects/compiler-rt/lib/profile/CMakeFiles/install-clang_rt.profile_ios.dir/depend:
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wangyan/Documents/OCLint/oclint-0.15/llvm /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/projects/compiler-rt/lib/profile /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/projects/compiler-rt/lib/profile /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/projects/compiler-rt/lib/profile/CMakeFiles/install-clang_rt.profile_ios.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : projects/compiler-rt/lib/profile/CMakeFiles/install-clang_rt.profile_ios.dir/depend
