# CPTR 141: Objective #7 (1 point)

## Problem Overview

Your task in this homework assignment is to write a function that updates a dictionary by replacing values that match one string with another.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `update_dictionary` in the file `update_dictionary.py` which takes a two parameters:

    i. a string with the old and new values to apply to the dictionary in the format "old value:new value".

    ii. a dictionary to be updated.

2. The function must update the dictionary by changing the value of any key that is set to "old value" to "new value" as specified in the update string.  The function should return `True` if any changes were made and `False` otherwise.

3. The file `update_dictionary` should not contain a main program, it should only contain your function. To test your function, add code to the
`update_dictionary_test.py` file. Note that code in `update_dictionary_test.py` will not be graded.

4. Below is an example of a call to the `update_dictionary` function which you could implement in `update_dictionary_test.py` to test your function.

    Python Code:
    ```python
    import update_dictionary

    test_dict = {
        "key 1": "hot",
        "key 2": "cold",
        "key 3": "warm",
        "key 4": "cold"
    }
    test_dict_2 = dict(test_dict)

    if update_dictionary.update_dictionary("cold:blue",test_dict):
        print("New dictionary: {}".format(test_dict))
    else:
        print("No Changes")    

    print()

    if update_dictionary.update_dictionary("dud:red",test_dict_2):
        print("New dictionary: {}".format(test_dict_2))
    else:
        print("No Changes")
    ```

    Output:
    ```html
    {'key 1': 'hot', 'key 2': 'blue', 'key 3': 'warm', 'key 4': 'blue'}

    No Changes
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
