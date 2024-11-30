# CPTR 142: Objective #6 (2 point)

## Problem Overview

In this homework assignment you will be creating a function prototype and definition.

## Solution Specification

Your program should support the following features:

1. Create a `isPrime` function with the prototype in `is_prime.h` and the definition is in `is_prime.cpp` which takes one integer parameter.
    The function returns true when the number is not divisible by a smaller number, otherwise false.

1. You must format your code using the "Format Document" command in your development environment.

1. The files `is_prime.h` and `is_prime.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `isPrime` function which you could implement in `test_driver.cpp` to test your function.

**C++ Code:**
```c++
#include "is_prime.h"
#include <iostream>

int main() {
  if (isPrime(20)) {
    std::cout << "20 is prime" << std::endl;
  } else {
    std::cout << "20 is not prime" << std::endl;
  }
  return 0;
}
```

**Sample Output**
```html
20 is not prime
```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
