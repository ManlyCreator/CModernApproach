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
CMAKE_SOURCE_DIR = /home/rami/CProjects/CModernApproach/Chapter8

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rami/CProjects/CModernApproach/Chapter8/build

# Include any dependencies generated for this target.
include CMakeFiles/AnagramChecker.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/AnagramChecker.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/AnagramChecker.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AnagramChecker.dir/flags.make

CMakeFiles/AnagramChecker.dir/anagramChecker.c.o: CMakeFiles/AnagramChecker.dir/flags.make
CMakeFiles/AnagramChecker.dir/anagramChecker.c.o: /home/rami/CProjects/CModernApproach/Chapter8/anagramChecker.c
CMakeFiles/AnagramChecker.dir/anagramChecker.c.o: CMakeFiles/AnagramChecker.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/rami/CProjects/CModernApproach/Chapter8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/AnagramChecker.dir/anagramChecker.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/AnagramChecker.dir/anagramChecker.c.o -MF CMakeFiles/AnagramChecker.dir/anagramChecker.c.o.d -o CMakeFiles/AnagramChecker.dir/anagramChecker.c.o -c /home/rami/CProjects/CModernApproach/Chapter8/anagramChecker.c

CMakeFiles/AnagramChecker.dir/anagramChecker.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/AnagramChecker.dir/anagramChecker.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rami/CProjects/CModernApproach/Chapter8/anagramChecker.c > CMakeFiles/AnagramChecker.dir/anagramChecker.c.i

CMakeFiles/AnagramChecker.dir/anagramChecker.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/AnagramChecker.dir/anagramChecker.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rami/CProjects/CModernApproach/Chapter8/anagramChecker.c -o CMakeFiles/AnagramChecker.dir/anagramChecker.c.s

# Object files for target AnagramChecker
AnagramChecker_OBJECTS = \
"CMakeFiles/AnagramChecker.dir/anagramChecker.c.o"

# External object files for target AnagramChecker
AnagramChecker_EXTERNAL_OBJECTS =

AnagramChecker: CMakeFiles/AnagramChecker.dir/anagramChecker.c.o
AnagramChecker: CMakeFiles/AnagramChecker.dir/build.make
AnagramChecker: CMakeFiles/AnagramChecker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/rami/CProjects/CModernApproach/Chapter8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable AnagramChecker"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AnagramChecker.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AnagramChecker.dir/build: AnagramChecker
.PHONY : CMakeFiles/AnagramChecker.dir/build

CMakeFiles/AnagramChecker.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AnagramChecker.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AnagramChecker.dir/clean

CMakeFiles/AnagramChecker.dir/depend:
	cd /home/rami/CProjects/CModernApproach/Chapter8/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rami/CProjects/CModernApproach/Chapter8 /home/rami/CProjects/CModernApproach/Chapter8 /home/rami/CProjects/CModernApproach/Chapter8/build /home/rami/CProjects/CModernApproach/Chapter8/build /home/rami/CProjects/CModernApproach/Chapter8/build/CMakeFiles/AnagramChecker.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/AnagramChecker.dir/depend

