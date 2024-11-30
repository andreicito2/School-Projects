# CPTR 141: Objective #6 (1 point)

## Problem Overview

Your task in this homework assignment is to write a function called `sum_squared` that squares each number in a list and returns the sum of the newly squared elements.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a function `sum_squared` in the file `sum_squared.py` that takes a list of numbers as a parameter.

2. The function must square the items in the provided list and return the sum of those squared numbers.

3. The file `sum_squared.py` should not contain a main program, it should only contain your function. To test your function, add code to the `sum_squared_test.py` file. Note that code in `sum_squared_test.py` will not be graded.

4. Below is an example of a call to the `sum_squared` function which you could implement in `sum_squared_test.py` to test your function.

    Python Code:
    ```python
    my_list = [2, 3, 4]
    the_sum = sum_squared.sum_squared(my_list)
    print("The sum of {} is {}".format(my_list, the_sum))
    ```

    Output:
    ```html
    The sum of [4, 9, 16] is 29
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
