# CPTR 141: Objective #8 (2 point)

## Problem Overview

Your task in this homework assignment is to create a program that classifies integers  entered on the command line by the leading digit of the number and prints out a dictionary in which the keys are leading digits and the values are lists of numbers with those leading digits in the order they were entered on the command line.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. Your program must read integers from the command line and classify them by leading digit (so 100 is in category 1, 5633 is in category 5, etc.)

1. The program must create a dictionary in which they keys are the leading digits and the values are lists of numbers that have that leading digit, in the order in which they were entered on the command line.

1. Below is an example of running this program from the command line.

    Example:
    ```python
    python3 group_numbers.py 102 111 233 205 33 16 3465
    {1: [102, 111, 16], 2: [233, 205], 3: [33, 3465]}
    ```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
