def get_smaller(num1, num2):
    if num1 < num2:
        smaller = num1
    else:
        smaller = num2
    return smaller


def main():
    user_input1 = int(input("Enter a number: "))
    user_input2 = int(input("Enter a second number: "))

    smaller_number = get_smaller(user_input1, user_input2)
    print("The smaller of the two numbers is", smaller_number)


# call to main
main()
