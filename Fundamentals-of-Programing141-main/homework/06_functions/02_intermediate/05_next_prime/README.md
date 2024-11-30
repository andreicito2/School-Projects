# CPTR 141: Objective #4 (2 points)

## Problem Overview

Your task in this homework assignment is to write twp functions to assist with finding prime numbers. Recall that a [prime number](https://en.wikipedia.org/wiki/Prime_number) is a number larger than one that does not have any divisors other than 1 and itself.


## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a function named `is_prime` in the file `next_prime.py` which takes a single integer parameter and returns `True` if that number is prime and `False` if it is not.

2. You must define a function named `next_prime` in the file `next_prime.py` which takes a single integer parameter and returns the next biggest integer that is prime.

3. The file `next_prime.py` should not contain a main program, it should only contain your functions. To test your functions, use the code in the `next_prime_test.py` file. Note that code in this file will not be graded.

1. Below is an example using these two functions which is implement in `next_prime_test.py`.

    Python Code:
    ```python
    num = 1
    while num >= 0:
        num = int(input("Enter a positive integer: "))
        if num >= 0:
            if next_prime.is_prime(num):
                print("The number {} is itself prime".format(num))
            else:
                print("The next biggest prime is {}".format(
                    next_prime.next_prime(num)
                ))

    print("Thanks for playing!")
    ```

    Output:
    ```html
    Enter a positive integer: 18
    The next biggest prime is 19
    Enter a positive integer: 21
    The next biggest prime is 23
    Enter a positive integer: -1
    Thanks for playing!
    ```

## Grade Specification

You will earn **two points** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
