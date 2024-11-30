"""
Beginner Problem: Create a function that writes items of a list out to a file.
                  One item per line.

File Name: write_list.py
Name:      ?
Course:    CPTR 141
"""


# Your code goes here
def write_list(file_name, lists):
    f = open(file_name, 'a')
    for i in lists:
        f.write(i, end='\n')

    f.close()