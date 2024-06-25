#!/usr/bin/env bash

echo "compiling"

        g++ -std=gnu++23 -fmodules-ts -xc++-system-header iostream
        g++ -std=gnu++23 -fmodules-ts -c helloworld.cpp
        g++ -std=gnu++23 -fmodules-ts -c main.cpp
        g++ main.o helloworld.o
        ./a.out
echo "compiling Finshed."
