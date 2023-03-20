#!/bin/bash
gcc  -c -fPIC *.c
gcc *.o -shared -o libdynamic.so
rm *.o
