"""
Beginner Problem: Write a function that returns True if a given value is
                  in a provided interval.

File Name: in_range.py
Name:      ?
Course:    CPTR 141
"""

# Your code goes here
def in_range(value, interval):
    if interval[0] < value < interval[1]:
        return True
    else:
        return False 