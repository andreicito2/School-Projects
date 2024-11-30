"""
In-Class Exercise:  Find and fix the errors in the following Python
                    program so that it will compile and run 
                    as expected.

File Name: fix_me.py
Course:    CPTR 141
"""

# assign some variable values
a = int(input("Enter Value a: "))
b = int(input("Enter Value b: "))

# output several computations
print(" a + b =", a+b)
print(" a * b =", a*b)
print(" a / b =", a / b)

# assign a few more variables
college = "Walla Walla University"

# ask for and save graduation year
print("In what year will you graduate?")
grad_Year = int(input())

# output a sentence based on this input
print("You will graduate from ", college, " in ", grad_Year, ".")
