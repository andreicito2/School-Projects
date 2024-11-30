# CPTR 141: Objective #9 (1 point)

## Problem Overview

Your task in this homework assignment is to create a function that writes the contents of a list to file where each element is on a separate line.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `write_list` in the file `write_list.py` which takes two parameters representing the name of the file and the given list.

1. The function must write to a file where all the elements in a given list are shown on a separate new line.

1. The file `write_list` should not contain a main program, it should only contain your function. To test your function, add code to the
`write_list_test.py` file. Note that code in `write_list_test.py` will not be graded.

1. Below is an example of a call to the `write_list` function which you could implement in `write_list_test.py` to test your function.

Python Code:
```python
import write_list

my_list = ["Apple", "Corn", "School", "Lava"]
write_list.write_list("example.txt", my_list)
```

Example.txt:
```html
Apple
Corn
School
Lava
```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
