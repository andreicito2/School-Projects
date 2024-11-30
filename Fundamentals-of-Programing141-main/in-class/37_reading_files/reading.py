"""
In-Class Demo: Reading Files

File Name: reading.py
Course:    CPTR 141
"""


def read_all():
    """
    Read the entire file contents
    Question: what type is the "f" variable?
    """
    f = open("carmans_ode.txt")
    contents = f.read()
    print(contents)
    f.close()


def read_one():
    """
    Read just the first two lines
    Question: Why do we see extra blank lines? How can we fix this?
    """
    f = open("carmans_ode.txt")
    for i in range(2):
        line = f.readline()
        print(line)
    f.close()


def read_iterate():
    """
    Read the entire file one line at a time
    Question: What advantage does this have over using "f.readline()"?
    """
    f = open("carmans_ode.txt")
    for line in f:
        print(" {:s} ".format(line.strip()), end="-")
    print()
    f.close()


def read_list():
    """
    Read all lines into a list
    Question: What type of variable does "f.readlines()" return?
    """
    f = open("carmans_ode.txt")
    lines = f.readlines()
    for line in lines[2:]:
        print(line.rstrip())
    f.close()


# pick the function to run
# read_all()
# read_one()
# read_iterate()
read_list()
