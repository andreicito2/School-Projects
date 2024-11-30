# CPTR 141: Objective #9 (2 point)

## Problem Overview

Your task in this homework assignment is to create a function that merges the data from two csv files into one.
Each row merged should have unique ID.

## Tip

When using the `csv` module, the `csv.writer()` supports a keyword argument to set the line terminator character (`lineterminator="\n"`).
Please use this to keep the file terminators consistent.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `merging_csv_files` in the file `merging_csv_files.py` which takes three parameter:

    i. a string representing the name of the first csv file
    i. a string representing the name of the second csv file
    i. a string representing the name of the resulting merged csv file

1. The function will read two csv file and merge data into a single csv file.
    The merged csv file should only keep unique record IDs.
    Precedence given to the first file record.

1. The final csv file should use `"\n"` as the line terminator.

1. The file `merging_csv_files` should not contain a main program, it should only contain your function. To test your function, add code to the
`merging_csv_files_test.py` file. Note that code in `merging_csv_files_test.py` will not be graded.

1. Below is an example of a call to the `merging_csv_files` function which you could implement in `merging_csv_files_test.py` to test your function.

Python Code:
```python
import merging_csv_files

merging_csv_files.merging_csv_files("company1.csv", "company2.csv", "merge.csv")
```

merge.csv:
```html
ID,Name,Position,Salary
100,John Howder,Cook,40230.78
203,Apple Trot,Teacher,35650.23
304,Sceptre Iron,Programmer,100392.34
405,Razer Razer,Barber,69140.89

```

## Grade Specification

You will earn **two points** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
