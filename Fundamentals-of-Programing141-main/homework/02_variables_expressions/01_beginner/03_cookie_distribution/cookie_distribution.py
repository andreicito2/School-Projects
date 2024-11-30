"""
Beginner Problem:  Create a program that outputs the distribution of cookies each person can receive and any leftovers

File Name: cookie_distribution.py
Name:      ?
Course:    CPTR 141
"""

# Your code goes here
num_c = int(input("Enter number of cookies: "))  # enter the number of cookies
num_p = int(input("Enter number of people: "))  # enter the number of people

cookie_per_person = num_c // num_p
remainder = num_c % num_p
print("\nEach person gets", cookie_per_person,
      "cookies and there will be", remainder, "left over.")
