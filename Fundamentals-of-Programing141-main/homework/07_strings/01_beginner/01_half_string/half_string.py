"""
Beginner Problem: Create a function that returns either the first or second half
                  of a given string.

File Name: half_string.py
Name:      ?
Course:    CPTR 141
"""


# Define Your Function Here
def half_string(string, num):
    if num == 1: #first half
        string_len = ((len(string))//2) +1
        new_str = string[0:string_len]
        return new_str
    else:
        n_string_len = (len(string))//2 
        nnew_str = string[n_string_len:]
        return nnew_str
        