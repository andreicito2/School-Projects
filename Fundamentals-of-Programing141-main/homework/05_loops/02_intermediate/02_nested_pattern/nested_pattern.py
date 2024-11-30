"""
Intermediate Problem:  Create a program that builds a truncated triangle based
                       on user-input criteria

File Name: nested_pattern.py
Name:      ?
Course:    CPTR 141
Enter starting/ending row length: 1
Enter apex row length: 4
Enter character to print: *

*
* * 
* * * 
* * * *
* * *
* * 
*
"""

# Your code goes here
row_len = int(input("Enter starting/ending row length: "))
big_row = int(input("Enter apex row length: "))
char = input("Enter character to print: \n")
for i in range(row_len,big_row):
    for j in range(1,i+1):
        print(char, end=" ")
    print()
for i in range(big_row,row_len-1,-1):
    for j in range(1,i+1):
        print(char, end=" ")
    print()