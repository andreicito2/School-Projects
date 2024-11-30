"""
Demonstration: A Banking Example with Global Variables

File Name: bank_account.py
Course:    CPTR 141
"""

# Global variables
# bank account balance
balance = float(0)
TAX_RATE = 0.098


def isfloat(value):
    try:
        float(value)
        return True
    except ValueError:
        return False


def menu():
    """
    Prints the menu to console, prompts for input, and returns input char
    """
    # display menu
    print("Your balance is: ${:.2f}".format(balance))
    print("******************************")
    print("Transaction Type:")
    print(" (D)eposit")
    print(" (T)axable Purchase")
    print(" (N)on-taxable Purchase")
    print(" (I)nterest")
    print(" (E)xit")

    # collect input
    choice = input("Your Choice: ")

    # return input
    return choice


def deposit(amount, balance):
    """
    Adds the given amount to the balance after subtracting a tithe
    of 10% of the deposit amount (non-taxable)
    """
    balance += 0.9 * amount
    return balance


def purchase(amount, taxable, balance):
    """
    Subtracts the given amount (plus possibly a 9.8% sales tax) from
    balance if there is enough in the account.  If there is not enough
    in the account, return false and display an error.
    """
    if taxable:
        amount += TAX_RATE * amount
    if amount <= balance:
        balance -= amount
        return True, balance
    else:
        return False, balance


def interest(rate, balance):
    """
    Adds the interest equal to the given rate times the account balance
    to the account balance
    """
    
    balance += rate * balance / 100
    return balance


def get_amount(rate):
    """
    Prompts the user for an amount (if rate==false) or a rate (if
    rate == true) and returns that amount
    """
    while True:
        # print correct message based on rate flag
        # collect and return input
        temp_input = input("Enter rate (as percent): " if rate else "Enter amount: $")

        if isfloat(temp_input):
            # User entered a number
            temp_input = float(temp_input)
            break
        else:
            print("Error: Please enter a number")

    return temp_input


def main():
    """
    Main program
    """
    balance = float(0)
    # infinite loop (until X is pressed)
    while True:
        # display menu and get choice
        choice = menu(balance)

        # exit the loop
        if choice == "E":
            break

        # based on that choice...
        if choice == "D":
            balance = deposit(get_amount(False), balance)
        elif choice == "T":
            (sucess, balance) = purchase(get_amount(False), True, balance)
            if not success:
                print("You do not have enough money to make this purchase!")
        elif choice == "N":
            (sucess, balance) = purchase(get_amount(False), False, balance)
            if not sucess:
                print("You do not have enough money to make this purchase!")
        elif choice == "I":
            balance = interest(get_amount(True), balance)
        else:
            print("Invalid Entry -- Please try again.")

        # extra blank line before next menu
        print()

    # print final balance and exit
    print("Your final balance is: ${:.2f}".format(balance))


# Run main program
main()
