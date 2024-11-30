"""
Beginner Problem:  Outputs all menu dishes that cost no more than a given price.

File Name: menu_items.py
Name:      ?
Course:    CPTR 141
"""

import menu

# Your code goes here
print("=========================== CPTR 141 Restaurant ===========================\nWelcome! Tell me how much you want to spend and I'll tell you what we have.")
buget = float(input("What is your budget? $"))

print("\nYou can get:")
for i in menu.dishes:
    if menu.dishes[i] <= buget:
        print(f"  * {i} for ${menu.dishes[i]}")