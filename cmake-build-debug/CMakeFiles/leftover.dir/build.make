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
CMAKE_COMMAND = D:\CMake\bin\cmake.exe

# The command to remove a file.
RM = D:\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\MyPrograms\C++\PremierPlus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\MyPrograms\C++\PremierPlus\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/leftover.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/leftover.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/leftover.dir/flags.make

CMakeFiles/leftover.dir/leftover.cpp.obj: CMakeFiles/leftover.dir/flags.make
CMakeFiles/leftover.dir/leftover.cpp.obj: ../leftover.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\MyPrograms\C++\PremierPlus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/leftover.dir/leftover.cpp.obj"
	D:\TDM-GCC\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\leftover.dir\leftover.cpp.obj -c E:\MyPrograms\C++\PremierPlus\leftover.cpp

CMakeFiles/leftover.dir/leftover.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leftover.dir/leftover.cpp.i"
	D:\TDM-GCC\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\MyPrograms\C++\PremierPlus\leftover.cpp > CMakeFiles\leftover.dir\leftover.cpp.i

CMakeFiles/leftover.dir/leftover.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leftover.dir/leftover.cpp.s"
	D:\TDM-GCC\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\MyPrograms\C++\PremierPlus\leftover.cpp -o CMakeFiles\leftover.dir\leftover.cpp.s

# Object files for target leftover
leftover_OBJECTS = \
"CMakeFiles/leftover.dir/leftover.cpp.obj"

# External object files for target leftover
leftover_EXTERNAL_OBJECTS =

leftover.exe: CMakeFiles/leftover.dir/leftover.cpp.obj
leftover.exe: CMakeFiles/leftover.dir/build.make
leftover.exe: CMakeFiles/leftover.dir/linklibs.rsp
leftover.exe: CMakeFiles/leftover.dir/objects1.rsp
leftover.exe: CMakeFiles/leftover.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\MyPrograms\C++\PremierPlus\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable leftover.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\leftover.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/leftover.dir/build: leftover.exe

.PHONY : CMakeFiles/leftover.dir/build

CMakeFiles/leftover.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\leftover.dir\cmake_clean.cmake
.PHONY : CMakeFiles/leftover.dir/clean

CMakeFiles/leftover.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\MyPrograms\C++\PremierPlus E:\MyPrograms\C++\PremierPlus E:\MyPrograms\C++\PremierPlus\cmake-build-debug E:\MyPrograms\C++\PremierPlus\cmake-build-debug E:\MyPrograms\C++\PremierPlus\cmake-build-debug\CMakeFiles\leftover.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/leftover.dir/depend
