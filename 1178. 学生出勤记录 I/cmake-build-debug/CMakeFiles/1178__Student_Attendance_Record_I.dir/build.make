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
CMAKE_SOURCE_DIR = "E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\1178. Student Attendance Record I"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\1178. Student Attendance Record I\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/1178__Student_Attendance_Record_I.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1178__Student_Attendance_Record_I.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1178__Student_Attendance_Record_I.dir/flags.make

CMakeFiles/1178__Student_Attendance_Record_I.dir/main.cpp.obj: CMakeFiles/1178__Student_Attendance_Record_I.dir/flags.make
CMakeFiles/1178__Student_Attendance_Record_I.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\1178. Student Attendance Record I\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1178__Student_Attendance_Record_I.dir/main.cpp.obj"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1178__Student_Attendance_Record_I.dir\main.cpp.obj -c "E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\1178. Student Attendance Record I\main.cpp"

CMakeFiles/1178__Student_Attendance_Record_I.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1178__Student_Attendance_Record_I.dir/main.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\1178. Student Attendance Record I\main.cpp" > CMakeFiles\1178__Student_Attendance_Record_I.dir\main.cpp.i

CMakeFiles/1178__Student_Attendance_Record_I.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1178__Student_Attendance_Record_I.dir/main.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\1178. Student Attendance Record I\main.cpp" -o CMakeFiles\1178__Student_Attendance_Record_I.dir\main.cpp.s

# Object files for target 1178__Student_Attendance_Record_I
1178__Student_Attendance_Record_I_OBJECTS = \
"CMakeFiles/1178__Student_Attendance_Record_I.dir/main.cpp.obj"

# External object files for target 1178__Student_Attendance_Record_I
1178__Student_Attendance_Record_I_EXTERNAL_OBJECTS =

1178__Student_Attendance_Record_I.exe: CMakeFiles/1178__Student_Attendance_Record_I.dir/main.cpp.obj
1178__Student_Attendance_Record_I.exe: CMakeFiles/1178__Student_Attendance_Record_I.dir/build.make
1178__Student_Attendance_Record_I.exe: CMakeFiles/1178__Student_Attendance_Record_I.dir/linklibs.rsp
1178__Student_Attendance_Record_I.exe: CMakeFiles/1178__Student_Attendance_Record_I.dir/objects1.rsp
1178__Student_Attendance_Record_I.exe: CMakeFiles/1178__Student_Attendance_Record_I.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\1178. Student Attendance Record I\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1178__Student_Attendance_Record_I.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1178__Student_Attendance_Record_I.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1178__Student_Attendance_Record_I.dir/build: 1178__Student_Attendance_Record_I.exe

.PHONY : CMakeFiles/1178__Student_Attendance_Record_I.dir/build

CMakeFiles/1178__Student_Attendance_Record_I.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1178__Student_Attendance_Record_I.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1178__Student_Attendance_Record_I.dir/clean

CMakeFiles/1178__Student_Attendance_Record_I.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\1178. Student Attendance Record I" "E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\1178. Student Attendance Record I" "E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\1178. Student Attendance Record I\cmake-build-debug" "E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\1178. Student Attendance Record I\cmake-build-debug" "E:\programe\GitHub project warehouse manager\LeetCode-Practice-Questions\1178. Student Attendance Record I\cmake-build-debug\CMakeFiles\1178__Student_Attendance_Record_I.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/1178__Student_Attendance_Record_I.dir/depend

