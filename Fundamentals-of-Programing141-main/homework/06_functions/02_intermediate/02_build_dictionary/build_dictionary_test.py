"""
Implement your function in the file build_dictionary.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""


import build_dictionary

# lists
names = ["Jack", "Daniel", "Emma", "Sofia", "Billy", "Sam", "Samantha", "Tim"]
grades = [68.98, 77.34, 62.53, 97.23, 90.54, 44.23, 84.34, 69.96]

# test the commbine function
gradebook = build_dictionary.combine(names, grades)
if gradebook:
    print(gradebook)
else:
    print("Error!")
