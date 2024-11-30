"""
In-Class Exercise: Using Containers to Store Prices and More

File Name: trolls.py
Course:    CPTR 141
"""


# ---- uncomment to seed the dictionary of stores ----
trolls = {
    "Target": 12.50,
    "Walmart": 11.95,
    "Inland Octupus": 14.50,
}

# ---- comment this if you use the seeded dictionary above ----
#trolls = {}
#add_more = "y"
# while add_more == "y":
#    store = input("Enter Store {}: ".format(len(trolls) + 1))
#    price = float(input("Enter Price {}: ".format(len(trolls) + 1)))
#    trolls[store] = price

#    add_more = input("Enter another store (y/n)? ")
#    print()

# ---- print the store with the cost less then the average price ----
# Add your code here to print stores

#for store in trolls:
    

sum = 0
for store in trolls:
    trolls[store] *= 1.087
    sum += trolls[store]
average = sum / len(trolls)
print("The average troll price is ${:.2f}\n".format(average))

for store in trolls:
    if (trolls[store] < average):
        print("{} has trolls for ${:.2f}".format(store, trolls[store]))