"""
Implement your function in the file trace.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""


import trace

matrix_1 = [[5, 7], [10, 8]]
matrix_2 = [[5, 7, 9], [10, 4, 13]]

print(
    "The trace of {} is {}.\n".format(matrix_1, trace.trace(matrix_1)),
    "The trace of {} is {}.".format(matrix_2, trace.trace(matrix_2)),
    sep="",
)
