# CPTR 142: Objective #7 (1 point)

## Problem Overview

In this homework you will create a class definition with a private variable with an accessor and mutator inline functions.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use create the `IdentificationCard` class prototype with a private `int` variable for the id number in `identification_card.h` file.

1. You must create the prototype for an access and mutator methods for the private variable. The function declarations are in the `identification_card.cpp` file.

    * The `getIdNumber` access method returns the id number.

    * the `setIdNumber` mutator method takes an `int` parameter to update the id number.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `identification_card.h` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `IdentificationCard` class which you could implement in `test_driver.cpp` to test your function.

**C++ Code:**
```c++
#include <iostream>

#include "identification_card.h"

int main() {
  IdentificationCard id = IdentificationCard();
  id.setIdNumber(17);
  std::cout << "My ID number is " << id.getIdNumber() << std::endl;
}
```

**Output:**
```html
My ID number is 17
```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
