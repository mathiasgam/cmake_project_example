cmake_minimum_required(VERSION 3.18)

add_executable(particle_in_cell src/main.cpp)
target_link_libraries(particle_in_cell PRIVATE math)