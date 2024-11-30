# CPTR 142: Objective #4 (2 point)

## Problem Overview

In this homework you will write program that uses a do while loop to collect user input into a vector.
Then prints the complete of the list.

## Scenario

Complete the program to collect a VIP list into a vector of strings .
Stop collecting user input when the string `Quit` is entered.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use collect strings for the VIP members.

1. The VIP names from the user input will include spaces.
   Consider using `getline` to collect your input.

    ```c++
    std::getline(std::cin, input);
    ```

1. In particular, you must use the following C++ keywords at least once in your program:

    * The `do` keyword
    * The `while` keyword

1. You must use `cout` to display output as shown below (provided).

1. You must format your code using the "Format Document" command in your development environment.

1. You **must** produce output exactly as shown below assuming the given numbers were entered by the user.


**Output:**
```html
Enter the name: Kevin Jonas
Enter the name: Joe Jonas
Enter the name: Nick Jonas
Enter the name: Quit

VIP List
1. Kevin Jonas
2. Joe Jonas
3. Nick Jonas
```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
