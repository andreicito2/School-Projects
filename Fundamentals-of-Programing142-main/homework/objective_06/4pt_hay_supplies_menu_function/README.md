# CPTR 142: Objective #6 (4 point)

## Problem Overview

In this homework assignment you will be creating a function that calls other functions.

## Scenario

The zoo has developed a process for managing its hay food supply.
The basic system has functions to manage user input.
The core of the system calculates the hay feed to animals.
Your tasks is to create a menu to access these features.

## Description

Functions for managing the user input and hay supply have been given to you in `food_supplies.cpp`.
Complete the `menu` function by calling these function when the user selects specific menu options.
Below is the format and specification in how the menu must be displayed.

## Solution Specification

Your program should support the following features:

1. Create the `menu` function in `menu.cpp` that build the following menu:

    ```html
    ========== MENU ==========
    1) Add hay to supply
    2) Feed aninals
    3) View hay supply
    -1) Exit
    ```

1. You must use the function in `food_supply.cpp`.

    * `double inputHayAmmount()`
    * `double inputAnimalsCount()`
    * `void addToHaySupply(double hayAddition, double &haySupply)`
    * `void feedHayToAnimals(int animals, double &haySupply)`
    * `void printHaySupplies(double hay)`

1. You must use a `switch` statement for the menu.

1. You must use a `do while` loop for iterating through the menu.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `menu.cpp`should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `menu` function which you could implement in `test_driver.cpp` to test your function.

**C++ Code:**
```c++
#include "menu.h"

int main() {
  menu();
  return 0;
}
```

**Sample Output**
```html
Welcome to Hay Supply Management

========== MENU ==========
 1) Add hay to supply
 2) Feed aninals
 3) View hay supply
-1) Exit
Option: 1

How much hay are you adding? 40

========== MENU ==========
 1) Add hay to supply
 2) Feed aninals
 3) View hay supply
-1) Exit
Option: 2

How many animals are you feeding? 12

========== MENU ==========
 1) Add hay to supply
 2) Feed aninals
 3) View hay supply
-1) Exit
Option: 3

========= SUPPLY =========
 <> Hay: 4

========== MENU ==========
 1) Add hay to supply
 2) Feed aninals
 3) View hay supply
-1) Exit
Option: -1


Exitings Hay Supply Management
```

## Grade Specification

You will earn **four point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
