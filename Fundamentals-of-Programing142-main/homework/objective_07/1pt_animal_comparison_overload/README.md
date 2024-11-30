# CPTR 142: Objective #7 (1 point)

## Problem Overview

In this homework you will override the equal comparison for when two classes are compared.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must override the equal comparison for the `Animal` class. Define the override in `animal_comparison.cpp` file.

    * Two animal classes are equal if they have the same *name* and *age*.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `animal_comparison.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `test_driver.cpp` will not be graded.

1. Below is an example of a call using the equal comparison on the `Animal` class which you could implement in `test_driver.cpp` to test your function.

**C++ Code:**
```c++
#include "animal.h"
#include "animal_comparison.h"
#include <iostream>

int main() {
  Animal myHorse = Animal("horse", 2);
  Animal myZebra = Animal("zebra", 5);
  if (myHorse == myZebra) {
    std::cout << "My horse has stripes" << std::endl;
  } else {
    std::cout << "My horse is not a zebra" << std::endl;
  }
}

```

**Output:**
```html
My horse is not a zebra
```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
