# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement/build

# Include any dependencies generated for this target.
include CMakeFiles/LogisticsAssetManagement.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/LogisticsAssetManagement.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/LogisticsAssetManagement.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LogisticsAssetManagement.dir/flags.make

CMakeFiles/LogisticsAssetManagement.dir/main.cpp.o: CMakeFiles/LogisticsAssetManagement.dir/flags.make
CMakeFiles/LogisticsAssetManagement.dir/main.cpp.o: /Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement/main.cpp
CMakeFiles/LogisticsAssetManagement.dir/main.cpp.o: CMakeFiles/LogisticsAssetManagement.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LogisticsAssetManagement.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LogisticsAssetManagement.dir/main.cpp.o -MF CMakeFiles/LogisticsAssetManagement.dir/main.cpp.o.d -o CMakeFiles/LogisticsAssetManagement.dir/main.cpp.o -c /Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement/main.cpp

CMakeFiles/LogisticsAssetManagement.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LogisticsAssetManagement.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement/main.cpp > CMakeFiles/LogisticsAssetManagement.dir/main.cpp.i

CMakeFiles/LogisticsAssetManagement.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LogisticsAssetManagement.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement/main.cpp -o CMakeFiles/LogisticsAssetManagement.dir/main.cpp.s

CMakeFiles/LogisticsAssetManagement.dir/AssetManager.cpp.o: CMakeFiles/LogisticsAssetManagement.dir/flags.make
CMakeFiles/LogisticsAssetManagement.dir/AssetManager.cpp.o: /Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement/AssetManager.cpp
CMakeFiles/LogisticsAssetManagement.dir/AssetManager.cpp.o: CMakeFiles/LogisticsAssetManagement.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LogisticsAssetManagement.dir/AssetManager.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/LogisticsAssetManagement.dir/AssetManager.cpp.o -MF CMakeFiles/LogisticsAssetManagement.dir/AssetManager.cpp.o.d -o CMakeFiles/LogisticsAssetManagement.dir/AssetManager.cpp.o -c /Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement/AssetManager.cpp

CMakeFiles/LogisticsAssetManagement.dir/AssetManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/LogisticsAssetManagement.dir/AssetManager.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement/AssetManager.cpp > CMakeFiles/LogisticsAssetManagement.dir/AssetManager.cpp.i

CMakeFiles/LogisticsAssetManagement.dir/AssetManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/LogisticsAssetManagement.dir/AssetManager.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement/AssetManager.cpp -o CMakeFiles/LogisticsAssetManagement.dir/AssetManager.cpp.s

# Object files for target LogisticsAssetManagement
LogisticsAssetManagement_OBJECTS = \
"CMakeFiles/LogisticsAssetManagement.dir/main.cpp.o" \
"CMakeFiles/LogisticsAssetManagement.dir/AssetManager.cpp.o"

# External object files for target LogisticsAssetManagement
LogisticsAssetManagement_EXTERNAL_OBJECTS =

LogisticsAssetManagement: CMakeFiles/LogisticsAssetManagement.dir/main.cpp.o
LogisticsAssetManagement: CMakeFiles/LogisticsAssetManagement.dir/AssetManager.cpp.o
LogisticsAssetManagement: CMakeFiles/LogisticsAssetManagement.dir/build.make
LogisticsAssetManagement: CMakeFiles/LogisticsAssetManagement.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable LogisticsAssetManagement"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LogisticsAssetManagement.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LogisticsAssetManagement.dir/build: LogisticsAssetManagement
.PHONY : CMakeFiles/LogisticsAssetManagement.dir/build

CMakeFiles/LogisticsAssetManagement.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LogisticsAssetManagement.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LogisticsAssetManagement.dir/clean

CMakeFiles/LogisticsAssetManagement.dir/depend:
	cd /Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement /Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement /Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement/build /Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement/build /Users/ada/Downloads/LogisticsBackend/LogisticsAssetManagement/build/CMakeFiles/LogisticsAssetManagement.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/LogisticsAssetManagement.dir/depend
