# CPTR 141: Objective #8 (1 point)

## Problem Overview

Your task in this homework assignment is to create two functions that sorts a list of strings without regard to the case of the characters in the string.  One function should sort it in ascending order and the other in descending order.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `ascending` in the file `caseless_sort.py` which takes one parameter representing the list strings to be sorted.

1. The function `ascending()` must return the the list sorted without regard to the case of the letters in the strings in ascending order.

1. You must then define a second function named `descending` in the file `caseless_sort.py` which takes one parameter representing the list of strings to be sorted.

1. The function `descending()` must return the list softed without regard to the case of the letters in the strings in descending order.

3. The file `caseless_sort.py` should not contain a main program, it should only contain your function. To test your function, add code to the `caseless_sort_test.py` file. Note that code in `caseless_sort_test.py` will not be graded.

4. Below is an example of a call to the `ascending` function which you could call in `caseless_sort_test.py` to test your function.

    Python Code:
    ```python
    import caseless_sort

    stock = ["screws", "Hammer", "Saw", "nails", "Tool belt", "Crowbar"]
    print("The inventory is:\n - Ascending: {}\n - Descending: {}".format(
        caseless_sort.ascending(stock),
        caseless_sort.descending(stock),
    ))
    ```

    Output:
    ```html
    The inventory is:
     - Ascending: ['Crowbar', 'Hammer', 'nails', 'Saw', 'screws', 'Tool belt']
     - Descending: ['Tool belt', 'screws', 'Saw', 'nails', 'Hammer', 'Crowbar']
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
