# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/local/Cellar/cmake/3.8.1/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/local/Cellar/cmake/3.8.1/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local/fast

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/local/Cellar/cmake/3.8.1/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/local/Cellar/cmake/3.8.1/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/local/Cellar/cmake/3.8.1/bin/cmake -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/local/Cellar/cmake/3.8.1/bin/cmake -P cmake_install.cmake
.PHONY : install/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"Unspecified\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components

.PHONY : list_install_components/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/local/Cellar/cmake/3.8.1/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/local/Cellar/cmake/3.8.1/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL/CMakeFiles" "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL/CMakeFiles/progress.marks"
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/DSA/MultiMapSLL/CMakeFiles" 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named Multimap

# Build rule for target.
Multimap: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 Multimap
.PHONY : Multimap

# fast build rule for target.
Multimap/fast:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/build
.PHONY : Multimap/fast

#=============================================================================
# Target rules for targets named gmock

# Build rule for target.
gmock: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 gmock
.PHONY : gmock

# fast build rule for target.
gmock/fast:
	$(MAKE) -f lib/googletest-master/googlemock/CMakeFiles/gmock.dir/build.make lib/googletest-master/googlemock/CMakeFiles/gmock.dir/build
.PHONY : gmock/fast

#=============================================================================
# Target rules for targets named gmock_main

# Build rule for target.
gmock_main: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 gmock_main
.PHONY : gmock_main

# fast build rule for target.
gmock_main/fast:
	$(MAKE) -f lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/build.make lib/googletest-master/googlemock/CMakeFiles/gmock_main.dir/build
.PHONY : gmock_main/fast

#=============================================================================
# Target rules for targets named gtest_main

# Build rule for target.
gtest_main: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 gtest_main
.PHONY : gtest_main

# fast build rule for target.
gtest_main/fast:
	$(MAKE) -f lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/build.make lib/googletest-master/googlemock/gtest/CMakeFiles/gtest_main.dir/build
.PHONY : gtest_main/fast

#=============================================================================
# Target rules for targets named gtest

# Build rule for target.
gtest: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 gtest
.PHONY : gtest

# fast build rule for target.
gtest/fast:
	$(MAKE) -f lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/build.make lib/googletest-master/googlemock/gtest/CMakeFiles/gtest.dir/build
.PHONY : gtest/fast

# target to build an object file
Entities/Multimap.o:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/Entities/Multimap.o
.PHONY : Entities/Multimap.o

# target to preprocess a source file
Entities/Multimap.i:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/Entities/Multimap.i
.PHONY : Entities/Multimap.i

# target to generate assembly for a file
Entities/Multimap.s:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/Entities/Multimap.s
.PHONY : Entities/Multimap.s

# target to build an object file
Repository/Repository.o:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/Repository/Repository.o
.PHONY : Repository/Repository.o

# target to preprocess a source file
Repository/Repository.i:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/Repository/Repository.i
.PHONY : Repository/Repository.i

# target to generate assembly for a file
Repository/Repository.s:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/Repository/Repository.s
.PHONY : Repository/Repository.s

# target to build an object file
UI/Console.o:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/UI/Console.o
.PHONY : UI/Console.o

# target to preprocess a source file
UI/Console.i:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/UI/Console.i
.PHONY : UI/Console.i

# target to generate assembly for a file
UI/Console.s:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/UI/Console.s
.PHONY : UI/Console.s

# target to build an object file
main.o:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/main.o
.PHONY : main.o

# target to preprocess a source file
main.i:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/main.i
.PHONY : main.i

# target to generate assembly for a file
main.s:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/main.s
.PHONY : main.s

# target to build an object file
tests/test_controller.o:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/tests/test_controller.o
.PHONY : tests/test_controller.o

# target to preprocess a source file
tests/test_controller.i:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/tests/test_controller.i
.PHONY : tests/test_controller.i

# target to generate assembly for a file
tests/test_controller.s:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/tests/test_controller.s
.PHONY : tests/test_controller.s

# target to build an object file
tests/test_date.o:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/tests/test_date.o
.PHONY : tests/test_date.o

# target to preprocess a source file
tests/test_date.i:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/tests/test_date.i
.PHONY : tests/test_date.i

# target to generate assembly for a file
tests/test_date.s:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/tests/test_date.s
.PHONY : tests/test_date.s

# target to build an object file
tests/test_multimap.o:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/tests/test_multimap.o
.PHONY : tests/test_multimap.o

# target to preprocess a source file
tests/test_multimap.i:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/tests/test_multimap.i
.PHONY : tests/test_multimap.i

# target to generate assembly for a file
tests/test_multimap.s:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/tests/test_multimap.s
.PHONY : tests/test_multimap.s

# target to build an object file
tests/test_node.o:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/tests/test_node.o
.PHONY : tests/test_node.o

# target to preprocess a source file
tests/test_node.i:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/tests/test_node.i
.PHONY : tests/test_node.i

# target to generate assembly for a file
tests/test_node.s:
	$(MAKE) -f CMakeFiles/Multimap.dir/build.make CMakeFiles/Multimap.dir/tests/test_node.s
.PHONY : tests/test_node.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... install/local"
	@echo "... install/strip"
	@echo "... install"
	@echo "... list_install_components"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... Multimap"
	@echo "... gmock"
	@echo "... gmock_main"
	@echo "... gtest_main"
	@echo "... gtest"
	@echo "... Entities/Multimap.o"
	@echo "... Entities/Multimap.i"
	@echo "... Entities/Multimap.s"
	@echo "... Repository/Repository.o"
	@echo "... Repository/Repository.i"
	@echo "... Repository/Repository.s"
	@echo "... UI/Console.o"
	@echo "... UI/Console.i"
	@echo "... UI/Console.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... tests/test_controller.o"
	@echo "... tests/test_controller.i"
	@echo "... tests/test_controller.s"
	@echo "... tests/test_date.o"
	@echo "... tests/test_date.i"
	@echo "... tests/test_date.s"
	@echo "... tests/test_multimap.o"
	@echo "... tests/test_multimap.i"
	@echo "... tests/test_multimap.s"
	@echo "... tests/test_node.o"
	@echo "... tests/test_node.i"
	@echo "... tests/test_node.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

