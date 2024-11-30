"""
Class: Building

DO NOT EDIT FILE
Changes will not be considered during grading.
"""


class Building:
    def __init__(self, size=2500, cost=600000):
        self.size = size
        self.cost = cost

    def __str__(self):
        return "The building is {} square ft and costs ${}.".format(
            self.size, self.cost
        )
