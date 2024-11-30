"""
Beginner Problem:  Update a dictionary by changing one value to another

File Name: update_dictionary.py
Name:      ?
Course:    CPTR 141
"""

# Write your function here
def update_dictionary(string, dicts):
    
    string = string.split(":")
    for key, value in dicts.items():
        if value == string[0]:
            dicts[key] = string[1]
        