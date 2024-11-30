"""
Intermediate Problem: Create a functions that takes a nested list of strings
                      and returns a new list with the same structure in which
                      all strings have been converted to lower case.

File Name: string_lists.py
Name:      ?
Course:    CPTR 141
"""


# Write Your Function Here
def to_lower(lists):
    for row in lists:
        for value in range(len(row)):
            #i[j] = i[j].lower()
            row[value] = row[value].lower()

    return lists