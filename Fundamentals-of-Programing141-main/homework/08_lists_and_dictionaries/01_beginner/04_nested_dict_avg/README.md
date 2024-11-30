# CPTR 141: Objective #8 (1 point)

## Problem Overview

Your task in this homework assignment is to create a function that computes the average value of students' ages in a nested dictionary.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `average_age` in the file `nested_dict_avg.py` which takes one parameter, a dictionary of student information with student names as keys and student information dictionaries as values.  The student information dictionaries may contain an "age" key with a numeric value.

2. The function must return the average of all ages found in the nested dictionary structure.

3. The file `nested_dict_avg.py` should not contain a main program, it should only contain your function. To test your function, add code to the `nested_dict_avg_test.py` file. Note that code in `nested_dict_avg_test.py` will not be graded.

4. Below is an example of a call to the `average_age` function which you could call in `nested_dict_avg_test.py` to test your function.

    Python Code:
    ```python
    import nested_dict_avg

    student_records = {
        "Jane": {"age": 19, "standing": "freshman"},
        "John": {"age": 20, "standing": "sophomore"},
        "Jude": {"age": 21, "standing": "junior"},
        "Janis": {"age": 22, "standing": "senior"},
        "James": {"standing": "freshman"},
        "Jared": {"age": 23, "standing": "super senior"},
    }

    print("The average student age is {}.".format(
        nested_dict_avg.average_age(student_records)
    ))

    ```

    Output:
    ```html
    The average student age is 21.0.
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
