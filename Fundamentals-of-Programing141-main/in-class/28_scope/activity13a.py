balance = 0


def get_choice():
    print()
    print("Balance: ${:.2f}".format(balance))
    user_choice = input("(d)eposit, (w)ithdraw, (e)xit: ")
    return user_choice


def deposit(amount):
    global balance
    balance += amount


def withdraw(amount):
    global balance
    success = False
    if amount < balance:
        balance -= amount
        success = True
    return success


def main():
    print("Balance Tracker v0.1")

    choice = get_choice()
    while choice != "e":
        if choice == "d":
            value = float(input("Enter amount to deposit $"))
            deposit(value)
        elif choice == "w":
            value = float(input("Enter amount to withdraw $"))
            if not withdraw(value):
                print("Insufficient Funds!")
        choice = get_choice()
    print(choice)
    print("Goodbye!")


# run main program
main()
