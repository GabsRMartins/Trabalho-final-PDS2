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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/build"

# Include any dependencies generated for this target.
include CMakeFiles/test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test.dir/flags.make

CMakeFiles/test.dir/src/mapa-cpp/Mapa.cpp.o: CMakeFiles/test.dir/flags.make
CMakeFiles/test.dir/src/mapa-cpp/Mapa.cpp.o: /mnt/d/Trabalho\ Final\ PDS\ 2/Trabalho-final-PDS2/src/mapa-cpp/Mapa.cpp
CMakeFiles/test.dir/src/mapa-cpp/Mapa.cpp.o: CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test.dir/src/mapa-cpp/Mapa.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test.dir/src/mapa-cpp/Mapa.cpp.o -MF CMakeFiles/test.dir/src/mapa-cpp/Mapa.cpp.o.d -o CMakeFiles/test.dir/src/mapa-cpp/Mapa.cpp.o -c "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/mapa-cpp/Mapa.cpp"

CMakeFiles/test.dir/src/mapa-cpp/Mapa.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test.dir/src/mapa-cpp/Mapa.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/mapa-cpp/Mapa.cpp" > CMakeFiles/test.dir/src/mapa-cpp/Mapa.cpp.i

CMakeFiles/test.dir/src/mapa-cpp/Mapa.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test.dir/src/mapa-cpp/Mapa.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/mapa-cpp/Mapa.cpp" -o CMakeFiles/test.dir/src/mapa-cpp/Mapa.cpp.s

CMakeFiles/test.dir/src/mapa-cpp/MapaPadrao.cpp.o: CMakeFiles/test.dir/flags.make
CMakeFiles/test.dir/src/mapa-cpp/MapaPadrao.cpp.o: /mnt/d/Trabalho\ Final\ PDS\ 2/Trabalho-final-PDS2/src/mapa-cpp/MapaPadrao.cpp
CMakeFiles/test.dir/src/mapa-cpp/MapaPadrao.cpp.o: CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test.dir/src/mapa-cpp/MapaPadrao.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test.dir/src/mapa-cpp/MapaPadrao.cpp.o -MF CMakeFiles/test.dir/src/mapa-cpp/MapaPadrao.cpp.o.d -o CMakeFiles/test.dir/src/mapa-cpp/MapaPadrao.cpp.o -c "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/mapa-cpp/MapaPadrao.cpp"

CMakeFiles/test.dir/src/mapa-cpp/MapaPadrao.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test.dir/src/mapa-cpp/MapaPadrao.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/mapa-cpp/MapaPadrao.cpp" > CMakeFiles/test.dir/src/mapa-cpp/MapaPadrao.cpp.i

CMakeFiles/test.dir/src/mapa-cpp/MapaPadrao.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test.dir/src/mapa-cpp/MapaPadrao.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/mapa-cpp/MapaPadrao.cpp" -o CMakeFiles/test.dir/src/mapa-cpp/MapaPadrao.cpp.s

CMakeFiles/test.dir/src/torre-cpp/Torre.cpp.o: CMakeFiles/test.dir/flags.make
CMakeFiles/test.dir/src/torre-cpp/Torre.cpp.o: /mnt/d/Trabalho\ Final\ PDS\ 2/Trabalho-final-PDS2/src/torre-cpp/Torre.cpp
CMakeFiles/test.dir/src/torre-cpp/Torre.cpp.o: CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/test.dir/src/torre-cpp/Torre.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test.dir/src/torre-cpp/Torre.cpp.o -MF CMakeFiles/test.dir/src/torre-cpp/Torre.cpp.o.d -o CMakeFiles/test.dir/src/torre-cpp/Torre.cpp.o -c "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/torre-cpp/Torre.cpp"

CMakeFiles/test.dir/src/torre-cpp/Torre.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test.dir/src/torre-cpp/Torre.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/torre-cpp/Torre.cpp" > CMakeFiles/test.dir/src/torre-cpp/Torre.cpp.i

CMakeFiles/test.dir/src/torre-cpp/Torre.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test.dir/src/torre-cpp/Torre.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/torre-cpp/Torre.cpp" -o CMakeFiles/test.dir/src/torre-cpp/Torre.cpp.s

