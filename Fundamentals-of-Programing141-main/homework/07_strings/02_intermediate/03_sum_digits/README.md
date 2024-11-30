# CPTR 141: Objective #7 (2 point)

## Problem Overview

Your task in this homework assignment is to create a function that returns the sum of all digits (single-character numbers from 0-9) in a given string.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `sum_digits` in the file `sum_digits.py` which takes one parameter, a string.

2. The function must return the sum of all single-character numerical values in the string.  So, for example, the value returned for "testing123testing123" would be `1 + 2 + 3 + 1 + 2 + 3 = 12`.

3. The file `sum_digits` should not contain a main program, it should only contain your function. To test your function, add code to the `sum_digits_test.py` file.  Note that code in `sum_digits_test.py` will not be graded.

4. Below is an example of a call to the `sum_digits` function which you could implement in `sum_digits_test.py` to test your function.

    Python Code:
    ```python
    import sum_digits_test

    print(sum_digits.sum_digits("monitor123weekend09"))
    print(sum_digits.sum_digits("there are 3 dogs and 5 cats in my house"))
    ```

    Output:
    ```html
    15
    8
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
