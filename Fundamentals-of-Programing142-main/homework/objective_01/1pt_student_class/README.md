# CPTR 142: Objective #1 (1 point)

## Problem Overview

Your task in this homework assignment is to create a class with default attribute values.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a class `Student` in the file `student.py`. The class must have two attributes:

    * a `name` attribute that defaults to an empty string

    * an `id` attribute that defaults to zero

1. The file `student.py` should not contain a main program, it should only contain your class.  To test your class, add code to the `student_test.py` file.  Note that code in `student_test.py` will not be graded.

1. Below is an example of a call to the `Student` class which you could implement in `student_test.py` to test your class.

    Python Code:
    ```python
    import student

    test = student.Student()
    print(
        "Student's name is '{}' and has an ID number of {}".format(
            test.name, test.id
        )
    )
    ```

    Output:
    ```html
    Student's name is '' and has an ID number of 0
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
