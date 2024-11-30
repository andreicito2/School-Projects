"""
Beginner Problem:  Create a program that saves three companies the user
                   wishes to work at in a tuple list. Output tuple list.

File Name: company_list.py
Name:      ?
Course:    CPTR 141
"""

# Your code goes here
print("What are the names of the top three companies at which you'd like to work?")
com1 = input("Company #1: ")
com2 = input("Company #2: ")
com3 = input("Company #3: ")
companies = (com1, com2, com3)
print("\nCompany tuple:", companies)
print("Great choice! I would love to work at {}, {}, or {} too.".format(
    companies[2], companies[1], companies[0]))
