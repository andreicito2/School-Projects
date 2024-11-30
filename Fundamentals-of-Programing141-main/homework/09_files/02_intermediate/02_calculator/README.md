# CPTR 141: Objective #9 (2 point)

## Problem Overview

Your task in this homework assignment is to create a function that reads a list of operations and writes out the solutions to a file. Each row in the input file should have a result in the output file. An operation looks like `ADD 6 7` and the result line would look like `6 + 7 = 13`.
If the operation call is invalid return the following string `"{operation} is an invalid operation."`
Example input `Circle 6 7` will result to `"Circle is an invalid operation."`

## Hint

1. Try accessing each part of the operation from `operations.txt` file and iterate through every three parameters.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `calculator` in the file `calculator.py` which takes two parameters:

    i. a string representing the name of the input file
    i. a string representing the name of the output file

1. The function must write the results to the output file. Each operation should result in a single line result in the output file.

1. If the input line is blank, print a blank line in the output file.

1. Operations supported:

    i. `ADD {integer} {integer}`
    i. `SUBTRACT {integer} {integer}`
    i. blank lines

1. The file `calculator` should not contain a main program, it should only contain your function. To test your function, add code to the
`calculator_test.py` file. Note that code in `calculator_test.py` will not be graded.

1. Below is an example of a call to the `calculator` function which you could implement in `calculator_test.py` to test your function.

Python Code:
```python
import calculator

calculator.calculator("operations.txt", "results.txt")
```

operations.txt:
```html
ADD 6 7
SUBTRACT 11 5
MULTIPLY 3 4
```

results.txt:
```html
6 + 7 = 13
11 - 5 = 6
MULTIPLY is an invalid operation.
```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
