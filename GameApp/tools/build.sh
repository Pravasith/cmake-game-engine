#!/bin/bash

cmake -S . --preset GameAppLinux
cmake --build ./build/linux
cmake --install ./build/linux --prefix ../install/linux

cmake --preset GameAppWindows -S .
cmake --build ./build/windows
cmake --install ./build/windows
