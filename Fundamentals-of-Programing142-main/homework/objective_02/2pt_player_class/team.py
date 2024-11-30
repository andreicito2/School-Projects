"""
Class: Team

DO NOT EDIT FILE
Changes will not be considered during grading.
"""


class Team:
    def __init__(self, team_name):
        self.team_name = team_name

    def __str__(self):
        return "Team {}".format(self.team_name)
