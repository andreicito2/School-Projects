# CPTR 141: Objective #6 (2 point)

## Problem Overview

Your task in this homework assignment is to write a function that takes two parallel lists and combines them into a single dictionary with keys coming from the first list and values from the second.  Your function should return the dictionary, or return `False` if it encounters an error, such as lists of different lengths or repeated keys.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a function named `combine` in the file `build_dictionary.py` which has two parameters in the order shown below.

    i. a list of unique keys

    ii. a list of associated values

2. Your function must return a dictionary with the associated key/value pairs, or must return `False` if either the provided lists are not the same length or the list of key values contains duplicates.

3. The file `build_dictionary.py` should not contain a main program, it should only contain your function. To test your function, add code to the `build_dictionary_test.py` file. Note that code in `build_dictionary_test.py` will not be graded.

5. Below is an example of calls to the `combine` function which you could implement in `build_dictionary_test.py` to test your function.

    Python Code:
    ```python
    names = ["Jack", "Daniel", "Emma", "Sofia", "Billy", "Sam", "Samantha", "Tim"]
    grades = [68.98, 77.34, 62.53, 97.23, 90.54, 44.23, 84.34, 69.96] 
    gradebook = build_dictionary.combine(names,grades)
    if(gradebook):
        print(gradebook)
    else:
        print("Error!")
    ```

    Output:
    ```html
    {'Jack': 68.98, 'Daniel': 77.34, 'Emma': 62.53, 'Sofia': 97.23, 'Billy': 90.54, 'Sam': 44.23, 'Samantha': 84.34, 'Tim': 69.96}
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
