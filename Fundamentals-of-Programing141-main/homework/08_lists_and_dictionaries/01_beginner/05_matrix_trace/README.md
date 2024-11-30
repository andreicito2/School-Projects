# CPTR 141: Objective #8 (1 point)

## Problem Overview

Your task in this homework assignment is to create a function that returns the trace of a square matrix represented by a 2D list, or returns `False` if the 2D list is not a square matrix.

The trace of a square matrix is the sum of the values on the main diagonal that starts in the upper left corner of the matrix and proceeds down to the bottom right corner.  That is, the elements in row 1 column 1, row 2 column 2, and so on through row n column n.

![Trace](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTSM2wL6vwYHKW0wd0JtitBCkrbPvQ0vlhAkkyVdFZKNbh3Y5Wis4_sC0_cDncnSplVbVg&usqp=CAU)

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `trace` in the file `trace.py` which takes one parameter, a two-dimensional list.

1. The function must return a trace matrix if the matrix is square, and otherwise return `False`.

1. The file `trace.py` should not contain a main program, it should only contain your function. To test your function, add code to the `trace_test.py` file. Note that code in `trace_test.py` will not be graded.

4. Below is an example of a call to the `trace` function which you could called in `trace_test.py` to test your function.

    Python Code:
    ```python
    import trace

    matrix_1 = [[5, 7], [10, 8]]
    matrix_2 = [[5, 7, 9], [10, 4, 13]]

    print(
        "The trace of {} is {}.\n".format(
            matrix_1, trace.trace(matrix_1)
        ),
        "The trace of {} is {}.".format(
            matrix_2, trace.trace(matrix_2)
        ),
        sep = ""
    )
    ```

    Output:
    ```html
    The trace of [[5, 7], [10, 8]] is 13.
    The trace of [[5, 7, 9], [10, 4, 13]] is False.
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
