"""
Implement your function in the file list_in_dict.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""


import list_in_dict

data = {"One": ["a", "x"], "Two": ["b", "c", "z"], "Three": ["f", "g", "h"]}
print(list_in_dict.get_counts(data))
list_in_dict.add_shortest("g", data)
print(data)
