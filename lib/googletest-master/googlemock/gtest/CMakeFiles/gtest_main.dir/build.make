# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.8.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.8.1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL"

# Include any dependencies generated for this target.
include lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/depend.make

# Include the progress variables for this target.
include lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/progress.make

# Include the compile flags for this target's objects.
include lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/flags.make

lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.o: lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/flags.make
lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.o: lib/googletest-master/googletest/src/gtest_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.o"
	cd "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL/lib/googletest-master/googlemock/gtest" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gtest_main.dir/src/gtest_main.o -c "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL/lib/googletest-master/googletest/src/gtest_main.cc"

lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest_main.dir/src/gtest_main.i"
	cd "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL/lib/googletest-master/googlemock/gtest" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL/lib/googletest-master/googletest/src/gtest_main.cc" > CMakeFiles/gtest_main.dir/src/gtest_main.i

lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest_main.dir/src/gtest_main.s"
	cd "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL/lib/googletest-master/googlemock/gtest" && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL/lib/googletest-master/googletest/src/gtest_main.cc" -o CMakeFiles/gtest_main.dir/src/gtest_main.s

lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.o.requires:

.PHONY : lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.o.requires

lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.o.provides: lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.o.requires
	$(MAKE) -f lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/build.make lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.o.provides.build
.PHONY : lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.o.provides

lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.o.provides.build: lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.o


# Object files for target gtest_main
gtest_main_OBJECTS = \
"CMakeFiles/gtest_main.dir/src/gtest_main.o"

# External object files for target gtest_main
gtest_main_EXTERNAL_OBJECTS =

lib/googletest-master/googlemock/gtest/libgtest_main.dylib: lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.o
lib/googletest-master/googlemock/gtest/libgtest_main.dylib: lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/build.make
lib/googletest-master/googlemock/gtest/libgtest_main.dylib: lib/googletest-master/googlemock/gtest/libgtest.dylib
lib/googletest-master/googlemock/gtest/libgtest_main.dylib: lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libgtest_main.dylib"
	cd "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL/lib/googletest-master/googlemock/gtest" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/build: lib/googletest-master/googlemock/gtest/libgtest_main.dylib

.PHONY : lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/build

lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/requires: lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/src/gtest_main.o.requires

.PHONY : lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/requires

lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/clean:
	cd "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL/lib/googletest-master/googlemock/gtest" && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main.dir/cmake_clean.cmake
.PHONY : lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/clean

lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/depend:
	cd "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL" "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL/lib/googletest-master/googletest" "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL" "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL/lib/googletest-master/googlemock/gtest" "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL/lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/depend

