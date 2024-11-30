# CPTR 141: Objective #7 (1 point)

## Problem Overview

Your task in this homework assignment is to create a function that prints a nicely formatted leaderboard based on a two provided dictionaries.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `print_board` in the file `leader_board.py` which takes a two parameter:

    i. A dictionary with names as keys and corresponding high scores as values.

    ii. A dictionary with names as keys and dates as values.

2. If both dictionaries have identical keys, then the function must print out a table consisting of name, score, and date information for each record in the dictionaries, in the order provided in the first dictionary, and return `True`.  The first column should be 14 characters wide and justified left, the second column should be 8 characters wide and centered, and the last column should be 12 characters wide and justified right.  If the dictionaries do not have the same keys, the function must not print out anything and must return `False`.

3. The file `leader_board.py` should not contain a main program, it should only contain your function. To test your function, add code to the `leader_board_test.py` file. Note that code in `leader_board_test.py` will not be graded.

4. Below is an example of a call to the `leader_board()` function which you could implement in `leader_board_test.py` to test your function.

    Python Code:
    ```python
    scores = {
        "Matthew": 98,
        "John": 97,
        "Harper": 94,
        "Adam": 90,
        "Sofia": 75,
        "Mai": 56
    }

    dates = {
        "Mai": "09-09-2021",
        "John": "04-23-2021",
        "Adam": "01-02-2021",
        "Matthew": "11-06-2021",
        "Sofia": "10-31-2021",
        "Harper": "06-29-2021"        
    }

    bad_dates = {
        "Mai": "09-09-2021"
    }

    if not leader_board.print_board(scores, dates):
        print "Error!"

    if not leader_board.print_board(scores, bad_dates):
        print "Error!"
    ```

    Output:
    ```html
    Player Name    Scores         Date
    ==================================
    Matthew          98     11-06-2021
    John             97     04-23-2021
    Harper           94     06-29-2021
    Adam             90     01-02-2021
    Sofia            75     10-31-2021
    Mai              56     09-09-2021
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
