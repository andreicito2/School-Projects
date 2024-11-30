"""
Beginner Problem: Create a program that prompts the user to enter numbers,
                  continuing until the user enters a zero.  The program then
                  prints the sum of all numbers entered.

File Name: sum_of_numbers.py
Name:      ?
Course:    CPTR 141
"""
add = []
number = 1
while number != 0:
    number = float(input("Enter a number ('0' to quit): "))
    add.append(number)
print("\nTotal Sum: {:.2f}".format(sum(add)))
