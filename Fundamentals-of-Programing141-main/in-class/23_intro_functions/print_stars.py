"""
In-Class Example: Working with Functions

File Name: sprint_stars.py
Course:    CPTR 141
"""

# original function
def print_stars(n):
    for i in range(n):
        print("*", end="")

def print_symbols(num,symbols, endLine):
    for j in range(num):
        print(symbols, end="")
    if endLine:
        print()

# Test your functions in the main program
print_stars(2 + 3)
print()
print_symbols(3,"=",True)
print_symbols(4,"-",False)
print()