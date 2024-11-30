"""
Beginner Problem: Create a function that reads and prints out a text file.

File Name: read_file.py
Name:      ?
Course:    CPTR 141
"""

# Define Your Function Here
def read_file(file_name):
    f = open(file_name)
    contents = f.read()
    return contents
