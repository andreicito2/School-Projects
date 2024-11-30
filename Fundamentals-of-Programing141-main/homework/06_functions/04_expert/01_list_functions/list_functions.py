"""
Expert Problem:  A library of functions for lists of numbers

File Name: list_functions.py
Name:      ?
Course:    CPTR 141
"""


# Your code goes here
def same_sign(my_list):
    counter = 0
    for i in range(len(my_list)):
        if my_list[i] <= 0:
             counter += 1
    if (counter == len(my_list)) or (counter == 0):
        return True
    else:
        return False
        
# check for negatives have a counter so if counter zero then true and if counter is == to len(my_list) then also true

def find_indexes(num, my_list):
    indexed = []
    for i in range(len(my_list)):
        if my_list[i] == num:
            indexed.append(i)
    return indexed


def count_divisible(div_num, my_list):
    d = 0
    for i in range(len(my_list)):
        if (my_list[i] % div_num) == 0:
            d += 1
    return d            

