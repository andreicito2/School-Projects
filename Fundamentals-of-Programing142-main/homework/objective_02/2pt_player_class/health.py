"""
Class: Health

DO NOT EDIT FILE
Changes will not be considered during grading.
"""


class Health:
    def __init__(self, health_value):
        self.health_value = health_value

    def wounded(self, damage):
        self.health_value -= damage
        if self.health_value <= 0:
            print("You ran out of health points, you went to sleep.")
        else:
            print(
                "You have taken {} damage, you have {} health points left.".format(
                    damage, self.health_value
                )
            )

    def __str__(self):
        return "Health: {}".format(self.health_value)
