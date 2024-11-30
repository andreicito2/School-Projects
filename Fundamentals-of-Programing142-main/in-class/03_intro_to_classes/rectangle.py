"""
In-Class Exercise: Define a Rectangle class

File Name: rectangle.py
Course:    CPTR 142
"""

# TODO Create a Rectangle class
class rectangle:
    def __init__(self):
        self.width = 0
        self.length = 0
    def get_area(self):
       
        return (self.width * self.length)
    def print_rectangle(self):
        print(f"Width: {self.width}\nLength: {self.length}\nArea: {self.get_area()}")