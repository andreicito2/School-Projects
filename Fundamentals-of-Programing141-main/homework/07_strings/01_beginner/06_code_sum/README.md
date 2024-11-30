# CPTR 141: Objective #7 (1 point)

## Problem Overview

Your task in this homework assignment is to create a function that computes and returns the sum of the unicode codepoints of each character in the string.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `code_sum` in the file `code_sum.py` which takes one string parameter.

2. The function must return the numeric value equal to the some of the unicode code points for each character in the string.

3. The file `code_sum` should not contain a main program, it should only contain your function. To test your function, add code to the `code_sum_test.py` file. Note that code in `code_sum_test.py` will not be graded.

4. Below is an example of a call to the `code_sum` function which you could implement in `code_sum_test.py` to test your function.

    Python Code:
    ```python
    import code_sum

    my_str = "abc123"
    print(
        "The sum of the codepoints in \"{}\" is {}.".format(
            my_str,
            code_sum.code_sum(my_str)
        )
    )
    ```

    Output:
    ```html
    The sum of the codepoints in "abc123" is 444.
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
