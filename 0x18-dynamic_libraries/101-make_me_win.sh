#!/bin/bash
export LD_PRELOAD=./libhack.so
# Update this line with the correct path
./gm 9 8 10 24 75 9
rm 101-make_me_win.sh
