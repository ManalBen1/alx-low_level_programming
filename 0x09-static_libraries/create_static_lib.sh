#!/bin/bash

# Compile all .c files into .o files
gcc -Wall -Werror -pedantic -Wextra -c *.c

# Create the static library
ar -rc liball.a *.o

# Index the library
ranlib liball.a

# Clean up the object files
rm *.o

