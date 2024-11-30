import random

# Missing Function

try_again = "y"
while try_again == "y":
    user_num = int(input("Enter a number from 1 to 5: "))
    while user_num < 1 or user_num > 5:
        print("Invalid number!")
        user_num = int(input("Enter a number from 1 to 5: "))
    comp_num = random.randint(1, 5)
    print("Computer number:", comp_num)
    print("Your number:", user_num)
    print(get_message(user_num, comp_num))
    try_again = input("Try again (y/n)? ")
