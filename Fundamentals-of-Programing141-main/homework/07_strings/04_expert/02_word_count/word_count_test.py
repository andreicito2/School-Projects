"""
Implement your function in the file word_count.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""


import word_count

test_string = "This is a test.  This is only a test!  Got it?"
#print(word_count.get_statistics(test_string))
(num, min, max, avg) = word_count.get_statistics(test_string)
table = word_count.get_table(num, min, max, avg)

print(table)
