def main():
    files = input('Put text file: ')
    sports_list = open(files)
    for index in range(1,10):
        sp = sports_list.readline()
        print("{}. {}".format(index,sp.lstrip()))


main()
