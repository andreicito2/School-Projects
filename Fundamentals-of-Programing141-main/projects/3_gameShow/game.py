# live version

import random
import game_functions
#seed = input("Please Enter a seed: ")

random.seed(game_functions.seed_check())

win_no_change = 0 #sets all stats to zero
lose_no_change = 0

win_change = 0
lose_chage = 0 

do_again = 'Y'
while do_again == "Y":
    
    choise = input("Chose one: Live(L) Simulated(S) Quit(Q): ") # choses what game type they want to play
    choise = game_functions.check_mode_select(choise)

    if choise == 'Q': #quits game
        do_again == False

    elif choise == 'S': #simulated game
        repeat = game_functions.run_time_check()
        #print(repeat)
        for i in range(repeat):
            doors = [0, 1, 2]
            door_value = random.randint(0, 2) #sets prise location
            user_door = random.randint(0, 2) #"human" choice
            switch = random.randint(0,1) # desides to switch or not
            if switch == 0:
                user_door = game_functions.switcher_function(user_door, door_value) # if it did switch choses new user value
                if game_functions.game_check(user_door, door_value): # checks if you win
                    win_change += 1
                else:
                    lose_chage += 1
            else: # if no swithc happens
                if game_functions.game_check(user_door, door_value): # checks if you win
                    win_no_change += 1
                else:
                    lose_no_change += 1
        


    elif choise == "L": # live game
        doors = ['Tide', 'Tide', 'Tide'] # sets doors
        door_value = random.randint(0, 2)
        # print(door_value)  # temp
        doors[door_value] = "10,000" #sets prise locaitoin
        #user_door = ''
        user_door = input("What Door do you chose:\nDoor(1) Door(2) Door(3): ")
        user_door = game_functions.user_door_check(user_door) #asks user for a value and checks it
        # print(game_functions.user_door_check(user_door))  # temp

        switch = game_functions.door_reveal(user_door, door_value) # asks if you would like to switch and reveals a non prise door

        if switch == 'Y':
            user_door = game_functions.user_value_switch(user_door, door_value)
            #user_door = game_functions.user_door_check(user_door) #checks user value
            if game_functions.game_check(user_door, door_value): #checks if you win
                print("You Win")
                win_change += 1
            else:
                print("You Lose")
                lose_chage += 1

        elif switch == 'N':
            if game_functions.game_check(user_door, door_value): #check if you win
                print("You Win")
                win_no_change += 1
            else:
                print("You Lose")
                lose_no_change += 1
    do_again = input("Would you like to go again,(Y/N): ") #end of do again
# win % if no change
# win % if change
#print(win_change) #test
#print(win_no_change) #test
#print(lose_chage) #test
#print(lose_no_change) #test
if (win_change == 0) or ((win_change + lose_chage) == 0): #checks if either numerator is zero and sets aporpriet values to zero
    win_percent_change = 0
else:
    win_percent_change = (win_change/(win_change + lose_chage))*100
if (win_no_change == 0) or ((win_no_change + lose_no_change) == 0):
    win_percent_no_change = 0
else:
    win_percent_no_change = (win_no_change/(win_no_change + lose_no_change))*100 #math for percents
    

#print("You won {:.1f} out of {} non switching games".format(win_percent_no_change,win_no_change + lose_no_change))
#print("You won {:.1f} out of {} switching games".format(win_percent_change,win_change + lose_chage))
# you chose to stay x times and won x%.
# you hose to switch m times and won m%
print("You chose to stay {} times and won {:.1f}%".format(win_no_change + lose_no_change, win_percent_no_change)) #prinnts results
print("You chose to switch {} times and won {:.1f}%".format(win_change + lose_chage, win_percent_change)) #print results