"""
In-Class Exercise:  Print out a nicely formated budget with:
                      * exactly three columns
                        - 16 characters in column one, left aligned
                        - 10 characters in column two, right alighed
                        - 12 characters in column three, right aligned
                      * dollar values given to two decimal places
                      * centered column headings

File Name: pin_code.py
Course:    CPTR 141
"""

characters_in_row = 38

budget_header = "{category:^16s}{budget:^10s}{remaining:^12s}"  # Define your header format
budget_row = "{category:<16s}{budget:>10.2f}{remaining:>12.2f}"     # Define your row format

# note the use of named values in the format method
print(budget_header.format(category="Category", budget="Budget", remaining="Remaining"))
print("-" * characters_in_row)
print(budget_row.format(category="Food", budget=300, remaining=156.10))
print(budget_row.format(category="Rent", budget=800, remaining=0))
print(budget_row.format(category="Internet", budget=59.99, remaining=59.99))
