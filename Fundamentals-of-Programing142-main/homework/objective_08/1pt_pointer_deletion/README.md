# CPTR 142: Objective #8 (1 point)

## Problem Overview

In this homework you will implement a function that deletes the pointer.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must implement the `resetPointer` function in `reset_pointer.cpp` file that correctly deletes and sets the pointer to a `nullptr`.

1. You must use the `delete` keyword.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `reset_pointer.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `reset_pointer.h` and `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `resetPointer` function which you could implement in `test_driver.cpp` to test your function.

    **C++ Code:**
    ```c++
    #include <iostream>
    #include "reset_pointer.h"

    int main() {
    int* pointer = new int(10);

    resetPointer(pointer);
    if (pointer == nullptr) {
        std::cout << "The pointer has been deleted correctly." << std::endl;
    }

    return 0;
    }
    ```

    **Output:**
    ```html
    The vector pointer has been deleted correctly.
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
