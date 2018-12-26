cmake_minimum_required(VERSION "2.8")

project("miniShell")


set(CMAKE_BINARY_DIR, "bin")

include_directories(src/hpp)
add_subdirectory(src)

add_executable(
  "${PROJECT_NAME}"
  main.cpp
  oStream.cpp
  str.cpp
)
