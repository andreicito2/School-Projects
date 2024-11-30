# CPTR 141: Objective #6 (4 point)

## Problem Overview

Your task in this homework assignment is to create three function that operate on lists of numbers. 


## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a function `same_sign(number_list)` in the file `list_functions.py` which returns `True` if all elements of `number_list` have the same sign (all positive, all zero, or all negative) and `False` otherwise.

2. You must define a function `find_indexes(number, number_list)` in the file `list_functions.py` which returns a list of indexes at which `number` occurs in `number_list` in increasing order.

3. You must define a function `count_divisible(number, number_list)` in the file `list_functions.py` which returns the number of items in `number_list` which are divisible by `number`.

4. The file `list_functions.py` should not contain a main program, it should only contain your functions. To test your functions, add code to the `list_functions_test.py` file.  Note that code in `list_functions_test.py` will not be graded.

4. Below are examples using these three list functions which you could implement in `list_functions_test.py`.

    Python Code:
    ```python
    my_list = [4, 6, 8, 6]
    print(list_functions.same_sign(my_list))
    print(list_functions.find_indexes(6, my_list))
    print(list_functions.count_divisible(3, my_list))
    ```

    Output:
    ```html
    True
    [1, 3]
    2
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
