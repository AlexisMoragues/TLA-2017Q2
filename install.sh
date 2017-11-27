#!/bin/bash

cd tbd
flex ./sg.l
yacc -d ./sg.y
cd ..
cmake .
make
