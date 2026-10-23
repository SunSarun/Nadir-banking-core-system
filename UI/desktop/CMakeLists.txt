
cmake_minimum_required(VERSION 3.23)
project(
    desktop 
    VERSION 1.0.0 
    LANGUAGES CXX
)

if(CMAKE_BINARY_DIR STREQUAL CMAKE_SOURCE_DIR)
    message(FATAL_ERROR "In-source builds are forbidden. Create a separate build directory.")
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Instruct CMake to automatically handle Qt's meta-object compiler (MOC)
set(CMAKE_AUTOMOC ON)

# Find the required Qt6 package
find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_subdirectory(src)
add_subdirectory(app)
