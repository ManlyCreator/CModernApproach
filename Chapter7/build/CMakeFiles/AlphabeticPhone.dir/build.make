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
CMAKE_SOURCE_DIR = /home/rami/CProjects/CModernApproach/Chapter7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rami/CProjects/CModernApproach/Chapter7/build

# Include any dependencies generated for this target.
include CMakeFiles/AlphabeticPhone.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/AlphabeticPhone.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/AlphabeticPhone.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AlphabeticPhone.dir/flags.make

CMakeFiles/AlphabeticPhone.dir/alphabeticPhone.c.o: CMakeFiles/AlphabeticPhone.dir/flags.make
CMakeFiles/AlphabeticPhone.dir/alphabeticPhone.c.o: /home/rami/CProjects/CModernApproach/Chapter7/alphabeticPhone.c
CMakeFiles/AlphabeticPhone.dir/alphabeticPhone.c.o: CMakeFiles/AlphabeticPhone.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/rami/CProjects/CModernApproach/Chapter7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/AlphabeticPhone.dir/alphabeticPhone.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/AlphabeticPhone.dir/alphabeticPhone.c.o -MF CMakeFiles/AlphabeticPhone.dir/alphabeticPhone.c.o.d -o CMakeFiles/AlphabeticPhone.dir/alphabeticPhone.c.o -c /home/rami/CProjects/CModernApproach/Chapter7/alphabeticPhone.c

CMakeFiles/AlphabeticPhone.dir/alphabeticPhone.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/AlphabeticPhone.dir/alphabeticPhone.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rami/CProjects/CModernApproach/Chapter7/alphabeticPhone.c > CMakeFiles/AlphabeticPhone.dir/alphabeticPhone.c.i

CMakeFiles/AlphabeticPhone.dir/alphabeticPhone.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/AlphabeticPhone.dir/alphabeticPhone.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rami/CProjects/CModernApproach/Chapter7/alphabeticPhone.c -o CMakeFiles/AlphabeticPhone.dir/alphabeticPhone.c.s

# Object files for target AlphabeticPhone
AlphabeticPhone_OBJECTS = \
"CMakeFiles/AlphabeticPhone.dir/alphabeticPhone.c.o"

# External object files for target AlphabeticPhone
AlphabeticPhone_EXTERNAL_OBJECTS =

AlphabeticPhone: CMakeFiles/AlphabeticPhone.dir/alphabeticPhone.c.o
AlphabeticPhone: CMakeFiles/AlphabeticPhone.dir/build.make
AlphabeticPhone: CMakeFiles/AlphabeticPhone.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/rami/CProjects/CModernApproach/Chapter7/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable AlphabeticPhone"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AlphabeticPhone.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AlphabeticPhone.dir/build: AlphabeticPhone
.PHONY : CMakeFiles/AlphabeticPhone.dir/build

CMakeFiles/AlphabeticPhone.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AlphabeticPhone.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AlphabeticPhone.dir/clean

CMakeFiles/AlphabeticPhone.dir/depend:
	cd /home/rami/CProjects/CModernApproach/Chapter7/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rami/CProjects/CModernApproach/Chapter7 /home/rami/CProjects/CModernApproach/Chapter7 /home/rami/CProjects/CModernApproach/Chapter7/build /home/rami/CProjects/CModernApproach/Chapter7/build /home/rami/CProjects/CModernApproach/Chapter7/build/CMakeFiles/AlphabeticPhone.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/AlphabeticPhone.dir/depend

