# CPTR 242: Homework Assignment - Stack and Queues

## Problem Overview

Your task in this assignment is to implement a stack using two queue-type data structures.
Each stack function should be implemented using only the standard queue functions (i.e. enqueue and dequeue).

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. Implement __makeEmpty__, __isEmpty__, __isFull__, __push__, __pop__, and __top__, for the stack implementation in `stack_type.cpp`.
    A cpp file has been provided for you with function stubs.

    * You may need to alter the overloaded `<<` operator depending on the implementation.
2. Pass all the tests in Submitty.

## Test Driver

The Submitty tests use a test driver similar to the first homework.

In this assignment, you may find it helpful to create your test input for the driver to validate your functions.
A `test_driver.cpp` has been provided to allow a user to run test input.
Please model the method we have used for homework 1 in creating your test input for the driver.

The code can be compiled by running the `make` command.

```sh
make
```

Example Input:

```sh
Menu
Push A
Push B
Push C
Print
Push D
Print
Push E
Print
Top
Print
Pop
Print
Quit

```

To test the code, run this command:

```sh
./a.out
```

Resulting standard output:

```txt
Type 'Menu' to see all the display menu.
Student Test
Menu options:
 - Menu          Display menu.
 - Push <item>   Adds an Item at the rear of stack
 - Pop           Removes the first item in Stack
 - Top           Returns the first item in Stack
 - IsEmpty       Returns true if Stack is empty
 - IsFull        Returns true if Stack reached the max limit of items it can hold
 - Print         Prints Stack
 - MakeEmpty     Clears Stack
 - Quit          Quit application.
A is pushed.
B is pushed.
C is pushed.
CBA
D is pushed.
DCBA
E is pushed.
EDCBA
E is at the front.
EDCBA
Stack has been pop. 
DCBA
```

Resulting `log.txt`:

```txt
Menu is the 1 command completed.
Push is the 2 command completed.
Push is the 3 command completed.
Push is the 4 command completed.
Print is the 5 command completed.
Push is the 6 command completed.
Print is the 7 command completed.
Push is the 8 command completed.
Print is the 9 command completed.
Top is the 10 command completed.
Print is the 11 command completed.
Pop is the 12 command completed.
Print is the 13 command completed.
Quit
Testing completed.
```

## Tips

* Reference back to Zybooks *5.7 C++: Stacks and queues using linked lists* as segments of code have been given to you.
* You create a text file with all the user input.
  Then when you run the program you may pass in this file as input.

  ```sh
  ./a.out < sample.txt
  ```

  This is a good way to recreate your test each time you run your program.

## Submission

Your submission must include a `stack_type.cpp` file.
All other `.h` and `.cpp` files should remain unchanged.
