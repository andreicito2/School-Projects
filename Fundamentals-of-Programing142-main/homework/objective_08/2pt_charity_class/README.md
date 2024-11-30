# CPTR 142: Objective #8 (2 point)

## Problem Overview

In this homework you will implement a class method that allocates heap memory and a destructor.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must implement the `addDonation` member function of the `Charity` class in `charity.cpp` file that takes one double parameter.
   The function must allocate heap memory (use `new`) for the double and save it to the donations vector.

1. You must implement the `~Charity` destructor member function in `charity.cpp` file that cleans up memory from the new allocations in `addDonation`.

    * Also include a print statement in the destructor to indicate that it has been called. Please print "Destructor called.".

1. You must use the following keywords:

    * `new`
    * `delete`
    * `nullptr`

1. You must format your code using the "Format Document" command in your development environment.

1. The file `charity.cpp` should not contain a main program, it should only contain your function.
   To test your function, add code to the `test_driver.cpp` file.
   Note that code in `charity.h` and `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `Charity` class which you could implement in `test_driver.cpp` to test your function.

    **C++ Code:**
    ```c++
    #include <iostream>
    #include <iomanip>

    #include "charity.h"

    int main() {
      Charity *testObj = new Charity();
      testObj->addDonation(1000);
      testObj->addDonation(20);

      std::cout << "Donations" << std::endl;
      std::cout << "---------" << std::endl;
      for (auto eachEle : testObj->getDonations()) {
        std::cout << std::setw(9) << *eachEle << std::endl;
      }

      delete testObj;
      testObj = nullptr;
      return 0;
    }
    ```

    **Output:**
    ```html
    Donations
    ---------
        1000
          20
    Destructor called.
    ```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
