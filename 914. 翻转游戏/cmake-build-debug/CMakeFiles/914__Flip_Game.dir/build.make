# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\914. Flip Game"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\914. Flip Game\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/914__Flip_Game.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/914__Flip_Game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/914__Flip_Game.dir/flags.make

CMakeFiles/914__Flip_Game.dir/main.cpp.obj: CMakeFiles/914__Flip_Game.dir/flags.make
CMakeFiles/914__Flip_Game.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\914. Flip Game\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/914__Flip_Game.dir/main.cpp.obj"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\914__Flip_Game.dir\main.cpp.obj -c "E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\914. Flip Game\main.cpp"

CMakeFiles/914__Flip_Game.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/914__Flip_Game.dir/main.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\914. Flip Game\main.cpp" > CMakeFiles\914__Flip_Game.dir\main.cpp.i

CMakeFiles/914__Flip_Game.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/914__Flip_Game.dir/main.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\914. Flip Game\main.cpp" -o CMakeFiles\914__Flip_Game.dir\main.cpp.s

# Object files for target 914__Flip_Game
914__Flip_Game_OBJECTS = \
"CMakeFiles/914__Flip_Game.dir/main.cpp.obj"

# External object files for target 914__Flip_Game
914__Flip_Game_EXTERNAL_OBJECTS =

914__Flip_Game.exe: CMakeFiles/914__Flip_Game.dir/main.cpp.obj
914__Flip_Game.exe: CMakeFiles/914__Flip_Game.dir/build.make
914__Flip_Game.exe: CMakeFiles/914__Flip_Game.dir/linklibs.rsp
914__Flip_Game.exe: CMakeFiles/914__Flip_Game.dir/objects1.rsp
914__Flip_Game.exe: CMakeFiles/914__Flip_Game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\914. Flip Game\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 914__Flip_Game.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\914__Flip_Game.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/914__Flip_Game.dir/build: 914__Flip_Game.exe

.PHONY : CMakeFiles/914__Flip_Game.dir/build

CMakeFiles/914__Flip_Game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\914__Flip_Game.dir\cmake_clean.cmake
.PHONY : CMakeFiles/914__Flip_Game.dir/clean

CMakeFiles/914__Flip_Game.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\914. Flip Game" "E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\914. Flip Game" "E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\914. Flip Game\cmake-build-debug" "E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\914. Flip Game\cmake-build-debug" "E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\914. Flip Game\cmake-build-debug\CMakeFiles\914__Flip_Game.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/914__Flip_Game.dir/depend

