"""
Implement your function in the file next_prime.py

Use this file to test your function. The code you write in this file will
not be graded.
"""


import next_prime

num = 1
while num >= 0:
    num = int(input("Enter a positive integer: "))
    if num >= 0:
        if next_prime.is_prime(num):
            print("The number {} is itself prime".format(num))
        else:
            print("The next biggest prime is {}".format(
                next_prime.next_prime(num)
            ))

print("Thanks for playing!")
