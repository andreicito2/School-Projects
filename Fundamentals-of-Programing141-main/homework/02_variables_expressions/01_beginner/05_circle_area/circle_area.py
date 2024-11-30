"""
Beginner Problem:  Create a program that outputs the area of a circle

File Name: circle_area.py
Name:      ?
Course:    CPTR 141
Enter the radius: 4

The area of the circle is 50.265 when the radius is 4.0.
"""
import math
# Your code goes here
rad = float(input("Enter the radius: "))
area = math.pi * math.pow(rad, 2)
print("\nThe area of the circle is", "{:.3f}".format(area), "when the radius is", str(rad)+".") #"{:.2f}".format(rad)+".")

