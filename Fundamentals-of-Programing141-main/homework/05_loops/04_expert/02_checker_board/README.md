# CPTR 141: Objective #5 (4 point)

## Problem Overview

Your task in this homework assignment is to write a program that generates a checkboard. Your program will prompt the user for the dimensions of the checkbaord and the character used for the shaded squares. After checking for and handling any errors, the program will print the checkerboard out to the screen.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use `input` and `print` to get data from user and display output.

1. You must use appropriate error checking to ensure the following. If any of these conditions are violated, prompt the user to try again.
    + Any numbers entered are between 1 and 10
    + The total dimensions of the board do not exceed 50 x 50 characters.

1. You must format your code using the "Format Document" command in your development environment.

1. You **must** produce output exactly as shown by the `checker_board.pyc` program.  To run this program, right click and choose *Run Code*.  An example is also shown below.

```html
******* CHECKER BOARD GENERATOR ******
* Dimensions May Not Exceed 50 x 50  *
**************************************
Enter the number of rows (1-10): 3
Enter the number of columns (1-10): 4
Enter the square size (1-10): 5
Enter the shading character: M

MMMMM     MMMMM
MMMMM     MMMMM
MMMMM     MMMMM
MMMMM     MMMMM
MMMMM     MMMMM
     MMMMM     MMMMM
     MMMMM     MMMMM
     MMMMM     MMMMM
     MMMMM     MMMMM
     MMMMM     MMMMM
MMMMM     MMMMM
MMMMM     MMMMM
MMMMM     MMMMM
MMMMM     MMMMM
MMMMM     MMMMM
```

## Grade Specification

You will earn **four points** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
