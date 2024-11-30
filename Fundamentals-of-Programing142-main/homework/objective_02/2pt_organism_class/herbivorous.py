"""
Class: Herbivorous

DO NOT EDIT FILE
Changes will not be considered during grading.
"""


import organism


class Herbivorous(organism.Organism):
    def __init__(self, species):
        organism.Organism.__init__(self, 20000000)
        self.species = "species"

    def feed(self):
        return "I am a {} species meaning I do not eat meat.".format(self.species)
