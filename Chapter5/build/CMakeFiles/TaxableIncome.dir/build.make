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
CMAKE_SOURCE_DIR = /home/rami/CProjects/CModernApproach/Chapter5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rami/CProjects/CModernApproach/Chapter5/build

# Include any dependencies generated for this target.
include CMakeFiles/TaxableIncome.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TaxableIncome.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TaxableIncome.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TaxableIncome.dir/flags.make

CMakeFiles/TaxableIncome.dir/taxableIncome.c.o: CMakeFiles/TaxableIncome.dir/flags.make
CMakeFiles/TaxableIncome.dir/taxableIncome.c.o: /home/rami/CProjects/CModernApproach/Chapter5/taxableIncome.c
CMakeFiles/TaxableIncome.dir/taxableIncome.c.o: CMakeFiles/TaxableIncome.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/rami/CProjects/CModernApproach/Chapter5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TaxableIncome.dir/taxableIncome.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/TaxableIncome.dir/taxableIncome.c.o -MF CMakeFiles/TaxableIncome.dir/taxableIncome.c.o.d -o CMakeFiles/TaxableIncome.dir/taxableIncome.c.o -c /home/rami/CProjects/CModernApproach/Chapter5/taxableIncome.c

CMakeFiles/TaxableIncome.dir/taxableIncome.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/TaxableIncome.dir/taxableIncome.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rami/CProjects/CModernApproach/Chapter5/taxableIncome.c > CMakeFiles/TaxableIncome.dir/taxableIncome.c.i

CMakeFiles/TaxableIncome.dir/taxableIncome.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/TaxableIncome.dir/taxableIncome.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rami/CProjects/CModernApproach/Chapter5/taxableIncome.c -o CMakeFiles/TaxableIncome.dir/taxableIncome.c.s

# Object files for target TaxableIncome
TaxableIncome_OBJECTS = \
"CMakeFiles/TaxableIncome.dir/taxableIncome.c.o"

# External object files for target TaxableIncome
TaxableIncome_EXTERNAL_OBJECTS =

TaxableIncome: CMakeFiles/TaxableIncome.dir/taxableIncome.c.o
TaxableIncome: CMakeFiles/TaxableIncome.dir/build.make
TaxableIncome: CMakeFiles/TaxableIncome.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/rami/CProjects/CModernApproach/Chapter5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable TaxableIncome"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TaxableIncome.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TaxableIncome.dir/build: TaxableIncome
.PHONY : CMakeFiles/TaxableIncome.dir/build

CMakeFiles/TaxableIncome.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TaxableIncome.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TaxableIncome.dir/clean

CMakeFiles/TaxableIncome.dir/depend:
	cd /home/rami/CProjects/CModernApproach/Chapter5/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rami/CProjects/CModernApproach/Chapter5 /home/rami/CProjects/CModernApproach/Chapter5 /home/rami/CProjects/CModernApproach/Chapter5/build /home/rami/CProjects/CModernApproach/Chapter5/build /home/rami/CProjects/CModernApproach/Chapter5/build/CMakeFiles/TaxableIncome.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/TaxableIncome.dir/depend

