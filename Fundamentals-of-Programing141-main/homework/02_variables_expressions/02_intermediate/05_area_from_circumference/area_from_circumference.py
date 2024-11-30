"""
Intermediate Problem: Create a program computes the area of a circle
                      with a given circumference

File Name: area_from_circumference.py
Name:      ?
Course:    CPTR 141
"""
import math
# Your code goes here
circ = float(input("Enter the circumference: "))
area = math.pi*math.pow(circ/(2*math.pi), 2)
print("\nThe area of the circle is {:.3f} when the circumference is {}.".format(area ,circ))