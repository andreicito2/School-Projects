# CPTR 142: Objective #7 (1 point)

## Problem Overview

In this homework you will create a class method definition and use an internal private variable.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use implement the `getSurfaceArea` method in the `Cube` class.

    * Note the formula for calculating the surface area of a cube is `6 x side ^ 2`.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `cube.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `Cube` class' `getSurfaceArea` method which you could implement in `test_driver.cpp` to test your function.

**C++ Code:**
```c++
#include <iostream>
#include "cube.h"

int main() {
  double side = 7;
  Cube myCube = Cube(side);
  std::cout << "A cube with " << side << " has a surface area of " << myCube.getSurfaceArea() << std::endl;
  return 0;
}
```

**Output:**
```html
A cube with 7 has a surface area of 294
```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
