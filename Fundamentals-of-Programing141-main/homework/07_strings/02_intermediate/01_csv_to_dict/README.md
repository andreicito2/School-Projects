# CPTR 141: Objective #7 (2 point)

## Problem Overview

Your task in this homework assignment is to create a function that takes a list of comma-separated-value rows of data in which the first two values are names and all remaining values are scores, and turns it into a dictionary of key/value pairs in which the key is the name and the value is the average score.


## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `csv_to_dict` in the file `csv_to_dict.py` which takes one parameter: a list of strings in the format "last_name,first_name,score1,score2,...".

2. The function must return a dictionary with one key/value pair for each list entry in which the keys are "first_name last_name" and the values are the average of the scores in that entry.

3. The file `csv_to_dict` file should not contain a main program, it should only contain your function. To test your function, add code to the `csv_to_dict_test.py` file. Note that code in `csv_to_dict_test.py` will not be graded.

4. Below is an example of a call to the `csv_to_dict` function which you could implement in `csv_to_dict_test.py` to test your function.

    Python Code:
    ```python
    import csv_to_dict

    test_list = [
        "Bunny,Bugs,79,94,64",
        "Mouse,Mickey,84,75"
    ]

    print(csv_to_dict.csv_to_dict(test_list))
    ```

    Output:
    ```html
    {"Bugs Bunny": 79.0, "Mickey Mouse": 79.5}
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
