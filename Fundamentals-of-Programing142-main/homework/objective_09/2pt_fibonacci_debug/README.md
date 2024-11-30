# CPTR 142: Objective #9 (1 point)

## Problem Overview

In this homework you will write a recursive function to do an arthmetic calculation.

## Scenario

You are getting the wrong result in your fibonacci function and need to debug the code.
Add a debug statement to the code that prints each times its called with the input number.
Each recursive calls should indent the output by two spaces.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must implement the `fibonacci` function in `fibonacci.cpp` file which takes an integer parameter.

1. You must use the recursion instead of iteration.

1. The debug output should indent 2 spaces for each recursive call.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `fibonacci.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `fibonacci.h` and `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `fibonacci` function which you could implement in `test_driver.cpp` to test your function.

    **C++ Code:**
    ```c++
    #include "fibonacci.h"
    #include <iostream>

    int main() {
      std::cout << fibonacci(5, "") << std::endl;
      return 0;
    }
    ```

    **Output:**
    ```html
    5
      4
        3
          2
            1
            0
          1
        2
          1
          0
      3
        2
          1
          0
        1
    5
    ```

## Grade Specification

You will earn **two points** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
