"""
Beginner Problem: List all lower case characters in the alphabet that come
                  before a given character in reverse order

File Name: reverse_alphabet.py
Name:      ?
Course:    CPTR 141
"""

# Your code goes here
letter = input("Enter a letter in the alphabet: ")
letter = letter.lower()
print()
print("Listing Backwards:")
for i in range(ord(letter),96,-1):
    if i >97: 
        print(chr(i),end=" ")
    else:
        print(chr(i))