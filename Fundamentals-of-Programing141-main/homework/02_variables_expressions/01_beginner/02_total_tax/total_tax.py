"""
Beginner Problem:  Create a program that outputs the taxation of an item price to two decimal places

File Name: total_tax.py
Name:      ?
Course:    CPTR 141
"""
TAX_RATE = 0.065

# Your code goes here
base = float(input("Enter the price of the item: $"))
tax = base * TAX_RATE
print("\nTax:   $""{:.2f}".format(tax))
