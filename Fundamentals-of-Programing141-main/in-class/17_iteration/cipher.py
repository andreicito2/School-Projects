"""
In-Class Exercise:  Use code point to transform characters

File Name: cipher.py
Course:    CPTR 141
"""
again = "y"
while again == "y":
# Collect the secret
    secret = input("Enter a secret: ")

# Collect the Caesar Cipher alphabet shift
    offset = int(input("Enter cipher shift: "))

# YOUR CODE GOES HERE
    encoded = ""
    i = 0
    while i < len(secret):
        encoded = encoded + chr(ord(secret[i]) + offset) 
        i += 1
print("The encoded text is: {}".format(encoded))
input("Would you like to encode another secret? (y/n)")