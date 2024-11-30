# CPTR 142: Objective #2 (1 point)

## Problem Overview

Your task in this homework assignment is to create a class that contains a "has-a" relationship.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a `Car` class in the file `car.py`.

1. You must define a constructor that takes an `Engine` parameter and saves it as an attribute.

1. You must define a special method named `__str__` in the file `car.py` which prints the car details, as shown below.

1. The file `car.py` should not contain a main program, it should only contain your class.
   To test your class, add code to the `car_test.py` file.
   Note that code in `car_test.py` will not be graded.

1. Below is an example of a call to the `Car.__str__` special method which you could implement in `car_test.py` to test your method.

    Python Code:
    
    ```python
    import car
    import engine

    four_cylinders = engine.Engine(4, "gas")
    car_test = car.Car(four_cylinders)
    print(car_test)
    ```

    Output:
    ```html
    The car has a 4 cylinder gas engine under the hood!
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
