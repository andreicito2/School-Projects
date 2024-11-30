"""
In-Class Exercise: Define a Rectangle class

File Name: rectangle.py
Course:    CPTR 142
"""


class Rectangle:
    def __init__(self):
        self.length = 0
        self.width = 0

    def get_area(self):
        return self.length * self.width

    def print_details(self):
        print("Rectangle is {} by {}.".format(self.length, self.width))

    def draw(self):
        for row in range(self.length):
            for col in range(self.width):
                print("#", end=" ")
            print()
            
    def __str__(self):
        return "Rectangle is {} by {}.".format(self.length, self.width)
    def __lt__(self,other):
        return self.get_area() < other.get_area()
