# CPTR 142: Objective #6 (1 point)

## Problem Overview

In this homework you will write a the body of a function.

## Scenario

Create a `gallons_to_liters` function that calculates the number of liters in when given the amount of gallons.
Note for every 1 gallon their is `3.785` liters.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use create the `gallons_to_liters` function to number of liters in when given a parameter for the number of gallons.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `gallons_to_liters.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `gallons_to_liters` function which you could implement in `test_driver.cpp` to test your function.

**C++ Code:**
```c++
#include "gallons_to_liters.h"
#include <iostream>

int main() {
  double gallons = 10;
  double liters = gallons_to_liters(gallons);
  std::cout << "There are " << liters << " liters in " << gallons
       << " gallons." << std::endl;
  return 0;
}
```

**Output:**
```html
There are 37.85 liters in 10 gallons.
```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
