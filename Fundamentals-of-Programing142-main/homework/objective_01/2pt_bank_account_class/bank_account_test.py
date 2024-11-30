"""
Implement your class in the file bank_account.py

Use this file to test your class. The code you write in this file will
not be graded.
"""


import bank_account

my_account = bank_account.Bank_Account(123456789, 1154, 2000.00)
print(my_account.withdraw(1500.00))
print(my_account.balance)
