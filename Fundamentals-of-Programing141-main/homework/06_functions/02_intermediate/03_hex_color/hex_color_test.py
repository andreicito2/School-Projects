"""
Implement your function in the file hex_color.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""


import hex_color

print(
    "The hex code {} is {}.".format(
        "#1bc", "valid" if hex_color.valid_hex_color("#1bc") else "invalid"
    )
)
