# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/jeronimo/clion-2019.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/jeronimo/clion-2019.2.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jeronimo/Documents/BME_Fall19/EE312/UTpod

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jeronimo/Documents/BME_Fall19/EE312/UTpod/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/UTpod.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/UTpod.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/UTpod.dir/flags.make

CMakeFiles/UTpod.dir/Song.cpp.o: CMakeFiles/UTpod.dir/flags.make
CMakeFiles/UTpod.dir/Song.cpp.o: ../Song.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jeronimo/Documents/BME_Fall19/EE312/UTpod/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/UTpod.dir/Song.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UTpod.dir/Song.cpp.o -c /home/jeronimo/Documents/BME_Fall19/EE312/UTpod/Song.cpp

CMakeFiles/UTpod.dir/Song.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UTpod.dir/Song.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeronimo/Documents/BME_Fall19/EE312/UTpod/Song.cpp > CMakeFiles/UTpod.dir/Song.cpp.i

CMakeFiles/UTpod.dir/Song.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UTpod.dir/Song.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeronimo/Documents/BME_Fall19/EE312/UTpod/Song.cpp -o CMakeFiles/UTpod.dir/Song.cpp.s

CMakeFiles/UTpod.dir/UtPod.cpp.o: CMakeFiles/UTpod.dir/flags.make
CMakeFiles/UTpod.dir/UtPod.cpp.o: ../UtPod.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jeronimo/Documents/BME_Fall19/EE312/UTpod/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/UTpod.dir/UtPod.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UTpod.dir/UtPod.cpp.o -c /home/jeronimo/Documents/BME_Fall19/EE312/UTpod/UtPod.cpp

CMakeFiles/UTpod.dir/UtPod.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UTpod.dir/UtPod.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeronimo/Documents/BME_Fall19/EE312/UTpod/UtPod.cpp > CMakeFiles/UTpod.dir/UtPod.cpp.i

CMakeFiles/UTpod.dir/UtPod.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UTpod.dir/UtPod.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeronimo/Documents/BME_Fall19/EE312/UTpod/UtPod.cpp -o CMakeFiles/UTpod.dir/UtPod.cpp.s

CMakeFiles/UTpod.dir/UtPodDriver.cpp.o: CMakeFiles/UTpod.dir/flags.make
CMakeFiles/UTpod.dir/UtPodDriver.cpp.o: ../UtPodDriver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jeronimo/Documents/BME_Fall19/EE312/UTpod/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/UTpod.dir/UtPodDriver.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/UTpod.dir/UtPodDriver.cpp.o -c /home/jeronimo/Documents/BME_Fall19/EE312/UTpod/UtPodDriver.cpp

CMakeFiles/UTpod.dir/UtPodDriver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UTpod.dir/UtPodDriver.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jeronimo/Documents/BME_Fall19/EE312/UTpod/UtPodDriver.cpp > CMakeFiles/UTpod.dir/UtPodDriver.cpp.i

CMakeFiles/UTpod.dir/UtPodDriver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UTpod.dir/UtPodDriver.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jeronimo/Documents/BME_Fall19/EE312/UTpod/UtPodDriver.cpp -o CMakeFiles/UTpod.dir/UtPodDriver.cpp.s

# Object files for target UTpod
UTpod_OBJECTS = \
"CMakeFiles/UTpod.dir/Song.cpp.o" \
"CMakeFiles/UTpod.dir/UtPod.cpp.o" \
"CMakeFiles/UTpod.dir/UtPodDriver.cpp.o"

# External object files for target UTpod
UTpod_EXTERNAL_OBJECTS =

UTpod: CMakeFiles/UTpod.dir/Song.cpp.o
UTpod: CMakeFiles/UTpod.dir/UtPod.cpp.o
UTpod: CMakeFiles/UTpod.dir/UtPodDriver.cpp.o
UTpod: CMakeFiles/UTpod.dir/build.make
UTpod: CMakeFiles/UTpod.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jeronimo/Documents/BME_Fall19/EE312/UTpod/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable UTpod"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/UTpod.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/UTpod.dir/build: UTpod

.PHONY : CMakeFiles/UTpod.dir/build

CMakeFiles/UTpod.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/UTpod.dir/cmake_clean.cmake
.PHONY : CMakeFiles/UTpod.dir/clean

CMakeFiles/UTpod.dir/depend:
	cd /home/jeronimo/Documents/BME_Fall19/EE312/UTpod/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jeronimo/Documents/BME_Fall19/EE312/UTpod /home/jeronimo/Documents/BME_Fall19/EE312/UTpod /home/jeronimo/Documents/BME_Fall19/EE312/UTpod/cmake-build-debug /home/jeronimo/Documents/BME_Fall19/EE312/UTpod/cmake-build-debug /home/jeronimo/Documents/BME_Fall19/EE312/UTpod/cmake-build-debug/CMakeFiles/UTpod.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/UTpod.dir/depend

