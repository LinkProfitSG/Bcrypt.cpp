cmake_minimum_required(VERSION 3.2)

option(BUILD_TESTS "Build test programs" OFF)

project(bcrypt)

set(CMAKE_CXX_STANDARD 23)

add_library(${PROJECT_NAME} src/bcrypt.cpp src/blowfish.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC include/)
