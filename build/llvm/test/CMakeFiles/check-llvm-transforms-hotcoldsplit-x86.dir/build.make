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

# Utility rule file for check-llvm-transforms-hotcoldsplit-x86.

# Include the progress variables for this target.
include test/CMakeFiles/check-llvm-transforms-hotcoldsplit-x86.dir/progress.make

test/CMakeFiles/check-llvm-transforms-hotcoldsplit-x86:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running lit suite /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/test/Transforms/HotColdSplit/X86"
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/test && /usr/bin/python /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/./bin/llvm-lit -sv /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/test/Transforms/HotColdSplit/X86

check-llvm-transforms-hotcoldsplit-x86: test/CMakeFiles/check-llvm-transforms-hotcoldsplit-x86
check-llvm-transforms-hotcoldsplit-x86: test/CMakeFiles/check-llvm-transforms-hotcoldsplit-x86.dir/build.make

.PHONY : check-llvm-transforms-hotcoldsplit-x86

# Rule to build all files generated by this target.
test/CMakeFiles/check-llvm-transforms-hotcoldsplit-x86.dir/build: check-llvm-transforms-hotcoldsplit-x86

.PHONY : test/CMakeFiles/check-llvm-transforms-hotcoldsplit-x86.dir/build

test/CMakeFiles/check-llvm-transforms-hotcoldsplit-x86.dir/clean:
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/test && $(CMAKE_COMMAND) -P CMakeFiles/check-llvm-transforms-hotcoldsplit-x86.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/check-llvm-transforms-hotcoldsplit-x86.dir/clean

test/CMakeFiles/check-llvm-transforms-hotcoldsplit-x86.dir/depend:
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wangyan/Documents/OCLint/oclint-0.15/llvm /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/test /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/test /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/test/CMakeFiles/check-llvm-transforms-hotcoldsplit-x86.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/check-llvm-transforms-hotcoldsplit-x86.dir/depend

