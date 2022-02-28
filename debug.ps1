cmake --no-warn-unused-cli -DCMAKE_BUILD_TYPE=Debug -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++ -G "MinGW Makefiles" -B "build"
mingw32-make -C ./build