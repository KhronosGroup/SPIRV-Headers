cmake_minimum_required(VERSION 3.0)

project(TEST_FIND_PACKAGE LANGUAGES CXX)

add_library(find_package_example STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../example.cpp
)

find_package(SPIRV-Headers REQUIRED CONFIG)

if (NOT TARGET SPIRV-Headers::SPIRV-Headers)
    message(FATAL_ERROR "SPIRV-Headers::SPIRV-Headers target not defined")
endif()

target_link_libraries(find_package_example PRIVATE
    SPIRV-Headers::SPIRV-Headers
)

