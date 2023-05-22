#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
sudo cp liball.so /usr/lib/
sudo ldconfig
