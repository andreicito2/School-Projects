"""
In-Class Exercise and Demo: Reading Files

File Name: min_max.py
Course:    CPTR 141

Assignment:
  1. Prompt user for an input file name.
  2. Print the smallest number, largest number, and total number of integers.
  * Intermission
  3. Add error checking to make sure file exists. 
"""

numeric_list = []

# prompt for input file
file_name = input("Enter input filename: ")
# read file into a list
f = open(file_name)
lines = f.readlines()

# process file input into numbers
for i in lines:
    numeric_list.append(int(i))
#     print(type(i), end=",")
# print()
# print(type(lines[0]))

# print output to console
print("Smallest: {}".format(min(numeric_list)))
print("Largest: {}".format(max(numeric_list)))
print("Line count: {}".format(len(lines)))
