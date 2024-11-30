"""
Implement your function in the file nearest_neighbor.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""


import nearest_neighbor

# tuples are (x,y,category)
data = [
    (3, 4, 'red'),
    (7, 2, 'red'),
    (4, 4, 'red'),
    (5, 3, 'red'),
    (1, 5, 'blue'),
    (2, 6, 'blue'),
    (2, 1, 'blue'),
    (1, 3, 'blue')
]

# the point we are testing
unknown_point = (2, 4)

print("The distance from {} to (0,0) is {:0.2f} units".format(
    unknown_point,
    nearest_neighbor.get_distance(unknown_point, (0, 0))
))
print("The color of the nearest neighbor to {} is {}".format(
    unknown_point,
    nearest_neighbor.nearest_neighbor(unknown_point, data)
))
