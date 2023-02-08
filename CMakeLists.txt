cmake_minimum_required(VERSION 3.18)

project(cmake_project_example)

option(PACKAGE_TESTS "Build the tests" ON)

if(PACKAGE_TESTS)
    enable_testing()
    include(GoogleTest)
    add_subdirectory(tests)
endif()

add_subdirectory(math)
add_subdirectory(particle_in_cell)