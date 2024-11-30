# CPTR 141: Objective #6 (2 point)

## Problem Overview

Your task in this homework assignment is to write a two function to assist with searching an employee database.  The database contains employee names and salaries as key/value pairs.  Your functions must search the database to find employees with salaraies in a given range or with salaries in the top `p` percent, where `p` is a number between 0 and 100.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a function named `range_search` in the file `employee_dictionary.py` which has three parameters in the order shown below.  This function must return the names of all employees whose salaries are between the lower and upper end of the range, inclusively.

    i. the employee dictionary to be searched

    ii. the lower end of the range in which to search

    iii. the upper end of the range in which to search

2. You must define a function named `percent_search` also in the file `employee_dictionsary.py` which has two parameters in the order shown below.  This function must return the names of all employees whose salaries are in the top `p` percent of salaries in the database -- that is, with at least `p * N/100` other salaries less than or equal to the employee's salary, where `N` is the number of employees in the dictionary.

    i. the employee dictionary to be searched

    ii. the percentile `p` above which to search for salaries

3. The file `employee_dictionary.py` should not contain a main program, it should only contain your functions. To test your functions, add code to the `employee_dictionary_test.py` file. Note that code in `employee_dictionary_test.py` will not be graded.

4. Below are examples of calls to these two functions using the dictionary provided in `employee_dictionary_test.py`.

    Python Code:
    ```python
    results = employee_dictionary.range_search(employees, 30000, 50000)
    print(results)
    ```

    Output:
    ```html
    ['Olivia', 'Mai']
    ```

    Python Code:
    ```python
    results = employee_dictionary.percent_search(employees, 10)
    print(results)
    ```

    Output:
    ```html
    ['Daphne']
    ```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
