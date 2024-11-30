"""
Beginner Problem: Write a function that searches all words in a text file and returns the sum of all integer values.

File Name: sum_of_integers.py
Name:      ?
Course:    CPTR 141
"""

# Your code goes here
def sum_of_integers(file_name):
    f = open(file_name)
    total = 0
    for lines in f:
        total = int(lines)
    return total
    # lists = f.readlines()
    # new_lists = []
    # for i in lists:
    #     new_lists.append(i[:-2])
    # total = 0
    # new_lists.pop(0)
    # for i in new_lists:
    #     i.split(' ')
    #     for j in i:
    #         total += int(j)
    # return new_lists


