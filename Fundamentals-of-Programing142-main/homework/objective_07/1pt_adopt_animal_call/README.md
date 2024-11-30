# CPTR 142: Objective #7 (1 point)

## Problem Overview

In this homework you will call class member functions.

## Scenario

The zoo has set up an adoption process where you can name an animal.
The animal class allows you to give it a name and adopt it.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must add the body to `adoptAnimal` function to call two class member functions.

    * The `adopt()` function
    * The `setName()` function with the name parameter of `adoptAnimal` 

1. You must format your code using the "Format Document" command in your development environment.

1. The file `adopt.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `adoptAnimal` function which you could implement in `test_driver.cpp` to test your function.

**C++ Code:**
```c++
#include "adopt.h"
#include "animal.h"
#include <iostream>

int main() {
  Animal myZebra = Animal("zebra", 5);
  adoptAnimal(myZebra, "Strips");
  myZebra.printTag();
}
```

**Output:**
```html
Strips is a 5 year old zebra.
```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
