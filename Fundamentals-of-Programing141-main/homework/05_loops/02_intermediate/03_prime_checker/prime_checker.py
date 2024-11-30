"""
Intermediate Problem:  Check to see if entered numbers are prime

File Name: prime_checker.py
Name:      ?
Course:    CPTR 141
===== Prime Checker =====
Enter a number: 66
66 is not a prime number
Would you like to enter another (y/n)? y

Enter a number: 13
13 is a prime number
Would you like to enter another (y/n)? n

Goodbye!
"""

# Your code goes here
print("===== Prime Checker =====")
do_again = "y"

while do_again == 'y':
    flag = False
    # print("",end="")
    num1 = int(input("Enter a number: "))
    if num1 == 1:
        flag = True
    else:
        for i in range(2, num1):
            if ((num1 % i) == 0):
                flag = True
                break
            
    if flag:
        print(f"{num1} is not a prime number")
    else:
        print(f"{num1} is a prime number")
    do_again = input("Would you like to enter another (y/n)? \n")
print("Goodbye!")
