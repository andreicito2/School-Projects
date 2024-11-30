import random

temp45 = ''
def Door_randomizer(lists, door_value):
    lists[door_value] = "10,000"


def seed_check():
    '''
    Checks if seed imput is valid
    '''
    seed = input("Please Enter a seed: ")
    repeat = 'yes'
    while repeat == 'yes':
        try:
            seed = int(seed)
            repeat = 'no'
            return seed

        except ValueError:
            print("You imput an invalid answer.")
            seed = input("Please Enter a seed: ")
            repeat = 'yes'


def user_door_check(user_door):
    '''
    Checks for correct input
    '''
    check_1 = ['1', '2', '3']
    repeat_1 = 'yes'
    while repeat_1 == "yes":
        if user_door in check_1:
            user_door = int(user_door)-1
            #print(user_door)
            repeat_1 = 'no'
            return user_door
            
            

        else:
            #print(user_door)
            print("You imput an invalid answer.")
            user_door = input(
                "What Door do you chose:\nDoor(1) Door(2) Door(3): ")
            repeat_1 = 'yes'


def check_switch(switch):
    '''
    makes sure getting correct input
    '''
    # ,'yes','Yes','no','No
    check_2 = ['Y', 'N']
    repeat_2 = 'yes'
    while repeat_2 == 'yes':
        if switch in check_2:
            repeat_2 = 'no'
            return switch
        else:
            print("You imput an invalid answer.")
            switch = input("Would You like to switch (Y/N): ")
            repeat_2 = 'yes'


def door_reveal(user_door, door_value):
    '''
    Reaveals door that hasn't been chosen and allows you to switch
    '''
    
    doors = [0,1,2]
    global temp45
    if user_door == door_value:
        doors.remove(user_door)
        temp45 = doors[random.randint(0,1)] # door reveild
        print(f"Behind door {temp45+1} there is tide.")
        switch = input("Would you like to switch Doors (Y/N): ")
        switch = check_switch(switch)
        
       
    else:
        doors.remove(user_door)
        doors.remove(door_value)
        temp45 = doors[0] # door reveiled
        print(f"Behind door {temp45+1} there is tide.")
        switch = input("Would you like to switch Doors (Y/N): ")
        switch = check_switch(switch)
        
    return switch
    
def user_value_switch(user_value, door_value):
    '''
    switches paper's choice
    '''
    global temp45
    doors = [0,1,2]
    doors2 = [0,1,2]
    if user_value == door_value:
        doors.remove(user_value)
        #temp45 = doors[random.randint(0,1)] # door reveild
        doors2.remove(temp45)
        doors2.remove(user_value)
        user_value = doors2[0]
        
    else:
        doors.remove(door_value)
        doors.remove(user_value)
        temp45 = doors[0] # door reveiled
        doors2.remove(temp45)
        doors2.remove(user_value)
        user_value = doors2[0]

    return user_value

def game_check(user_door, door_value):
    '''
    Returns a True or False
    '''
    if user_door == door_value:
        return True

def run_time_check():
    '''
    checks if value is a number
    '''
    rep = input("How many time would you like to repeat: ")
    repeat = 'yes'
    while repeat == 'yes':
        try:
            rep = int(rep)
            repeat = 'no'
            return rep

        except ValueError:
            print("You imput an invalid answer.")
            rep = input("Please Enter a valid number: ")
            repeat = 'yes'

def check_mode_select(value):
    '''
    makes sure input is correct
    '''
    check_3 = ['Q','S','L']
    repeat_3 = 'yes'
    while repeat_3 == 'yes':
        if value in check_3:
            repeat_3 = 'no'
            return value
        else:
            print("You imput an invalid answer.")
            value = input("Chose one: Live(L) Simulated(S) Quit(Q): ")
            repeat_3 = 'yes'

def switcher_function(user_value, door_value):
    '''
    swtiches the the computers choise for user value acroding to the rules of the game
    '''
    
    doors = [0,1,2]
    doors2 = [0,1,2]
    if user_value == door_value:
        doors.remove(user_value)
        temp45 = doors[random.randint(0,1)] # door reveild
        doors2.remove(temp45)
        doors2.remove(user_value)
        user_value = doors2[0]
    else:
        doors.remove(door_value)
        doors.remove(user_value)
        temp45 = doors[0] # door reveiled
        doors2.remove(temp45)
        doors2.remove(user_value)
        user_value = doors2[0]

    return user_value