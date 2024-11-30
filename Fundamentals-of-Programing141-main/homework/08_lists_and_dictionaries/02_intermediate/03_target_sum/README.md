# CPTR 141: Objective #8 (2 point)

## Problem Overview

Your task in this homework assignment is to create a function called `target_sum` that returns a list of pairs of numbers from two provided lists that add to the provided target sum.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `get_solutions` in the file `target_sum.py` which takes three parameters:

    i. a number which is the target sum
    
    ii. a list of possible values for the first term of the sum
    
    iii. a list of possible values for the second term of the sum.

1. The function must return a list containing all possible tuples composed of a number from the first list and a number from the second list which add to the target sum.

3. The file `target_sum` should not contain a main program, it should only contain your function. To test your function, add code to the `target_sum.py` file. Note that code in `target_sum_test.py` will not be graded.

4. Below is an example of a call to the `get_solutions` function which you could implement in `target_sum_test.py` to test your function.

    Python Code:
    ```python
    import target_sum

    first_list = [1, 2, 3, 4, 5]
    second_list = [3, -1, 0, 2]
    target = 4

    print(sorted(
        target_sum.get_solutions(target, first_list, second_list)
    ))
    ```

    Output:
    ```html
    [(1, 3), (2, 2), (4, 0), (5, -1)]
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
