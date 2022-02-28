#!/bin/bash
cmake --no-warn-unused-cli -DCMAKE_BUILD_TYPE=Debug -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++ -G "Unix Makefiles" -B "build"
make -C ./build