#!/bin/bash
set -x

git submodule sync
git submodule update --init --recursive
