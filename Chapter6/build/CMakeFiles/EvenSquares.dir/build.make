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
CMAKE_SOURCE_DIR = /home/rami/CProjects/CModernApproach/Chapter6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rami/CProjects/CModernApproach/Chapter6/build

# Include any dependencies generated for this target.
include CMakeFiles/EvenSquares.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/EvenSquares.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/EvenSquares.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EvenSquares.dir/flags.make

CMakeFiles/EvenSquares.dir/evenSquares.c.o: CMakeFiles/EvenSquares.dir/flags.make
CMakeFiles/EvenSquares.dir/evenSquares.c.o: /home/rami/CProjects/CModernApproach/Chapter6/evenSquares.c
CMakeFiles/EvenSquares.dir/evenSquares.c.o: CMakeFiles/EvenSquares.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/rami/CProjects/CModernApproach/Chapter6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/EvenSquares.dir/evenSquares.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/EvenSquares.dir/evenSquares.c.o -MF CMakeFiles/EvenSquares.dir/evenSquares.c.o.d -o CMakeFiles/EvenSquares.dir/evenSquares.c.o -c /home/rami/CProjects/CModernApproach/Chapter6/evenSquares.c

CMakeFiles/EvenSquares.dir/evenSquares.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/EvenSquares.dir/evenSquares.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rami/CProjects/CModernApproach/Chapter6/evenSquares.c > CMakeFiles/EvenSquares.dir/evenSquares.c.i

CMakeFiles/EvenSquares.dir/evenSquares.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/EvenSquares.dir/evenSquares.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rami/CProjects/CModernApproach/Chapter6/evenSquares.c -o CMakeFiles/EvenSquares.dir/evenSquares.c.s

# Object files for target EvenSquares
EvenSquares_OBJECTS = \
"CMakeFiles/EvenSquares.dir/evenSquares.c.o"

# External object files for target EvenSquares
EvenSquares_EXTERNAL_OBJECTS =

EvenSquares: CMakeFiles/EvenSquares.dir/evenSquares.c.o
EvenSquares: CMakeFiles/EvenSquares.dir/build.make
EvenSquares: CMakeFiles/EvenSquares.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/rami/CProjects/CModernApproach/Chapter6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable EvenSquares"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EvenSquares.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EvenSquares.dir/build: EvenSquares
.PHONY : CMakeFiles/EvenSquares.dir/build

CMakeFiles/EvenSquares.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/EvenSquares.dir/cmake_clean.cmake
.PHONY : CMakeFiles/EvenSquares.dir/clean

CMakeFiles/EvenSquares.dir/depend:
	cd /home/rami/CProjects/CModernApproach/Chapter6/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rami/CProjects/CModernApproach/Chapter6 /home/rami/CProjects/CModernApproach/Chapter6 /home/rami/CProjects/CModernApproach/Chapter6/build /home/rami/CProjects/CModernApproach/Chapter6/build /home/rami/CProjects/CModernApproach/Chapter6/build/CMakeFiles/EvenSquares.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/EvenSquares.dir/depend

