my_string = "global"
def main():
    my_string = "main"
    if True:
        my_string = "if"
    print(my_string)
main()

i = 6
for i in range(1, 5):
    for i in range(1, 5):
        for i in range(1, 5):
            print(i,end=" ")
        print()