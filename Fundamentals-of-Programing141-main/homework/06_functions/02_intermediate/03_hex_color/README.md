# CPTR 141: Objective #6 (2 point)

## Problem Overview

Your task in this homework assignment is to create a function that returns `True` if a string matches is a valid hex color encoding.

Hex color notation is used by many different types of programs to specify a color using strings of either three or six alphanumeric characters.  To find out more about this notation, please see <https://www.color-hex.com/>.

## Hex Code Rules

A string is a valid hex color code if it meets the following requirements.

1. It must start with the "#" character

2. It must have either 3 or 6 additional characters after the "#".

3. These other characters must be numeric digits (0-9) or letters (upper- or lower-case) from "A" to "F".

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a function named `valid_hex_color` in the file `hex_color.py` which takes a single string parameter representing the hex color code.

2. The function must return `True` if the provided string is a hex color code and `False` if it is not.

3. The file `hex_color.py` should not contain a main program, it should only contain your functions.
    To test your functions, add code to the `hex_color_test.py` file. Note that code in `hex_color_test.py` will not be graded.

1. Below is an example that uses the `valid_hex_code` function which you could implement in `hex_color.py`.

    Python Code:
    ```python
    print("The hex code {} is {}.".format(
        "#1bc",
        "valid" if hex_color.valid_hex_color("#1bc") else "invalid")
    )
    ```

    Output:
    ```html
    The hex code #1bc is valid.
    ```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
