"""
In-Class Exercise: Using Containers to Store Prices and More

File Name: trolls.py
Course:    CPTR 141
"""

trolls = {}
do_again = 'y'
# convert to a sentinal-controlled loop

while do_again == 'y':
    store = input("Enter Store {}: ".format(len(trolls)+1))
    price = float(input("Enter Price {}: ".format(len(trolls)+1)))
    trolls[store] = price
    do_again = input("Enter another store (y/n)?")
    print()


lowest_price_dict = min(trolls.values())
lowest_store_dict = min(trolls, key=trolls.get)
print("Lowest price is ${:.2f} at {}".format(lowest_price_dict, lowest_store_dict))
