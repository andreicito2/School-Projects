"""
Intermediate Problem: Create a program that outputs the hypotenuse

File Name: hypotenuse.py
Name:      ?
Course:    CPTR 141
"""
import math
# Your code goes here
leg_a = float(input("Enter leg A length: "))
leg_b = float(input("Enter leg B length: "))
leg_c = math.sqrt((math.pow(leg_a, 2))+(math.pow(leg_b, 2)))

print("\nThe hypotenuse of a right triangle with leg lengths", int(leg_a), "and", int(leg_b), "is", "{:.3f}".format(leg_c)+".")