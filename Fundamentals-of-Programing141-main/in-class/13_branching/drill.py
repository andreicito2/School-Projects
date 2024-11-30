"""
In-Class Exercise:  Allows the user to pick a type of problem and then
                    displays a random problem of that type, prompting
                    the user for an answer and giving feedback on it

File Name: drillpy
Course:    CPTR 141
"""
import random

x = random.randint(0, 999)
y = random.randint(0, 999)

# prompt the user for a type of problem
print("Which type of problem would you like to try?")
print("  1) Addition")
print("  2) Subtraction")
print("  3) Multiplication")
print("====================")
choice = input("Enter 1, 2, or 3: ")

# add your if else statements here to display the correct
#   type of problem and compute the correct answer

## CODE GOES HERE ##

# check the answer and display result
if answer == correct:
    print("Congratulations! You got the right answer.")
else:
    print("The correct answer is {}".format(correct))
