#!/bin/bash

cmake --preset CoffeeLinux -S .
cmake --build ./build/linux
cmake --install ./build/linux

cmake --preset CoffeeWindows -S .
cmake --build ./build/windows
cmake --install ./build/windows
