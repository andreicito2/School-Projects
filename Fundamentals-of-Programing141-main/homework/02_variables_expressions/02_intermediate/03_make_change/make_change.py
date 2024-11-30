"""
Intermediate Problem:  Create a program that outputs the user bill in change

File Name: make_change.py
Name:      ?
Course:    CPTR 141
"""

# Your code goes here
sales_price = int(input("Enter the sales price: $"))
amount_price = int(input("Enter the amount paid: $"))
money = amount_price - sales_price

print("\nTotal change: $"+str(money))
two10 = money//20
print("    -$20:", two10)
money = money - (two10*20)
tens = money//10
print("    -$10:", int(tens))
money = money - (tens*10)
fives = money//5
print("    -$5:", int(fives))
money = money - (fives*5)
ones = money
print("    -$1:", int(ones))
