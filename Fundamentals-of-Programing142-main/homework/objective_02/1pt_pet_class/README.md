# CPTR 142: Objective #2 (1 point)

## Problem Overview

Your task in this homework assignment is to create a derived class that extends an instance method in the base class.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a `Dog` class in the file `dog.py` which inherits `Pet`.

1. You must extend the special method named `__str__` in the file `dog.py` which to create the output in the example below.

1. The file `dog.py` should not contain a main program, it should only contain your class.
   To test your class, add code to the `dog_test.py` file.
   Note that code in `dog_test.py` will not be graded.

1. Below is an example of a call to the `dog.__str__()` method which you could implement in `dog_test.py` to test your method.

    Python Code:
    
    ```python
    import dog

    dog_test = dog.Dog("Boots")
    print(dog_test)
    ```

    Output:
    ```html
    My pet's name is Boots and its a dog
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
