# CPTR 142: Objective #1 (4 points)

## Problem Overview

Your task in this homework assignment is to create a Point class that prints a nice string and can calculate the distance between two points.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a class `Point` in the file `point.py` with two attributes.

    * an integer for x with a default of 0
    
    * an integer for y with a default of 0

1. Create a three instance methods in the `Point` class.

    * a constructor that take two optional arguments for x and y

    * a `get_distance_to` instance method that take a single `Point` class parameter and returns the distance between itself and the parameter
       See <https://en.wikipedia.org/wiki/Euclidean_distance> for the two dimension distance formula.
    
    * a special instance method to return a formatted string "(x,y)" for the point object

1. The file `point.py` should not contain a main program, it should only contain your class. To test your class, add code to the `point_test.py` file. Note that code in `point_test.py` will not be graded.

1. Below is an example of a call to the `Point` class which you could implement in `point_test.py` to test your class.

    Python Code:
    ```python
    import point

    point1 = point.Point(1, 1)
    point2 = point.Point(1, 5)
    print(
        "The distance between {} and {} is {}".format(
            point1, point2, point1.get_distance_to(point2)
        )
    )
    ```

    Output:
    ```html
    The distance between (1,1) and (1,5) is 4.0
    ```

## Grade Specification

You will earn **four points** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
