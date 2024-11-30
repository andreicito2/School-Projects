"""
Implement your function in the file file_to_list.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""
import csv_color

# test the function
color_file = "wwu_colors.csv"
hex_color = "#C7ae86"
print(
    "The Hex color {} is also {}.".format(
        hex_color,
        csv_color.get_rgb(hex_color, color_file),
    )
)
