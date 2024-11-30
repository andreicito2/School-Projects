"""
Implement your function in the file pig_latin.py

Use this file to test your function.  The code you write in this file will
not be graded.
"""


import pig_latin

test_string = "Each person who Knows you has a different perception of who you are"

print(
    'The phrase\n\n"{}"\n\ntranslates to\n\n"{}"\n\nin pig-latin.'.format(
        test_string, pig_latin.to_pig(test_string)
    )
)
