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
include tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/clangStaticAnalyzerCore.dir/depend.make

# Include the progress variables for this target.
include tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/clangStaticAnalyzerCore.dir/progress.make

# Include the compile flags for this target's objects.
include tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/clangStaticAnalyzerCore.dir/flags.make

# Object files for target clangStaticAnalyzerCore
clangStaticAnalyzerCore_OBJECTS =

# External object files for target clangStaticAnalyzerCore
clangStaticAnalyzerCore_EXTERNAL_OBJECTS = \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/APSIntType.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/AnalysisManager.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/AnalyzerOptions.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/BasicValueFactory.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/BlockCounter.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/BugReporter.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/BugReporterVisitors.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/CallEvent.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/Checker.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/CheckerContext.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/CheckerHelpers.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/CheckerManager.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/CommonBugCategories.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/ConstraintManager.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/CoreEngine.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/DynamicTypeMap.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/Environment.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/ExplodedGraph.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/ExprEngine.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/ExprEngineC.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/ExprEngineCXX.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/ExprEngineCallAndReturn.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/ExprEngineObjC.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/FunctionSummary.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/HTMLDiagnostics.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/IssueHash.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/LoopUnrolling.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/LoopWidening.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/MemRegion.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/PathDiagnostic.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/PlistDiagnostics.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/ProgramState.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/RangeConstraintManager.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/RangedConstraintManager.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/RegionStore.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/SarifDiagnostics.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/SimpleConstraintManager.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/SimpleSValBuilder.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/SMTConstraintManager.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/Store.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/SubEngine.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/SValBuilder.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/SVals.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/SymbolManager.cpp.o" \
"/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/WorkList.cpp.o"

lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/APSIntType.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/AnalysisManager.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/AnalyzerOptions.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/BasicValueFactory.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/BlockCounter.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/BugReporter.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/BugReporterVisitors.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/CallEvent.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/Checker.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/CheckerContext.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/CheckerHelpers.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/CheckerManager.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/CommonBugCategories.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/ConstraintManager.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/CoreEngine.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/DynamicTypeMap.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/Environment.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/ExplodedGraph.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/ExprEngine.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/ExprEngineC.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/ExprEngineCXX.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/ExprEngineCallAndReturn.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/ExprEngineObjC.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/FunctionSummary.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/HTMLDiagnostics.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/IssueHash.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/LoopUnrolling.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/LoopWidening.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/MemRegion.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/PathDiagnostic.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/PlistDiagnostics.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/ProgramState.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/RangeConstraintManager.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/RangedConstraintManager.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/RegionStore.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/SarifDiagnostics.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/SimpleConstraintManager.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/SimpleSValBuilder.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/SMTConstraintManager.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/Store.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/SubEngine.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/SValBuilder.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/SVals.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/SymbolManager.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/obj.clangStaticAnalyzerCore.dir/WorkList.cpp.o
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/clangStaticAnalyzerCore.dir/build.make
lib/libclangStaticAnalyzerCore.a: tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/clangStaticAnalyzerCore.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Linking CXX static library ../../../../../lib/libclangStaticAnalyzerCore.a"
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core && $(CMAKE_COMMAND) -P CMakeFiles/clangStaticAnalyzerCore.dir/cmake_clean_target.cmake
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/clangStaticAnalyzerCore.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/clangStaticAnalyzerCore.dir/build: lib/libclangStaticAnalyzerCore.a

.PHONY : tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/clangStaticAnalyzerCore.dir/build

tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/clangStaticAnalyzerCore.dir/clean:
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core && $(CMAKE_COMMAND) -P CMakeFiles/clangStaticAnalyzerCore.dir/cmake_clean.cmake
.PHONY : tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/clangStaticAnalyzerCore.dir/clean

tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/clangStaticAnalyzerCore.dir/depend:
	cd /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wangyan/Documents/OCLint/oclint-0.15/llvm /Users/wangyan/Documents/OCLint/oclint-0.15/llvm/tools/clang/lib/StaticAnalyzer/Core /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core /Users/wangyan/Documents/OCLint/oclint-0.15/build/llvm/tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/clangStaticAnalyzerCore.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/lib/StaticAnalyzer/Core/CMakeFiles/clangStaticAnalyzerCore.dir/depend
