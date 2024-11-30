# CPTR 141: Objective #8 (1 point)

## Problem Overview

Your task in this homework assignment is to create a function that returns the sum of all numbers in a list that are greater than a given lower bound.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a function named `sum_above` in the file `sum_on_list.py` which takes two parameter:

    i. the lower bound value above which you wish to sum
    
    ii. a list of numbers

1. The function must use **list comprehension** with a condition to calculate the sum of the numbers in the provided list which are greater than the given lower bound.

1. The file `sum_on_list` should not contain a main program, it should only contain your function. To test your function, add code to the
`sum_on_list_test.py` file. Note that code in `sum_on_list_test.py` will not be graded.

1. Below is an example of a call to the `sum_above` function which you could implement in `sum_on_list_test.py` to test your function.

    Python Code:
    ```python
    import sum_on_list

    my_bound = 3
    my_list = [5, 8, 2, 0, 3, 7, 4, 2]
    print(
        "The sum of numbers above {} in {} is {}".format(
            my_bound, my_list, sum_on_list.sum_above(my_bound, my_list)
        )
    )
    ```

    Output:
    ```html
    The sum of numbers above 3 in [5, 8, 2, 0, 3, 7, 4, 2] is 24
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
