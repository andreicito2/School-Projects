"""
Beginner Problem: Write a function that returns the largest value in a string
                  that contains values separated by a given character.

File Name: max_in_string.py
Name:      ?
Course:    CPTR 141
"""


# write your code here
def max_in_string(string, fun):
    string = string.split(fun)
    string.sort(reverse=True)
    return string[0]