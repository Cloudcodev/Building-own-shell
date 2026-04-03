#!/bin/sh

set -e # Exit early if any commands fail

# Compile the shell using CMake
(
    cd "$(dirname "$0")"
    cmake -B build -S . 
    cmake --build ./build
)

# Execute the compiled shell
exec "$(dirname "$0")/build/shell" "$@"
