"""
Implement your function in the file global_max.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""


import global_max

vals = [
    [4, 2, 9, 5],
    [8, 2, 7, 10],
    [9, 10, 3, 1]
]

(row, col) = global_max.max_indices(vals)
print("The maximum value of {} first occurs at indices {} and {} in the 2D list.".format(
    vals[row][col],
    row,
    col
))
