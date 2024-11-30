""""
Implement your function in the file max_in_string.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""


import max_in_string

test_string = "House:Balloon:Awesome:Code"

print(
    'The maximum value in "{}" is "{}".'.format(
        test_string, max_in_string.max_in_string(test_string, ":")
    )
)