CMakeFiles/test.dir/src/torre-cpp/TorreDeFogo.cpp.o: CMakeFiles/test.dir/flags.make
CMakeFiles/test.dir/src/torre-cpp/TorreDeFogo.cpp.o: /mnt/d/Trabalho\ Final\ PDS\ 2/Trabalho-final-PDS2/src/torre-cpp/TorreDeFogo.cpp
CMakeFiles/test.dir/src/torre-cpp/TorreDeFogo.cpp.o: CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/test.dir/src/torre-cpp/TorreDeFogo.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test.dir/src/torre-cpp/TorreDeFogo.cpp.o -MF CMakeFiles/test.dir/src/torre-cpp/TorreDeFogo.cpp.o.d -o CMakeFiles/test.dir/src/torre-cpp/TorreDeFogo.cpp.o -c "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/torre-cpp/TorreDeFogo.cpp"

CMakeFiles/test.dir/src/torre-cpp/TorreDeFogo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test.dir/src/torre-cpp/TorreDeFogo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/torre-cpp/TorreDeFogo.cpp" > CMakeFiles/test.dir/src/torre-cpp/TorreDeFogo.cpp.i

CMakeFiles/test.dir/src/torre-cpp/TorreDeFogo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test.dir/src/torre-cpp/TorreDeFogo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/torre-cpp/TorreDeFogo.cpp" -o CMakeFiles/test.dir/src/torre-cpp/TorreDeFogo.cpp.s

CMakeFiles/test.dir/src/inimigo-cpp/Esqueleto.cpp.o: CMakeFiles/test.dir/flags.make
CMakeFiles/test.dir/src/inimigo-cpp/Esqueleto.cpp.o: /mnt/d/Trabalho\ Final\ PDS\ 2/Trabalho-final-PDS2/src/inimigo-cpp/Esqueleto.cpp
CMakeFiles/test.dir/src/inimigo-cpp/Esqueleto.cpp.o: CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/test.dir/src/inimigo-cpp/Esqueleto.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test.dir/src/inimigo-cpp/Esqueleto.cpp.o -MF CMakeFiles/test.dir/src/inimigo-cpp/Esqueleto.cpp.o.d -o CMakeFiles/test.dir/src/inimigo-cpp/Esqueleto.cpp.o -c "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/inimigo-cpp/Esqueleto.cpp"

CMakeFiles/test.dir/src/inimigo-cpp/Esqueleto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test.dir/src/inimigo-cpp/Esqueleto.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/inimigo-cpp/Esqueleto.cpp" > CMakeFiles/test.dir/src/inimigo-cpp/Esqueleto.cpp.i

CMakeFiles/test.dir/src/inimigo-cpp/Esqueleto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test.dir/src/inimigo-cpp/Esqueleto.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/inimigo-cpp/Esqueleto.cpp" -o CMakeFiles/test.dir/src/inimigo-cpp/Esqueleto.cpp.s

CMakeFiles/test.dir/src/inimigo-cpp/Inimigo.cpp.o: CMakeFiles/test.dir/flags.make
CMakeFiles/test.dir/src/inimigo-cpp/Inimigo.cpp.o: /mnt/d/Trabalho\ Final\ PDS\ 2/Trabalho-final-PDS2/src/inimigo-cpp/Inimigo.cpp
CMakeFiles/test.dir/src/inimigo-cpp/Inimigo.cpp.o: CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/test.dir/src/inimigo-cpp/Inimigo.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test.dir/src/inimigo-cpp/Inimigo.cpp.o -MF CMakeFiles/test.dir/src/inimigo-cpp/Inimigo.cpp.o.d -o CMakeFiles/test.dir/src/inimigo-cpp/Inimigo.cpp.o -c "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/inimigo-cpp/Inimigo.cpp"

CMakeFiles/test.dir/src/inimigo-cpp/Inimigo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test.dir/src/inimigo-cpp/Inimigo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/inimigo-cpp/Inimigo.cpp" > CMakeFiles/test.dir/src/inimigo-cpp/Inimigo.cpp.i

CMakeFiles/test.dir/src/inimigo-cpp/Inimigo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test.dir/src/inimigo-cpp/Inimigo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/inimigo-cpp/Inimigo.cpp" -o CMakeFiles/test.dir/src/inimigo-cpp/Inimigo.cpp.s

