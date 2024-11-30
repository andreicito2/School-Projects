# CPTR 142: Objective #8 (1 point)

## Problem Overview

In this homework you will implement a function that updates a pointer's value.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must implement the `updatePointerValue` function in `update_pointer_value.cpp` file which takes two parameters:

  * An integer pointer that will have its value updated
  * An integer pointer with the new value

1. You must format your code using the "Format Document" command in your development environment.

1. The file `update_pointer_value.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `update_pointer_value.h` and `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `updatePointerValue` function which you could implement in `test_driver.cpp` to test your function.

    **C++ Code:**
    ```c++
    #include <iostream>

    #include "update_pointer_value.h"

    int main() {
      int value = 10;
      int newValue = 3;

      int *ptrExisting = &value;
      int *ptrNewValue = &newValue;
      updatePointerValue(ptrExisting, ptrNewValue);
      std::cout << "The new value is " << *ptrExisting << std::endl;

      return 0;
    }
    ```

    **Output:**
    ```html
    The new value is 3
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
