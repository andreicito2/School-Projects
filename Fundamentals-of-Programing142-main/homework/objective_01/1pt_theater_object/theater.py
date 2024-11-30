"""
Beginner Problem: Supplied class named 'Theater'

File Name: theater.py
Course:    CPTR 142
"""


class Theater:
    def __init__(self):
        self.movie_name = ""
        self.movie_time = "00:00"
        self.tickets_available = 0

    def __str__(self):
        if self.movie_name == "":
            return "The theater object contains empty data attributes"
        else:
            return "{} starts at {} and there are only {} tickets available.".format(
                self.movie_name, self.movie_time, self.tickets_available
            )
