"""
In-Class Exercise:  This program has the user guess a random number.

File Name: guess.py
Course:    CPTR 141
"""
import random
# pick a random number between 1 and 10
random.seed (498)
number = random.randint(1,10)

# prompt for the user guesses
print("I'm thinking of a number between 1 and 10")
guess1 = int(input("Guess 1:"))
guess2 = int(input("Guess 2:"))
guess3 = int(input("Guess 3:"))
# set a flag based on comparing the guesses with our number
sucess = False
if guess1 == number:
    sucess = True
elif guess2 == number:
    sucess = True
elif guess3 == number:
    sucess = True
# respond to the user
print()
if sucess:
    print("You are correct! ", end="")

print("The number was", number)