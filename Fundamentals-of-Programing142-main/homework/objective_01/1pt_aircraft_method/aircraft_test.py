"""
Implement your class in the file aircraft.py

Use this file to test your class. The code you write in this file will
not be graded.
"""

import aircraft

# test the class
boeing = aircraft.Aircraft()
boeing.model = "Boeing 727"
boeing.capacity_limit = 189
print(boeing.get_statistics())
