"""
In-Class Exercises: Experiment with placement of initialization
                    and update commands.

File Name: nested_while.py
Course:    CPTR 141
"""

row = 0
#col = 0            # (a)
count = 0
while row < 5:
    col = 0        # (a)
    # row += 1         # (b)
    while col < 5:
        # col = 0    # (a)
        print((row, col))
        count += 1
        col += 1
        #row += 1     # (b)
    # col = 0        # (a)
    row += 1         # (b)
# row += 1             # (b)
print("Count is:", count)
