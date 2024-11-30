"""
Class: Employee

DO NOT EDIT FILE
Changes will not be considered during grading.
"""


class Employee:
    def __init__(self, name, company):
        self.name = name
        self.company = company

    def get_bio(self):
        return "My name is {} and I currently work at {}.".format(
            self.name, self.company
        )
