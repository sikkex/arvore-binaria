# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_SOURCE_DIR = /Users/danielmattos/Documents/Desenvolvedor/C/revisão-geral/arvore

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/danielmattos/Documents/Desenvolvedor/C/revisão-geral/arvore/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/arvore.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/arvore.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/arvore.dir/flags.make

CMakeFiles/arvore.dir/main.c.o: CMakeFiles/arvore.dir/flags.make
CMakeFiles/arvore.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/danielmattos/Documents/Desenvolvedor/C/revisão-geral/arvore/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/arvore.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/arvore.dir/main.c.o   -c /Users/danielmattos/Documents/Desenvolvedor/C/revisão-geral/arvore/main.c

CMakeFiles/arvore.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/arvore.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/danielmattos/Documents/Desenvolvedor/C/revisão-geral/arvore/main.c > CMakeFiles/arvore.dir/main.c.i

CMakeFiles/arvore.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/arvore.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/danielmattos/Documents/Desenvolvedor/C/revisão-geral/arvore/main.c -o CMakeFiles/arvore.dir/main.c.s

# Object files for target arvore
arvore_OBJECTS = \
"CMakeFiles/arvore.dir/main.c.o"

# External object files for target arvore
arvore_EXTERNAL_OBJECTS =

arvore: CMakeFiles/arvore.dir/main.c.o
arvore: CMakeFiles/arvore.dir/build.make
arvore: CMakeFiles/arvore.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/danielmattos/Documents/Desenvolvedor/C/revisão-geral/arvore/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable arvore"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/arvore.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/arvore.dir/build: arvore

.PHONY : CMakeFiles/arvore.dir/build

CMakeFiles/arvore.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/arvore.dir/cmake_clean.cmake
.PHONY : CMakeFiles/arvore.dir/clean

CMakeFiles/arvore.dir/depend:
	cd /Users/danielmattos/Documents/Desenvolvedor/C/revisão-geral/arvore/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/danielmattos/Documents/Desenvolvedor/C/revisão-geral/arvore /Users/danielmattos/Documents/Desenvolvedor/C/revisão-geral/arvore /Users/danielmattos/Documents/Desenvolvedor/C/revisão-geral/arvore/cmake-build-debug /Users/danielmattos/Documents/Desenvolvedor/C/revisão-geral/arvore/cmake-build-debug /Users/danielmattos/Documents/Desenvolvedor/C/revisão-geral/arvore/cmake-build-debug/CMakeFiles/arvore.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/arvore.dir/depend

