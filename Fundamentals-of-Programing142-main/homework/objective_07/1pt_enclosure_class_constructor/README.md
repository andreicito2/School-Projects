# CPTR 142: Objective #7 (1 point)

## Problem Overview

In this homework you will create a class constructor definition.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use create a constructor for the `Enclosure` class in `enclosure_constructor.cpp` file with two parameters.

    * The type of the enclosure as a string
    * the size of the enclosure as an int

1. You must format your code using the "Format Document" command in your development environment.

1. The file `enclosure_constructor.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `Enclosure` constructor which you could implement in `test_driver.cpp` to test your function.

**C++ Code:**
```c++
#include "enclosure.h"
#include <iostream>

int main() {
  Enclosure prairie = Enclosure("prairie", 2000);
  prairie.printDetails();
}
```

**Output:**
```html
The prairie enclosure is 2000 square feet.
```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
