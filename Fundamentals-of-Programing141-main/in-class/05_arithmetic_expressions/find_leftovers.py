"""
In-Class Demonstration: Find the Leftover Candybars

File Name: find_leftovers.py
Course:    CPTR 141
"""

# Collect integer input
num_snickers  = int(input("How many Snickers do you have? "))
num_milky_way = int(input("How many Milky Way bars do you have? "))
num_friends   = int(input("How many friends do you have? "))

# compute candy bar numbers
num_bars_per_friend  = (num_snickers // num_friends) #+ (num_milky_way // num_friends)
num_leftover         = (num_snickers % num_friends) #+ (num_milky_way % num_friends)
num_bars_per_friend += (num_milky_way // num_friends)
num_leftover        += (num_milky_way % num_friends)
# now print it out
template = "\nEach person gets {:d} candy bars with {:d} leftover"
print(template.format(num_bars_per_friend,num_leftover))
