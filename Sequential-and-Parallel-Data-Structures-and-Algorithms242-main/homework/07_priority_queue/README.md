# CPTR 242: Homework Assignment -- Heaps

## Problem Overview

Your task in this assignment is to implement __reheap__ for a Priority Queue based on a heap.
The function __reheap__ functions have been implemented as a recursive functions and your task is to write the equivalent function as an iterative function.
The __reheap__ iterative function must be implemented in two ways: up, and down.

Note the file you are using has the extension __tpp__.
This is because you are using a template and it must be included in the header file.
To help designate the difference between implementation and template, the extension has been changed to `tpp`.

## Setting Code.CS Preferences

Code.CS has not been configured to format and code highlight the new template file.
Please add the following lines to your preferences file.
Open the file by going to __File->Settings->Open Preferences__.

```json
    "files.associations": {
        "*.tpp": "cpp"
    },
```

![](tpp_settings.png)

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. Implement the two versions of _reheap_ for a linked implementation in `reheap.tpp`.
    A stub of the function has been given to you.

    ```{c++}
    template <class ItemType>
    void HeapType<ItemType>::reheapDownIterative(int root, int bottom) {
        // TODO Implement a Iterative ReheapDown Function.
    }

    template <class ItemType>
    void HeapType<ItemType>::reheapUpIterative(int root, int bottom) {
        // TODO Implement a Iterative ReheapUp Function.
    }
    ```

2. Pass all the tests in Submitty.

## Test Driver

The book describes the operations of priority queues and heaps.
The Submitty tests are based on previous test drivers.
It may be helpful to create your test driver to validate your functions.

## Compiling List Implementations

Remember you only need to list the cpp files and must be in the local directory.
Since the header files are in the same folder they are included in the _#include_ statement.

The sample files provided don't provide a main or driver function.
If you want to test, you will need to create one.

## Test Driver

The Submitty tests use a test driver similar to the other homework.

In this assignment, you may find it helpful to create your test input for the driver to validate your functions.
A `main.cpp` has been provided to allow a user to run test input.
Please model the method we have used for homework 1 in creating your test input for the driver.

These are the complete menu options available:

```sh
Select options
 - Menu               Display menu.
 - Enqueue            Adds item to queue using recursion.
 - Dequeue            Removes item to queue using recursion.
 - EnqueueIterative   Adds item to queue using iteration.
 - DequeueIterative   Removes item to queue using iteration.
 - IsEmpty            Returns whether queue is empty.
 - MakeEmpty          Returns the queue to the empty state.
 - IsFull             Returns whether queue is full.
 - Quit               Quit application.
```

The code can be compiled by running the `make` command.

Example Input:

```sh
Menu
IsEmpty
Enqueue 5
EnqueueIterative 7
Dequeue
DequeueIterative
Quit
```

To test the code, run this command:

```sh
./queue.out
```

Resulting Standard Output:

```sh
Example Test
Select options
 - Menu               Display menu.
 - Enqueue            Adds item to queue using recursion.
 - Dequeue            Removes item to queue using recursion.
 - EnqueueIterative   Adds item to queue using iteration.
 - DequeueIterative   Removes item to queue using iteration.
 - IsEmpty            Returns whether queue is empty.
 - MakeEmpty          Returns the queue to the empty state.
 - IsFull             Returns whether queue is full.
 - Quit               Quit application.
Queue is empty.
5 is enqueued.
7 is enqueued (iterative).
7 is dequeued.
5 is dequeued (iterative).
Testing completed.

```

Resulting `log.txt`:

```sh
Menu command number 1 completed.
IsEmpty command number 2 completed.
Enqueue command number 3 completed.
EnqueueIterative command number 4 completed.
Dequeue command number 5 completed.
DequeueIterative command number 6 completed.
```

## Tips

* You create a text file with all the user input. Then when you run the program you may pass in this file as input.

  ```sh
  queue.out < sample.txt
  ```

  This is a good way to recreate your test each time you run your program.

## Submission

Your submission must include a `reheap.tpp` file.
All other files `.h` and `.cpp` should remain unchanged.
