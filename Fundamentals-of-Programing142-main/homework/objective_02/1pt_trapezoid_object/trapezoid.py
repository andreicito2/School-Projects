"""
Class: Trapezoid

DO NOT EDIT FILE
Changes will not be considered during grading.
"""


class Trapezoid:
    def __init__(self, base_a, base_b, height):
        self.base_a = base_a
        self.base_b = base_b
        self.height = height

    def area(self):
        result = round(((self.base_a + self.base_b) / 2) * self.height, 2)
        return result
