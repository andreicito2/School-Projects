# CPTR 142: Objective #2 (1 point)

## Problem Overview

Your task in this homework assignment is to create a unittest.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must declare `Test_Trapezoid` class that inherits `unittest.TestCase`.

2. You must define a instance method named `test_area` in the file `test_trapezoid.py` which asserts two test cases:

    * **Test One**
        
        Given a trapezoid with these values `Base_a`: 10, `Base_b`: 5, `Height`: 4 has an area of 30.00.

      
    
    * **Test Two**

        Given a trapezoid with these values `Base_a`: 25.34, `Base_b`: 7.12, `Height`: 0.5 has an area of 8.12.

3. The file `test_trapezoid.py` should not contain a main program, it should only contain your class. 
   To test your class, add code to the `test_trapezoid_test.py` file.
   Note that code in `test_trapezoid_test.py` will not be graded.

4. Below is an example of a call to the `Test_Trapezoud.test_area()` method which you could implement in `test_trapezoid_test.py` to test your method.

    Python Code:
    
    ```python
    import unittest
    from test_trapezoid import Test_Trapezoid

    result = unittest.main()
    print(result)
    ```

    Output:
    ```html
    .
    ----------------------------------------------------------------------
    Ran 1 test in 0.000s

    OK
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
