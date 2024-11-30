"""
Expert Problem:  Create a function that translates a string into pig latin.

File Name: pig_latin.py
Name:      ?
Course:    CPTR 141
"""

# Your code goes here
def to_pig(string):
    #new = string.lower()
    lis = string.split()
    nous = ['a','e','i','o','u','A','E','I','O','U']
    # upper_case = []
    # for i in range(len(string)):
    #     if string[i].isupper():
    #         upper_case.append(i)

#put in chacher for caplital letters if capital make word caplital befor join statement
    for i, word in enumerate(lis):
        

        if word[0] in nous:
            lis[i] = lis[i] + 'yay'
            # if capital_flag == True:
            #     word[i].capitalize()
        else:
            #take all letter before voules and more them to back and add ay
            for j, letter in enumerate(word):
                if letter in nous:
                    lis[i] = word[j:] + word[:j] + "ay"
                    break
                    # if capital_flag == True:
                    #     word[i].capitalize()

        if not word.islower():
            lis[i] = lis[i].lower()
            lis[i] = lis[i].capitalize()
    

    pig_latin = ' '.join(lis)
    # for i in range(len(upper_case)):
        #grab index
    #pig_latin = pig_latin.capitalize()
    return pig_latin