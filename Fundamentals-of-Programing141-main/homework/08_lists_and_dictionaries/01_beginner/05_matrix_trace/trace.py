"""
Beginner Problem:  Create a function that returns the trace of a square matrix.

File Name: trace.py
Name:      ?
Course:    CPTR 141
"""

# Write Your Function Here
def trace(lists):
    counter_1 = 0
    counter_2 = 0
    for i in lists:
        counter_1 += 1
    for j in lists[0]:
        counter_2 += 1

    nums = []
    if counter_1 == counter_2:
        for num_list in lists:
            nums.append(num_list[lists.index(num_list)]) 
        return sum(nums)
    else:
        return False


