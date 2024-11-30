"""
Implement your function in the file half_string.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""


import half_string

# test the function
my_string_1 = "Apple"
my_string_2 = "Orange"
print(
    'The first half of "{}" is "{}".\n'.format(
        my_string_1, half_string.half_string(my_string_1, 1)
    ),
    'The second half of "{}" is "{}"'.format(
        my_string_2, half_string.half_string(my_string_2, 2)
    ),
)
