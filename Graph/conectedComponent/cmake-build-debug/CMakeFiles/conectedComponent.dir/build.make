# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_SOURCE_DIR = /Users/sheikhaliazzam/Desktop/Algo/Graph/conectedComponent

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sheikhaliazzam/Desktop/Algo/Graph/conectedComponent/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/conectedComponent.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/conectedComponent.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/conectedComponent.dir/flags.make

CMakeFiles/conectedComponent.dir/main.cpp.o: CMakeFiles/conectedComponent.dir/flags.make
CMakeFiles/conectedComponent.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sheikhaliazzam/Desktop/Algo/Graph/conectedComponent/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/conectedComponent.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/conectedComponent.dir/main.cpp.o -c /Users/sheikhaliazzam/Desktop/Algo/Graph/conectedComponent/main.cpp

CMakeFiles/conectedComponent.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/conectedComponent.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sheikhaliazzam/Desktop/Algo/Graph/conectedComponent/main.cpp > CMakeFiles/conectedComponent.dir/main.cpp.i

CMakeFiles/conectedComponent.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/conectedComponent.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sheikhaliazzam/Desktop/Algo/Graph/conectedComponent/main.cpp -o CMakeFiles/conectedComponent.dir/main.cpp.s

CMakeFiles/conectedComponent.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/conectedComponent.dir/main.cpp.o.requires

CMakeFiles/conectedComponent.dir/main.cpp.o.provides: CMakeFiles/conectedComponent.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/conectedComponent.dir/build.make CMakeFiles/conectedComponent.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/conectedComponent.dir/main.cpp.o.provides

CMakeFiles/conectedComponent.dir/main.cpp.o.provides.build: CMakeFiles/conectedComponent.dir/main.cpp.o


# Object files for target conectedComponent
conectedComponent_OBJECTS = \
"CMakeFiles/conectedComponent.dir/main.cpp.o"

# External object files for target conectedComponent
conectedComponent_EXTERNAL_OBJECTS =

conectedComponent: CMakeFiles/conectedComponent.dir/main.cpp.o
conectedComponent: CMakeFiles/conectedComponent.dir/build.make
conectedComponent: CMakeFiles/conectedComponent.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sheikhaliazzam/Desktop/Algo/Graph/conectedComponent/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable conectedComponent"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/conectedComponent.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/conectedComponent.dir/build: conectedComponent

.PHONY : CMakeFiles/conectedComponent.dir/build

CMakeFiles/conectedComponent.dir/requires: CMakeFiles/conectedComponent.dir/main.cpp.o.requires

.PHONY : CMakeFiles/conectedComponent.dir/requires

CMakeFiles/conectedComponent.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/conectedComponent.dir/cmake_clean.cmake
.PHONY : CMakeFiles/conectedComponent.dir/clean

CMakeFiles/conectedComponent.dir/depend:
	cd /Users/sheikhaliazzam/Desktop/Algo/Graph/conectedComponent/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sheikhaliazzam/Desktop/Algo/Graph/conectedComponent /Users/sheikhaliazzam/Desktop/Algo/Graph/conectedComponent /Users/sheikhaliazzam/Desktop/Algo/Graph/conectedComponent/cmake-build-debug /Users/sheikhaliazzam/Desktop/Algo/Graph/conectedComponent/cmake-build-debug /Users/sheikhaliazzam/Desktop/Algo/Graph/conectedComponent/cmake-build-debug/CMakeFiles/conectedComponent.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/conectedComponent.dir/depend