CMakeFiles/test.dir/src/estrutura-cpp/Arvore.cpp.o: CMakeFiles/test.dir/flags.make
CMakeFiles/test.dir/src/estrutura-cpp/Arvore.cpp.o: /mnt/d/Trabalho\ Final\ PDS\ 2/Trabalho-final-PDS2/src/estrutura-cpp/Arvore.cpp
CMakeFiles/test.dir/src/estrutura-cpp/Arvore.cpp.o: CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/test.dir/src/estrutura-cpp/Arvore.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test.dir/src/estrutura-cpp/Arvore.cpp.o -MF CMakeFiles/test.dir/src/estrutura-cpp/Arvore.cpp.o.d -o CMakeFiles/test.dir/src/estrutura-cpp/Arvore.cpp.o -c "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/estrutura-cpp/Arvore.cpp"

CMakeFiles/test.dir/src/estrutura-cpp/Arvore.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test.dir/src/estrutura-cpp/Arvore.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/estrutura-cpp/Arvore.cpp" > CMakeFiles/test.dir/src/estrutura-cpp/Arvore.cpp.i

CMakeFiles/test.dir/src/estrutura-cpp/Arvore.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test.dir/src/estrutura-cpp/Arvore.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/estrutura-cpp/Arvore.cpp" -o CMakeFiles/test.dir/src/estrutura-cpp/Arvore.cpp.s

CMakeFiles/test.dir/src/estrutura-cpp/Estrutura.cpp.o: CMakeFiles/test.dir/flags.make
CMakeFiles/test.dir/src/estrutura-cpp/Estrutura.cpp.o: /mnt/d/Trabalho\ Final\ PDS\ 2/Trabalho-final-PDS2/src/estrutura-cpp/Estrutura.cpp
CMakeFiles/test.dir/src/estrutura-cpp/Estrutura.cpp.o: CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/test.dir/src/estrutura-cpp/Estrutura.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test.dir/src/estrutura-cpp/Estrutura.cpp.o -MF CMakeFiles/test.dir/src/estrutura-cpp/Estrutura.cpp.o.d -o CMakeFiles/test.dir/src/estrutura-cpp/Estrutura.cpp.o -c "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/estrutura-cpp/Estrutura.cpp"

CMakeFiles/test.dir/src/estrutura-cpp/Estrutura.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test.dir/src/estrutura-cpp/Estrutura.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/estrutura-cpp/Estrutura.cpp" > CMakeFiles/test.dir/src/estrutura-cpp/Estrutura.cpp.i

CMakeFiles/test.dir/src/estrutura-cpp/Estrutura.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test.dir/src/estrutura-cpp/Estrutura.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/estrutura-cpp/Estrutura.cpp" -o CMakeFiles/test.dir/src/estrutura-cpp/Estrutura.cpp.s

CMakeFiles/test.dir/src/estrutura-cpp/Parede.cpp.o: CMakeFiles/test.dir/flags.make
CMakeFiles/test.dir/src/estrutura-cpp/Parede.cpp.o: /mnt/d/Trabalho\ Final\ PDS\ 2/Trabalho-final-PDS2/src/estrutura-cpp/Parede.cpp
CMakeFiles/test.dir/src/estrutura-cpp/Parede.cpp.o: CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/test.dir/src/estrutura-cpp/Parede.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test.dir/src/estrutura-cpp/Parede.cpp.o -MF CMakeFiles/test.dir/src/estrutura-cpp/Parede.cpp.o.d -o CMakeFiles/test.dir/src/estrutura-cpp/Parede.cpp.o -c "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/estrutura-cpp/Parede.cpp"

CMakeFiles/test.dir/src/estrutura-cpp/Parede.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test.dir/src/estrutura-cpp/Parede.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/estrutura-cpp/Parede.cpp" > CMakeFiles/test.dir/src/estrutura-cpp/Parede.cpp.i

CMakeFiles/test.dir/src/estrutura-cpp/Parede.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test.dir/src/estrutura-cpp/Parede.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/estrutura-cpp/Parede.cpp" -o CMakeFiles/test.dir/src/estrutura-cpp/Parede.cpp.s

CMakeFiles/test.dir/src/simulador-cpp/Simulador.cpp.o: CMakeFiles/test.dir/flags.make
CMakeFiles/test.dir/src/simulador-cpp/Simulador.cpp.o: /mnt/d/Trabalho\ Final\ PDS\ 2/Trabalho-final-PDS2/src/simulador-cpp/Simulador.cpp
CMakeFiles/test.dir/src/simulador-cpp/Simulador.cpp.o: CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/test.dir/src/simulador-cpp/Simulador.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test.dir/src/simulador-cpp/Simulador.cpp.o -MF CMakeFiles/test.dir/src/simulador-cpp/Simulador.cpp.o.d -o CMakeFiles/test.dir/src/simulador-cpp/Simulador.cpp.o -c "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/simulador-cpp/Simulador.cpp"

