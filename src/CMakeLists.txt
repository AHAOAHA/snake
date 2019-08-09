cmake_minimum_required(VERSION 3.2)

project(bashgame-snake)

add_definitions("-std=c99")
aux_source_directory(${CMAKE_SOURCE_DIR} DIR_SRCS)

add_executable(snake ${DIR_SRCS})
target_link_libraries(snake -lpthread)