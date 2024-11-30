# CPTR 142: Objective #1 (2 point)

## Problem Overview

Your task in this homework assignment is to create a class to hold a list of integers. The class should includes two methods to return only odd or even numbers.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a class `NumberList` in the file `number_list.py` with one attribute for the list of integers.

1. Create two instance methods in `NumberList`:

    * `get_even` returns a list of only the even numbers

    * `get_odd` returns a list of only the odd numbers

1. The file `number_list.py` should not contain a main program, it should only contain your class. To test your class, add code to the `number_list_test.py` file. Note that code in `number_list_test.py` will not be graded.

1. Below is an example of a call to the `NumberList` class which you could implement in `number_list_test.py` to test your class.

    Python Code:
    ```python
    import number_list

    test_list = [1, 2, 3, 4, 5, 6, 7, 8]
    my_list = number_list.Number_List(test_list)
    print(my_list.get_even())
    print(my_list.get_odd())
    ```

    Output:
    ```html
    [2, 4, 6, 8]
    [1, 3, 5, 7]
    ```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
