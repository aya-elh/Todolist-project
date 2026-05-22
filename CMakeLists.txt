cmake_minimum_required(VERSION 3.10)

project(TodoList VERSION 1.0)

# ----------------------------
# C++ STANDARD
# ----------------------------
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ----------------------------
# INCLUDE DIRECTORIES
# ----------------------------
include_directories(${PROJECT_SOURCE_DIR}/include)

# ----------------------------
# SOURCE FILES
# ----------------------------
file(GLOB SOURCES
    ${PROJECT_SOURCE_DIR}/src/*.cpp
)

# ----------------------------
# EXECUTABLE
# ----------------------------
add_executable(${PROJECT_NAME} ${SOURCES})

# ----------------------------
# CLEAN OUTPUT MESSAGE
# ----------------------------
message(STATUS "Project: ${PROJECT_NAME}")
message(STATUS "C++ Standard: ${CMAKE_CXX_STANDARD}")
message(STATUS "Include Dir: ${PROJECT_SOURCE_DIR}/include")
message(STATUS "Source Dir: ${PROJECT_SOURCE_DIR}/src")