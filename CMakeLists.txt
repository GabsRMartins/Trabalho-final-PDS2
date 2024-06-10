cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Collect all source files from different directories
file(GLOB MAPA_SOURCES "src/mapa-cpp/*.cpp")
file(GLOB TORRE_SOURCES "src/torre-cpp/*.cpp")
file(GLOB INIMIGO_SOURCES "src/inimigo-cpp/*.cpp")

# Combine all source files into a single list
set(SOURCES
    ${MAPA_SOURCES}
    ${TORRE_SOURCES}
    ${INIMIGO_SOURCES}
    src/principal/main.cpp
)

# Include header files
include_directories(Entidade-hpp Torre-hpp Inimigo-hpp Mapa-hpp)

# Create an executable
add_executable(test ${SOURCES})