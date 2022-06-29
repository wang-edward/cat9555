#!/bin/bash
(
cmake --build build
)
result=$?
if [ ${result} == 0 ]; then
  ./build/app
fi
