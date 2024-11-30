"""
Implement your function in the file sum_on_list.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""

import sum_on_list

my_bound = 3
my_list = [5, 8, 2, 0, 3, 7, 4, 2]
print(
    "The sum of numbers above {} in {} is {}".format(
        my_bound, my_list, sum_on_list.sum_above(my_bound, my_list)
    )
)
