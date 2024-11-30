# CPTR 142: Objective #1 (1 point)

## Problem Overview

Your task in this homework assignment is to write a function returns the `Theater` object.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a function `get_theater` in the file `theater_function.py` that takes a three parameters.

    * a string for the movie name

    * a string for the movie time

    * an integer for the number of available tickets

1. The function must return the `Theater` object.
   The theater attributes must be set in the `get_theater` function

1. The file `theater_function.py` should not contain a main program, it should only contain your function. To test your function, add code to the `theater_test.py` file. Note that code in `theater_test.py` and `theater.py` will not be graded.

1. Below is an example of a call to the `get_theater` function which you could implement in `theater_test.py` to test your function.

    Python Code:
    ```python
    import theater_function

    test_theater = theater_function.get_theater("The Awful Truth", "7:30 PM", 96)
    print(test_theater)

    ```

    Output:
    ```html
    The Awful Truth starts at 7:30 PM and there are only 96 tickets available.
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
