# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/sheikhaliazzam/Desktop/problem solving/DP/Minimum Supply Of Coin"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/sheikhaliazzam/Desktop/problem solving/DP/Minimum Supply Of Coin/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Minimum_Supply_Of_Coin.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Minimum_Supply_Of_Coin.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Minimum_Supply_Of_Coin.dir/flags.make

CMakeFiles/Minimum_Supply_Of_Coin.dir/main.cpp.o: CMakeFiles/Minimum_Supply_Of_Coin.dir/flags.make
CMakeFiles/Minimum_Supply_Of_Coin.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/sheikhaliazzam/Desktop/problem solving/DP/Minimum Supply Of Coin/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Minimum_Supply_Of_Coin.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Minimum_Supply_Of_Coin.dir/main.cpp.o -c "/Users/sheikhaliazzam/Desktop/problem solving/DP/Minimum Supply Of Coin/main.cpp"

CMakeFiles/Minimum_Supply_Of_Coin.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Minimum_Supply_Of_Coin.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/sheikhaliazzam/Desktop/problem solving/DP/Minimum Supply Of Coin/main.cpp" > CMakeFiles/Minimum_Supply_Of_Coin.dir/main.cpp.i

CMakeFiles/Minimum_Supply_Of_Coin.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Minimum_Supply_Of_Coin.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/sheikhaliazzam/Desktop/problem solving/DP/Minimum Supply Of Coin/main.cpp" -o CMakeFiles/Minimum_Supply_Of_Coin.dir/main.cpp.s

# Object files for target Minimum_Supply_Of_Coin
Minimum_Supply_Of_Coin_OBJECTS = \
"CMakeFiles/Minimum_Supply_Of_Coin.dir/main.cpp.o"

# External object files for target Minimum_Supply_Of_Coin
Minimum_Supply_Of_Coin_EXTERNAL_OBJECTS =

Minimum_Supply_Of_Coin: CMakeFiles/Minimum_Supply_Of_Coin.dir/main.cpp.o
Minimum_Supply_Of_Coin: CMakeFiles/Minimum_Supply_Of_Coin.dir/build.make
Minimum_Supply_Of_Coin: CMakeFiles/Minimum_Supply_Of_Coin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/sheikhaliazzam/Desktop/problem solving/DP/Minimum Supply Of Coin/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Minimum_Supply_Of_Coin"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Minimum_Supply_Of_Coin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Minimum_Supply_Of_Coin.dir/build: Minimum_Supply_Of_Coin

.PHONY : CMakeFiles/Minimum_Supply_Of_Coin.dir/build

CMakeFiles/Minimum_Supply_Of_Coin.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Minimum_Supply_Of_Coin.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Minimum_Supply_Of_Coin.dir/clean

CMakeFiles/Minimum_Supply_Of_Coin.dir/depend:
	cd "/Users/sheikhaliazzam/Desktop/problem solving/DP/Minimum Supply Of Coin/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/sheikhaliazzam/Desktop/problem solving/DP/Minimum Supply Of Coin" "/Users/sheikhaliazzam/Desktop/problem solving/DP/Minimum Supply Of Coin" "/Users/sheikhaliazzam/Desktop/problem solving/DP/Minimum Supply Of Coin/cmake-build-debug" "/Users/sheikhaliazzam/Desktop/problem solving/DP/Minimum Supply Of Coin/cmake-build-debug" "/Users/sheikhaliazzam/Desktop/problem solving/DP/Minimum Supply Of Coin/cmake-build-debug/CMakeFiles/Minimum_Supply_Of_Coin.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Minimum_Supply_Of_Coin.dir/depend

