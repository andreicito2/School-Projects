# CPTR 142: Objective #8 (1 point)

## Problem Overview

In this homework you will implement a function that returns a pointer.

## Scenario

Complete the `trapezoidArea` function that returns a dobule pointer that points to a memory location with the area of the trapezoid.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must implement the `trapezoidArea` function in `trapezoid_area.cpp` file to return a `double` pointer.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `trapezoid_area.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `trapezoid_area.h` and `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `trapezoidArea` function which you could implement in `test_driver.cpp` to test your function.

    **C++ Code:**
    ```c++
    #include <iostream>
    #include "trapezoid_area.h"

    int main() {
      double* result = trapezoidArea(10, 5, 3);
      std::cout << "The area is " << (*result) << std::endl;
      return 0;
    }
    ```

    **Output:**
    ```html
    The area is 22.5
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
