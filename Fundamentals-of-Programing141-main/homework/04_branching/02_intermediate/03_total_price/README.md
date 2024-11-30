# CPTR 141: Objective #4 (2 point)

## Problem Overview

Your task in this homework assignment is to write a program that determines the total cost of an item after the correct combination of discount has been applied.  These discounts are:

1. Any item with an original price of $250 or more receives a 30% discount, 
2. Any item with an original price between $65 and $249.99 receives a 15% discount. 
3. Any item with an original price lower than $65 will not receive a discount.
4. If the user is an employee, an additional 20% discout off of the original price is applied.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use `input` and `print` to get data from the user and display output.

2. You must use `if` statements to control branching.

3. You must format your code using the "Format Document" command in your development environment.

4. You **must** produce output exactly as shown below given the provided user input.

```html
Enter original price: 255
Are you an employee? yes

==========RECEIPT==========
Original Price:      255.00
30% Discount:        -76.50
Employee Discount:   -51.00
---------------------------
Final Price:         127.50
```

```html
Enter original price: 105.95
Are you an employee? no

==========RECEIPT==========
Original Price:      105.95
15% Discount:        -15.89
---------------------------
Final Price:          90.06
```

```html
Enter original price: 51.49
Are you an employee? no

==========RECEIPT==========
Original Price:       51.49
---------------------------
Final Price:          51.49
```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
