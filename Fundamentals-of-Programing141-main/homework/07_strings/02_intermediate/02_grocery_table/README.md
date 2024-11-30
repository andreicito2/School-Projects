# CPTR 141: Objective #7 (2 point)

## Problem Overview

Your task in this homework assignment is to create a function that produces an itemized invoice of groceries based on a list of items purchased and a price dictionary.


## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `invoice` in the file `grocery_table.py` which takes two parameters:

    i. A list of groceries purchased, which may contain duplicates.

    ii. A dictionary with grocery items as the key and prices as the values.

2. The function must print out a formatted invoice consisting of the following columns with the indicated width, and one row for each type of item.  The columns are:

    * The item name, left justified, 15 characters wide
    * The unit price, right justified, 12 characters wide
    * The quantity of that item in the list, centered, 10 characters wide
    * The total price (unit price times quantity), right justified, 12 units wide

3. The file `gorcery_table` should not contain a main program, it should only contain your function. To test your function, add code to the `gorcery_table_test.py` file. Note that code in `gorcery_table_test.py` will not be graded.

4. Below is an example of a call to the `invoice` function which you could implement in `gorcery_table_test.py` to test your function.

    Python Code:
    ```python
    import grocery_table

    grocery_list = ["Grapes", "Egg", "Grapes", "Bread", "Egg", "Milk", "Egg", "Egg", "Egg", "Egg"]
    price_dict= {"Grapes": 2.39, "Egg": 0.25, "Bread": 2.79, "Milk": 3.29}

    grocery_table.invoice(grocery_list, price_dict)
    ```

    Output:
    ```html
    Item Name        Unit Price Quantity  Total Price
    =================================================
    Grapes                 2.39    2             4.78
    Egg                    0.25    6             1.50
    Bread                  2.79    1             2.79
    Milk                   3.29    1             3.29
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
