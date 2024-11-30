"""
In-Class Exercise:  This program gives us the results of various
                    combinatons of boolean and relational operators.

File Name: boolean.py
Course:    CPTR 141
"""

# change the values of these variables to test your expressions
limit = 10
count = 0

# Does the boolean expression below do what it is supposed to?
# If it does not, correct it and then re-run it to confirm.

# The count is zero and the limit is more than 20
print( count == 0 and limit > 20 )

# The count equals two or the limit is at least 5
print( (count == 2) or limit >= 5 )

# The limit is between 5 and 20
print( 5 < limit < 20 )

# The limit is not equal to ten more than the count
print( not(limit == count + 10) )

# The count is less than 7 times the limit and the count is 0
print( (count < limit * 7) and (count == 0) )
