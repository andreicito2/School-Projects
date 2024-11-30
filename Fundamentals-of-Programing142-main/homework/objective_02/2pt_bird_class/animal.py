"""
Class: Animal

DO NOT EDIT FILE
Changes will not be considered during grading.
"""


class Animal:
    def __init__(self, gender, diet):
        self.diet = diet
        self.gender = gender

    def __str__(self):
        return "I am a {} and have a {} diet.".format(self.gender, self.diet)
