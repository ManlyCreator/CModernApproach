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
include CMakeFiles/SandBox.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SandBox.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SandBox.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SandBox.dir/flags.make

CMakeFiles/SandBox.dir/sandBox.c.o: CMakeFiles/SandBox.dir/flags.make
CMakeFiles/SandBox.dir/sandBox.c.o: /home/rami/CProjects/CModernApproach/Chapter8/sandBox.c
CMakeFiles/SandBox.dir/sandBox.c.o: CMakeFiles/SandBox.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/rami/CProjects/CModernApproach/Chapter8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SandBox.dir/sandBox.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SandBox.dir/sandBox.c.o -MF CMakeFiles/SandBox.dir/sandBox.c.o.d -o CMakeFiles/SandBox.dir/sandBox.c.o -c /home/rami/CProjects/CModernApproach/Chapter8/sandBox.c

CMakeFiles/SandBox.dir/sandBox.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/SandBox.dir/sandBox.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rami/CProjects/CModernApproach/Chapter8/sandBox.c > CMakeFiles/SandBox.dir/sandBox.c.i

CMakeFiles/SandBox.dir/sandBox.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/SandBox.dir/sandBox.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rami/CProjects/CModernApproach/Chapter8/sandBox.c -o CMakeFiles/SandBox.dir/sandBox.c.s

# Object files for target SandBox
SandBox_OBJECTS = \
"CMakeFiles/SandBox.dir/sandBox.c.o"

# External object files for target SandBox
SandBox_EXTERNAL_OBJECTS =

SandBox: CMakeFiles/SandBox.dir/sandBox.c.o
SandBox: CMakeFiles/SandBox.dir/build.make
SandBox: CMakeFiles/SandBox.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/rami/CProjects/CModernApproach/Chapter8/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable SandBox"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SandBox.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SandBox.dir/build: SandBox
.PHONY : CMakeFiles/SandBox.dir/build

CMakeFiles/SandBox.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SandBox.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SandBox.dir/clean

CMakeFiles/SandBox.dir/depend:
	cd /home/rami/CProjects/CModernApproach/Chapter8/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rami/CProjects/CModernApproach/Chapter8 /home/rami/CProjects/CModernApproach/Chapter8 /home/rami/CProjects/CModernApproach/Chapter8/build /home/rami/CProjects/CModernApproach/Chapter8/build /home/rami/CProjects/CModernApproach/Chapter8/build/CMakeFiles/SandBox.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/SandBox.dir/depend

