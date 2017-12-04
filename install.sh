#!/bin/bash

# directorio lex/yacc
LY=ly

# creación de archivos lex y yacc
cd $LY
yacc ./songFormat.y -d
flex ./songFormat.l
cd ..

# creación del binario
cmake .
make
