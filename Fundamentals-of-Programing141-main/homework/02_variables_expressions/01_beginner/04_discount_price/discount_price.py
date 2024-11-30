"""
Beginner Problem:  Create a program that outputs the discounted price of an item

File Name: discount_price.py
Name:      ?
Course:    CPTR 141
"""
DISCOUNT_RATE = float(0.45)

# Your code goes here
price = float(input("Enter the original price: $"))
amount_discount = price * DISCOUNT_RATE
price -= amount_discount
print("\nYour discount of $"+ "{:.2f}".format(amount_discount), "results in a price of $"+ "{:.2f}".format(price)+"!")