"""
Beginner Problem: Create a function that returns the second biggest element
                  in a list.

File Name: second_biggest.py
Name:      ?
Course:    CPTR 141
"""

# Your code goes here
def second_biggest(my_list):
    res = [*set(my_list)]
    res.sort(reverse=True)
    
    return res[1]
    