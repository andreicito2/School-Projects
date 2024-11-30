"""
In-Class Exercise: Format Floatting Point Output

File Name: format_floats.py
Course:    CPTR 141
"""

# Approximation of Lioville's number
lio = 0.110001000000000000000001000

# now print it out as shown
print("{:0.2f}".format(lio))
print("{:10.3f}".format(lio))
print("{:0.2e}".format(lio))
