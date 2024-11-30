"""
Implement your function in the file caseless_sort.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""

import caseless_sort

# test the function
stock = ["screws", "Hammer", "Saw", "nails", "Tool belt", "Crowbar"]
print(
    "The inventory is:\n - Ascending: {}\n - Descending: {}".format(
        caseless_sort.ascending(stock),
        caseless_sort.descending(stock),
    )
)
