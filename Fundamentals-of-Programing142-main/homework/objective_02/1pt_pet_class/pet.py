"""
Class: Pet

DO NOT EDIT FILE
Changes will not be considered during grading.
"""


class Pet:
    def __init__(self, name):
        self.name = name

    def __str__(self):
        return "My pet's name is {}".format(self.name)
