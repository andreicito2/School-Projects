"""
In-Class Exercise:  Test the Rectangle class

File Name: rectangle_test.py
Course:    CPTR 142
"""
import rectangle

rectangle1 = rectangle.Rectangle()
rectangle1.length = 2
rectangle1.width = 3
rectangle1.draw()

print()

rectangle2 = rectangle.Rectangle()
rectangle2.length = 3
rectangle2.width = 7
rectangle2.draw()

if rectangle1 < rectangle2:
    print("Rectangle 1 is smaller than 2")
else:
    print("Rectangle 2 is smaller than 1")