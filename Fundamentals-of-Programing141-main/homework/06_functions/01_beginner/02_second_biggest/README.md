# CPTR 141: Objective #6 (1 point)

## Problem Overview

Your task in this homework assignment is to create a function called `second_biggest` that returns the second biggest value in a list.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a function named `second_biggest` in the file `second_biggest.py` which takes a single parameter representing a list of values of the same type.

2. The function must return the second biggest item in that list, as measured by the standard ordering relation (i.e. '>' or '<') in Python.

3. The file `second_biggest.py` should not contain a main program, it should only contain your function.  To test your function, add code to the `second_biggest_test.py` file.  Note that code in `second_biggest_test.py` will not be graded.

4. Below is an example of a call to the `second_biggest` function which you could implement in `second_biggest_test.py` to test your function.

Python Code:
```python
my_list = [-123,-54,0,-5,-34,-19,-1]
print("The second biggest value in {} is {}.".format(
    my_list,
    function.second_biggest(my_list)
))
```

Output:
```html
The second biggest value in [-123,-54,0,-5,-34,-19,-1] is -1.
```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
