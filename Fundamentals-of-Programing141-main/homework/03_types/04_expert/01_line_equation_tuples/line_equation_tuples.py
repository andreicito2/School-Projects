"""
Expert Problem: Create a program that prompts the user for two (x,y) points,
                stores them as tuples, and then computes the equation of a
                line through those points.

File Name: line_equation_tuples.py
Name:      ?
Course:    CPTR 141
"""

# Your code goes here
print("Enter First Point\n=================")
x_point_one = float(input("x-coordinate: "))
y_point_one = float(input("y-coordinate: "))
point_one = (x_point_one, y_point_one)
print("Point #1 is {}".format(point_one))

print("\nEnter Second Point\n==================")
x_point_two = float(input("x-coordinate: "))
y_point_two = float(input("y-coordinate: "))
point_two = (x_point_two, y_point_two)
print("Point #2 is {}".format(point_two))

print("\nEquation\n========")
print("The equation of the line through the points {} and {} is:".format(point_one, point_two))
m = (y_point_two - y_point_one)/(x_point_two-x_point_one)
b = y_point_one - (m * x_point_one)
print("y = {:.2f}x + ({:.2f})".format(m, b))