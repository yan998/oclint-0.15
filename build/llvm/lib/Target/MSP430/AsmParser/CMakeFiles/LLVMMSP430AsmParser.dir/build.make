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
include lib/Target/MSP430/AsmParser/CMakeFiles/LLVMMSP430AsmParser.dir/depend.make

# Include the progress variables for this target.
include lib/Target/MSP430/AsmParser/CMakeFiles/LLVMMSP430AsmParser.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/MSP430/AsmParser/CMakeFiles/LLVMMSP430AsmParser.dir/flags.make

lib/Target/MSP430/AsmParser/CMakeFiles/LLVMMSP430AsmParser.dir/MSP430AsmParser.cpp.o: lib/Target/MSP430/AsmParser/CMakeFiles/LLVMMSP430AsmParser.dir/flags.make
lib/Target/MSP430/AsmParser/CMakeFiles/LLVMMSP430AsmParser.dir/MSP430AsmParser.cpp.o: /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/lib/Target/MSP430/AsmParser/MSP430AsmParser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/MSP430/AsmParser/CMakeFiles/LLVMMSP430AsmParser.dir/MSP430AsmParser.cpp.o"
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/Target/MSP430/AsmParser && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMMSP430AsmParser.dir/MSP430AsmParser.cpp.o -c /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/lib/Target/MSP430/AsmParser/MSP430AsmParser.cpp

lib/Target/MSP430/AsmParser/CMakeFiles/LLVMMSP430AsmParser.dir/MSP430AsmParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMMSP430AsmParser.dir/MSP430AsmParser.cpp.i"
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/Target/MSP430/AsmParser && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/lib/Target/MSP430/AsmParser/MSP430AsmParser.cpp > CMakeFiles/LLVMMSP430AsmParser.dir/MSP430AsmParser.cpp.i

lib/Target/MSP430/AsmParser/CMakeFiles/LLVMMSP430AsmParser.dir/MSP430AsmParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMMSP430AsmParser.dir/MSP430AsmParser.cpp.s"
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/Target/MSP430/AsmParser && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/lib/Target/MSP430/AsmParser/MSP430AsmParser.cpp -o CMakeFiles/LLVMMSP430AsmParser.dir/MSP430AsmParser.cpp.s

# Object files for target LLVMMSP430AsmParser
LLVMMSP430AsmParser_OBJECTS = \
"CMakeFiles/LLVMMSP430AsmParser.dir/MSP430AsmParser.cpp.o"

# External object files for target LLVMMSP430AsmParser
LLVMMSP430AsmParser_EXTERNAL_OBJECTS =

lib/libLLVMMSP430AsmParser.a: lib/Target/MSP430/AsmParser/CMakeFiles/LLVMMSP430AsmParser.dir/MSP430AsmParser.cpp.o
lib/libLLVMMSP430AsmParser.a: lib/Target/MSP430/AsmParser/CMakeFiles/LLVMMSP430AsmParser.dir/build.make
lib/libLLVMMSP430AsmParser.a: lib/Target/MSP430/AsmParser/CMakeFiles/LLVMMSP430AsmParser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../libLLVMMSP430AsmParser.a"
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/Target/MSP430/AsmParser && $(CMAKE_COMMAND) -P CMakeFiles/LLVMMSP430AsmParser.dir/cmake_clean_target.cmake
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/Target/MSP430/AsmParser && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMMSP430AsmParser.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Target/MSP430/AsmParser/CMakeFiles/LLVMMSP430AsmParser.dir/build: lib/libLLVMMSP430AsmParser.a

.PHONY : lib/Target/MSP430/AsmParser/CMakeFiles/LLVMMSP430AsmParser.dir/build

lib/Target/MSP430/AsmParser/CMakeFiles/LLVMMSP430AsmParser.dir/clean:
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/Target/MSP430/AsmParser && $(CMAKE_COMMAND) -P CMakeFiles/LLVMMSP430AsmParser.dir/cmake_clean.cmake
.PHONY : lib/Target/MSP430/AsmParser/CMakeFiles/LLVMMSP430AsmParser.dir/clean

lib/Target/MSP430/AsmParser/CMakeFiles/LLVMMSP430AsmParser.dir/depend:
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wangyan/Documents/OCLint/oclint-0.15/llvm /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/lib/Target/MSP430/AsmParser /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/Target/MSP430/AsmParser /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/lib/Target/MSP430/AsmParser/CMakeFiles/LLVMMSP430AsmParser.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/MSP430/AsmParser/CMakeFiles/LLVMMSP430AsmParser.dir/depend
