# TODO add code to reverse a string of the first command line argument
import sys

if len(sys.argv) != 2:
    print("Please provide a single string to reverse")
    sys.exit(1)
string_len = (len(sys.argv[1]))
for i in range(string_len):
    print(sys.argv[1][string_len - (i+1)],end="")

for arg in sys.argv:
    print(arg)