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

# Include any dependencies generated for this target.
include projects/compiler-rt/lib/ubsan_minimal/CMakeFiles/clang_rt.ubsan_minimal_ios.dir/depend.make

# Include the progress variables for this target.
include projects/compiler-rt/lib/ubsan_minimal/CMakeFiles/clang_rt.ubsan_minimal_ios.dir/progress.make

# Include the compile flags for this target's objects.
include projects/compiler-rt/lib/ubsan_minimal/CMakeFiles/clang_rt.ubsan_minimal_ios.dir/flags.make

# Object files for target clang_rt.ubsan_minimal_ios
clang_rt_ubsan_minimal_ios_OBJECTS =

# External object files for target clang_rt.ubsan_minimal_ios
clang_rt_ubsan_minimal_ios_EXTERNAL_OBJECTS = \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/projects/compiler-rt/lib/ubsan_minimal/CMakeFiles/RTUbsan_minimal.ios.dir/ubsan_minimal_handlers.cc.o"

lib/clang/9.0.0/lib/darwin/libclang_rt.ubsan_minimal_ios.a: projects/compiler-rt/lib/ubsan_minimal/CMakeFiles/RTUbsan_minimal.ios.dir/ubsan_minimal_handlers.cc.o
lib/clang/9.0.0/lib/darwin/libclang_rt.ubsan_minimal_ios.a: projects/compiler-rt/lib/ubsan_minimal/CMakeFiles/clang_rt.ubsan_minimal_ios.dir/build.make
lib/clang/9.0.0/lib/darwin/libclang_rt.ubsan_minimal_ios.a: projects/compiler-rt/lib/ubsan_minimal/CMakeFiles/clang_rt.ubsan_minimal_ios.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Linking CXX static library ../../../../lib/clang/9.0.0/lib/darwin/libclang_rt.ubsan_minimal_ios.a"
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/projects/compiler-rt/lib/ubsan_minimal && $(CMAKE_COMMAND) -P CMakeFiles/clang_rt.ubsan_minimal_ios.dir/cmake_clean_target.cmake
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/projects/compiler-rt/lib/ubsan_minimal && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/clang_rt.ubsan_minimal_ios.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
projects/compiler-rt/lib/ubsan_minimal/CMakeFiles/clang_rt.ubsan_minimal_ios.dir/build: lib/clang/9.0.0/lib/darwin/libclang_rt.ubsan_minimal_ios.a

.PHONY : projects/compiler-rt/lib/ubsan_minimal/CMakeFiles/clang_rt.ubsan_minimal_ios.dir/build

projects/compiler-rt/lib/ubsan_minimal/CMakeFiles/clang_rt.ubsan_minimal_ios.dir/clean:
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/projects/compiler-rt/lib/ubsan_minimal && $(CMAKE_COMMAND) -P CMakeFiles/clang_rt.ubsan_minimal_ios.dir/cmake_clean.cmake
.PHONY : projects/compiler-rt/lib/ubsan_minimal/CMakeFiles/clang_rt.ubsan_minimal_ios.dir/clean

projects/compiler-rt/lib/ubsan_minimal/CMakeFiles/clang_rt.ubsan_minimal_ios.dir/depend:
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wangyan/Documents/OCLint/oclint-0.15/llvm /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/projects/compiler-rt/lib/ubsan_minimal /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/projects/compiler-rt/lib/ubsan_minimal /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/projects/compiler-rt/lib/ubsan_minimal/CMakeFiles/clang_rt.ubsan_minimal_ios.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : projects/compiler-rt/lib/ubsan_minimal/CMakeFiles/clang_rt.ubsan_minimal_ios.dir/depend
