"""
Implement your function in the file point.py

Use this file to test your function. The code you write in this file will
not be graded.
"""


import point

point1 = point.Point(1, 1)
point2 = point.Point(1, 5)

print(
    "The distance between {} and {} is {}".format(
        point1, point2, point1.get_distance_to(point2)
    )
)
