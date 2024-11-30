# CPTR 141: Objective #8 (2 point)

## Problem Overview

Your task in this homework assignment is to create a function that searches a list of lists of integers to find the location of the first instance of the largest value, called the *global maximum*. Your function must then return the index in the outer list of the inner list containing this maximum and the index in the inner list of this maximum.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a function named `max_indices` in the file `global_max.py` which takes as a single parementer a two-dimensional list of integers.

1. The program must find the first occurrence in this 2D list of the maximum value and return the two indexes identifying where that index occurs as a tuple.

1. The file `global_max` should not contain a main program, it should only contain your function. Test your function using the code in `global_max_test.py`. Note that code in `global_max_test.py` will not be graded.

4. Below is an example of a call to the `global_max` as implement in `global_max_test.py`.

Python Code:
```python
import global_max

vals = [
    [4, 2, 9, 5],
    [8, 2, 7, 10],
    [9, 10, 3, 1]
]

(row, col) = global_max.max_indices(vals)
print("The maximum value of {} first occurs at indices {} and {} in the 2D list.".format(
    vals[row][col],
    row,
    col
))
```

Output:
```html
The maximum value of 10 first occurs at indices 1 and 3 in the 2D list.
```


## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
