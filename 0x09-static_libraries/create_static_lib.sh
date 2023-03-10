#!/bin/bash

# Find all the .c files in the current directory
c_files=$(find . -name "*.c")

# Compile each .c file into an object file
for c_file in $c_files; do
    gcc -c $c_file
done

# Create the static library from the object files
ar rcs liball.a *.o

# Remove the object files
rm *.o
