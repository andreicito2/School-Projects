# CPTR 141: Objective #8 (2 point)

## Problem Overview

Your task in this homework assignment is to create two functions that work together to add items to lists nested inside of a dictionary. The first function takes a dictionary of lists and returns a dictionary of list lengths. The second function utilizes the first to add a value to the end of the shortest list in the dictionary.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `get_counts` in the file `list_in_dict` which takes as a single parameter a dictionary whose values are lists.

1. A call to `get_counts(d)` will return a new dictionary with key values equal to the lengths of the lists in `d` and values equal to the sorted list of keys from `d` which have those lengths.

1. You must define a second function `add_shortest` in the file `list_in_dict` which takes two parameters:

    i. The item to add
  
    ii. The dictionary with list values to which the item should be added.

1. A call of the form `add_shortest(x,dict)` will add `x` to the shortest list in the dictionary `dict`, with ties going to the key value that comes first alphabetically. Note that you should consider using the first function in implementing this function.

1. The file `list_in_dict` should not contain a main program, it should only contain your two functions. To test your functions, add code to `list_in_dict_test.py` file. Note that code in `list_in_dict_test.py` will not be graded.

4. Below is an example of calls to these functions which you could add to the file `list_in_dict_test.py` to test your functions.

    Python Code:
    ```python
    import list_in_dict

    data = {
      "One": ["a", "x"],
      "Two": ["b", "c", "z"],
      "Three": ["f", "g", "h"]
    }
    print(list_in_dict.get_counts(data))
    lists_in_dict.add_shortest('g',data)
    print(data)
    ```

    Output:
    ```html
    {2: ["One"], 3: ["Three", "Two"]}
    {"One": ["a", "x", "g"], "Two": ["b", "c", "z"], "Three": ["f", "g", "h"]}
    ```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
