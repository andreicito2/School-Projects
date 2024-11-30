# CPTR 141: Objective #7 (1 point)

## Problem Overview

Your task in this homework assignment is to create a function that returns one of two standard date formats for a given day, month, and year.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `date_format` in the file `date_format.py` which takes four parameters in the following order.

    i. The day of the month (a number from 1-31) to be formatted as two digits `dd`

    ii. The month of the year (a number from 1-12) to be formatted as two digits `mm`

    iii. The year (a non-negative integer) to be formatted as four digits `yyyy`

    iv. The format type (either 1 or 2)


2. The function must return a string in the format `mm/dd/yyyy` if the format type is `1` or `yyyy-mm-dd` if the format type is `2`.  If the format type is anything other than `1` or `2` or if the day, month, or year are outside of the allowed ranges, the function must return `False`.

3. The file `date_format` should not contain a main program, it should only contain your function. To test your function, add code to the `date_format_test.py` file. Note that code in `date_format_test.py` will not be graded.

4. Below are examples of calls to the `date_format` function which you could implement in `date_format_test.py` to test your function.

    Python Code:
    ```python
    day = 15
    month = 3
    year = 2019

    print(
        "Day {} of month {} of year {} can be formatted as:\n".format(
            day, month, year
        ),
        " - Option 1: {}\n".format(date_format.date_format(day, month, year, 1)),
        " - Option 2: {}".format(date_format.date_format(day, month, year, 2))
    )
    ```

    Output:
    ```html
    Day 15 of month 3 of year 2019 can be formatted as:
      - Option 1: 15/03/2019
      - Option 2: 2019-03-15
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
