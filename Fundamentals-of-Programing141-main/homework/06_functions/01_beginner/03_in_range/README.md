ode # CPTR 141: Objective #6 (1 point)

## Problem Overview

Your task in this homework assignment is to write function that returns `True` if a provided value is in the range indicated by a tuple representing an interval `(a,b)` -- meaning that the value is greater than or equal to `a` and less than or equal to `b`.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a function `in_range` in the file `in_range.py` that takes two parameters:

    i. a value as the first parameter (we will call it `x`)

    ii. a tuple with two entries as the second parameter (we will call it `(a,b)`)

2. The function must return `True` if `x` is between `a` and `b` inclusively, and `False` otherwise.

3. The file `in_range.py` should not contain a main program, it should only contain your function.  To test your function, add code to the `in_range_test.py` file.  Note that code in `in_range_test.py` will not be graded.

4. Below is an example of a call to the `in_range` function which you could implement in `in_range_test.py` to test your function.

    Python Code:
    ```python
    value = 10
    interval = (-2, 34)
    if in_range.in_range(value,interval):
        print("{} is in the interval {}".format(value,list(interval)))
    else:
        print("{} is not in the interval {}".format(value,list(interval)))
    ```

    Output:
    ```html
    10 is in the interval [-2, 34]
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
