"""
Beginner Problem: Write a program that outputs the factorial of a given
                  non-negative integer.

File Name: factorial.py
Name:      ?
Course:    CPTR 141
"""
import math
# Your code goes here
ran = int(input("Enter the value for which you wish to find the factorial: "))
if ran >= 0:
    print(f"\n{ran}!", end=" = ")
    num = 1
    for i in range(1,ran+1):
        num *= i

    print(num)
else:
    print("\nError! Factorial does not exist for negative numbers.")