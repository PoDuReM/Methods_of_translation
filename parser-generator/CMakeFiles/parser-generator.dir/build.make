# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.13.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.13.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/tina/Documents/ITMO/CT/MT/parser-generator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/tina/Documents/ITMO/CT/MT/parser-generator

# Include any dependencies generated for this target.
include CMakeFiles/parser-generator.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/parser-generator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/parser-generator.dir/flags.make

CMakeFiles/parser-generator.dir/main.cpp.o: CMakeFiles/parser-generator.dir/flags.make
CMakeFiles/parser-generator.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tina/Documents/ITMO/CT/MT/parser-generator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/parser-generator.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/parser-generator.dir/main.cpp.o -c /Users/tina/Documents/ITMO/CT/MT/parser-generator/main.cpp

CMakeFiles/parser-generator.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/parser-generator.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tina/Documents/ITMO/CT/MT/parser-generator/main.cpp > CMakeFiles/parser-generator.dir/main.cpp.i

CMakeFiles/parser-generator.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/parser-generator.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tina/Documents/ITMO/CT/MT/parser-generator/main.cpp -o CMakeFiles/parser-generator.dir/main.cpp.s

CMakeFiles/parser-generator.dir/generated/TLexer.cpp.o: CMakeFiles/parser-generator.dir/flags.make
CMakeFiles/parser-generator.dir/generated/TLexer.cpp.o: generated/TLexer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tina/Documents/ITMO/CT/MT/parser-generator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/parser-generator.dir/generated/TLexer.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/parser-generator.dir/generated/TLexer.cpp.o -c /Users/tina/Documents/ITMO/CT/MT/parser-generator/generated/TLexer.cpp

CMakeFiles/parser-generator.dir/generated/TLexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/parser-generator.dir/generated/TLexer.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tina/Documents/ITMO/CT/MT/parser-generator/generated/TLexer.cpp > CMakeFiles/parser-generator.dir/generated/TLexer.cpp.i

CMakeFiles/parser-generator.dir/generated/TLexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/parser-generator.dir/generated/TLexer.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tina/Documents/ITMO/CT/MT/parser-generator/generated/TLexer.cpp -o CMakeFiles/parser-generator.dir/generated/TLexer.cpp.s

CMakeFiles/parser-generator.dir/generated/TParser.cpp.o: CMakeFiles/parser-generator.dir/flags.make
CMakeFiles/parser-generator.dir/generated/TParser.cpp.o: generated/TParser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tina/Documents/ITMO/CT/MT/parser-generator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/parser-generator.dir/generated/TParser.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/parser-generator.dir/generated/TParser.cpp.o -c /Users/tina/Documents/ITMO/CT/MT/parser-generator/generated/TParser.cpp

CMakeFiles/parser-generator.dir/generated/TParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/parser-generator.dir/generated/TParser.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tina/Documents/ITMO/CT/MT/parser-generator/generated/TParser.cpp > CMakeFiles/parser-generator.dir/generated/TParser.cpp.i

CMakeFiles/parser-generator.dir/generated/TParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/parser-generator.dir/generated/TParser.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tina/Documents/ITMO/CT/MT/parser-generator/generated/TParser.cpp -o CMakeFiles/parser-generator.dir/generated/TParser.cpp.s

CMakeFiles/parser-generator.dir/generated/TParserBaseListener.cpp.o: CMakeFiles/parser-generator.dir/flags.make
CMakeFiles/parser-generator.dir/generated/TParserBaseListener.cpp.o: generated/TParserBaseListener.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tina/Documents/ITMO/CT/MT/parser-generator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/parser-generator.dir/generated/TParserBaseListener.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/parser-generator.dir/generated/TParserBaseListener.cpp.o -c /Users/tina/Documents/ITMO/CT/MT/parser-generator/generated/TParserBaseListener.cpp

CMakeFiles/parser-generator.dir/generated/TParserBaseListener.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/parser-generator.dir/generated/TParserBaseListener.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tina/Documents/ITMO/CT/MT/parser-generator/generated/TParserBaseListener.cpp > CMakeFiles/parser-generator.dir/generated/TParserBaseListener.cpp.i

CMakeFiles/parser-generator.dir/generated/TParserBaseListener.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/parser-generator.dir/generated/TParserBaseListener.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tina/Documents/ITMO/CT/MT/parser-generator/generated/TParserBaseListener.cpp -o CMakeFiles/parser-generator.dir/generated/TParserBaseListener.cpp.s

CMakeFiles/parser-generator.dir/generated/TParserBaseVisitor.cpp.o: CMakeFiles/parser-generator.dir/flags.make
CMakeFiles/parser-generator.dir/generated/TParserBaseVisitor.cpp.o: generated/TParserBaseVisitor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tina/Documents/ITMO/CT/MT/parser-generator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/parser-generator.dir/generated/TParserBaseVisitor.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/parser-generator.dir/generated/TParserBaseVisitor.cpp.o -c /Users/tina/Documents/ITMO/CT/MT/parser-generator/generated/TParserBaseVisitor.cpp

