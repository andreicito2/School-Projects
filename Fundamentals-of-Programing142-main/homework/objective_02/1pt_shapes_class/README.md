# CPTR 142: Objective #2 (1 point)

## Problem Overview

Your task in this homework assignment is to create a derived class that overrides an instance method in the base class.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must declare `Rectangle` class in the file `rectangle.py` that inherit the `Shape` class.

2. You must define a special method named `__str__` which  overrides the base method. The output should match the example below.

1. The file `rectangle.py` should not contain a main program, it should only contain your class.  
   To test your class, add code to the `rectangle_test.py` file.
   Note that code in `rectangle_test.py` will not be graded.

1. Below is an example of a call to the `rectangle.__str__()` method which you could implement in `rectangle_test.py` to test your method.

    Python Code:
    
    ```python
    import shapes
    
    rectangle_test = rectangle.Rectangle("green")
    print(rectangle_test)
    ```

    Output:
    ```html
    The rectangle is green.
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
