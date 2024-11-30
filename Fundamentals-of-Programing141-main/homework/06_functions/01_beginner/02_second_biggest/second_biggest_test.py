"""
Implement your function in the file second_biggest.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""

import second_biggest

# test the function
my_list = [-123, -54, 0, -5, -34, -19, -1]
print(
    "The second biggest value in {} is {}.".format(
        my_list, second_biggest.second_biggest(my_list)
    )
)
