"""
Implement your function in the file bmi.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""


import bmi

index = bmi.compute_bmi(65, 130)
print(
    "Subject's BMI is {:.2f} which is classified as {}.".format(
        index, bmi.categorize_bmi(index)
    )
)
