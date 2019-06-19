cmake_minimum_required(VERSION "2.8")

project("miniShell")

set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -g -Isrc/hpp") # compiler version and compiler flags.

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_BUILD_TYPE Debug)

file(GLOB minishell_src
    "src/hpp/*.hpp"
    "src/cpp/*.cpp"
)

message(minishell_src)

add_executable(${PROJECT_NAME} src/main.cpp ${minishell_src})
add_executable(test_vec src/tests/test_vec.cpp ${minishell_src})

