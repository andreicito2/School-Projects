"""
Beginner Problem: Create a function that appends a product and price to a text file.

File Name: append_product.py
Name:      ?
Course:    CPTR 141
"""

# Your code goes here
def append_product(file_name, product, cost):
    f = open(file_name, 'a')
    f.write(product +" ${:.2f}".format(cost))
