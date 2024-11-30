# CPTR 142: Objective #6 (1 point)

## Problem Overview

In this homework you will split a cpp file up into main, prototypes, and function definitions.

## Scenario

The zoo has to manage the animal enclosures.
The shared program can add and remove animal enclosure assignments.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use create a `enclosure_transfer.h` and `enclosure_transfer.cpp` files.

1. The prototypes must be placed in the `.h`.

1. The function definitions must be placed in the `.cpp`.

1. Update the includes to be correct for each file.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `test_driver.cpp` should contain a main program and no other functions. To test your function, modify the `test_driver.cpp` file. Note that code in `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `enclosure_removal` and `enclosure_assignment` functions which you could implement in `test_driver.cpp` to test your function.

    **Output:**
    ```html
    Enclosure 1: Lion
    Enclosure 2: Beaver
    Enclosure 3: 
    Enclosure 4: Bobcat
    Enclosure 5: Raven
    ```

1. Use make to compile your test program. After you create separate files, you will need to use the following command.

    ```shell
    make DRIVER=test_driver.cpp && ./a.out
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
