cmake_minimum_required(VERSION 3.5)
project(tpe_tla)

AUX_SOURCE_DIRECTORY(src SOURCE_FILES)

# TODO change directory name
AUX_SOURCE_DIRECTORY(tbd TBD)
add_executable(compiler ${SOURCE_FILES} ${TBD})