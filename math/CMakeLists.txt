cmake_minimum_required(VERSION 3.18)

add_library(math INTERFACE src/math/vec3.hpp)
target_include_directories(math INTERFACE src/)