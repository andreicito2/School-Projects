# CPTR 141: Objective #9 (1 point)

## Problem Overview

Your task in this homework assignment is to create a function that returns a list of files in a directory.
Directories should not included in the list.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `list_files` in the file `list_files.py` which takes one parameter representing the file path.

1. The function must return a list of files for path argument and not include any directories in the list.

1. The list of file should be sorted.

1. The file `list_files` should not contain a main program, it should only contain your function. To test your function, add code to the
`list_files_test.py` file. Note that code in `total_lines_test.py` will not be graded.

1. Below is an example of a call to the `list_files` function which you could implement in `list_files_test.py` to test your function.

Python Code:
```python
import list_files

path = "."
print("The files in {} are {}".format(path, list_files.list_files(path)))
```

Output:
```html
The files in . are ['README.md', 'list_files.py']
```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
