set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake
  CACHE STRING "Vcpkg toolchain file")

set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)

cmake_minimum_required (VERSION 3.5)
project (Stakken)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/release)

add_subdirectory("${PROJECT_SOURCE_DIR}/src")