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
CMAKE_SOURCE_DIR = "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL"

# Include any dependencies generated for this target.
include CMakeFiles/Multimap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Multimap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Multimap.dir/flags.make

CMakeFiles/Multimap.dir/main.o: CMakeFiles/Multimap.dir/flags.make
CMakeFiles/Multimap.dir/main.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Multimap.dir/main.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multimap.dir/main.o -c "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/main.cpp"

CMakeFiles/Multimap.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multimap.dir/main.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/main.cpp" > CMakeFiles/Multimap.dir/main.i

CMakeFiles/Multimap.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multimap.dir/main.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/main.cpp" -o CMakeFiles/Multimap.dir/main.s

CMakeFiles/Multimap.dir/main.o.requires:

.PHONY : CMakeFiles/Multimap.dir/main.o.requires

CMakeFiles/Multimap.dir/main.o.provides: CMakeFiles/Multimap.dir/main.o.requires
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/main.o.provides.build
.PHONY : CMakeFiles/Multimap.dir/main.o.provides

CMakeFiles/Multimap.dir/main.o.provides.build: CMakeFiles/Multimap.dir/main.o


CMakeFiles/Multimap.dir/Entities/Multimap.o: CMakeFiles/Multimap.dir/flags.make
CMakeFiles/Multimap.dir/Entities/Multimap.o: Entities/Multimap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Multimap.dir/Entities/Multimap.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multimap.dir/Entities/Multimap.o -c "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/Entities/Multimap.cpp"

CMakeFiles/Multimap.dir/Entities/Multimap.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multimap.dir/Entities/Multimap.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/Entities/Multimap.cpp" > CMakeFiles/Multimap.dir/Entities/Multimap.i

CMakeFiles/Multimap.dir/Entities/Multimap.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multimap.dir/Entities/Multimap.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/Entities/Multimap.cpp" -o CMakeFiles/Multimap.dir/Entities/Multimap.s

CMakeFiles/Multimap.dir/Entities/Multimap.o.requires:

.PHONY : CMakeFiles/Multimap.dir/Entities/Multimap.o.requires

CMakeFiles/Multimap.dir/Entities/Multimap.o.provides: CMakeFiles/Multimap.dir/Entities/Multimap.o.requires
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/Entities/Multimap.o.provides.build
.PHONY : CMakeFiles/Multimap.dir/Entities/Multimap.o.provides

CMakeFiles/Multimap.dir/Entities/Multimap.o.provides.build: CMakeFiles/Multimap.dir/Entities/Multimap.o


CMakeFiles/Multimap.dir/Repository/Repository.o: CMakeFiles/Multimap.dir/flags.make
CMakeFiles/Multimap.dir/Repository/Repository.o: Repository/Repository.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Multimap.dir/Repository/Repository.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multimap.dir/Repository/Repository.o -c "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/Repository/Repository.cpp"

CMakeFiles/Multimap.dir/Repository/Repository.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multimap.dir/Repository/Repository.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/Repository/Repository.cpp" > CMakeFiles/Multimap.dir/Repository/Repository.i

CMakeFiles/Multimap.dir/Repository/Repository.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multimap.dir/Repository/Repository.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/Repository/Repository.cpp" -o CMakeFiles/Multimap.dir/Repository/Repository.s

CMakeFiles/Multimap.dir/Repository/Repository.o.requires:

.PHONY : CMakeFiles/Multimap.dir/Repository/Repository.o.requires

CMakeFiles/Multimap.dir/Repository/Repository.o.provides: CMakeFiles/Multimap.dir/Repository/Repository.o.requires
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/Repository/Repository.o.provides.build
.PHONY : CMakeFiles/Multimap.dir/Repository/Repository.o.provides

CMakeFiles/Multimap.dir/Repository/Repository.o.provides.build: CMakeFiles/Multimap.dir/Repository/Repository.o


CMakeFiles/Multimap.dir/UI/Console.o: CMakeFiles/Multimap.dir/flags.make
CMakeFiles/Multimap.dir/UI/Console.o: UI/Console.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Multimap.dir/UI/Console.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multimap.dir/UI/Console.o -c "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/UI/Console.cpp"

CMakeFiles/Multimap.dir/UI/Console.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multimap.dir/UI/Console.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/UI/Console.cpp" > CMakeFiles/Multimap.dir/UI/Console.i

CMakeFiles/Multimap.dir/UI/Console.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multimap.dir/UI/Console.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/UI/Console.cpp" -o CMakeFiles/Multimap.dir/UI/Console.s

