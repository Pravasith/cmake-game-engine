#!/bin/bash

cmake --preset Coffee -S .
cmake --build ./build
cmake --install ./build
