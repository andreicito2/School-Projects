"""
Class: Movie

DO NOT EDIT FILE
Changes will not be considered during grading.
"""


class Movie:
    def __init__(self, name, rating):
        self.name = name
        self.rating = rating

    def movie_details(self):
        return "The {} has a rating of {}.".format(self.name, self.rating)
