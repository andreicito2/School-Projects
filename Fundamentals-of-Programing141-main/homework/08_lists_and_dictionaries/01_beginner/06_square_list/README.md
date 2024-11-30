# CPTR 141: Objective #8 (1 point)

## Problem Overview

Your task in this homework assignment is to create a function that takes a list of numbers and returns a new list consisting of the squares of the numbers in the original list, but does not change the original list.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `square_list` in the file `square_list.py` which takes one parameter, a list of numbers.

2. The function must use list comprehension to create a new list containing the squares of the original items (that is, `x * x` where `x` is an item in the original list.

3. The file `square_list` should not contain a main program, it should only contain your function. To test your function, add code to the
`square_list_test.py` file. Note that code in `square_list_test.py` will not be graded.

4. Below is an example of a call to the `square_list` function which you could implement in `square_list_test.py` to test your function.

    Python Code:
    ```python
    import square_list

    my_list = [1, 2, 3, 4, 5, 6]
    new_list = square_list.square_list(my_list)
    print("The lists are:\n - original: {}\n - new: {}".format(
        my_list, new_list
    ))
    ```

    Output:
    ```html
    The lists are:
     - original: [1, 2, 3, 4, 5, 6]
     - new: [1, 4, 9, 16, 25, 36]
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
