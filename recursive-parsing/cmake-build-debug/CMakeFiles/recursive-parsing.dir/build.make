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
CMAKE_SOURCE_DIR = /Users/tina/Documents/ITMO/CT/MT/recursive-parsing/recursive-parsing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/tina/Documents/ITMO/CT/MT/recursive-parsing/recursive-parsing/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/recursive-parsing.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/recursive-parsing.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/recursive-parsing.dir/flags.make

CMakeFiles/recursive-parsing.dir/main.cpp.o: CMakeFiles/recursive-parsing.dir/flags.make
CMakeFiles/recursive-parsing.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tina/Documents/ITMO/CT/MT/recursive-parsing/recursive-parsing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/recursive-parsing.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/recursive-parsing.dir/main.cpp.o -c /Users/tina/Documents/ITMO/CT/MT/recursive-parsing/recursive-parsing/main.cpp

CMakeFiles/recursive-parsing.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/recursive-parsing.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tina/Documents/ITMO/CT/MT/recursive-parsing/recursive-parsing/main.cpp > CMakeFiles/recursive-parsing.dir/main.cpp.i

CMakeFiles/recursive-parsing.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/recursive-parsing.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tina/Documents/ITMO/CT/MT/recursive-parsing/recursive-parsing/main.cpp -o CMakeFiles/recursive-parsing.dir/main.cpp.s

# Object files for target recursive-parsing
recursive__parsing_OBJECTS = \
"CMakeFiles/recursive-parsing.dir/main.cpp.o"

# External object files for target recursive-parsing
recursive__parsing_EXTERNAL_OBJECTS =

recursive-parsing: CMakeFiles/recursive-parsing.dir/main.cpp.o
recursive-parsing: CMakeFiles/recursive-parsing.dir/build.make
recursive-parsing: CMakeFiles/recursive-parsing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/tina/Documents/ITMO/CT/MT/recursive-parsing/recursive-parsing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable recursive-parsing"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/recursive-parsing.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/recursive-parsing.dir/build: recursive-parsing

.PHONY : CMakeFiles/recursive-parsing.dir/build

CMakeFiles/recursive-parsing.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/recursive-parsing.dir/cmake_clean.cmake
.PHONY : CMakeFiles/recursive-parsing.dir/clean

CMakeFiles/recursive-parsing.dir/depend:
	cd /Users/tina/Documents/ITMO/CT/MT/recursive-parsing/recursive-parsing/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tina/Documents/ITMO/CT/MT/recursive-parsing/recursive-parsing /Users/tina/Documents/ITMO/CT/MT/recursive-parsing/recursive-parsing /Users/tina/Documents/ITMO/CT/MT/recursive-parsing/recursive-parsing/cmake-build-debug /Users/tina/Documents/ITMO/CT/MT/recursive-parsing/recursive-parsing/cmake-build-debug /Users/tina/Documents/ITMO/CT/MT/recursive-parsing/recursive-parsing/cmake-build-debug/CMakeFiles/recursive-parsing.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/recursive-parsing.dir/depend
