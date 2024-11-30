# CPTR 142: Objective #8 (1 point)

## Problem Overview

In this homework you will implement a function that pointers as parameters to calculate a result.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must implement the `rectanglePerimeter` function in `rectangle_perimeter.cpp` file that takes two parameters:

  * An integer pointer for the width
  * An integer pointer for the height

1. The function must calculate the perimeter of the rectangle and return the value as an integer.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `rectangle_perimeter.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `rectangle_perimeter.h` and `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `rectanglePerimeter` function which you could implement in `test_driver.cpp` to test your function.

    **C++ Code:**
    ```c++
    #include <iostream>

    #include "rectangle_perimeter.h"

    int main() {
      int length = 7;
      int width = 5;

      int *ptrLength = &length;
      int *ptrWidth = &width;

      int result = rectanglePerimeter(ptrLength, ptrWidth);

      std::cout << "A " << (*ptrLength) << " by " << (*ptrWidth)
                << " rectangle has a perimeter of " << result << "." << std::endl;

      return 0;
    }
    ```

    **Output:**
    ```html
    A 7 by 5 rectangle has a perimeter of 24.
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
