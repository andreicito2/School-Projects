"""
Implement your function in the file employee_dictionary.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""


import employee_dictionary

# the test dictionary
employees = {
    "Mathhew": 14650,
    "John": 51210,
    "Harper": 27670,
    "Adam": 10420,
    "Olivia": 40650,
    "Sofia": 21490,
    "Mai": 37020,
    "Scarlett": 75000,
    "Qin": 56000,
    "Daphne": 89000,
}

# test the range function
results = employee_dictionary.range_search(employees, 30000, 50000)
print(results)

# test the percentile function
results = employee_dictionary.percent_search(employees, 10)
print(results)
