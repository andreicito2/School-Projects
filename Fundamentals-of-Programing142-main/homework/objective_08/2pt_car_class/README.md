# CPTR 142: Objective #8 (2 point)

## Problem Overview

In this homework you will implement three member functions that update a member pointer variable.

## Scenario

Complete the `fillTank`, `drive`, and `getGas` functions that update the `gas` member variable.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must implement the `fillTank` function in `car.cpp` file that add the `newGas` parameter to the `gas` member variable.

1. You must implement the `drive` function in `car.cpp` file that calculates the number of gallons used and deducts that amount from the `gas` member variable.

    * The car gets 20 miles to the gallon.
    * The `drive` function takes one parameter for the number of miles.

1. You must implement the `getGas` function in `car.cpp` file that returns the value of the `gas` member variable.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `car.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `car.h` and `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `Car` class which you could implement in `test_driver.cpp` to test your function.

**C++ Code:**
```c++
#include "car.h"
#include <iostream>

int main() {
  Car myCar;
  myCar.fillTank(15);
  myCar.drive(105);
  std::cout << "Remaining gas is: " << myCar.getGas() << std::endl;
  return 0;
}
```

**Output:**
```html
Remaining gas is: 9.75
```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
