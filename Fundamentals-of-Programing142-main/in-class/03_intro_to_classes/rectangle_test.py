"""
In-Class Exercise:  Test the Rectangle class

File Name: rectangle_test.py
Course:    CPTR 142
"""
import rectangle

my_rectangle = rectangle.rectangle()
print("RECTANGLE WIDTH: ",my_rectangle.width)
print("RECTANGLE length: ",my_rectangle.length)
my_rectangle.width = 5
my_rectangle.length = 7
print("RECTANGLE area:",my_rectangle.get_area())

print(f"The with is {my_rectangle.width} and the length is {my_rectangle.length} and the area is {my_rectangle.get_area()}")
print("\n")
my_rectangle.get_area()
my_rectangle.print_rectangle()