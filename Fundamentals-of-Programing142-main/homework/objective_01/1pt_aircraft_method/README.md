# CPTR 142: Objective #1 (1 point)

## Problem Overview

Your task in this homework assignment is to create an instance method in the `Aircraft` class that returns the aircraft statistics.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a function named `get_statistics` in the file `aircraft.py` which returns a formatted string containing the aircraft attributes `model` and `capacity_limit`, as shown below.

1. The file `aircraft.py` should not contain a main program, it should only contain your class.  To test your class, add code to the `aircraft_test.py` file.  Note that code in `aircraft_test.py` will not be graded.

1. Below is an example of a call to the `Aircraft.get_statistics()` method which you could implement in `aircraft_test.py` to test your method.

    Python Code:
    
    ```python
    boeing = aircraft.Aircraft()
    boeing.model = "Boeing 727"
    boeing.capacity_limit = 189
    print(boeing.get_statistics())
    ```

    Output:
    ```html
    The aircraft model Boeing 727 can hold up to 189 passengers.
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
