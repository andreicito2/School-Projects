"""
Implement your class in the file player.py

Use this file to test your class. The code you write in this file will
not be graded.
"""

import player

test_player = player.Player("Red", 100, "Darius")
print(test_player)
print(test_player.details())

# Prints out damage taken
test_player.wounded(10)

# Prints out damage exceeding health_value
test_player.wounded(90)
