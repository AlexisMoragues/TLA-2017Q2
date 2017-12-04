#!/bin/bash

if [ -z "$1" ]
  then
    echo "Error: No file specified"
    exit 0
fi

BIN=$2
if [ -z "$2" ]
  then
    BIN="song.out"
fi

./compiler < $1
gcc songMain.c -o $BIN