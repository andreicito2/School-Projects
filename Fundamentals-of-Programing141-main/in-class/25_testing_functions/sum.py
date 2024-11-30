"""
Demonstration/Exercise: A sum function

File Name: sum.py
Course:    CPTR 141
"""


def sum(n):
    result = 0
    for i in range(n + 1):
        result += i
    return result


n = int(input("Enter a number n: "))

val = sum(n)
print("The sum of the first {} numbers is {}".format(n, val))