CMakeFiles/Multimap.dir/UI/Console.o.requires:

.PHONY : CMakeFiles/Multimap.dir/UI/Console.o.requires

CMakeFiles/Multimap.dir/UI/Console.o.provides: CMakeFiles/Multimap.dir/UI/Console.o.requires
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/UI/Console.o.provides.build
.PHONY : CMakeFiles/Multimap.dir/UI/Console.o.provides

CMakeFiles/Multimap.dir/UI/Console.o.provides.build: CMakeFiles/Multimap.dir/UI/Console.o


CMakeFiles/Multimap.dir/tests/test_node.o: CMakeFiles/Multimap.dir/flags.make
CMakeFiles/Multimap.dir/tests/test_node.o: tests/test_node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Multimap.dir/tests/test_node.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multimap.dir/tests/test_node.o -c "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/tests/test_node.cpp"

CMakeFiles/Multimap.dir/tests/test_node.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multimap.dir/tests/test_node.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/tests/test_node.cpp" > CMakeFiles/Multimap.dir/tests/test_node.i

CMakeFiles/Multimap.dir/tests/test_node.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multimap.dir/tests/test_node.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/tests/test_node.cpp" -o CMakeFiles/Multimap.dir/tests/test_node.s

CMakeFiles/Multimap.dir/tests/test_node.o.requires:

.PHONY : CMakeFiles/Multimap.dir/tests/test_node.o.requires

CMakeFiles/Multimap.dir/tests/test_node.o.provides: CMakeFiles/Multimap.dir/tests/test_node.o.requires
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/tests/test_node.o.provides.build
.PHONY : CMakeFiles/Multimap.dir/tests/test_node.o.provides

CMakeFiles/Multimap.dir/tests/test_node.o.provides.build: CMakeFiles/Multimap.dir/tests/test_node.o


CMakeFiles/Multimap.dir/tests/test_multimap.o: CMakeFiles/Multimap.dir/flags.make
CMakeFiles/Multimap.dir/tests/test_multimap.o: tests/test_multimap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Multimap.dir/tests/test_multimap.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multimap.dir/tests/test_multimap.o -c "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/tests/test_multimap.cpp"

CMakeFiles/Multimap.dir/tests/test_multimap.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multimap.dir/tests/test_multimap.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/tests/test_multimap.cpp" > CMakeFiles/Multimap.dir/tests/test_multimap.i

CMakeFiles/Multimap.dir/tests/test_multimap.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multimap.dir/tests/test_multimap.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/tests/test_multimap.cpp" -o CMakeFiles/Multimap.dir/tests/test_multimap.s

CMakeFiles/Multimap.dir/tests/test_multimap.o.requires:

.PHONY : CMakeFiles/Multimap.dir/tests/test_multimap.o.requires

CMakeFiles/Multimap.dir/tests/test_multimap.o.provides: CMakeFiles/Multimap.dir/tests/test_multimap.o.requires
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/tests/test_multimap.o.provides.build
.PHONY : CMakeFiles/Multimap.dir/tests/test_multimap.o.provides

CMakeFiles/Multimap.dir/tests/test_multimap.o.provides.build: CMakeFiles/Multimap.dir/tests/test_multimap.o


CMakeFiles/Multimap.dir/tests/test_date.o: CMakeFiles/Multimap.dir/flags.make
CMakeFiles/Multimap.dir/tests/test_date.o: tests/test_date.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Multimap.dir/tests/test_date.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multimap.dir/tests/test_date.o -c "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/tests/test_date.cpp"

CMakeFiles/Multimap.dir/tests/test_date.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multimap.dir/tests/test_date.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/tests/test_date.cpp" > CMakeFiles/Multimap.dir/tests/test_date.i

CMakeFiles/Multimap.dir/tests/test_date.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multimap.dir/tests/test_date.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/tests/test_date.cpp" -o CMakeFiles/Multimap.dir/tests/test_date.s

CMakeFiles/Multimap.dir/tests/test_date.o.requires:

.PHONY : CMakeFiles/Multimap.dir/tests/test_date.o.requires

CMakeFiles/Multimap.dir/tests/test_date.o.provides: CMakeFiles/Multimap.dir/tests/test_date.o.requires
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/tests/test_date.o.provides.build
.PHONY : CMakeFiles/Multimap.dir/tests/test_date.o.provides

