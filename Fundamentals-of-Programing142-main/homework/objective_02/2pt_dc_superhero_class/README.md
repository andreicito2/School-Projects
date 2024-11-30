# CPTR 142: Objective #2 (2 point)

## Problem Overview

Your task in this homework assignment is to create a derived class and extend the attributes and methods.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. Define a `Batman` class in `batman.py` python file that inherits the `DC_Superheros` class.

1. You must define a constructor that accepts four arguments:

    * a string for `hero_name` found in the base class
    * a list of strings for `parents` found in the base class
    * a string for `real_name` added in the derived class
    * a string for `symbol` added in the derived class

1. You must define a function named `reveal_identity` in the file `batman.py` which returns a string shown in the example below.

1. The file `batman.py` should not contain a main program, it should only contain your class.
   To test your class, add code to the `batman_test.py` file.
   Note that code in `batman_test.py` will not be graded.

1. Below is an example of a call to the `Batman.reveal_identity()` method which you could implement in `batman_test.py` to test your method.

    Python Code:
    
    ```python
    import batman

    test_parents = ["Thomas Wayne", "Martha Wayne"]
    test_superhero = "Batman"
    test_real_name = "Bruce Wayne"
    test_symbol = "bat"

    test_batman = batman.Batman(test_superhero, test_parents, test_real_name, test_symbol)
    print(test_batman.superhero_info())
    print(test_batman.reveal_identity())
    ```

    Output:
    ```html
    Batman's parents are Thomas Wayne and Martha Wayne.
    Batman's symbol is a bat and their real name is Bruce Wayne.
    ```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
