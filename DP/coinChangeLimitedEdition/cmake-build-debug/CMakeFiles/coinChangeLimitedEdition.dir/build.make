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
CMAKE_SOURCE_DIR = /Users/sheikhaliazzam/Desktop/Algo/DP/coinChangeLimitedEdition

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sheikhaliazzam/Desktop/Algo/DP/coinChangeLimitedEdition/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/coinChangeLimitedEdition.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/coinChangeLimitedEdition.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/coinChangeLimitedEdition.dir/flags.make

CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.o: CMakeFiles/coinChangeLimitedEdition.dir/flags.make
CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sheikhaliazzam/Desktop/Algo/DP/coinChangeLimitedEdition/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.o -c /Users/sheikhaliazzam/Desktop/Algo/DP/coinChangeLimitedEdition/main.cpp

CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sheikhaliazzam/Desktop/Algo/DP/coinChangeLimitedEdition/main.cpp > CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.i

CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sheikhaliazzam/Desktop/Algo/DP/coinChangeLimitedEdition/main.cpp -o CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.s

CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.o.requires

CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.o.provides: CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/coinChangeLimitedEdition.dir/build.make CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.o.provides

CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.o.provides.build: CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.o


# Object files for target coinChangeLimitedEdition
coinChangeLimitedEdition_OBJECTS = \
"CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.o"

# External object files for target coinChangeLimitedEdition
coinChangeLimitedEdition_EXTERNAL_OBJECTS =

coinChangeLimitedEdition: CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.o
coinChangeLimitedEdition: CMakeFiles/coinChangeLimitedEdition.dir/build.make
coinChangeLimitedEdition: CMakeFiles/coinChangeLimitedEdition.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sheikhaliazzam/Desktop/Algo/DP/coinChangeLimitedEdition/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable coinChangeLimitedEdition"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/coinChangeLimitedEdition.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/coinChangeLimitedEdition.dir/build: coinChangeLimitedEdition

.PHONY : CMakeFiles/coinChangeLimitedEdition.dir/build

CMakeFiles/coinChangeLimitedEdition.dir/requires: CMakeFiles/coinChangeLimitedEdition.dir/main.cpp.o.requires

.PHONY : CMakeFiles/coinChangeLimitedEdition.dir/requires

CMakeFiles/coinChangeLimitedEdition.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/coinChangeLimitedEdition.dir/cmake_clean.cmake
.PHONY : CMakeFiles/coinChangeLimitedEdition.dir/clean

CMakeFiles/coinChangeLimitedEdition.dir/depend:
	cd /Users/sheikhaliazzam/Desktop/Algo/DP/coinChangeLimitedEdition/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sheikhaliazzam/Desktop/Algo/DP/coinChangeLimitedEdition /Users/sheikhaliazzam/Desktop/Algo/DP/coinChangeLimitedEdition /Users/sheikhaliazzam/Desktop/Algo/DP/coinChangeLimitedEdition/cmake-build-debug /Users/sheikhaliazzam/Desktop/Algo/DP/coinChangeLimitedEdition/cmake-build-debug /Users/sheikhaliazzam/Desktop/Algo/DP/coinChangeLimitedEdition/cmake-build-debug/CMakeFiles/coinChangeLimitedEdition.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/coinChangeLimitedEdition.dir/depend

