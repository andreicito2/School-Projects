# CPTR 142: Objective #9 (1 point)

## Problem Overview

In this homework you will write a recursive function to print an array in reverse order.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must implement the `printAnimals` function in `animal_list.cpp` file which takes a two parameters:

  * string array with the animals
  * integer for size

1. You must use the recursion instead of iteration.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `animal_list.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `animal_list.h` and `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `printAnimals` function which you could implement in `test_driver.cpp` to test your function.

    **C++ Code:**
    ```c++
    #include "animal_list.h"
    #include <string>

    int main() {
      std::string animals[4] = {"ant eater", "badger", "cat", "dog"};
      printAnimals(animals, 4);
      return 0;
    }
    ```

    **Output:**
    ```html
    dog
    cat
    badger
    ant eater
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
