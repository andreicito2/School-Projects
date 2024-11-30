"""
Class: DC Superheros

DO NOT EDIT FILE
Changes will not be considered during grading.
"""


class DC_Superheros:
    def __init__(self, hero_name, parents):
        self.hero_name = hero_name
        self.parents = parents

    def superhero_info(self):
        return "{}'s parents are {} and {}.".format(
            self.hero_name, self.parents[0], self.parents[1]
        )
