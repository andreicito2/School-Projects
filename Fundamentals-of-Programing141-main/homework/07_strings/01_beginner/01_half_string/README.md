# CPTR 141: Objective #7 (1 point)

## Problem Overview

Your task in this homework assignment is to create a function that returns either the first or last half of a provided string, depending on the parameters given.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `half_string` in the file `half_string.py` which takes a two parameters:

    i. a string to be cut in half as the first parameter

    ii. a number as the second parameter indicating if the first half (value 1) or second half (value 2) should be returned.

2. The function must return either the first half (from the first character through the middle of the string) or the second half (from the middle of the string through the end) depending on the value of the second parameter.  If the second parameter is neither 1 nor 2, then the function must return `False`.

3. The file `half_string` should not contain a main program, it should only contain your function. To test your function, add code to the `half_string_test.py` file. Note that code in `half_string_test.py` will not be graded.

4. Below is an example of a call to the `half_string` function which you could implement in `half_string_test.py` to test your function.

    Python Code:
    ```python
    my_string_1 = "Apple"
    my_string_2 = "Orange"
    print(
        "The first half of \"{}\" is \"{}\".\n".format(
            my_string_1, half_string.half_string(my_string_1, 1)
        ),
        "The second half of \"{}\" is \"{}\"".format(
            my_string_2, half_string.half_string(my_string_2, 2)
        )
    )
    ```

    Output:
    ```html
    The first half of "Apple" is "App".
    The second half of "Orange" is "nge".
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
