# CPTR 242: Homework nked List

## Problem Overview

Your task in this assignment is to implement __MinLoc__ and __Sort__ for an Unsorted List.
The function __MinLoc__ recursively searches for the smallest item in the list and returns its location.
The __Sort__ function uses __MinLoc__ to build a recursive sort function.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. Implement __MinLoc__ for the linked implementation in `min_sort.cpp`_`.
   A stub of the function has been given to you.
2. Implement __Sort__ for the linked implementation in `_min_sort.cpp`_`.
   A stub of the function has been given to you.
   The sort must use __MinLoc__ to perform the sort operation.
   _TIP:_ It is easier to move the value in info instead of re-ordering the list.
3. Pass all the tests in Submitty.

## Test Driver

The assignment builds on the previous methods of testing.
The Submitty tests are based on this test driver provided.
It may be helpful to create your test driver to validate your functions.

## Compiling List Implementations

A `Makefile` has been provided to compile your code.

```sh
make
```

You can run the test by executing the following:

```sh
./a.out < input_list_test.txt
```

The compiled files can be removed by running the following:

```sh
make clean
```

## Submission

Your submission must include a `min_sort.cpp` file.
All other  _.h_ and _.cpp_ files should remain unchanged.
