# CPTR 142: Objective #6 (1 point)

## Problem Overview

In this homework you will write a two function prototypes.

## Scenario

Each night the zoo locks all the doors.
The night manager must be able to check and confirm all doors are locked.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use create the `lock_up.h` file to write out the function prototypes for the functions defined in `lock_up.cpp`.

1. Both `lock` and `unlock` functions must be defined in the header file.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `lock_up.h` should not contain a main program, it should only contain your function prototypes.
   To test your function, add code to the `test_driver.cpp` file.
   Note that code in `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `lock` and `unlock` functions which you could implement in `test_driver.cpp` to test your function.

    **C++ Code:**
    ```c++
    #include "lock_up.h"
    #include <iostream>
    #include <vector>

    int main() {
      std::vector<bool> doors = {true, true, false, false, true};
      lock(doors, 3);
      unlock(doors, 4);
      for (unsigned int64 i = 0; i < doors.size(); i++) {
        std::cout << "Door " << (i + 1) << " is " << (doors.at(i) ? "" : "un")
                  << "locked." << std::endl;
      }
      return 0;
    }

    ```

    **Output:**
    ```shell
    Door 1 is locked.
    Door 2 is unlocked.
    Door 3 is unlocked.
    Door 4 is locked.
    Door 5 is unlocked.
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