CMakeFiles/parser-generator.dir/generated/TParserBaseVisitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/parser-generator.dir/generated/TParserBaseVisitor.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tina/Documents/ITMO/CT/MT/parser-generator/generated/TParserBaseVisitor.cpp > CMakeFiles/parser-generator.dir/generated/TParserBaseVisitor.cpp.i

CMakeFiles/parser-generator.dir/generated/TParserBaseVisitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/parser-generator.dir/generated/TParserBaseVisitor.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tina/Documents/ITMO/CT/MT/parser-generator/generated/TParserBaseVisitor.cpp -o CMakeFiles/parser-generator.dir/generated/TParserBaseVisitor.cpp.s

CMakeFiles/parser-generator.dir/generated/TParserListener.cpp.o: CMakeFiles/parser-generator.dir/flags.make
CMakeFiles/parser-generator.dir/generated/TParserListener.cpp.o: generated/TParserListener.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tina/Documents/ITMO/CT/MT/parser-generator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/parser-generator.dir/generated/TParserListener.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/parser-generator.dir/generated/TParserListener.cpp.o -c /Users/tina/Documents/ITMO/CT/MT/parser-generator/generated/TParserListener.cpp

CMakeFiles/parser-generator.dir/generated/TParserListener.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/parser-generator.dir/generated/TParserListener.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tina/Documents/ITMO/CT/MT/parser-generator/generated/TParserListener.cpp > CMakeFiles/parser-generator.dir/generated/TParserListener.cpp.i

CMakeFiles/parser-generator.dir/generated/TParserListener.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/parser-generator.dir/generated/TParserListener.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tina/Documents/ITMO/CT/MT/parser-generator/generated/TParserListener.cpp -o CMakeFiles/parser-generator.dir/generated/TParserListener.cpp.s

CMakeFiles/parser-generator.dir/generated/TParserVisitor.cpp.o: CMakeFiles/parser-generator.dir/flags.make
CMakeFiles/parser-generator.dir/generated/TParserVisitor.cpp.o: generated/TParserVisitor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tina/Documents/ITMO/CT/MT/parser-generator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/parser-generator.dir/generated/TParserVisitor.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/parser-generator.dir/generated/TParserVisitor.cpp.o -c /Users/tina/Documents/ITMO/CT/MT/parser-generator/generated/TParserVisitor.cpp

CMakeFiles/parser-generator.dir/generated/TParserVisitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/parser-generator.dir/generated/TParserVisitor.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tina/Documents/ITMO/CT/MT/parser-generator/generated/TParserVisitor.cpp > CMakeFiles/parser-generator.dir/generated/TParserVisitor.cpp.i

CMakeFiles/parser-generator.dir/generated/TParserVisitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/parser-generator.dir/generated/TParserVisitor.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tina/Documents/ITMO/CT/MT/parser-generator/generated/TParserVisitor.cpp -o CMakeFiles/parser-generator.dir/generated/TParserVisitor.cpp.s

# Object files for target parser-generator
parser__generator_OBJECTS = \
"CMakeFiles/parser-generator.dir/main.cpp.o" \
"CMakeFiles/parser-generator.dir/generated/TLexer.cpp.o" \
"CMakeFiles/parser-generator.dir/generated/TParser.cpp.o" \
"CMakeFiles/parser-generator.dir/generated/TParserBaseListener.cpp.o" \
"CMakeFiles/parser-generator.dir/generated/TParserBaseVisitor.cpp.o" \
"CMakeFiles/parser-generator.dir/generated/TParserListener.cpp.o" \
"CMakeFiles/parser-generator.dir/generated/TParserVisitor.cpp.o"

# External object files for target parser-generator
parser__generator_EXTERNAL_OBJECTS =

parser-generator: CMakeFiles/parser-generator.dir/main.cpp.o
parser-generator: CMakeFiles/parser-generator.dir/generated/TLexer.cpp.o
parser-generator: CMakeFiles/parser-generator.dir/generated/TParser.cpp.o
parser-generator: CMakeFiles/parser-generator.dir/generated/TParserBaseListener.cpp.o
parser-generator: CMakeFiles/parser-generator.dir/generated/TParserBaseVisitor.cpp.o
parser-generator: CMakeFiles/parser-generator.dir/generated/TParserListener.cpp.o
parser-generator: CMakeFiles/parser-generator.dir/generated/TParserVisitor.cpp.o
parser-generator: CMakeFiles/parser-generator.dir/build.make
parser-generator: lib/libantlr4-runtime.a
parser-generator: CMakeFiles/parser-generator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/tina/Documents/ITMO/CT/MT/parser-generator/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable parser-generator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/parser-generator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/parser-generator.dir/build: parser-generator

.PHONY : CMakeFiles/parser-generator.dir/build

CMakeFiles/parser-generator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/parser-generator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/parser-generator.dir/clean

CMakeFiles/parser-generator.dir/depend:
	cd /Users/tina/Documents/ITMO/CT/MT/parser-generator && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tina/Documents/ITMO/CT/MT/parser-generator /Users/tina/Documents/ITMO/CT/MT/parser-generator /Users/tina/Documents/ITMO/CT/MT/parser-generator /Users/tina/Documents/ITMO/CT/MT/parser-generator /Users/tina/Documents/ITMO/CT/MT/parser-generator/CMakeFiles/parser-generator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/parser-generator.dir/depend
