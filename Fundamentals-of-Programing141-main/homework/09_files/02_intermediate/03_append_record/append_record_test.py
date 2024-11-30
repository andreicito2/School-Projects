"""
Implement your function in the file append_record.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""


import append_record

file_name = "records.txt"
record = {
    "id": 123,
    "name": "Adam Pop",
    "email": "adam.pop@wallawalla.edu",
}
if append_record.append_record(file_name, record):
    print("{} has been added to {}".format(record["name"], file_name))
else:
    print("File could not be found")
