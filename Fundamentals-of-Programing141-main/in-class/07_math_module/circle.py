"""
In-Class Exercise:  Compute the circumference of a circle for a given radius

File Name: circle.py
Course:    CPTR 141
"""

import math
# Calculate circumference of a circle

r = float(input("Inter the radius: "))

c = 2 * math.pi * r

print("This is the circumference: ", c)
print("The area is", math.pi * math.pow(r, 2))

# Given the area of a circle, calculate the radius

a = float(input("Enter the Area: "))

r = math.sqrt(a / math.pi)
print("The radius is:", "{:.2f}".format(r))