user_guess = str(input("What Door do you choose:\nDoor(1) Door(2) Door(3):"))

user_check = ['1', '2', '3']
if not(user_guess in user_check):
    do_again = False
    print('Invalid Answer')
else:
    user_guess = int(user_guess)
    print(user_guess)