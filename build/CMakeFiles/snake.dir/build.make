# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ahaoozhang/dev_code/snake/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ahaoozhang/dev_code/snake/build

# Include any dependencies generated for this target.
include CMakeFiles/snake.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/snake.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/snake.dir/flags.make

CMakeFiles/snake.dir/getchar.c.o: CMakeFiles/snake.dir/flags.make
CMakeFiles/snake.dir/getchar.c.o: /home/ahaoozhang/dev_code/snake/src/getchar.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ahaoozhang/dev_code/snake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/snake.dir/getchar.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/snake.dir/getchar.c.o   -c /home/ahaoozhang/dev_code/snake/src/getchar.c

CMakeFiles/snake.dir/getchar.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/snake.dir/getchar.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ahaoozhang/dev_code/snake/src/getchar.c > CMakeFiles/snake.dir/getchar.c.i

CMakeFiles/snake.dir/getchar.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/snake.dir/getchar.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ahaoozhang/dev_code/snake/src/getchar.c -o CMakeFiles/snake.dir/getchar.c.s

CMakeFiles/snake.dir/getchar.c.o.requires:

.PHONY : CMakeFiles/snake.dir/getchar.c.o.requires

CMakeFiles/snake.dir/getchar.c.o.provides: CMakeFiles/snake.dir/getchar.c.o.requires
	$(MAKE) -f CMakeFiles/snake.dir/build.make CMakeFiles/snake.dir/getchar.c.o.provides.build
.PHONY : CMakeFiles/snake.dir/getchar.c.o.provides

CMakeFiles/snake.dir/getchar.c.o.provides.build: CMakeFiles/snake.dir/getchar.c.o


CMakeFiles/snake.dir/main.c.o: CMakeFiles/snake.dir/flags.make
CMakeFiles/snake.dir/main.c.o: /home/ahaoozhang/dev_code/snake/src/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ahaoozhang/dev_code/snake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/snake.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/snake.dir/main.c.o   -c /home/ahaoozhang/dev_code/snake/src/main.c

CMakeFiles/snake.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/snake.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ahaoozhang/dev_code/snake/src/main.c > CMakeFiles/snake.dir/main.c.i

CMakeFiles/snake.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/snake.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ahaoozhang/dev_code/snake/src/main.c -o CMakeFiles/snake.dir/main.c.s

CMakeFiles/snake.dir/main.c.o.requires:

.PHONY : CMakeFiles/snake.dir/main.c.o.requires

CMakeFiles/snake.dir/main.c.o.provides: CMakeFiles/snake.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/snake.dir/build.make CMakeFiles/snake.dir/main.c.o.provides.build
.PHONY : CMakeFiles/snake.dir/main.c.o.provides

CMakeFiles/snake.dir/main.c.o.provides.build: CMakeFiles/snake.dir/main.c.o


CMakeFiles/snake.dir/snake.c.o: CMakeFiles/snake.dir/flags.make
CMakeFiles/snake.dir/snake.c.o: /home/ahaoozhang/dev_code/snake/src/snake.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ahaoozhang/dev_code/snake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/snake.dir/snake.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/snake.dir/snake.c.o   -c /home/ahaoozhang/dev_code/snake/src/snake.c

CMakeFiles/snake.dir/snake.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/snake.dir/snake.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ahaoozhang/dev_code/snake/src/snake.c > CMakeFiles/snake.dir/snake.c.i

CMakeFiles/snake.dir/snake.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/snake.dir/snake.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ahaoozhang/dev_code/snake/src/snake.c -o CMakeFiles/snake.dir/snake.c.s

CMakeFiles/snake.dir/snake.c.o.requires:

.PHONY : CMakeFiles/snake.dir/snake.c.o.requires

CMakeFiles/snake.dir/snake.c.o.provides: CMakeFiles/snake.dir/snake.c.o.requires
	$(MAKE) -f CMakeFiles/snake.dir/build.make CMakeFiles/snake.dir/snake.c.o.provides.build
.PHONY : CMakeFiles/snake.dir/snake.c.o.provides

CMakeFiles/snake.dir/snake.c.o.provides.build: CMakeFiles/snake.dir/snake.c.o


# Object files for target snake
snake_OBJECTS = \
"CMakeFiles/snake.dir/getchar.c.o" \
"CMakeFiles/snake.dir/main.c.o" \
"CMakeFiles/snake.dir/snake.c.o"

# External object files for target snake
snake_EXTERNAL_OBJECTS =

snake: CMakeFiles/snake.dir/getchar.c.o
snake: CMakeFiles/snake.dir/main.c.o
snake: CMakeFiles/snake.dir/snake.c.o
snake: CMakeFiles/snake.dir/build.make
snake: CMakeFiles/snake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ahaoozhang/dev_code/snake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable snake"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/snake.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/snake.dir/build: snake

.PHONY : CMakeFiles/snake.dir/build

CMakeFiles/snake.dir/requires: CMakeFiles/snake.dir/getchar.c.o.requires
CMakeFiles/snake.dir/requires: CMakeFiles/snake.dir/main.c.o.requires
CMakeFiles/snake.dir/requires: CMakeFiles/snake.dir/snake.c.o.requires

.PHONY : CMakeFiles/snake.dir/requires

CMakeFiles/snake.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/snake.dir/cmake_clean.cmake
.PHONY : CMakeFiles/snake.dir/clean

CMakeFiles/snake.dir/depend:
	cd /home/ahaoozhang/dev_code/snake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ahaoozhang/dev_code/snake/src /home/ahaoozhang/dev_code/snake/src /home/ahaoozhang/dev_code/snake/build /home/ahaoozhang/dev_code/snake/build /home/ahaoozhang/dev_code/snake/build/CMakeFiles/snake.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/snake.dir/depend

