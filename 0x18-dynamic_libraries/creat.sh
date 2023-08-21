#!/bin/bash
gcc -c *.c -fpic
gcc *.o -shared -o libdynamic.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
