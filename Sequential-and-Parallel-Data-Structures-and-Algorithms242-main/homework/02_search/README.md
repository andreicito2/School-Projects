# CPTR 242: Searching Homework

## Problem Overview

Your task in this assignment is to implement two search functions with data stored in a vector.
Each search function will implement a different search algorithm: linear search and optimized linear search.
To better understand how these algorithms compare, you will count the number of comparisons made by each algorithm.
In addition, you will implement two functions to check if the vector meets the requirements of the search algorithm.

## Object Comparison

The data will be stored in a vector of objects called `ItemType`.
In a system with real data, information may not be easily compared.
Consider sorting a list of students.
Do you sort by name, age, height, or something else?
The object may include a function called `compareTo` to define how to compare to objects.
For this assignment, the two objects will be compared with each other using this function.

The result will be one of these values from the `enum RelationType`:

```c++
enum RelationType { LESS, GREATER, EQUAL };
```

Consider this example for doing the comparison between `item1` and `item2`.
Notice how a switch is used to jump to the comparison result.

```c++
switch (item1.ComparedTo(item2)) {
case LESS:
    // Do something for less than
    break;
case GREATER:
    // Do something for greater than
    break;
case EQUAL:
    // Do something for equal
    break;
}
```

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. Implement a __Linear Search__ with the implementation in `linear_search.cpp`.
     * See the `linear_search.h` for the function definition (`indexOf`).
2. Implement an __Optimized Linear Search__ over sorted data with the implementation in `binary_search.cpp`.
     * See the `optimized_linear_search.h` for the function definition (`indexOf`).
     * Include an early exit condition if you know the value will not be in the results.
3. Implement a __Linear Meets Requirements__ check if the algorithm will run on the list in `linear_search.cpp`.
     * See the `linear_search.h` for the function definition (`meetsRequirements`).
4. Implement an __Optimized Linear Meets Requirements__ check if the algorithm will run on the list in `optimized_linear_search.cpp`.
     * See the `optimized_linear_search.h` for the function definition (`meetsRequirements`).
5. Pass all the tests in Submitty.

## Test Driver

The Submitty tests use a test driver similar to the first homework.

In this assignment, you may find it helpful to create your test input for the driver to validate your functions.
A `main.cpp` and `menu.cpp` has been provided to allow a user to run test input.
Please model the method we have used for homework 1 in creating your test input for the driver.

These are the complete menu options available:

```txt
Select Option:
 - Menu                         Display menu.
 - LinearSupport                May use Linear Search Algorithm.
 - LinearSearch <key>           Uses Linear Search Algorithm to find key.
 - OptimizedLinearSupport       May use Optimized Linear Search Algorithm.
 - OptimizedLinearSearch <key>  Uses Optimized Linear Search Algorithm to find key.
 - LoadListFromFile <data>      Loads data stored in a text file
 - GetLength                    Returns size of list
 - MakeEmpty                    Clears List
 - PrintList                    Prints out list
 - Quit                         Quit application.
```

The code can be compiled by running the `make` command.

Example Input:

```sh
InputTest
LoadListFromFile list_micro.txt
PrintList
LinearSearch 2
OptimizedLinearSearch 2
LinearSearch 17
OptimizedLinearSearch 17
Quit
```

To test the code, run this command:

```sh
./search.out
```

Resulting Standard Output:

```sh
InputTest
list_micro.txt has loaded 5 items.
[11, 13, 17, 19, 23]
2 is not in list.
Linear search performed 5 comparisons.
2 is not in list.
Optimized linear search performed 1 comparisons.
17 was found at 3 in list.
Linear search performed 3 comparisons.
17 was found at 3 in list.
Optimized linear search performed 3 comparisons.
Enter name of test run; press return.
Quit
Testing completed.
```

Resulting `log.txt`:

```sh
LoadListFromFile Command number 1 completed.
PrintList Command number 2 completed.
LinearSearch Command number 3 completed.
BinarySearch Command number 4 completed.
LinearSearch Command number 5 completed.
BinarySearch Command number 6 completed.
```

**You will also find the solution in a `log.txt` file while the standard output is primarily for logging.**

## Tips

* Reference back to Zybooks *2.3 C++: Linear and binary search* as segments of code have been given to you.
* You create a text file with all the user input. Then when you run the program you may pass in this file as input.

  ```sh
  search.out < sample.txt
  ```

  This is a good way to recreate your test each time you run your program.

## Submission

Your submission must include a `linear_search.cpp` and `binary_search.cpp` files.
All other files _.h_ and _.cpp_ should remain unchanged.
