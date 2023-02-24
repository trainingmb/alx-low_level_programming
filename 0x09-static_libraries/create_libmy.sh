#!/bin/bash
gcc -c -Wall $(echo $(ls *.c))
ar rc libmy.a *.o
rm *.o
