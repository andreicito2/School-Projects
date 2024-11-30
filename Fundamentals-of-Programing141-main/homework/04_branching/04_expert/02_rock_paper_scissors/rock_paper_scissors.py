"""
Expert Problem: Implement the classic game "Rock-Paper-Scissors"

File Name: rock_paper_scissors.py
Name:      ?
Course:    CPTR 141
"""
import random
# your code goes here
s = int(input("Enter a random seed: "))

random.seed(s)
seed = random.randint(1,3)

print("The computer has chosen and so must you."
      "\n  1) Rock"
      "\n  2) Paper"
      "\n  3) Scissors")
human = int(input("Make your choice: "))

if 1 <= human <= 3:
        #print("in loop")
    if seed == 1:
        print("The computer chose Rock", end=" -- ")
        if human == 1:
            print("it's a tie!")
        if human == 2:
            print("you win!")
        if human == 3:
            print("you lose!")
    if seed == 2:
        print("The computer chose Paper", end=" -- ")
        if human == 1:
            print("you lose!")
        if human == 2:
            print("it's a tie!")
        if human == 3:
            print("you win!")
    if seed == 3:
        print("The computer chose Scissors", end=" -- ")
        if human == 1:
            print("you win!")
        if human == 2:
            print("you lose!")
        if human == 3:
            print("it's a tie!")

else:
    print("Invalid choice. Please enter a number between 1 and 3.")
