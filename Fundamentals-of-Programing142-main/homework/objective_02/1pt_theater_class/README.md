# CPTR 142: Objective #2 (1 point)

## Problem Overview

Your task in this homework assignment is to create a class that inherits multiple base classes.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must create `Show_Time` class in the `show_time.py` file that inherits both the `Movie` and `Theater` classes.

1. You must create a constructor that accepts three arguments `building_name`, `movie_name`, and `rating`. Use these values to assign the attributes in the base classes.

1. The file `show_time.py` should not contain a main program, it should only contain your class.
   To test your class, add code to the `show_time_test.py` file.
   Note that code in `show_time_test.py` will not be graded.

1. Below is an example set of calls to the `Show_Time` class which you could implement in `show_time_test.py` to test your implementation.

    Python Code:
    
    ```python
    import show_time
    
    test_show_time = show_time.Show_Time("AMC", "Avengers", 5.0)
    print(test_show_time.welcome())
    print(test_show_time.movie_details())
    ```

    Output:
    ```html
    Welcome to the AMC Cinema!
    The Avengers has a rating of 5.0.
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
