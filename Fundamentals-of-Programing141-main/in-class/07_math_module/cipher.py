"""
In-Class Exercise:  Use code point to transform characters

File Name: cipyer.py
Course:    CPTR 141
"""

# Collect a lower case letter as input
val = input("Enter a lower-case letter: ")

# Print the code point representation of letter
print("The Unicode character is",ord(val))


# Print the capitalize the letter (32 code points below)
print("The cpaital letter is", chr(ord(val)- 32))

# Collect the Caesar Cipher alphabet shift
offset = int(input("\nEnter cipher offset: "))

# Print the lower case letter's cipher character
print("The cipher character is", chr(ord(val) + offset))