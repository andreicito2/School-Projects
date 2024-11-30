# CPTR 142: Objective #2 (1 point)

## Problem Overview

Your task in this homework assignment is to create a derived class that extends the attributes of the base class.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a `Administrator` class in the file `administrator.py` that inherits `Employee`.

1. You must define a constructor that takes three parameters:

    * a `name` attribute that is a string

    * a `company` attribute that is a string

    * a `position` attribute that is a string

1. Ensure that the employee base class gets `name` and `company` attributes assigned.

1. The file `administrator.py` should not contain a main program, it should only contain your class.  To test your class, add code to the `administrator_test.py` file.  Note that code in `administrator_test.py` will not be graded.

4. Below is a few example calls to an `Administrator` instance which you could implement in `administrator_test.py` to test your method.

    Python Code:
    
    ```python
    import administrator

    administrator_test = administrator.Administrator("John Apples", "Tesla", "Head Software Engineer")
    print(administrator_test.get_bio())
    print(administrator_test.position)
    ```

    Output:
    ```html
    My name is John Apples and I currently work at Tesla.
    Head Software Engineer
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
