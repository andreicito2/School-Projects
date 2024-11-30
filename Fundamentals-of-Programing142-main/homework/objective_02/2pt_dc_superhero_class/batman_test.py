"""
Implement your class in the file batman.py

Use this file to test your class. The code you write in this file will
not be graded.
"""

import batman

# test the class
test_parents = ["Thomas Wayne", "Martha Wayne"]
test_superhero = "Batman"
test_real_name = "Bruce Wayne"
test_symbol = "bat"

test_batman = batman.Batman(test_superhero, test_parents, test_real_name, test_symbol)
print(test_batman.superhero_info())
print(test_batman.reveal_identity())
