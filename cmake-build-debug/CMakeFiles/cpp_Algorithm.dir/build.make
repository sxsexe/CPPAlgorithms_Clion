# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/lxd/code/cpp_Algorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lxd/code/cpp_Algorithm/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cpp_Algorithm.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cpp_Algorithm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpp_Algorithm.dir/flags.make

CMakeFiles/cpp_Algorithm.dir/main.cpp.o: CMakeFiles/cpp_Algorithm.dir/flags.make
CMakeFiles/cpp_Algorithm.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lxd/code/cpp_Algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpp_Algorithm.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp_Algorithm.dir/main.cpp.o -c /Users/lxd/code/cpp_Algorithm/main.cpp

CMakeFiles/cpp_Algorithm.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp_Algorithm.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lxd/code/cpp_Algorithm/main.cpp > CMakeFiles/cpp_Algorithm.dir/main.cpp.i

CMakeFiles/cpp_Algorithm.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp_Algorithm.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lxd/code/cpp_Algorithm/main.cpp -o CMakeFiles/cpp_Algorithm.dir/main.cpp.s

CMakeFiles/cpp_Algorithm.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/cpp_Algorithm.dir/main.cpp.o.requires

CMakeFiles/cpp_Algorithm.dir/main.cpp.o.provides: CMakeFiles/cpp_Algorithm.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/cpp_Algorithm.dir/build.make CMakeFiles/cpp_Algorithm.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/cpp_Algorithm.dir/main.cpp.o.provides

CMakeFiles/cpp_Algorithm.dir/main.cpp.o.provides.build: CMakeFiles/cpp_Algorithm.dir/main.cpp.o


CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.o: CMakeFiles/cpp_Algorithm.dir/flags.make
CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.o: ../fragments/Fragments.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lxd/code/cpp_Algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.o -c /Users/lxd/code/cpp_Algorithm/fragments/Fragments.cpp

CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lxd/code/cpp_Algorithm/fragments/Fragments.cpp > CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.i

CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lxd/code/cpp_Algorithm/fragments/Fragments.cpp -o CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.s

CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.o.requires:

.PHONY : CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.o.requires

CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.o.provides: CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.o.requires
	$(MAKE) -f CMakeFiles/cpp_Algorithm.dir/build.make CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.o.provides.build
.PHONY : CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.o.provides

CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.o.provides.build: CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.o


# Object files for target cpp_Algorithm
cpp_Algorithm_OBJECTS = \
"CMakeFiles/cpp_Algorithm.dir/main.cpp.o" \
"CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.o"

# External object files for target cpp_Algorithm
cpp_Algorithm_EXTERNAL_OBJECTS =

cpp_Algorithm: CMakeFiles/cpp_Algorithm.dir/main.cpp.o
cpp_Algorithm: CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.o
cpp_Algorithm: CMakeFiles/cpp_Algorithm.dir/build.make
cpp_Algorithm: CMakeFiles/cpp_Algorithm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/lxd/code/cpp_Algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable cpp_Algorithm"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpp_Algorithm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpp_Algorithm.dir/build: cpp_Algorithm

.PHONY : CMakeFiles/cpp_Algorithm.dir/build

CMakeFiles/cpp_Algorithm.dir/requires: CMakeFiles/cpp_Algorithm.dir/main.cpp.o.requires
CMakeFiles/cpp_Algorithm.dir/requires: CMakeFiles/cpp_Algorithm.dir/fragments/Fragments.cpp.o.requires

.PHONY : CMakeFiles/cpp_Algorithm.dir/requires

CMakeFiles/cpp_Algorithm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpp_Algorithm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpp_Algorithm.dir/clean

CMakeFiles/cpp_Algorithm.dir/depend:
	cd /Users/lxd/code/cpp_Algorithm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lxd/code/cpp_Algorithm /Users/lxd/code/cpp_Algorithm /Users/lxd/code/cpp_Algorithm/cmake-build-debug /Users/lxd/code/cpp_Algorithm/cmake-build-debug /Users/lxd/code/cpp_Algorithm/cmake-build-debug/CMakeFiles/cpp_Algorithm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpp_Algorithm.dir/depend

