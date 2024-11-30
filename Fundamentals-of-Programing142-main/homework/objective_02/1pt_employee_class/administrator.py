"""
Beginner Problem: Create an "Administrator" class that inherits class "Employee".
    Include a constructor that utilizes "Employee" but accepts an additional argument of "position".

File Name: administrator.py
Name:      ?
Course:    CPTR 142
"""


# Your code goes here
import employee

class Administrator(employee.Employee):
    def __init__(self, name, company, position):
        super().__init__(name, company)
        self.position = position
        