"""
Implement your function in the file update_dictionary.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""

import update_dictionary

test_dict = {"key 1": "hot", "key 2": "cold", "key 3": "warm", "key 4": "cold"}
test_dict_2 = dict(test_dict)

if update_dictionary.update_dictionary("cold:blue", test_dict):
    print("New dictionary: {}".format(test_dict))
else:
    print("No Changes")

print()

if update_dictionary.update_dictionary("dud:red", test_dict_2):
    print("New dictionary: {}".format(test_dict_2))
else:
    print("No Changes")
