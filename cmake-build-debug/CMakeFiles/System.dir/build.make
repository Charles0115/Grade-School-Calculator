# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\System

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\System\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/System.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/System.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/System.dir/flags.make

CMakeFiles/System.dir/main.c.obj: CMakeFiles/System.dir/flags.make
CMakeFiles/System.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\System\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/System.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\System.dir\main.c.obj   -c E:\System\main.c

CMakeFiles/System.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/System.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\System\main.c > CMakeFiles\System.dir\main.c.i

CMakeFiles/System.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/System.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\System\main.c -o CMakeFiles\System.dir\main.c.s

# Object files for target System
System_OBJECTS = \
"CMakeFiles/System.dir/main.c.obj"

# External object files for target System
System_EXTERNAL_OBJECTS =

System.exe: CMakeFiles/System.dir/main.c.obj
System.exe: CMakeFiles/System.dir/build.make
System.exe: CMakeFiles/System.dir/linklibs.rsp
System.exe: CMakeFiles/System.dir/objects1.rsp
System.exe: CMakeFiles/System.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\System\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable System.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\System.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/System.dir/build: System.exe

.PHONY : CMakeFiles/System.dir/build

CMakeFiles/System.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\System.dir\cmake_clean.cmake
.PHONY : CMakeFiles/System.dir/clean

CMakeFiles/System.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\System E:\System E:\System\cmake-build-debug E:\System\cmake-build-debug E:\System\cmake-build-debug\CMakeFiles\System.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/System.dir/depend

