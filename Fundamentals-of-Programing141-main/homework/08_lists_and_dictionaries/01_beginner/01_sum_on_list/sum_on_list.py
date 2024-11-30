"""
Beginner Problem: Create a function that returns the sum of values in a list which
                  are greater than a provided lower bound.

File Name: sum_on_list.py
Name:      ?
Course:    CPTR 141
"""

# Define Your Function Here
def sum_above(bound, lists):
    new_list = [num for num in lists if num > bound]
    number = sum(new_list)
    return number