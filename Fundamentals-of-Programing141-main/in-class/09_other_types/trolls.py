"""
In-Class Exercise: Using Containers to Store Prices and More

File Name: trolls.py
Course:    CPTR 141
"""
'''
stores = []
prices = []

stores.append(input("Enter Store 1: "))
prices.append(float(input("Enter Price 1: ")))

stores.append(input("Enter Store 2: "))
prices.append(float(input("Enter Price 2: ")))

stores.append(input("Enter Store 3: "))
prices.append(float(input("Enter Price 3: ")))

lowest_price = min(prices)
lowest_index = prices.index(lowest_price)
print("Lowest price is ${:.2f} at {}".format(
    lowest_price, 
    stores[lowest_index]))
'''
stores = {}
stores["Smiths"] = 1.5
print(stores)