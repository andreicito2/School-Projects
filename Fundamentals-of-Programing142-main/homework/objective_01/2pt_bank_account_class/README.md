# CPTR 142: Objective #1 (2 point)

## Problem Overview

Your task in this homework assignment is to create a class `BankAccount` with a withdrawal instance method.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a class `BankAccount` in the file `bank_account.py` that has a three attributes.

    * a string for the `account_number`

    * a string for the `pin` number

    * a float for the account `balance`

1. The constructor method must have three parameters. One for each attribute in the order listed above.

1. Define a instance method called `withdrawal` that takes one parameter `amount`.
   The method should return True if the amount was withdrawal and False otherwise.

1. The file `bank_account.py` should not contain a main program, it should only contain your class. To test your class, add code to the `bank_account_test.py` file. Note that code in `bank_account_test.py` will not be graded.

1. Below is an example of a call to the `BankAccount` class which you could implement in `bank_account_test.py` to test your class.

    Python Code:
    ```python
    import bank_account
    my_account = bank_account.Bank_Account(123456789, 1154, 2000.00)
    print(my_account.withdraw(1500.00))
    print(my_account.balance)
    ```

    Output:
    ```html
    True
    500.0
    ```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
