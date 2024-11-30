"""
Intermediate Problem: Create a program that mimics the basic arithmic functions
                      of a calculator.

File Name: basic_calculator.py
Name:      ?
Course:    CPTR 141
"""

# Your code goes here
first_num = int(input("Enter the first number: "))
operator = input("Enter the operator (+, -, *, or /): ")
sec_num = int(input("Enter the second number: "))
print()
if operator == '+':
    print(first_num, "+", sec_num, '=', first_num + sec_num)
elif operator == '-':
    print(first_num, "-", sec_num, '=', first_num - sec_num)
elif operator == '*':
    print(first_num, "*", sec_num, '=', first_num * sec_num)
elif operator == '/':
    if (sec_num == 0):
        print("Error! Can not divide by zero.")
    else:
        print(first_num, "/", sec_num, '=', first_num / sec_num)

else:
    print("Invalid operation -- I don't know how to {}.".format(operator))
