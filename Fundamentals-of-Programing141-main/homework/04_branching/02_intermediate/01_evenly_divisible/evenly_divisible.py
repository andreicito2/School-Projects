"""
Beginner Problem: Create a program that determines if one number
                  divides evenly into another.

File Name: evenly_divisible.py
Name:      ?
Course:    CPTR 141
"""

# Your code goes here
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

if (num1 <= 0) or (num2 <= 0):
    print("\nError! Numbers must be positive.")
elif (num1 % num2) == 0:
    print("\nThe number {} divides evenly into {}.".format(num2, num1))
else:
    print("\nThe number {} does not divide into {} evenly.".format(num2,num1))