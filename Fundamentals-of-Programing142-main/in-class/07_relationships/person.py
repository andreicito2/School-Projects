import unittest

class Person:
    """
    Simple class for modelling a person
    """

    def __init__(self, name):
        """Every person has a Name property"""
        self.name = name

    def think(self):
        """Every person has the ability to think (behavior)"""
        return "{} is thinking...".format(self.name)

class PersonTest(unittest.TestCase):
    