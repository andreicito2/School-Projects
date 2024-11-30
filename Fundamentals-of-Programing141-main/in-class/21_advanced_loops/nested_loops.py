"""
In-Class Exercises:  Test two nested loops

File Name: nested_loops.py
Course:    CPTR 141
"""

# example #1: independent loops
for row in range(1, 6):
    for col in range(1, 6):
        print(row * col, end="\t")
    print()

# blank line between examples
print()

# example #2: correlated loops
for i in range(6):
    for j in range(i + 1):
        print("*", end=" ")
    print()
