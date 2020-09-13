cmake_minimum_required(VERSION 2.8)

project(bashgame-snake)

add_definitions("-std=c++11")
aux_source_directory(${CMAKE_SOURCE_DIR}/src DIR_SRCS)

add_executable(snake ${DIR_SRCS})
target_link_libraries(snake pthread)
