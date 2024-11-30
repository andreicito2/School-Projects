"""
Implement your function in the file date_format.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""


import date_format

# test the function
day = 15
month = 3
year = 2019

print(
    "Day {} of month {} of year {} can be formatted as:\n".format(day, month, year),
    " - Option 1: {}\n".format(date_format.date_format(day, month, year, 1)),
    " - Option 2: {}".format(date_format.date_format(day, month, year, 2)),
)
