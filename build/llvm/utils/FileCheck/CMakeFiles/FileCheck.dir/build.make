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
include utils/FileCheck/CMakeFiles/FileCheck.dir/depend.make

# Include the progress variables for this target.
include utils/FileCheck/CMakeFiles/FileCheck.dir/progress.make

# Include the compile flags for this target's objects.
include utils/FileCheck/CMakeFiles/FileCheck.dir/flags.make

utils/FileCheck/CMakeFiles/FileCheck.dir/FileCheck.cpp.o: utils/FileCheck/CMakeFiles/FileCheck.dir/flags.make
utils/FileCheck/CMakeFiles/FileCheck.dir/FileCheck.cpp.o: /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/utils/FileCheck/FileCheck.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object utils/FileCheck/CMakeFiles/FileCheck.dir/FileCheck.cpp.o"
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/utils/FileCheck && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FileCheck.dir/FileCheck.cpp.o -c /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/utils/FileCheck/FileCheck.cpp

utils/FileCheck/CMakeFiles/FileCheck.dir/FileCheck.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FileCheck.dir/FileCheck.cpp.i"
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/utils/FileCheck && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/utils/FileCheck/FileCheck.cpp > CMakeFiles/FileCheck.dir/FileCheck.cpp.i

utils/FileCheck/CMakeFiles/FileCheck.dir/FileCheck.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FileCheck.dir/FileCheck.cpp.s"
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/utils/FileCheck && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/utils/FileCheck/FileCheck.cpp -o CMakeFiles/FileCheck.dir/FileCheck.cpp.s

# Object files for target FileCheck
FileCheck_OBJECTS = \
"CMakeFiles/FileCheck.dir/FileCheck.cpp.o"

# External object files for target FileCheck
FileCheck_EXTERNAL_OBJECTS =

bin/FileCheck: utils/FileCheck/CMakeFiles/FileCheck.dir/FileCheck.cpp.o
bin/FileCheck: utils/FileCheck/CMakeFiles/FileCheck.dir/build.make
bin/FileCheck: lib/libLLVMSupport.a
bin/FileCheck: lib/libLLVMDemangle.a
bin/FileCheck: utils/FileCheck/CMakeFiles/FileCheck.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/FileCheck"
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/utils/FileCheck && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FileCheck.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
utils/FileCheck/CMakeFiles/FileCheck.dir/build: bin/FileCheck

.PHONY : utils/FileCheck/CMakeFiles/FileCheck.dir/build

utils/FileCheck/CMakeFiles/FileCheck.dir/clean:
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/utils/FileCheck && $(CMAKE_COMMAND) -P CMakeFiles/FileCheck.dir/cmake_clean.cmake
.PHONY : utils/FileCheck/CMakeFiles/FileCheck.dir/clean

utils/FileCheck/CMakeFiles/FileCheck.dir/depend:
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wangyan/Documents/OCLint/oclint-0.15/llvm /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/utils/FileCheck /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/utils/FileCheck /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/utils/FileCheck/CMakeFiles/FileCheck.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : utils/FileCheck/CMakeFiles/FileCheck.dir/depend
