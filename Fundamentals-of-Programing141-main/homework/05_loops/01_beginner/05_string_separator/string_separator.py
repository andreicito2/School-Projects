"""
Beginner Problem:  Output each character of a user-entered string
                   separated by "-" characters

File Name: string_separator.py
Name:      ?
Course:    CPTR 141
"""

# Your code goes here

string = input("Enter a string: ")
print("\nDid you enter ",end='')
for i in range(len(string)):
    if i < len(string)-1:
        print(string[i], end="-")
    else:
        print(string[i], end='')
print("?")
#print(f"Did you enter {}?")
