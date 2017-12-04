cmake_minimum_required(VERSION 3.5)
project(tpe_tla)

set(CMAKE_VERBOSE_MAKEFILE ON)

add_compile_options("-lfl")
link_libraries("-lfl")

AUX_SOURCE_DIRECTORY(src SOURCE_FILES)
AUX_SOURCE_DIRECTORY(ly LEXYACC_FILES)

add_executable(compiler ${SOURCE_FILES} ${LEXYACC_FILES})
