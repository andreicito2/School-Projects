"""
Beginner Problem: Define a 'Aircraft' class name.
    Create 'get_statistics' instance method that uses two class attributes: 'model' and
    'capacity_limit' to return a string that following format as seen in the README.md

File Name: aircraft.py
Name:      ?
Course:    CPTR 142
"""

# Your code goes here
class Aircraft:
    def __init__(self):
        self.model = 0
        self.capacity_limit = 0 

    def get_statistics(self):
        return (f"The aircraft model {self.model} can hold up to {self.capacity_limit} passengers.")