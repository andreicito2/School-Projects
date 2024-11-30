# CPTR 142: Objective #6 (1 point)

## Problem Overview

In this homework you will call two functions.

## Scenario

Each day new supplies arrive at the zoo to top off their supplies.
Two functions help calculate and report the current food supplies.
These ensure all animals will be fed.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use create the `oneDay` function that takes the number of animals currently at the zoo.

1. The function must default the supplies of hay, grain, and water to 50 units.

1. The function must call `updateFoodSupplies` with the number of animals and current resource values.

1. The function must call the `printFoodSupplies` to report current levels

1. You must format your code using the "Format Document" command in your development environment.

1. The file `one_day.cpp` should not contain a main program, it should only contain your function.
   To test your function, add code to the `test_driver.cpp` file.
   Note that code in `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `oneDay` function which you could implement in `test_driver.cpp` to test your function.

    **C++ Code:**
    ```c++
    #include "food_supplies.h"
    #include <iostream>

    int main() {
      oneDay(5);
      return 0;
    }
    ```

    **Output:**
    ```html
    --<= Supply =>--
        Hay: 35
      Grain: 45
      Water: 42.5
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
