# CPTR 141: Objective #9 (1 point)

## Problem Overview

Your task in this homework assignment is to create a function that given a HEX css color will return the RGB string using a CSV file to look up the color.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a function named `get_rgb` in the file `csv_color.py` which takes two parameters:

    i. a string representing the HEX color

    ii. a string representing the name of the CSV file

2. The function must return a string for the RGB color _RGB(77,88,99)_ where 77 is the red, 88 is th blue and 99 is the red color for the HEX css color argument.  If the color is not found in the file, then the function should return the string `"HEX color not found."`

3. The file `get_rgb` should not contain a main program, it should only contain your function. To test your function, add code to the
`csv_color_test.py` file. Note that code in `csv_color_test.py` will not be graded.

4. Below is an example of a call to the `get_rgb` function which you could implement in `csv_color_test.py` to test your function.

Python Code:
```python
import csv_color

color_file = "wwu_colors.csv"
hex_color = "#C7ae86"
print(
    "The Hex color {} is also {}.".format(
        hex_color,
        csv_color.get_rgb(hex_color, color_file),
    )
)
```

Output:
```html
The Hex color #C7ae86 is also RGB(199,174,134).
```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).

[Submitty Grader](https://submitty.cs.wallawalla.edu/courses/fall21/cptr141/gradeable/obj9-1pt-05)
