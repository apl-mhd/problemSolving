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
CMAKE_SOURCE_DIR = "/Users/sheikhaliazzam/Desktop/OJ/A. Kefa and First Steps 580"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/sheikhaliazzam/Desktop/OJ/A. Kefa and First Steps 580/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/A__Kefa_and_First_Steps_580.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/A__Kefa_and_First_Steps_580.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/A__Kefa_and_First_Steps_580.dir/flags.make

CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.o: CMakeFiles/A__Kefa_and_First_Steps_580.dir/flags.make
CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/sheikhaliazzam/Desktop/OJ/A. Kefa and First Steps 580/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.o -c "/Users/sheikhaliazzam/Desktop/OJ/A. Kefa and First Steps 580/main.cpp"

CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/sheikhaliazzam/Desktop/OJ/A. Kefa and First Steps 580/main.cpp" > CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.i

CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/sheikhaliazzam/Desktop/OJ/A. Kefa and First Steps 580/main.cpp" -o CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.s

CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.o.requires

CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.o.provides: CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/A__Kefa_and_First_Steps_580.dir/build.make CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.o.provides

CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.o.provides.build: CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.o


# Object files for target A__Kefa_and_First_Steps_580
A__Kefa_and_First_Steps_580_OBJECTS = \
"CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.o"

# External object files for target A__Kefa_and_First_Steps_580
A__Kefa_and_First_Steps_580_EXTERNAL_OBJECTS =

A__Kefa_and_First_Steps_580: CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.o
A__Kefa_and_First_Steps_580: CMakeFiles/A__Kefa_and_First_Steps_580.dir/build.make
A__Kefa_and_First_Steps_580: CMakeFiles/A__Kefa_and_First_Steps_580.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/sheikhaliazzam/Desktop/OJ/A. Kefa and First Steps 580/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable A__Kefa_and_First_Steps_580"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/A__Kefa_and_First_Steps_580.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/A__Kefa_and_First_Steps_580.dir/build: A__Kefa_and_First_Steps_580

.PHONY : CMakeFiles/A__Kefa_and_First_Steps_580.dir/build

CMakeFiles/A__Kefa_and_First_Steps_580.dir/requires: CMakeFiles/A__Kefa_and_First_Steps_580.dir/main.cpp.o.requires

.PHONY : CMakeFiles/A__Kefa_and_First_Steps_580.dir/requires

CMakeFiles/A__Kefa_and_First_Steps_580.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/A__Kefa_and_First_Steps_580.dir/cmake_clean.cmake
.PHONY : CMakeFiles/A__Kefa_and_First_Steps_580.dir/clean

CMakeFiles/A__Kefa_and_First_Steps_580.dir/depend:
	cd "/Users/sheikhaliazzam/Desktop/OJ/A. Kefa and First Steps 580/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/sheikhaliazzam/Desktop/OJ/A. Kefa and First Steps 580" "/Users/sheikhaliazzam/Desktop/OJ/A. Kefa and First Steps 580" "/Users/sheikhaliazzam/Desktop/OJ/A. Kefa and First Steps 580/cmake-build-debug" "/Users/sheikhaliazzam/Desktop/OJ/A. Kefa and First Steps 580/cmake-build-debug" "/Users/sheikhaliazzam/Desktop/OJ/A. Kefa and First Steps 580/cmake-build-debug/CMakeFiles/A__Kefa_and_First_Steps_580.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/A__Kefa_and_First_Steps_580.dir/depend
