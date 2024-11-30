# CPTR 141: Objective #9 (1 point)

## Problem Overview

Your task in this homework assignment is to create a function that finds the total sum of all integers in a file.

## Tip

* A word or number is surrounded by spaces.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `sum_of_integers` in the file `sum_of_integers.py` which takes one parameter representing the file name.

2. The function must return the sum of all integers in the file.

3. The file `sum_of_integers` should not contain a main program, it should only contain your function. To test your function, add code to the
`sum_of_integers_test.py` file. Note that code in `sum_of_integers_test.py` will not be graded.

4. Below is an example of a call to the `sum_of_integers` function which you could implement in `sum_of_integers_test.py` to test your function.

Python Code:
```python
import sum_of_integers

file_name = "numbers.txt"
print(
    "The sum of numbers in {} is {}".format(
        file_name, sum_of_integers.sum_of_integers(file_name)
    )
)
```

Output:
```html
The sum of numbers in numbers.txt is 58
```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
