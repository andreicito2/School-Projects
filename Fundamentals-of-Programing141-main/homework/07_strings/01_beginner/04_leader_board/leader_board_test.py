"""
Implement your function in the file leader_board.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""

import leader_board

scores = {"Matthew": 98, "John": 97, "Harper": 94, "Adam": 90, "Sofia": 75, "Mai": 56}

dates = {
    "Mai": "09-09-2021",
    "John": "04-23-2021",
    "Adam": "01-02-2021",
    "Matthew": "11-06-2021",
    "Sofia": "10-31-2021",
    "Harper": "06-29-2021",
}

bad_dates = {"Mai": "09-09-2021"}

if not leader_board.print_board(scores, dates):
    print("Error!")

if not leader_board.print_board(scores, bad_dates):
    print("Error!")
