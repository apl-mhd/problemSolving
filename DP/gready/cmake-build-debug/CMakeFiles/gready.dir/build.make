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
CMAKE_SOURCE_DIR = /Users/sheikhaliazzam/Desktop/Algo/DP/gready

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sheikhaliazzam/Desktop/Algo/DP/gready/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/gready.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gready.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gready.dir/flags.make

CMakeFiles/gready.dir/main.cpp.o: CMakeFiles/gready.dir/flags.make
CMakeFiles/gready.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sheikhaliazzam/Desktop/Algo/DP/gready/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gready.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gready.dir/main.cpp.o -c /Users/sheikhaliazzam/Desktop/Algo/DP/gready/main.cpp

CMakeFiles/gready.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gready.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sheikhaliazzam/Desktop/Algo/DP/gready/main.cpp > CMakeFiles/gready.dir/main.cpp.i

CMakeFiles/gready.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gready.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sheikhaliazzam/Desktop/Algo/DP/gready/main.cpp -o CMakeFiles/gready.dir/main.cpp.s

CMakeFiles/gready.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/gready.dir/main.cpp.o.requires

CMakeFiles/gready.dir/main.cpp.o.provides: CMakeFiles/gready.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/gready.dir/build.make CMakeFiles/gready.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/gready.dir/main.cpp.o.provides

CMakeFiles/gready.dir/main.cpp.o.provides.build: CMakeFiles/gready.dir/main.cpp.o


# Object files for target gready
gready_OBJECTS = \
"CMakeFiles/gready.dir/main.cpp.o"

# External object files for target gready
gready_EXTERNAL_OBJECTS =

gready: CMakeFiles/gready.dir/main.cpp.o
gready: CMakeFiles/gready.dir/build.make
gready: CMakeFiles/gready.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sheikhaliazzam/Desktop/Algo/DP/gready/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable gready"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gready.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gready.dir/build: gready

.PHONY : CMakeFiles/gready.dir/build

CMakeFiles/gready.dir/requires: CMakeFiles/gready.dir/main.cpp.o.requires

.PHONY : CMakeFiles/gready.dir/requires

CMakeFiles/gready.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gready.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gready.dir/clean

CMakeFiles/gready.dir/depend:
	cd /Users/sheikhaliazzam/Desktop/Algo/DP/gready/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sheikhaliazzam/Desktop/Algo/DP/gready /Users/sheikhaliazzam/Desktop/Algo/DP/gready /Users/sheikhaliazzam/Desktop/Algo/DP/gready/cmake-build-debug /Users/sheikhaliazzam/Desktop/Algo/DP/gready/cmake-build-debug /Users/sheikhaliazzam/Desktop/Algo/DP/gready/cmake-build-debug/CMakeFiles/gready.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gready.dir/depend
