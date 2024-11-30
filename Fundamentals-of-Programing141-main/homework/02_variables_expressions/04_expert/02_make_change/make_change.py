"""
Expert Problem: Make change using various currency

File Name: make_change.py
Name:      ?
Course:    CPTR 141
"""

# Your code goes here
cost = float(input("Enter the cost in dollars and cents: $"))
paid = float(input("Enter the amount paid in dollars and cents: $"))
reminder = paid - cost
bill20 = reminder//20
reminder -= bill20*20
bill10 = reminder//10
reminder -= bill10*10
bill5 = reminder//5
reminder -= bill5*5
bill1 = reminder//1
reminder -= bill1*1
quarters = reminder//0.25
reminder -= quarters*0.25
dimes = reminder//0.10
reminder -= dimes*0.10
nickels = reminder//0.05
reminder -= nickels*0.05
pennies = reminder//0.01

print("\nYour change is:")
print("  - twenty-dollar bills:", int(bill20))
print("  - ten-dollar bills:",int(bill10))
print("  - five-dollar bills:",int(bill5))
print("  - one-dollar bills:",int(bill1))
print("  - quarters:",int(quarters))
print("  - dimes:",int(dimes))
print("  - nickels:",int(nickels))
print("  - pennies:",int(pennies))