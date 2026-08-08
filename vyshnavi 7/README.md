# Pyramid Pattern in C

## Aim

To write a C program to print a centered pyramid pattern
using stars.

## Description

This program prints a pyramid pattern based on the number
of rows entered by the user.

For 5 rows, the output is:

    *
   ***
  *****
 *******
*********

The number of stars in each row follows the pattern:

1, 3, 5, 7, 9 ...

The formula used is:

Stars = (2 × row) - 1

## Files

- `pyramid.c` - Main pyramid pattern program.
- `pyramid_tb.c` - Testbench for testing the pyramid logic.
- `output.txt` - Expected program and testbench output.
- `README.md` - Project documentation.

## Requirements

- Visual Studio Code
- C compiler such as GCC
- Git
- GitHub account

## Run in VS Code

Open the `pyramid` folder in VS Code.

Open:

Terminal → New Terminal

### Compile the main program

```bash
gcc pyramid.c -o pyramid