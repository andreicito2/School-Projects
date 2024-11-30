"""
Implement your function in the file list_to_dictionary.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""


import nested_dict_avg

student_records = {
    "Jane": {"age": 19, "standing": "freshman"},
    "John": {"age": 20, "standing": "sophomore"},
    "Jude": {"age": 21, "standing": "junior"},
    "Janis": {"age": 22, "standing": "senior"},
    "James": {"standing": "freshman"},
    "Jared": {"age": 23, "standing": "super senior"},
}

print(
    "The average student age is {}.".format(
        nested_dict_avg.average_age(student_records)
    )
)
