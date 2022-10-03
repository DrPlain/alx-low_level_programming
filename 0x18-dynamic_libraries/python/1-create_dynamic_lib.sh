#!/bin/bash
gcc -fPIC -c *.c
gcc -shared *.o -o 100-operations.so
