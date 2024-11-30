# CPTR 142: Objective #6 (2 point)

In this homework you will write a function prototype and definition.

## Scenario

Create a `greatestCommonDivisor` function that calculates the greatest common divisor for two numbers.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use create the `greatestCommonDivisor` function with a prototype in `greatest_common_divisor.h` and the definition in `greatest_common_divisor.cpp`.
    The function has two integer parameters.

1. The function must return an integer that represents the largest number divisible by both numbers.

1. You must format your code using the "Format Document" command in your development environment.

1. The files `greatest_common_divisor.h` and `greatest_common_divisor.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `greatestCommonDivisor` function which you could implement in `test_driver.cpp` to test your function.

**C++ Code:**
```c++
#include <iostream>
#include "greatest_common_divisor.h"

int main() {
  int gcd = greatestCommonDivisor(10, 15);
  std::cout << "The greatest common divisor for 10 and 15 is " << gcd << std::endl;
  return 0;
}
```

**Sample Output**
```html
The greatest common divisor for 10 and 15 is 5
```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
