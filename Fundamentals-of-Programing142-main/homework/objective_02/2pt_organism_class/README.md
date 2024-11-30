# CPTR 142: Objective #2 (2 point)

## Problem Overview

Your task in this homework assignment is to create a unit test for a classes' attributes and methods.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must declare `Test_Herbivorous` class that inherits `unittest.TestCase`.

2. You must define a instance method named `test_herbivorous` in the file `test_herbivorous.py` which test to confirm attributes and methods of the `Herbivorous` class.

3. The file `test_herbivorous.py` should not contain a main program, it should only contain your class.  To test your class, execute the `run_test.py` file.
Note that code in `run_test.py` will not be graded.

4. Below is an example of a call to the unit test which you could implement in `run_test.py` to test your method.

    Python Code:
    
    ```python
    import unittest
    from test_herbivorous import Test_Herbivorous

    unittest.main()
    ```

    Output:
    ```html
    .
    ----------------------------------------------------------------------
    Ran 1 test in 0.000s

    OK
    ```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
