"""
Expert Problem:  Define a 'Meeting' class three attributes 'title', 'start', and 'end'.
    - Define a constructor that takes three parameters:
        - a string for the title (required)
        - a string for start time with a default of "12:00"
        - a string for end time with a default of "13:00"
    - Use the special method `__str__` to define the string for the object.

File Name: meeting.py
Name:      ?
Course:    CPTR 142
"""


# Your code goes here
class Meeting:
    def __init__(self, title, start='12:00', end="13:00"):
        self.title = title
        self.start = start
        self.end = end
    def __str__(self):
        return (f"{self.title} starts at {self.start} and ends at {self.end}")
    