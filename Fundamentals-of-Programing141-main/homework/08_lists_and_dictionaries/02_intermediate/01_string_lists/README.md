# CPTR 141: Objective #8 (2 point)

## Problem Overview

Your task in this homework assignment is to create a function that converts all entries in a two-dimensional nested list into lower case. 

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `to_lower` in the file `string_lists.py` which takes as a single parameter a nested list of strings.

1. The function must return a new list with the same structure but with all elements of the inner lists converted into lower case.

1. The file `to_lower` should not contain a main program, it should only contain your function. To test your function, add code to the `string_lists_test.py` file. Note that code in `string_list_test.py` will not be graded.

1. Below is an example of a call to the `to_lower` function which you could call in `string_lists_test.py` to test your function.

    Python Code:
    ```python
    import string_lists

    seating_chart = [
        ["John", "Jane", "June"],
        ["Poole", "Pressly", "Page"],
        ["Carrie", "Christen", "Cass"],
    ]
    print(string_lists.to_lower(seating_chart))
    ```

    Output:
    ```html
    [['john', 'jane', 'june'], ['poole', 'pressly', 'page'], ['carrie', 'christen', 'cass']]
    ```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
