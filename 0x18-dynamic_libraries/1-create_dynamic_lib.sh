#!/bin/bash
gcc -c -fPIC *.c
gcc -fPIC -shared -o *.o liball.so
