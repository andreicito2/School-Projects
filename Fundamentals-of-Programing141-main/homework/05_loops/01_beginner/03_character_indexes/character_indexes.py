"""
Beginner Problem: Write a program that finds the indexes of all
                  occurrences of a given character within a
                  given string. Treat upper and lower case the same

File Name: character_indexes.py
Name:      ?
Course:    CPTR 141
"""

# Your code goes here
string = input("Enter a string: ")
letter = input("Enter the character to search for: ")
counter = 0 
similar = []
for i in range(len(string)):
    if letter in string[i]:
        counter += 1
        similar.append(i)
        

if counter > 0:
    print(f"\nThe character \"{letter}\" appears at indexes {similar}.")
else:
    print(f"\nThe character \"{letter}\" does not appear in the given string.")