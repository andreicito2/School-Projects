# CPTR 142: Objective #1 (1 point)

## Problem Overview

Your task in this homework assignment is to create a class with a constructor.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a class `Person` in the file `person.py`. The constructor must that take three parameters:

    * a string for the person's name saved to the `name` attribute

    * an integer for the person's height saved to the `height` attribute

    * a float for the person's weight saved to the `weight` attribute

1. The file `person.py` should not contain a main program, it should only contain your class.  To test your class, add code to the `person_test.py` file.  Note that code in `person_test.py` will not be graded.

1. Below is an example of a call to the `person` class which you could implement in `person_test.py` to test your class.

    Python Code:
    ```python
    import person

    adam = person.Person("Adam Toots", 61, 180.32)
    print(
        "{} is {} inches tall and weights {} lbs.".format(
            adam.name, adam.height, adam.weight
        )
    )
    ```

    Output:
    ```html
    Adam Toots is 61 inches tall and weights 180.32 lbs.
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
