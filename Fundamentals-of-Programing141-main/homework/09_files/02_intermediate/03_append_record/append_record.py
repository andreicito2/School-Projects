"""
Intermediate Problem: Create a function that appends a record to a file.
                      The record must match the table spacing in the file.

File Name: append_record.py
Name:      ?
Course:    CPTR 141
"""

import os.path
# Your code goes here
def append_record(file_name, record):
    file_exists = os.path.exists(file_name)
    if file_exists:
        f = open(file_name, 'a')
        ids = record['id']
        names = record['name']
        email = record['email']
        f.write(f'{ids:<8}{names:<20}{email}\n')
        f.close()
        return True
    else:
        return False
        