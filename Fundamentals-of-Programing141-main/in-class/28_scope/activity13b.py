a = 0


def my_func(b=4):
    c = 5
    print("Value: {}".format(c))


def main():
    d = 5
    if d > 2:
        print("Value: {}".format(a))
        e = 3
        if e < 10:
            f = 7
            print("Value: {}".format(f))
    print("Value: {}".format(f))
    my_func()


main()
