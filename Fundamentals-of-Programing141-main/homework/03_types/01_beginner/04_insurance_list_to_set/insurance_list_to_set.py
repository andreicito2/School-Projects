"""
Beginner Problem:  Removes duplicate names of insurance copmanies from a provided list.

File Name: insurance_list_to_set.py
Name:      ?
Course:    CPTR 141
"""

import names

# Your code goes here
print("Original list of insurance companies:\n{}".format(names.insurance_names))
print("\nModified list of insurance companies:")

unique_names = [*set(names.insurance_names)]
print(sorted(unique_names))
num = int(len(names.insurance_names)- len(unique_names))
print("\nWe removed a total of {} duplicates from our list.".format(num))