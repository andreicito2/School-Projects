"""
Implement your function in the file sum_of_integers.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""

import sum_of_integers

# test the function
file_name = "numbers.txt"

print(
    "The sum of numbers in {} is {}".format(
        file_name, sum_of_integers.sum_of_integers(file_name)
    )
)
