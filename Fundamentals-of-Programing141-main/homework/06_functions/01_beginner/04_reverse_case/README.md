# CPTR 141: Objective #6 (1 point)

## Problem Overview

Your task in this homework assignment is to write a function called `reverse_case` that takes a string as a parameter and returns the same string, but with all letters in the opposite case.  So, for example, "Python" would be retunred as "pYTHON".


## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a function `reverse_case` in the file `reverse_case.py` that takes a single string parameter.

2. The function must return the same string with all letters in the opposite case (i.e. upper case letters become lower case and lower case letters become upper case).

3. The file `reverse_case.py` should not contain a main program, it should only contain your function. To test your function, add code to the `reverse_case_test.py` file. Note that code in `reverse_case_test.py` will not be graded.

4. Below is an example of a call to the `reverse_case` function which you could implement in `reverse_case_test.py` to test your function.

    Python Code:
    ```python
    my_string = "AsfGhjJGd"
    result = reverse_case.reverse_case(my_string)
    print(result)
    ```

    Output:
    ```html
    aSFgHJjgD
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
