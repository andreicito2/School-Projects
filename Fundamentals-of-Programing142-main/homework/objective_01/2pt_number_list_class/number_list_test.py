"""
Implement your class in the file number_list.py

Use this file to test your class. The code you write in this file will
not be graded.
"""


import number_list

test_list = [1, 2, 3, 4, 5, 6, 7, 8]
my_list = number_list.NumberList(test_list)
print(my_list.get_even())
print(my_list.get_odd())
