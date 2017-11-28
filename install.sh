#!/bin/bash

# directorio lex/yacc
LY=tbd

# creación de archivos lex y yacc
cd $LY
flex ./sg.l
yacc -d ./sg.y
cd ..

# creación del binario
cmake .
make
