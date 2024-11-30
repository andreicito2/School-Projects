# CPTR 142: Objective #8 (1 point)

## Problem Overview

In this homework you will write a function and make use of the arrow operator from a pointer class object.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must implement the `circleArea` function in `circle_area.cpp` file which takes a `Circle` pointer parameter.

1. You must use the arrow operator to return the area of the circle.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `circle_area.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `circle_area.h` and `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `circleArea` function which you could implement in `test_driver.cpp` to test your function.

    **C++ Code:**
    ```c++
    #include <iostream>
    #include "pointer_circle.h"

    int main() {
      Circle *ptrCircle = new  Circle(4);
      std::cout << "Area: " << circleArea(ptrCircle) << std::endl;
      return 0;
    }
    ```

    **Output:**
    ```html
    Area: 50.2655
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
