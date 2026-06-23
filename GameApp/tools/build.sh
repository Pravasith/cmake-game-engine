#!/bin/bash

cmake -S . --preset GameAppLinux
cmake --build ./build/linux
cmake --install ./build/linux --prefix ../install/linux

cmake --preset GameAppWindows -S .
cmake --build ./build/windows
cmake --install ./build/windows

# mkdir -p ../install/windows/bin
cp /usr/lib/gcc/x86_64-w64-mingw32/13-win32/lib*.dll \
   ../install/windows/bin
