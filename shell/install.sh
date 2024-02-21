#!/bin/bash

installpath="/usr/local/include"
libpath="/usr/local/lib"

cd ..
shell/bbt_copy_header_dir.sh $installpath bbt mysql

if [ ! -d "build" ];then
    mkdir build
fi

# cd build
# cmake ..
# make -j4
