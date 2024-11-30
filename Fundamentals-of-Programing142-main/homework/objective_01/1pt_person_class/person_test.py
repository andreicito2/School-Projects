"""
Implement your class in the file person_test.py

Use this file to test your class. The code you write in this file will
not be graded.
"""

import person

# test the class

adam = person.Person("Adam Toots", 61, 180.32)
print(
    "{} is {} inches tall and weights {} lbs.".format(
        adam.name, adam.height, adam.weight
    )
)
