# CPTR 142: Objective #6 (1 point)

## Problem Overview

In this homework you will call a function that provides default values.

## Scenario

The zoo has created a name tag printer.
The name tag include the animal name, age and whether they need supervision.
For example, new babies may require extra attention.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use create the `homeZoo` function to call the `print_name_tag` for three animals.

  * "Apple" the lion is three years old and requires supervision.
  * "Banana" the tortoise is 99 years old and moves very slowly.
  * "Carrot" the baby panda was just born.

1. Each animale uses different number of parameters. First 3, then 2, then 1.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `home_zoo.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `homeZoo` function which you could implement in `test_driver.cpp` to test your function.

    **C++ Code:**
    ```c++
    #include "name_tag.h"

    int main() {
      homeZoo();
      return 0;
    }
    ```

    **Output:**
    ```html
    +------------------------
    | Name: Apple
    | Age: 3
    | Requires supervision
    +------------------------
    +------------------------
    | Name: Banana
    | Age: 99
    +------------------------
    +------------------------
    | Name: Carrot
    | Age: 0
    +------------------------
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
