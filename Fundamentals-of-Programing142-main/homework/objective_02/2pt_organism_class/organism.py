"""
Class: Organism

DO NOT EDIT FILE
Changes will not be considered during grading.
"""


class Organism:
    def __init__(self, cell_count):
        self.multicellular = cell_count > 1
        self.unicellular = cell_count == 1

    def feed(self):
        return "I eat food."
