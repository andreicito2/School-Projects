"""
Implement your function in the file target_sum.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""


import target_sum

first_list = [1, 2, 3, 4, 5]
second_list = [7, 6, 0, 10]
target = 4

print(sorted(target_sum.get_solutions(target, first_list, second_list)))
