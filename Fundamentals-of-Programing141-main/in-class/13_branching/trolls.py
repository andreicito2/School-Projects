"""
In-Class Exercise: Using Containers to Store Prices and More

File Name: trolls.py
Course:    CPTR 141
"""

# existing dictionary
price_dict = {
    "Target": 12.50,
    "Walmart": 11.95,
    "Inland Octopus": 14.50
}

# get store and check if it is in dictionary
store = input("Enter Store: ")

if store in price_dict.keys:

    # get discount
    discount = float(input("Enter Discount Percent: ")) / 100

    # handle case when approximately equal to 1/3rd
    continue_flag = True
    if (1/3 - 0.0001 <= discount <= 1/3 + 0.0001):
        confirm = input(("exactly 1/3rd -- are you sure?"))
        if confirm[0].lower() == "y":
            continue_flag = False
    # change price and print result
    if continue_flag:
        price_dict[store] = price_dict[store] * (1-discount)
        print("price at {} is now ${:.2f}.".format(store, price_dict[store]))
    else:
        price_dict[store] = price_dict[store] * 2/3
# if store is not in dictionary, print error
else:
    print("Error! {} not found.".format(store))
# indicate if dictionary changed
if price_dict == {"Target": 12.50,
    "Walmart": 11.95,
    "Inland Octopus": 14.50
}:
    print("Price dictionary was not changed")
else:
    print("Price dictionary was changed.")