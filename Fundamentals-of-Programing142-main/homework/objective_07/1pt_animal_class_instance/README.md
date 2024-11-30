# CPTR 142: Objective #7 (1 point)

## Problem Overview

In this homework you will create an instance of a class.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must create an instance of `Animal` class in the `getAnimal()` function.

  * Match the `getAnimal()` parameters to the class constructor arguments.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `animal_instance.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `getAnimal` function which you could implement in `test_driver.cpp` to test your function.

**C++ Code:**
```c++
#include "animal.h"
#include "animal_instance.h"
#include <iostream>

int main() {
  Animal myDog = getAnimal("tiger", 3);
  myDog.printTag();
}
```

**Output:**
```html
3 year old tiger
```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
