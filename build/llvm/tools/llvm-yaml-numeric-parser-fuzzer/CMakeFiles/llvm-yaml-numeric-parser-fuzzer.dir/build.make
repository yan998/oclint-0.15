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
include tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/depend.make

# Include the progress variables for this target.
include tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/progress.make

# Include the compile flags for this target's objects.
include tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/flags.make

tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/DummyYAMLNumericParserFuzzer.cpp.o: tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/flags.make
tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/DummyYAMLNumericParserFuzzer.cpp.o: /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/tools/llvm-yaml-numeric-parser-fuzzer/DummyYAMLNumericParserFuzzer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/DummyYAMLNumericParserFuzzer.cpp.o"
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/llvm-yaml-numeric-parser-fuzzer && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/DummyYAMLNumericParserFuzzer.cpp.o -c /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/tools/llvm-yaml-numeric-parser-fuzzer/DummyYAMLNumericParserFuzzer.cpp

tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/DummyYAMLNumericParserFuzzer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/DummyYAMLNumericParserFuzzer.cpp.i"
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/llvm-yaml-numeric-parser-fuzzer && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/tools/llvm-yaml-numeric-parser-fuzzer/DummyYAMLNumericParserFuzzer.cpp > CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/DummyYAMLNumericParserFuzzer.cpp.i

tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/DummyYAMLNumericParserFuzzer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/DummyYAMLNumericParserFuzzer.cpp.s"
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/llvm-yaml-numeric-parser-fuzzer && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/tools/llvm-yaml-numeric-parser-fuzzer/DummyYAMLNumericParserFuzzer.cpp -o CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/DummyYAMLNumericParserFuzzer.cpp.s

tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/yaml-numeric-parser-fuzzer.cpp.o: tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/flags.make
tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/yaml-numeric-parser-fuzzer.cpp.o: /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/tools/llvm-yaml-numeric-parser-fuzzer/yaml-numeric-parser-fuzzer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/yaml-numeric-parser-fuzzer.cpp.o"
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/llvm-yaml-numeric-parser-fuzzer && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/yaml-numeric-parser-fuzzer.cpp.o -c /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/tools/llvm-yaml-numeric-parser-fuzzer/yaml-numeric-parser-fuzzer.cpp

tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/yaml-numeric-parser-fuzzer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/yaml-numeric-parser-fuzzer.cpp.i"
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/llvm-yaml-numeric-parser-fuzzer && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/tools/llvm-yaml-numeric-parser-fuzzer/yaml-numeric-parser-fuzzer.cpp > CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/yaml-numeric-parser-fuzzer.cpp.i

tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/yaml-numeric-parser-fuzzer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/yaml-numeric-parser-fuzzer.cpp.s"
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/llvm-yaml-numeric-parser-fuzzer && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/tools/llvm-yaml-numeric-parser-fuzzer/yaml-numeric-parser-fuzzer.cpp -o CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/yaml-numeric-parser-fuzzer.cpp.s

# Object files for target llvm-yaml-numeric-parser-fuzzer
llvm__yaml__numeric__parser__fuzzer_OBJECTS = \
"CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/DummyYAMLNumericParserFuzzer.cpp.o" \
"CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/yaml-numeric-parser-fuzzer.cpp.o"

# External object files for target llvm-yaml-numeric-parser-fuzzer
llvm__yaml__numeric__parser__fuzzer_EXTERNAL_OBJECTS =

bin/llvm-yaml-numeric-parser-fuzzer: tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/DummyYAMLNumericParserFuzzer.cpp.o
bin/llvm-yaml-numeric-parser-fuzzer: tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/yaml-numeric-parser-fuzzer.cpp.o
bin/llvm-yaml-numeric-parser-fuzzer: tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/build.make
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMSupport.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMFuzzMutate.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMBitWriter.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMScalarOpts.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMAggressiveInstCombine.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMInstCombine.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMTransformUtils.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMTarget.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMAnalysis.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMObject.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMBitReader.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMBitstreamReader.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMMCParser.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMProfileData.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMCore.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMRemarks.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMMC.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMBinaryFormat.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMDebugInfoCodeView.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMDebugInfoMSF.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMSupport.a
bin/llvm-yaml-numeric-parser-fuzzer: lib/libLLVMDemangle.a
bin/llvm-yaml-numeric-parser-fuzzer: tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../bin/llvm-yaml-numeric-parser-fuzzer"
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/llvm-yaml-numeric-parser-fuzzer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/build: bin/llvm-yaml-numeric-parser-fuzzer

.PHONY : tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/build

tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/clean:
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/llvm-yaml-numeric-parser-fuzzer && $(CMAKE_COMMAND) -P CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/cmake_clean.cmake
.PHONY : tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/clean

tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/depend:
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wangyan/Documents/OCLint/oclint-0.15/llvm /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/tools/llvm-yaml-numeric-parser-fuzzer /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/llvm-yaml-numeric-parser-fuzzer /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-yaml-numeric-parser-fuzzer/CMakeFiles/llvm-yaml-numeric-parser-fuzzer.dir/depend
