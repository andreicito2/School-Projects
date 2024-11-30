# CPTR 141: Objective #6 (4 point)

## Problem Overview

Your task in this homework assignment is to create two function that together implement the [k-Nearest Neighbors](https://en.wikipedia.org/wiki/K-nearest_neighbors_algorithm) machine learning algorithm in the case that k = 1. This algorithm is used to classify a data point with an unknown class based on the classes of its closest neighbors.

![](https://miro.medium.com/max/753/0*jqxx3-dJqFjXD6FA)


## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a function `get_distance(p1,p2)` in the file `nearest_neighbor.py` which takes two points (tuples with two numbers each) as arguments. The function should return the [distance between](https://www.omnicalculator.com/math/distance) those two points.

2. You must define a function `nearest_neighbor(p,data)` in the file `nearest_neighbor.py` which takes a single point `p` together with a list of tuples containing x and y values and a classification string and returns the classification string value of the point in the data set closest to the single point `p`.

4. The file `nearest_neighbor.py` should not contain a main program, it should only contain your functions. To test your functions, add code to the `nearest_neighbor_test.py` file.  Note that code in `nearest_neighbor_test.py` will not be graded.

4. Below are examples using these two functions which are implemented for you in `nearest_neighbor_test.py`.

    Python Code:
    ```python
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
    ```

    Output:
    ```html
    The distance from (2, 4) to (0,0) is 4.47 units
    The color of the nearest neighbor to (2, 4) is red
    ```

## Grade Specification

You will earn **four points** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
