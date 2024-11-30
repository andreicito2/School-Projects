"""
Beginner Problem: Write a function that returns one of two formatted versions
                  of a provided day, month, and year.

File Name: date_format.py
Name:      ?
Course:    CPTR 141
"""


# Define your function here
def date_format(a,b,c,d):
    if (a <= 31) and (b <= 12) and (d <=2) and (c >= 0):
        if d == 1: #mm/dd/yyyy   2 = yyyy-mm-dd
            return f'{b:0>2}/{a:0>2}/{c}'
        else:
            return f'{c}-{b:0>2}-{a:0>2}'
    else:
        return False