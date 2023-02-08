cmake_minimum_required(VERSION 3.18)
project(cmake_project_example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(PACKAGE_TESTS "Build the tests" ON)

if(PACKAGE_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()

add_subdirectory(math)
add_subdirectory(particle_in_cell)