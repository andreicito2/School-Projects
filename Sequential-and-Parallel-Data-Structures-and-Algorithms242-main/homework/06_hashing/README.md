# CPTR 242: Hashing Homework

## Problem Overview

An open-addressing hash table with linear probing is built upon a vector of a known size.
When the table fills up or starts to have many collisions, it would be nice to increase the size of the vector.
Your task in this assignment is to implement a function to resize and grow the hash table to support more items.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. Implement __resizeTable__ for the open addressing hash table in `grow.cpp`.
    A stub of the function has been given to you.
1. The solution should continue to support looking up previous items and adding new items.
1. The __resizeTable__ should support both increasing or decreasing the table size.
1. Pass all the tests in Submitty.

## Test Driver

The Submitty tests use a test driver similar to the previous homework.

In this assignment, you may find it helpful to create your test input for the driver to validate your functions.
A `main.cpp` has been provided to allow a user to run test input.

These are the complete menu options available:
```sh
Menu options:
 - Menu                   Display menu.
 - PrintTable             Prints the contents of the table
 - AddItem <key> <value>  Add an item into the table
 - DeleteItem <key>       Deletes an item from the table
 - GetItem <key>          Get an item from the table
 - ResizeTable <size>     Resize table
 - Quit                   Quit application.
```

The code can be compiled by running the `make` command.

Example Input:

```sh
Menu
AddItem one 1
AddItem two 2
AddItem three 3
AddItem ten 10
PrintTable
AddItem nine 9
PrintTable
AddItem eight 8
PrintTable
AddItem seven 7
PrintTable
AddItem five 5
PrintTable
AddItem four 4
PrintTable
AddItem six 6
PrintTable
DeleteItem five
GetItem one
PrintTable
ResizeTable 20
PrintTable
Quit
```

To test the code, run this command:

```sh
./hash.out
```

Resulting Standard Output:

```sh
Example Test
Menu options:
 - Menu                   Display menu.
 - PrintTable             Prints the contents of the table
 - AddItem <key> <value>  Add an item into the table
 - DeleteItem <key>       Deletes an item from the table
 - GetItem <key>          Get an item from the table
 - ResizeTable <size>     Resize table
 - Quit                   Quit application.
1 was added to the list
2 was added to the list
3 was added to the list
10 was added to the list
9 was added to the list
8 was added to the list
7 was added to the list
5 was added to the list
4 was added to the list
6 was added to the list
0: eight, 8
1: four, 4
2: six, 6
3: seven, 7
4: one, 1
5: five, 5
6: three, 3
7: ten, 10
8: two, 2
9: nine, 9
6 was deleted from the list
List position was reset
0: eight, 8
1: four, 4
2: six, 6
3: seven, 7
4: one, 1
5: EMPTY_AFTER_REMOVAL
6: three, 3
7: ten, 10
8: two, 2
9: nine, 9
Table was resized
0: EMPTY_SINCE_START
1: EMPTY_SINCE_START
2: EMPTY_SINCE_START
3: EMPTY_SINCE_START
4: EMPTY_SINCE_START
5: EMPTY_SINCE_START
6: ten, 10
7: EMPTY_SINCE_START
8: eight, 8
9: EMPTY_SINCE_START
10: six, 6
11: EMPTY_SINCE_START
12: EMPTY_SINCE_START
13: seven, 7
14: four, 4
15: one, 1
16: three, 3
17: EMPTY_SINCE_START
18: two, 2
19: nine, 9
Quit
Testing completed
```

Resulting `log.txt`:

```sh
Menu command number 1 completed
AddItem command number 2 completed
AddItem command number 3 completed
AddItem command number 4 completed
AddItem command number 5 completed
AddItem command number 6 completed
AddItem command number 7 completed
AddItem command number 8 completed
AddItem command number 9 completed
AddItem command number 10 completed
AddItem command number 11 completed
PrintTable command number 12 completed
DeleteItem command number 13 completed
GetItem command number 14 completed
PrintTable command number 15 completed
ResizeTable command number 16 completed
PrintTable command number 17 completed
```

## Submission

Your submission must include the `grow.cpp` file.
All other `.h` and `.cpp` should remain unchanged.
