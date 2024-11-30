# CPTR 142: Objective #9 (1 point)

## Problem Overview

In this homework you will write a recursive function to do a linear search with pass-by-reference parameters.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must implement the `animalSearch` function in `animal_search.cpp` file which takes four parameters:

  * A list of animals (vector of strings)
  * A search target (string)
  * A found flag (a reference to a boolean)
  * An index of result (a reference to an `uint64_t`)

1. You must use the recursion instead of iteration.

1. The `animalSearch()` function implements a linear search. Starting at the first index, the search checks each index for the target string.

1. Note the list of animals may **not** be in alphabetical order.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `animal_search.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in  `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `animalSearch` function which you could implement in `test_driver.cpp` to test your function.

    **C++ Code:**
    ```c++
    #include "animal_search.h"
    #include <iostream>

    int main() {
      std::vector<std::string> animals = {"cat", "dog", "pig"};
      bool found = false;
      unsigned long int index = 0;
      animalSearch(animals, "dog", found, index);
      if (found) {
        std::cout << "Found animal at index: " << index << std::endl;
      } else {
        std::cout << "Animal not found." << std::endl;
      }
      return 0;
    }
    ```

    **Output:**
    ```html
    Found animal at index: 1
    ```

## Grade Specification

You will earn **four points** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