CMakeFiles/Multimap.dir/tests/test_date.o.provides.build: CMakeFiles/Multimap.dir/tests/test_date.o


CMakeFiles/Multimap.dir/tests/test_controller.o: CMakeFiles/Multimap.dir/flags.make
CMakeFiles/Multimap.dir/tests/test_controller.o: tests/test_controller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Multimap.dir/tests/test_controller.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Multimap.dir/tests/test_controller.o -c "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/tests/test_controller.cpp"

CMakeFiles/Multimap.dir/tests/test_controller.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Multimap.dir/tests/test_controller.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/tests/test_controller.cpp" > CMakeFiles/Multimap.dir/tests/test_controller.i

CMakeFiles/Multimap.dir/tests/test_controller.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Multimap.dir/tests/test_controller.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/tests/test_controller.cpp" -o CMakeFiles/Multimap.dir/tests/test_controller.s

CMakeFiles/Multimap.dir/tests/test_controller.o.requires:

.PHONY : CMakeFiles/Multimap.dir/tests/test_controller.o.requires

CMakeFiles/Multimap.dir/tests/test_controller.o.provides: CMakeFiles/Multimap.dir/tests/test_controller.o.requires
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/tests/test_controller.o.provides.build
.PHONY : CMakeFiles/Multimap.dir/tests/test_controller.o.provides

CMakeFiles/Multimap.dir/tests/test_controller.o.provides.build: CMakeFiles/Multimap.dir/tests/test_controller.o


# Object files for target Multimap
Multimap_OBJECTS = \
"CMakeFiles/Multimap.dir/main.o" \
"CMakeFiles/Multimap.dir/Entities/Multimap.o" \
"CMakeFiles/Multimap.dir/Repository/Repository.o" \
"CMakeFiles/Multimap.dir/UI/Console.o" \
"CMakeFiles/Multimap.dir/tests/test_node.o" \
"CMakeFiles/Multimap.dir/tests/test_multimap.o" \
"CMakeFiles/Multimap.dir/tests/test_date.o" \
"CMakeFiles/Multimap.dir/tests/test_controller.o"

# External object files for target Multimap
Multimap_EXTERNAL_OBJECTS =

Multimap: CMakeFiles/Multimap.dir/main.o
Multimap: CMakeFiles/Multimap.dir/Entities/Multimap.o
Multimap: CMakeFiles/Multimap.dir/Repository/Repository.o
Multimap: CMakeFiles/Multimap.dir/UI/Console.o
Multimap: CMakeFiles/Multimap.dir/tests/test_node.o
Multimap: CMakeFiles/Multimap.dir/tests/test_multimap.o
Multimap: CMakeFiles/Multimap.dir/tests/test_date.o
Multimap: CMakeFiles/Multimap.dir/tests/test_controller.o
Multimap: CMakeFiles/Multimap.dir/build.make
Multimap: lib/googletest-master/googlemock/gtest/libgtest_main.dylib
Multimap: lib/googletest-master/googlemock/gtest/libgtest.dylib
Multimap: CMakeFiles/Multimap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable Multimap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Multimap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Multimap.dir/build: Multimap

.PHONY : CMakeFiles/Multimap.dir/build

CMakeFiles/Multimap.dir/requires: CMakeFiles/Multimap.dir/main.o.requires
CMakeFiles/Multimap.dir/requires: CMakeFiles/Multimap.dir/Entities/Multimap.o.requires
CMakeFiles/Multimap.dir/requires: CMakeFiles/Multimap.dir/Repository/Repository.o.requires
CMakeFiles/Multimap.dir/requires: CMakeFiles/Multimap.dir/UI/Console.o.requires
CMakeFiles/Multimap.dir/requires: CMakeFiles/Multimap.dir/tests/test_node.o.requires
CMakeFiles/Multimap.dir/requires: CMakeFiles/Multimap.dir/tests/test_multimap.o.requires
CMakeFiles/Multimap.dir/requires: CMakeFiles/Multimap.dir/tests/test_date.o.requires
CMakeFiles/Multimap.dir/requires: CMakeFiles/Multimap.dir/tests/test_controller.o.requires

.PHONY : CMakeFiles/Multimap.dir/requires

CMakeFiles/Multimap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Multimap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Multimap.dir/clean

CMakeFiles/Multimap.dir/depend:
	cd "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL" "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL" "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL" "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL" "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/dsa/MultiMapSLL/CMakeFiles/Multimap.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Multimap.dir/depend

