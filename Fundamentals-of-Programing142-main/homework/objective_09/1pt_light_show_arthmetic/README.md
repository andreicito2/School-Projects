# CPTR 142: Objective #9 (1 point)

## Problem Overview

In this homework you will write a recursive function to do an arthmetic calculation.

## Scenario

The zoo has started a light show.
The light engineer has a facination with the number 5.
They use the following formula to calculate the of light flashes that happend during the show.

```text
f(n) = n * f(n-5) where n > 0
```

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must implement the `getLightCount` function in `light_show.cpp` file which takes an integer parameter.

1. You must use the recursion instead of iteration.

1. The `getLightCount()` function is the product of the positive numbers from the input and each number descending by 5.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `light_show.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `light_show.h` and `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `getLightCount` function which you could implement in `test_driver.cpp` to test your function.

    **C++ Code:**
    ```c++
    #include "light_show.h"
    #include <iostream>

    int main() {
      std::cout << getLightCount(20) << std::endl;
      return 0;
    }
    ```

    **Output:**
    ```html
    15000
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
