"""
Beginner Problem:   Write a program that outputs a list of three planet
names the user wishes to never visit, then output the middle planet name in the list.

File Name: planets_list.py
Name:      ?
Course:    CPTR 141
"""

planet_names = []

# Your code goes here
print("If you went into space, which three planets would you want to avoid?")
p1 = input("Planet #1: ")
planet_names.append(p1)
p2 = input("Planet #2: ")
planet_names.append(p2)
p3 = input("Planet #3: ")
planet_names.append(p3)
#print(planet_names) for testing
print("\nWhy would you want to avoid {}?".format(p2))
