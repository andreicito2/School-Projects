"""
Demonstration/Exercise: A factorial function

File Name: factorial.py
Course:    CPTR 141
"""

import factorial_fuction


n = int(input("Enter a number n: "))

val = factorial_fuction.factorial(n)
print("{}! = {}".format(n, val))
