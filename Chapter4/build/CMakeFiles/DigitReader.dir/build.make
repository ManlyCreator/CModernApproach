# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rami/CProjects/CModernApproach/Chapter4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rami/CProjects/CModernApproach/Chapter4/build

# Include any dependencies generated for this target.
include CMakeFiles/DigitReader.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/DigitReader.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/DigitReader.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DigitReader.dir/flags.make

CMakeFiles/DigitReader.dir/digitReader.c.o: CMakeFiles/DigitReader.dir/flags.make
CMakeFiles/DigitReader.dir/digitReader.c.o: /home/rami/CProjects/CModernApproach/Chapter4/digitReader.c
CMakeFiles/DigitReader.dir/digitReader.c.o: CMakeFiles/DigitReader.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/rami/CProjects/CModernApproach/Chapter4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/DigitReader.dir/digitReader.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/DigitReader.dir/digitReader.c.o -MF CMakeFiles/DigitReader.dir/digitReader.c.o.d -o CMakeFiles/DigitReader.dir/digitReader.c.o -c /home/rami/CProjects/CModernApproach/Chapter4/digitReader.c

CMakeFiles/DigitReader.dir/digitReader.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/DigitReader.dir/digitReader.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rami/CProjects/CModernApproach/Chapter4/digitReader.c > CMakeFiles/DigitReader.dir/digitReader.c.i

CMakeFiles/DigitReader.dir/digitReader.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/DigitReader.dir/digitReader.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rami/CProjects/CModernApproach/Chapter4/digitReader.c -o CMakeFiles/DigitReader.dir/digitReader.c.s

# Object files for target DigitReader
DigitReader_OBJECTS = \
"CMakeFiles/DigitReader.dir/digitReader.c.o"

# External object files for target DigitReader
DigitReader_EXTERNAL_OBJECTS =

DigitReader: CMakeFiles/DigitReader.dir/digitReader.c.o
DigitReader: CMakeFiles/DigitReader.dir/build.make
DigitReader: CMakeFiles/DigitReader.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/rami/CProjects/CModernApproach/Chapter4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable DigitReader"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DigitReader.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DigitReader.dir/build: DigitReader
.PHONY : CMakeFiles/DigitReader.dir/build

CMakeFiles/DigitReader.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DigitReader.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DigitReader.dir/clean

CMakeFiles/DigitReader.dir/depend:
	cd /home/rami/CProjects/CModernApproach/Chapter4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rami/CProjects/CModernApproach/Chapter4 /home/rami/CProjects/CModernApproach/Chapter4 /home/rami/CProjects/CModernApproach/Chapter4/build /home/rami/CProjects/CModernApproach/Chapter4/build /home/rami/CProjects/CModernApproach/Chapter4/build/CMakeFiles/DigitReader.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/DigitReader.dir/depend
