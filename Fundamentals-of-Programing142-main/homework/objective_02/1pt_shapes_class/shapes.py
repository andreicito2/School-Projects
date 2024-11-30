"""
Class: Shapes

DO NOT EDIT FILE
Changes will not be considered during grading.
"""


class Shapes:
    def __init__(self, color):
        self.color = color

    def __str__(self):
        return "The shape is {}.".format(self.color)
