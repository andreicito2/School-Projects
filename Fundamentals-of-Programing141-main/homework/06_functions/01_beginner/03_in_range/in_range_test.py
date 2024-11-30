"""
Implement your function in the file in_range_test.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""

import in_range
 
# test the function
value = 12
interval = (15, 34)
if in_range.in_range(value, interval):
    print("{} is in the interval {}".format(value, list(interval)))
else:
    print("{} is not in the interval {}".format(value, list(interval)))
