# CPTR 142: Objective #6 (1 point)

## Problem Overview

In this homework you will write a function with a pass-by-reference parameter.

## Scenario

The zoo keepers are interested in tracking how much animal weights before and after they dring.
The high tech enclosures have a weight sensor that can detect the animal weight.
They also track the water levels.
Confirm firm the system is working by using the starting animal weight and the amount of water consumed to get the current animal weight.


## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must create the `weightAfterDrink` function to calculate the new animal weight. The parameters are:

  * The animal weight in pounds (pass-by-reference)
  * The water volume in gallons (pass-by-value)

1. Consider one gallon is 8.34 pounds for this problem.

1. The weight parameter should be updated to make sure future reading go with this value.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `weight_after_drink.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `weightAfterDrink` function which you could implement in `test_driver.cpp` to test your function.

    **C++ Code:**
    ```c++
    #include "weight_after_drink.h"
    #include <iostream>

    int main() {
      double weight = 100;
      double gallons = 1;
      std::cout << "A " << weight << " pound animal drank " << gallons
                << " gallon(s)." << std::endl;
      weight_after_drink(weight, gallons);
      std::cout << "Their new weight is " << weight << " pounds." << std::endl;
      return 0;
    }

    ```

    **Output:**
    ```html
    A 100 pound animal drank 1 gallon(s).
    Their new weight is 108.34 pounds.
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
