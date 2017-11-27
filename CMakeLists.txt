#yacc -d
#flex
#make

cmake_minimum_required(VERSION 3.5)
project(tpe_tla)

AUX_SOURCE_DIRECTORY(src SOURCE_FILES)
#add_executable(sg ${SOURCE_FILES})

# remove
AUX_SOURCE_DIRECTORY(tbd TBD)
add_executable(sg ${SOURCE_FILES} ${TBD})