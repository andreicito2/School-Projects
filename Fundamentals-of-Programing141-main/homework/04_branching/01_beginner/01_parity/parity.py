"""
Beginner Problem:  Create a program that outputs if the number is even or odd.

File Name: parity.py
Name:      ?
Course:    CPTR 141
"""

# Your code goes here
val = int(input("Enter an integer: "))
if (val % 2) == 1:
    print("\nThe number {} is odd.".format(val))
else:
    print("\nThe number {} is even.".format(val))
