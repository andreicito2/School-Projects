do_again = "y"
while (do_again == "y"):
    word = input("Enter a word: ")
    print("The first letter is {}".format(word[0]))
    do_again = input("Type 'y' anything else to quit.")
print("Done")