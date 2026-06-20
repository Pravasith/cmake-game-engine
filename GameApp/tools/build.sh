#!/bin/bash

cmake -S . -B ./build
cmake --build ./build
cmake --install ./build --prefix ../install
