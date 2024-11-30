"""
Beginner Problem: Write a program that prints the sum of two command-line arguments.

File Name: command_line_sum.py
Name:      ?
Course:    CPTR 141
"""


# Write your function here
import sys
#sys.argv


if len(sys.argv) != 3:
    print("Error! Please provide exactly two arguments.")
    sys.exit(1)

num1 = int(sys.argv[1])
num2 = int(sys.argv[2])
num3  = num1 + num2
print(f"The sum of {sys.argv[1]} and {sys.argv[2]} is {num3}.")
'''
else:
    print(f"The sum of {sys.argv[1]} and {sys.argv[2]} is {sys.argv[1] + sys.argv[2]}.")
'''