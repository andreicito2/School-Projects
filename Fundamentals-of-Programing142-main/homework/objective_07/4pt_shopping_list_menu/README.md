# CPTR 142: Objective #7 (4 point)

## Problem Overview

In this homework assignment you will be creating a function that has a loop and a switch statement.

## Description

A class named `ShoppingList` has been given to you with a member functions for adding items, removing items, and getting a shopping a list.
Complete the `menu` function by displaying the inputs the user may enter to interact the functionality
of the `ShoppingList` class. Below is the format and specification in how the menu must be displayed.

## Solution Specification

Your program should support the following features:

1. Create the `menu` function in `menu.cpp` that build the following menu:

    ```html
    ========== MENU ==========
    1) View All Items
    2) Add An Item
    3) Remove An Item
    ```

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
========== MENU ==========
1) View All Items
2) Add An Item
3) Remove An Item
Option: 2
Enter the name of the item: Bananas         

========== MENU ==========
1) View All Items
2) Add An Item
3) Remove An Item
Option: 2
Enter the name of the item: Apples

========== MENU ==========
1) View All Items
2) Add An Item
3) Remove An Item
Option: 3
Enter the name of the item: Bananas

========== MENU ==========
1) View All Items
2) Add An Item
3) Remove An Item
Option: 1
1. Apples

========== MENU ==========
1) View All Items
2) Add An Item
3) Remove An Item
Option: 5
INVALID OPTION

========== MENU ==========
1) View All Items
2) Add An Item
3) Remove An Item
Option: -1

Exiting Shopping List
```

## Grade Specification

You will earn **four point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
