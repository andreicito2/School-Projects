"""
Beginner Problem: Create a program that adds two new keys to an existing dictionary
                  containing states abbreviations and their capitols.

File Name: state_dictionary.py
Name:      ?
Course:    CPTR 141
"""

state_capitols = {
    "CA": "Sacramento",
    "OR": "Salem",
    "WA": "Olympia",
    "TX": "Austin",
    "NY": "Albany",
}

# Your code goes here
fir_st_abv = input("Enter the first state abbreviation: ")
state_capitols[fir_st_abv] = input("Enter the first state capitol: ")
sec_st_abv = input("Enter the second state abbreviation: ")
state_capitols[sec_st_abv] = input("Enter the second state capitol: ")

print("\nUpdated states dictionary:")
print(state_capitols)