"""
In-Class Exercise:  Check to see if a user-entered PIN code is valid
                    (four characters long, contains only digits).

File Name: pin_code.py
Course:    CPTR 141
"""


def valid_pin(pin_code):
    #exactly 4 craracters
    if len(pin_code) != 4:
        return False
    #only digits 0-9
    if pin_code.isdigit():
        return True
    else:
        return False


# collect user input
pin_code = input("Please enter a four digit PIN code: ")

# print out results
if valid_pin(pin_code):
    print("PIN code valid")
else:
    print("ERROR: PIN code not valid")
