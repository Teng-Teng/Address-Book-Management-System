# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/teng/Documents/GitHub/Address-Book-Management-System

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/teng/Documents/GitHub/Address-Book-Management-System/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Address_Book_Management_System.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Address_Book_Management_System.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Address_Book_Management_System.dir/flags.make

CMakeFiles/Address_Book_Management_System.dir/main.cpp.o: CMakeFiles/Address_Book_Management_System.dir/flags.make
CMakeFiles/Address_Book_Management_System.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/teng/Documents/GitHub/Address-Book-Management-System/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Address_Book_Management_System.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Address_Book_Management_System.dir/main.cpp.o -c /Users/teng/Documents/GitHub/Address-Book-Management-System/main.cpp

CMakeFiles/Address_Book_Management_System.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Address_Book_Management_System.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/teng/Documents/GitHub/Address-Book-Management-System/main.cpp > CMakeFiles/Address_Book_Management_System.dir/main.cpp.i

CMakeFiles/Address_Book_Management_System.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Address_Book_Management_System.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/teng/Documents/GitHub/Address-Book-Management-System/main.cpp -o CMakeFiles/Address_Book_Management_System.dir/main.cpp.s

# Object files for target Address_Book_Management_System
Address_Book_Management_System_OBJECTS = \
"CMakeFiles/Address_Book_Management_System.dir/main.cpp.o"

# External object files for target Address_Book_Management_System
Address_Book_Management_System_EXTERNAL_OBJECTS =

Address_Book_Management_System: CMakeFiles/Address_Book_Management_System.dir/main.cpp.o
Address_Book_Management_System: CMakeFiles/Address_Book_Management_System.dir/build.make
Address_Book_Management_System: CMakeFiles/Address_Book_Management_System.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/teng/Documents/GitHub/Address-Book-Management-System/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Address_Book_Management_System"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Address_Book_Management_System.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Address_Book_Management_System.dir/build: Address_Book_Management_System

.PHONY : CMakeFiles/Address_Book_Management_System.dir/build

CMakeFiles/Address_Book_Management_System.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Address_Book_Management_System.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Address_Book_Management_System.dir/clean

CMakeFiles/Address_Book_Management_System.dir/depend:
	cd /Users/teng/Documents/GitHub/Address-Book-Management-System/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/teng/Documents/GitHub/Address-Book-Management-System /Users/teng/Documents/GitHub/Address-Book-Management-System /Users/teng/Documents/GitHub/Address-Book-Management-System/cmake-build-debug /Users/teng/Documents/GitHub/Address-Book-Management-System/cmake-build-debug /Users/teng/Documents/GitHub/Address-Book-Management-System/cmake-build-debug/CMakeFiles/Address_Book_Management_System.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Address_Book_Management_System.dir/depend

