"""
Class: Theater

DO NOT EDIT FILE
Changes will not be considered during grading.
"""


class Theater:
    def __init__(self, building_name):
        self.building_name = building_name

    def welcome(self):
        return "Welcome to the {} Cinema!".format(self.building_name)
