# CPTR 142: Objective #2 (4 point)

## Problem Overview

Your task in this homework assignment is to create a derived class that extends and overwrites attributes and methods in the base class.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. Define a `Bank` class in `bank.py` python file that inherits the `Building` class.

1. You must define a constructor that accepts four arguments:

    * an integer for `size` with a default value of 10000
    * a float for `cost` with a default value of 2000000

1. You must define an dictionary attribute in `Bank` called `client_list`.

1. You must define a `add_client_deposit` instance method that takes two parameters:

    * a string for the client name (the dictionary key)
    * a float for the deposit amount (the dictionary value)

    The `client_list` should be updated with new clients or have existing clients balance updated.

1. You must define a `cash_on_hand` instance method returns the total amount of money in the back.
   Use the `client_list`'s values to determine value.

1. You must extend the `__str__` special method to append bank details in addition to the building as shown below.

1. The file `bank.py` should not contain a main program, it should only contain your class.
   To test your class, add code to the `bank_test.py` file.
   Note that code in `bank_test.py` will not be graded.

1. Below are example calls `Bank` methods which you could implement in `bank_test.py` to test your method.

    Python Code:
    
    ```python
    import bank

    test_bank = bank.Bank(25000, 2500000)
    print(test_bank)

    test_bank.add_client_deposit("Jack Sparrow", 50000)
    test_bank.add_client_deposit("Johns Tip", 250)
    print(test_bank.cash_on_hand())
    test_bank.add_client_deposit("Johns Tip", 10)
    print(test_bank.cash_on_hand())
    ```

    Output:
    ```html
    The build is 25000 square ft and costs $2500000.
    The building is a bank with $0 cash on hand.
    50250
    50260
    ```

## Grade Specification

You will earn **four point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
