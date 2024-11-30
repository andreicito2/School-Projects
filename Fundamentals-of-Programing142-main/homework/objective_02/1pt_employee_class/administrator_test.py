"""
Implement your class in the file administrator.py

Use this file to test your class. The code you write in this file will
not be graded.
"""

import administrator

# Testing Administrator get_bio()
administrator_test = administrator.Administrator(
    "John Apples", "Tesla", "Head Software Engineer"
)
print(administrator_test.get_bio())
print(administrator_test.position)
