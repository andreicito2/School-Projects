"""
In-Class Exercise:  Use a while loop to count and accumulate.

File Name: sum_of_range.py
Course:    CPTR 141
"""

# define needed variables
counter = 0
sum = 0

# prompt the user for the maximum
limit = int(input("How far should I count? "))
while counter < limit:
    
    counter +=1
    sum = counter + sum
    print(counter, end=" ")
# use the while loop to count

# YOUR CODE GOES HERE

# print out the final sum
print("\n\nThe sum of 1-{} is {}.".format(limit, sum))
