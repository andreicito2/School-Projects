# first function
def print_sum(num1, num2):
    print("{} + {} = {}".format(num1, num2, num1 + num2))
    if (num1 < 1 or num1 > 10) or (num2 <1 or num2 > 10):
        print("Warning at least one of num is greator than 10")

# second function
def print_difference(num1, num2):
    print("{} - {} = {}".format(num1, num2, num1 - num2))
    if (num1 < 1 or num1 > 10) or (num2 <1 or num2 > 10):
        print("Warning at least one of num is greator than 10")

# main program: collect user input
first_num = int(input("Enter a number between 1 and 10: "))
second_num = int(input("Enter another number between 1 and 10: "))
operation = input("Enter a '+' to add or a '-' to subtract: ")

# main program: decide which function to call
if operation == '+':
    print_sum(first_num, second_num)
elif operation == '-':
    print_difference(first_num, second_num)
else:
    print("Invalid Operation!")