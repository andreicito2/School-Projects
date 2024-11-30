# CPTR 141: Objective #7 (1 point)

## Problem Overview

Your task in this homework assignment is to create a function that finds and returns the largest value in a string that contains a list of values separated by a specific character.  For example, given the string

```text
"67,25,70,40,15"
```

and the separator character `,`, your function would return the value 70.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `max_in_string` in the file `max_in_string.py` which takes two parameters:

    i. the string to be searched for a maximum value
    
    ii. the character to be used as a separator

1. The function must return the largest value (as determined by Python's built-in ordering) from the list you get when you split the strong up on the provided separator character.

1. The file `max_in_string.py` should not contain a main program, it should only contain your function. To test your function, add code to the `max_in_string_test.py` file. Note that code in `max_in_string_test.py` will not be graded.

4. Below is an example of a call to the `max_in_String` function which you could implement in `max_in_string_test.py` to test your function.

    Python Code:
    ```python
    test_string = "House:Balloon:Awesome:Code"

    print(
        "The maximum value in \"{}\" is \"{}\".".format(
            test_string, max_in_string.max_in_string(test_string, ':')
        )
    )
    ```

    Output:
    ```html
    The maximum value in "House:Balloon:Awesome:Code" is "House".
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
