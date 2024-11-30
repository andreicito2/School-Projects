# CPTR 141: Objective #9 (1 point)

## Problem Overview

Your task in this homework assignment is to create a function returns the contents of a file.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `read_file` in the file `read_file.py` which takes one parameter representing the name of the file.

2. The function must return the the contents inside of the file.

3. The file `read_file` should not contain a main program, it should only contain your function. To test your function, add code to the
`read_file_test.py` file. Note that code in `read_file_test.py` will not be graded.

4. Below is an example of a call to the `read_file` function which you could call from `read_file_test.py` to test your function.

Python Code:
```python
import read_file

file_name = "quote.txt"
print("The contents of {} is:\n{}".format(file_name, read_file.read_file(file_name)))
```

Output:
```html
The contents of quote.txt is:
"Talk is cheap. Show me the code."
  - Linus Torvalds
```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
