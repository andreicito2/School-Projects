"""
Beginner Problem: Write a function to returns the sum of
                  unicode code points for characters in a string.

File Name: code_sum.py
Name:      ?
Course:    CPTR 141
"""

# Your code goes here
def code_sum(string):
    sum1 = 0
    for i in range(len(string)):
        num = ord(string[i])
        sum1 += num
    return sum1