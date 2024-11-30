# CPTR 142: Objective #8 (1 point)

## Problem Overview

In this homework you will implement a member function that updates the pointer reference to a new address.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must implement the `pointerUpdate` function in `pointer_update.cpp` file that correctly updates the address reference to the new corresponding value.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `pointer_update.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `pointer_update.h` and `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `pointerUpdate` function which you could implement in `test_driver.cpp` to test your function.

    **C++ Code:**
    ```c++
    #include <iostream>
    #include "pointer_update.h"

    int main() {
      int newNumber = 7;
      int *ptrNumber = nullptr;
      
      pointerUpdate(newNumber, ptrNumber);
      std::cout << "Pointer value: " << *ptrNumber << std::endl;
      return 0;
    }
    ```

    **Output:**
    ```html
    Pointer value: 7
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
