# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = "/home/artem/Рабочий стол/project/test_task"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/artem/Рабочий стол/project/test_task/build"

# Include any dependencies generated for this target.
include src/CMakeFiles/hashFile_lib.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/hashFile_lib.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/hashFile_lib.dir/flags.make

src/CMakeFiles/hashFile_lib.dir/error.cpp.o: src/CMakeFiles/hashFile_lib.dir/flags.make
src/CMakeFiles/hashFile_lib.dir/error.cpp.o: ../src/error.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/artem/Рабочий стол/project/test_task/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/hashFile_lib.dir/error.cpp.o"
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hashFile_lib.dir/error.cpp.o -c "/home/artem/Рабочий стол/project/test_task/src/error.cpp"

src/CMakeFiles/hashFile_lib.dir/error.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hashFile_lib.dir/error.cpp.i"
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/artem/Рабочий стол/project/test_task/src/error.cpp" > CMakeFiles/hashFile_lib.dir/error.cpp.i

src/CMakeFiles/hashFile_lib.dir/error.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hashFile_lib.dir/error.cpp.s"
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/artem/Рабочий стол/project/test_task/src/error.cpp" -o CMakeFiles/hashFile_lib.dir/error.cpp.s

src/CMakeFiles/hashFile_lib.dir/fileInfo.cpp.o: src/CMakeFiles/hashFile_lib.dir/flags.make
src/CMakeFiles/hashFile_lib.dir/fileInfo.cpp.o: ../src/fileInfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/artem/Рабочий стол/project/test_task/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/hashFile_lib.dir/fileInfo.cpp.o"
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hashFile_lib.dir/fileInfo.cpp.o -c "/home/artem/Рабочий стол/project/test_task/src/fileInfo.cpp"

src/CMakeFiles/hashFile_lib.dir/fileInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hashFile_lib.dir/fileInfo.cpp.i"
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/artem/Рабочий стол/project/test_task/src/fileInfo.cpp" > CMakeFiles/hashFile_lib.dir/fileInfo.cpp.i

src/CMakeFiles/hashFile_lib.dir/fileInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hashFile_lib.dir/fileInfo.cpp.s"
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/artem/Рабочий стол/project/test_task/src/fileInfo.cpp" -o CMakeFiles/hashFile_lib.dir/fileInfo.cpp.s

src/CMakeFiles/hashFile_lib.dir/hash.cpp.o: src/CMakeFiles/hashFile_lib.dir/flags.make
src/CMakeFiles/hashFile_lib.dir/hash.cpp.o: ../src/hash.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/artem/Рабочий стол/project/test_task/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/hashFile_lib.dir/hash.cpp.o"
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hashFile_lib.dir/hash.cpp.o -c "/home/artem/Рабочий стол/project/test_task/src/hash.cpp"

src/CMakeFiles/hashFile_lib.dir/hash.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hashFile_lib.dir/hash.cpp.i"
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/artem/Рабочий стол/project/test_task/src/hash.cpp" > CMakeFiles/hashFile_lib.dir/hash.cpp.i

src/CMakeFiles/hashFile_lib.dir/hash.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hashFile_lib.dir/hash.cpp.s"
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/artem/Рабочий стол/project/test_task/src/hash.cpp" -o CMakeFiles/hashFile_lib.dir/hash.cpp.s

src/CMakeFiles/hashFile_lib.dir/jsonReader.cpp.o: src/CMakeFiles/hashFile_lib.dir/flags.make
src/CMakeFiles/hashFile_lib.dir/jsonReader.cpp.o: ../src/jsonReader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/artem/Рабочий стол/project/test_task/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/hashFile_lib.dir/jsonReader.cpp.o"
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hashFile_lib.dir/jsonReader.cpp.o -c "/home/artem/Рабочий стол/project/test_task/src/jsonReader.cpp"

src/CMakeFiles/hashFile_lib.dir/jsonReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hashFile_lib.dir/jsonReader.cpp.i"
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/artem/Рабочий стол/project/test_task/src/jsonReader.cpp" > CMakeFiles/hashFile_lib.dir/jsonReader.cpp.i

src/CMakeFiles/hashFile_lib.dir/jsonReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hashFile_lib.dir/jsonReader.cpp.s"
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/artem/Рабочий стол/project/test_task/src/jsonReader.cpp" -o CMakeFiles/hashFile_lib.dir/jsonReader.cpp.s

