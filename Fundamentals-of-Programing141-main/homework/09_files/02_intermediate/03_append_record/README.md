# CPTR 141: Objective #9 (2 point)

## Problem Overview

Your task in this homework assignment is to create a function that appends records to a table in file.
The table has columns for ID, Name, and Email.

## Tips

* Don't add extra whitespace at the end of a line.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `append_record` in the file `append_record.py` which takes two parameter:

    i. a string representing the name of the file
    i. a dictionary representing the record with keys for `id`, `name`, and `email`

1. The function will append the record information to the file and return `True`. If the file does not exist, the function will return `False`.

1. The file `append_record` should not contain a main program, it should only contain your function. To test your function, add code to the
`append_record_test.py` file. Note that code in `append_record_test.py` will not be graded.

1. Below is an example of a call to the `append_record` function which you could implement in `append_record_test.py` to test your function.

Python Code:
```python
import append_record

file_name = "records.txt"
record = {
    "id": 123,
    "name": "Adam Pop",
    "email": "adam.pop@wallawalla.edu",
}
if append_record.append_record(file_name, record):
    print("{} has been added to {}".format(record["name"], file_name))
else:
    print("File could not be found")
```

example.txt:
```html
ID      Name                Email
================================================================================
543     Jones Push          jones.push@wallawalla.edu
123     Adam Pop            adam.pop@wallawalla.edu
```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
