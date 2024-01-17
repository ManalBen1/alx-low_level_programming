#!/bin/bash
cp /full/path/to/directory/containing/libhack.so .
LD_PRELOAD=./libhack.so ./gm 9 8 10 24 75 9