src/CMakeFiles/hashFile_lib.dir/main.cpp.o: src/CMakeFiles/hashFile_lib.dir/flags.make
src/CMakeFiles/hashFile_lib.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/artem/Рабочий стол/project/test_task/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/hashFile_lib.dir/main.cpp.o"
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hashFile_lib.dir/main.cpp.o -c "/home/artem/Рабочий стол/project/test_task/src/main.cpp"

src/CMakeFiles/hashFile_lib.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hashFile_lib.dir/main.cpp.i"
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/artem/Рабочий стол/project/test_task/src/main.cpp" > CMakeFiles/hashFile_lib.dir/main.cpp.i

src/CMakeFiles/hashFile_lib.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hashFile_lib.dir/main.cpp.s"
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/artem/Рабочий стол/project/test_task/src/main.cpp" -o CMakeFiles/hashFile_lib.dir/main.cpp.s

src/CMakeFiles/hashFile_lib.dir/print.cpp.o: src/CMakeFiles/hashFile_lib.dir/flags.make
src/CMakeFiles/hashFile_lib.dir/print.cpp.o: ../src/print.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/artem/Рабочий стол/project/test_task/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/hashFile_lib.dir/print.cpp.o"
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hashFile_lib.dir/print.cpp.o -c "/home/artem/Рабочий стол/project/test_task/src/print.cpp"

src/CMakeFiles/hashFile_lib.dir/print.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hashFile_lib.dir/print.cpp.i"
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/artem/Рабочий стол/project/test_task/src/print.cpp" > CMakeFiles/hashFile_lib.dir/print.cpp.i

src/CMakeFiles/hashFile_lib.dir/print.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hashFile_lib.dir/print.cpp.s"
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/artem/Рабочий стол/project/test_task/src/print.cpp" -o CMakeFiles/hashFile_lib.dir/print.cpp.s

# Object files for target hashFile_lib
hashFile_lib_OBJECTS = \
"CMakeFiles/hashFile_lib.dir/error.cpp.o" \
"CMakeFiles/hashFile_lib.dir/fileInfo.cpp.o" \
"CMakeFiles/hashFile_lib.dir/hash.cpp.o" \
"CMakeFiles/hashFile_lib.dir/jsonReader.cpp.o" \
"CMakeFiles/hashFile_lib.dir/main.cpp.o" \
"CMakeFiles/hashFile_lib.dir/print.cpp.o"

# External object files for target hashFile_lib
hashFile_lib_EXTERNAL_OBJECTS =

src/libhashFile_lib.a: src/CMakeFiles/hashFile_lib.dir/error.cpp.o
src/libhashFile_lib.a: src/CMakeFiles/hashFile_lib.dir/fileInfo.cpp.o
src/libhashFile_lib.a: src/CMakeFiles/hashFile_lib.dir/hash.cpp.o
src/libhashFile_lib.a: src/CMakeFiles/hashFile_lib.dir/jsonReader.cpp.o
src/libhashFile_lib.a: src/CMakeFiles/hashFile_lib.dir/main.cpp.o
src/libhashFile_lib.a: src/CMakeFiles/hashFile_lib.dir/print.cpp.o
src/libhashFile_lib.a: src/CMakeFiles/hashFile_lib.dir/build.make
src/libhashFile_lib.a: src/CMakeFiles/hashFile_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/artem/Рабочий стол/project/test_task/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX static library libhashFile_lib.a"
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && $(CMAKE_COMMAND) -P CMakeFiles/hashFile_lib.dir/cmake_clean_target.cmake
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hashFile_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/hashFile_lib.dir/build: src/libhashFile_lib.a

.PHONY : src/CMakeFiles/hashFile_lib.dir/build

src/CMakeFiles/hashFile_lib.dir/clean:
	cd "/home/artem/Рабочий стол/project/test_task/build/src" && $(CMAKE_COMMAND) -P CMakeFiles/hashFile_lib.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/hashFile_lib.dir/clean

src/CMakeFiles/hashFile_lib.dir/depend:
	cd "/home/artem/Рабочий стол/project/test_task/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/artem/Рабочий стол/project/test_task" "/home/artem/Рабочий стол/project/test_task/src" "/home/artem/Рабочий стол/project/test_task/build" "/home/artem/Рабочий стол/project/test_task/build/src" "/home/artem/Рабочий стол/project/test_task/build/src/CMakeFiles/hashFile_lib.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : src/CMakeFiles/hashFile_lib.dir/depend

