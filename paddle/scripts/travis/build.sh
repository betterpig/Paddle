#!/bin/bash

cd `dirname $0`
cd ../../../
set -e
mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug -DWITH_GPU=OFF -DWITH_DOC=OFF -DWITH_TESTING=ON -DON_TRAVIS=ON
make -j `nproc`
