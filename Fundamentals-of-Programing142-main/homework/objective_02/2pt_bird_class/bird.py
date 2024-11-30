"""
Class: Bird

DO NOT EDIT FILE
Changes will not be considered during grading.
"""

import animal


class Bird(animal.Animal):
    def __init__(self, gender, diet, feather_color):
        animal.Animal.__init__(self, gender, diet)
        self.feather_color = feather_color

    def __str__(self):
        return "I am a {} bird with {} feathers and have a {} diet.".format(
            self.gender, self.feather_color, self.diet
        )
