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
CMAKE_COMMAND = /home/black/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/181.4668.70/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/black/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/181.4668.70/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/black/Work/krzem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/black/Work/krzem/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/so2_projekt.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/so2_projekt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/so2_projekt.dir/flags.make

CMakeFiles/so2_projekt.dir/main.cpp.o: CMakeFiles/so2_projekt.dir/flags.make
CMakeFiles/so2_projekt.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/black/Work/krzem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/so2_projekt.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/so2_projekt.dir/main.cpp.o -c /home/black/Work/krzem/main.cpp

CMakeFiles/so2_projekt.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/so2_projekt.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/black/Work/krzem/main.cpp > CMakeFiles/so2_projekt.dir/main.cpp.i

CMakeFiles/so2_projekt.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/so2_projekt.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/black/Work/krzem/main.cpp -o CMakeFiles/so2_projekt.dir/main.cpp.s

CMakeFiles/so2_projekt.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/so2_projekt.dir/main.cpp.o.requires

CMakeFiles/so2_projekt.dir/main.cpp.o.provides: CMakeFiles/so2_projekt.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/so2_projekt.dir/build.make CMakeFiles/so2_projekt.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/so2_projekt.dir/main.cpp.o.provides

CMakeFiles/so2_projekt.dir/main.cpp.o.provides.build: CMakeFiles/so2_projekt.dir/main.cpp.o


CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.o: CMakeFiles/so2_projekt.dir/flags.make
CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.o: ../views/RawConsoleMainView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/black/Work/krzem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.o -c /home/black/Work/krzem/views/RawConsoleMainView.cpp

CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/black/Work/krzem/views/RawConsoleMainView.cpp > CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.i

CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/black/Work/krzem/views/RawConsoleMainView.cpp -o CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.s

CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.o.requires:

.PHONY : CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.o.requires

CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.o.provides: CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.o.requires
	$(MAKE) -f CMakeFiles/so2_projekt.dir/build.make CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.o.provides.build
.PHONY : CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.o.provides

CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.o.provides.build: CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.o


CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.o: CMakeFiles/so2_projekt.dir/flags.make
CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.o: ../workers/BaseWorker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/black/Work/krzem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.o -c /home/black/Work/krzem/workers/BaseWorker.cpp

CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/black/Work/krzem/workers/BaseWorker.cpp > CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.i

CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/black/Work/krzem/workers/BaseWorker.cpp -o CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.s

CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.o.requires:

.PHONY : CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.o.requires

CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.o.provides: CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.o.requires
	$(MAKE) -f CMakeFiles/so2_projekt.dir/build.make CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.o.provides.build
.PHONY : CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.o.provides

CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.o.provides.build: CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.o


CMakeFiles/so2_projekt.dir/utils/State.cpp.o: CMakeFiles/so2_projekt.dir/flags.make
CMakeFiles/so2_projekt.dir/utils/State.cpp.o: ../utils/State.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/black/Work/krzem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/so2_projekt.dir/utils/State.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/so2_projekt.dir/utils/State.cpp.o -c /home/black/Work/krzem/utils/State.cpp

CMakeFiles/so2_projekt.dir/utils/State.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/so2_projekt.dir/utils/State.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/black/Work/krzem/utils/State.cpp > CMakeFiles/so2_projekt.dir/utils/State.cpp.i

CMakeFiles/so2_projekt.dir/utils/State.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/so2_projekt.dir/utils/State.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/black/Work/krzem/utils/State.cpp -o CMakeFiles/so2_projekt.dir/utils/State.cpp.s

CMakeFiles/so2_projekt.dir/utils/State.cpp.o.requires:

.PHONY : CMakeFiles/so2_projekt.dir/utils/State.cpp.o.requires

CMakeFiles/so2_projekt.dir/utils/State.cpp.o.provides: CMakeFiles/so2_projekt.dir/utils/State.cpp.o.requires
	$(MAKE) -f CMakeFiles/so2_projekt.dir/build.make CMakeFiles/so2_projekt.dir/utils/State.cpp.o.provides.build
.PHONY : CMakeFiles/so2_projekt.dir/utils/State.cpp.o.provides

CMakeFiles/so2_projekt.dir/utils/State.cpp.o.provides.build: CMakeFiles/so2_projekt.dir/utils/State.cpp.o


CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.o: CMakeFiles/so2_projekt.dir/flags.make
CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.o: ../utils/StateRaport.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/black/Work/krzem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.o -c /home/black/Work/krzem/utils/StateRaport.cpp

CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/black/Work/krzem/utils/StateRaport.cpp > CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.i

CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/black/Work/krzem/utils/StateRaport.cpp -o CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.s

CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.o.requires:

.PHONY : CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.o.requires

CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.o.provides: CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.o.requires
	$(MAKE) -f CMakeFiles/so2_projekt.dir/build.make CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.o.provides.build
.PHONY : CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.o.provides

CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.o.provides.build: CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.o


CMakeFiles/so2_projekt.dir/views/IView.cpp.o: CMakeFiles/so2_projekt.dir/flags.make
CMakeFiles/so2_projekt.dir/views/IView.cpp.o: ../views/IView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/black/Work/krzem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/so2_projekt.dir/views/IView.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/so2_projekt.dir/views/IView.cpp.o -c /home/black/Work/krzem/views/IView.cpp

