"""
Implement your class in the file bank.py

Use this file to test your class. The code you write in this file will
not be graded.
"""

import bank

# test the class
test_bank = bank.Bank(25000, 2500000)
print(test_bank)

test_bank.add_client_deposit("Jack Sparrow", 50000)
test_bank.add_client_deposit("Johns Tip", 250)
print(test_bank.cash_on_hand())
test_bank.add_client_deposit("Johns Tip", 10)
print(test_bank.cash_on_hand())
