"""
Implement your function in the file gorcery_table.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""

import grocery_table

grocery_list = [
    "Grapes",
    "Egg",
    "Grapes",
    "Bread",
    "Egg",
    "Milk",
    "Egg",
    "Egg",
    "Egg",
    "Egg",
]
price_dict = {"Grapes": 2.39, "Egg": 0.25, "Bread": 2.79, "Milk": 3.29}

grocery_table.invoice(grocery_list, price_dict)
