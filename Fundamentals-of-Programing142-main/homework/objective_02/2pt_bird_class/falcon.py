"""
Expert Problem: Define a class name 'Falcon' that inherits `Bird`.
    Overwrite the '__str__' special method to match the README.

File Name: falcon.py
Name:      ?
Course:    CPTR 142
"""

# Your code goes here
import bird
class Falcon(bird.Bird):
    def __init__(self, gender, diet, feather_color, max_dive_speed):
        bird.Bird.__init__(self, gender, diet, feather_color)
        self.max_dive_speed = max_dive_speed

    def __str__(self):
        return (f"I am a {self.gender} bird with {self.feather_color} feathers, can fly at {self.max_dive_speed} speeds, and have a {self.diet} diet.")




