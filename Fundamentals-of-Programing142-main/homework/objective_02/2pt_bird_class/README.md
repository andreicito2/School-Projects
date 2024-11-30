# CPTR 142: Objective #2 (2 point)

## Problem Overview

Your task in this homework assignment is to create derived class that access attributes from its base classes.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. Define a `Falcon` class in `falcon.py` python file that inherits the `Bird` class.

1. You must define a constructor that accepts four arguments:

    * a string for `gender` found in the base class
    * a string for `diet` found in the base class
    * a string for `feather_color` found in the base class
    * a integer for `max_dive_speed` added in the derived class

1. You must overwrite the `__str__` special instance method return a string like the example below.

1. The file `falcon.py` should not contain a main program, it should only contain your class.
   To test your class, add code to the `falcon_test.py` file.
   Note that code in `falcon_test.py` will not be graded.

1. Below is an example of a call to the `Falcon.__str__()` method which you could implement in `falcon_test.py` to test your method.

    Python Code:
    ```python
    import falcon

    test_falcon = falcon.Falcon("female", "meat-eater", "brown", 200)
    print(test_falcon)
    ```

    Output:
    ```html
    I am a female bird with brown feathers, can fly at 200 speeds, and have a meat-eater diet.
    ```

## Grade Specification

You will earn **two points** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
