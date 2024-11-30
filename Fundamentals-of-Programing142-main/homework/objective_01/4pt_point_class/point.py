"""
Intermediate Problem: Define a 'Point' with two attributes, x and y.
    - Create a constructor that accepts two optional parameters 'x' and 'y'. Each defaults to 0.
    - Create a special instance method to return a formatted string "(x,y)"
    - Create a 'get_distance_to' instance method that returns the distance between itself
      and the single Point class parameter.

File Name: point.py
Name:      ?
Course:    CPTR 142
"""
import math
# Your code goes here
class Point:
    def __init__(self, x0=0,y0=0):
        self.x = x0
        self.y = y0
    


    def get_distance_to(self, other):
        return math.sqrt((other.x - self.x)**2 + (other.y - self.y)**2)

    def __str__(self):
        return (f"({self.x},{self.y})")

