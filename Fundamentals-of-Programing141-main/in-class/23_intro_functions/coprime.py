"""
In-Class Exercise: Define GCD and Coprime functions

File Name: coprime.py
Course:    CPTR 141
"""


# GCD function
def gcd(x, y):
    my_gcd = 1
    for i in range(1, max(x, y) + 1):
        if x % i == 0 and y % i == 0:
            my_gcd = i
    return my_gcd


# Define your functions here
def coprime(x,y):
    my_coprime = 1
    if gcd(x,y) == 1:
        print("The greates comon denominator is 1")
        my_coprime = 1
    else:
        print(f"They are prime")
    

"""
Add a "coprime()" function that takes two integer parameters and returns True
if the numbers have a greatest common divisor of one, False otherwise.

Stretch Goals:
==============
  * Define a "gcd_three" function that returns the greatest common divisior 
    of three numbers.

  * Define a "coprime_three" function that returns True if the gcd of three
    numbers is one, False otherwise.
"""

# Call functions here
var_1 = gcd(6, 10)
print(5 + gcd(6, 10))
var_3 = gcd(gcd(6, 10), 15)
coprime(81,9)

"""
Call your functions in at least two different ways
"""