CMakeFiles/so2_projekt.dir/views/IView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/so2_projekt.dir/views/IView.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/black/Work/krzem/views/IView.cpp > CMakeFiles/so2_projekt.dir/views/IView.cpp.i

CMakeFiles/so2_projekt.dir/views/IView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/so2_projekt.dir/views/IView.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/black/Work/krzem/views/IView.cpp -o CMakeFiles/so2_projekt.dir/views/IView.cpp.s

CMakeFiles/so2_projekt.dir/views/IView.cpp.o.requires:

.PHONY : CMakeFiles/so2_projekt.dir/views/IView.cpp.o.requires

CMakeFiles/so2_projekt.dir/views/IView.cpp.o.provides: CMakeFiles/so2_projekt.dir/views/IView.cpp.o.requires
	$(MAKE) -f CMakeFiles/so2_projekt.dir/build.make CMakeFiles/so2_projekt.dir/views/IView.cpp.o.provides.build
.PHONY : CMakeFiles/so2_projekt.dir/views/IView.cpp.o.provides

CMakeFiles/so2_projekt.dir/views/IView.cpp.o.provides.build: CMakeFiles/so2_projekt.dir/views/IView.cpp.o


CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.o: CMakeFiles/so2_projekt.dir/flags.make
CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.o: ../workers/BaseSeparator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/black/Work/krzem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.o -c /home/black/Work/krzem/workers/BaseSeparator.cpp

CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/black/Work/krzem/workers/BaseSeparator.cpp > CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.i

CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/black/Work/krzem/workers/BaseSeparator.cpp -o CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.s

CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.o.requires:

.PHONY : CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.o.requires

CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.o.provides: CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.o.requires
	$(MAKE) -f CMakeFiles/so2_projekt.dir/build.make CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.o.provides.build
.PHONY : CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.o.provides

CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.o.provides.build: CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.o


CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.o: CMakeFiles/so2_projekt.dir/flags.make
CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.o: ../workers/WoodchopperWorker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/black/Work/krzem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.o -c /home/black/Work/krzem/workers/WoodchopperWorker.cpp

CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/black/Work/krzem/workers/WoodchopperWorker.cpp > CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.i

CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/black/Work/krzem/workers/WoodchopperWorker.cpp -o CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.s

CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.o.requires:

.PHONY : CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.o.requires

CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.o.provides: CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.o.requires
	$(MAKE) -f CMakeFiles/so2_projekt.dir/build.make CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.o.provides.build
.PHONY : CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.o.provides

CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.o.provides.build: CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.o


# Object files for target so2_projekt
so2_projekt_OBJECTS = \
"CMakeFiles/so2_projekt.dir/main.cpp.o" \
"CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.o" \
"CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.o" \
"CMakeFiles/so2_projekt.dir/utils/State.cpp.o" \
"CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.o" \
"CMakeFiles/so2_projekt.dir/views/IView.cpp.o" \
"CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.o" \
"CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.o"

# External object files for target so2_projekt
so2_projekt_EXTERNAL_OBJECTS =

so2_projekt: CMakeFiles/so2_projekt.dir/main.cpp.o
so2_projekt: CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.o
so2_projekt: CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.o
so2_projekt: CMakeFiles/so2_projekt.dir/utils/State.cpp.o
so2_projekt: CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.o
so2_projekt: CMakeFiles/so2_projekt.dir/views/IView.cpp.o
so2_projekt: CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.o
so2_projekt: CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.o
so2_projekt: CMakeFiles/so2_projekt.dir/build.make
so2_projekt: CMakeFiles/so2_projekt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/black/Work/krzem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable so2_projekt"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/so2_projekt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/so2_projekt.dir/build: so2_projekt

.PHONY : CMakeFiles/so2_projekt.dir/build

CMakeFiles/so2_projekt.dir/requires: CMakeFiles/so2_projekt.dir/main.cpp.o.requires
CMakeFiles/so2_projekt.dir/requires: CMakeFiles/so2_projekt.dir/views/RawConsoleMainView.cpp.o.requires
CMakeFiles/so2_projekt.dir/requires: CMakeFiles/so2_projekt.dir/workers/BaseWorker.cpp.o.requires
CMakeFiles/so2_projekt.dir/requires: CMakeFiles/so2_projekt.dir/utils/State.cpp.o.requires
CMakeFiles/so2_projekt.dir/requires: CMakeFiles/so2_projekt.dir/utils/StateRaport.cpp.o.requires
CMakeFiles/so2_projekt.dir/requires: CMakeFiles/so2_projekt.dir/views/IView.cpp.o.requires
CMakeFiles/so2_projekt.dir/requires: CMakeFiles/so2_projekt.dir/workers/BaseSeparator.cpp.o.requires
CMakeFiles/so2_projekt.dir/requires: CMakeFiles/so2_projekt.dir/workers/WoodchopperWorker.cpp.o.requires

.PHONY : CMakeFiles/so2_projekt.dir/requires

CMakeFiles/so2_projekt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/so2_projekt.dir/cmake_clean.cmake
.PHONY : CMakeFiles/so2_projekt.dir/clean

CMakeFiles/so2_projekt.dir/depend:
	cd /home/black/Work/krzem/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/black/Work/krzem /home/black/Work/krzem /home/black/Work/krzem/cmake-build-debug /home/black/Work/krzem/cmake-build-debug /home/black/Work/krzem/cmake-build-debug/CMakeFiles/so2_projekt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/so2_projekt.dir/depend