CMakeFiles/test.dir/src/simulador-cpp/Simulador.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test.dir/src/simulador-cpp/Simulador.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/simulador-cpp/Simulador.cpp" > CMakeFiles/test.dir/src/simulador-cpp/Simulador.cpp.i

CMakeFiles/test.dir/src/simulador-cpp/Simulador.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test.dir/src/simulador-cpp/Simulador.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/simulador-cpp/Simulador.cpp" -o CMakeFiles/test.dir/src/simulador-cpp/Simulador.cpp.s

CMakeFiles/test.dir/src/principal/main.cpp.o: CMakeFiles/test.dir/flags.make
CMakeFiles/test.dir/src/principal/main.cpp.o: /mnt/d/Trabalho\ Final\ PDS\ 2/Trabalho-final-PDS2/src/principal/main.cpp
CMakeFiles/test.dir/src/principal/main.cpp.o: CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/test.dir/src/principal/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test.dir/src/principal/main.cpp.o -MF CMakeFiles/test.dir/src/principal/main.cpp.o.d -o CMakeFiles/test.dir/src/principal/main.cpp.o -c "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/principal/main.cpp"

CMakeFiles/test.dir/src/principal/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test.dir/src/principal/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/principal/main.cpp" > CMakeFiles/test.dir/src/principal/main.cpp.i

CMakeFiles/test.dir/src/principal/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test.dir/src/principal/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/src/principal/main.cpp" -o CMakeFiles/test.dir/src/principal/main.cpp.s

# Object files for target test
test_OBJECTS = \
"CMakeFiles/test.dir/src/mapa-cpp/Mapa.cpp.o" \
"CMakeFiles/test.dir/src/mapa-cpp/MapaPadrao.cpp.o" \
"CMakeFiles/test.dir/src/torre-cpp/Torre.cpp.o" \
"CMakeFiles/test.dir/src/torre-cpp/TorreDeFogo.cpp.o" \
"CMakeFiles/test.dir/src/inimigo-cpp/Esqueleto.cpp.o" \
"CMakeFiles/test.dir/src/inimigo-cpp/Inimigo.cpp.o" \
"CMakeFiles/test.dir/src/estrutura-cpp/Arvore.cpp.o" \
"CMakeFiles/test.dir/src/estrutura-cpp/Estrutura.cpp.o" \
"CMakeFiles/test.dir/src/estrutura-cpp/Parede.cpp.o" \
"CMakeFiles/test.dir/src/simulador-cpp/Simulador.cpp.o" \
"CMakeFiles/test.dir/src/principal/main.cpp.o"

# External object files for target test
test_EXTERNAL_OBJECTS =

test: CMakeFiles/test.dir/src/mapa-cpp/Mapa.cpp.o
test: CMakeFiles/test.dir/src/mapa-cpp/MapaPadrao.cpp.o
test: CMakeFiles/test.dir/src/torre-cpp/Torre.cpp.o
test: CMakeFiles/test.dir/src/torre-cpp/TorreDeFogo.cpp.o
test: CMakeFiles/test.dir/src/inimigo-cpp/Esqueleto.cpp.o
test: CMakeFiles/test.dir/src/inimigo-cpp/Inimigo.cpp.o
test: CMakeFiles/test.dir/src/estrutura-cpp/Arvore.cpp.o
test: CMakeFiles/test.dir/src/estrutura-cpp/Estrutura.cpp.o
test: CMakeFiles/test.dir/src/estrutura-cpp/Parede.cpp.o
test: CMakeFiles/test.dir/src/simulador-cpp/Simulador.cpp.o
test: CMakeFiles/test.dir/src/principal/main.cpp.o
test: CMakeFiles/test.dir/build.make
test: CMakeFiles/test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test.dir/build: test
.PHONY : CMakeFiles/test.dir/build

CMakeFiles/test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test.dir/clean

CMakeFiles/test.dir/depend:
	cd "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2" "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2" "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/build" "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/build" "/mnt/d/Trabalho Final PDS 2/Trabalho-final-PDS2/build/CMakeFiles/test.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/test.dir/depend

