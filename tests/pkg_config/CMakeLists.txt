cmake_minimum_required(VERSION 3.14)

project(TEST_PKGCONFIG LANGUAGES CXX)

add_library(pkgconfig_example STATIC)

target_sources(pkgconfig_example PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../example.cpp
)

find_package(PkgConfig REQUIRED)

pkg_check_modules(SPIRV_HEADERS REQUIRED IMPORTED_TARGET SPIRV-Headers)

target_link_libraries(pkgconfig_example PRIVATE
    PkgConfig::SPIRV_HEADERS
)

