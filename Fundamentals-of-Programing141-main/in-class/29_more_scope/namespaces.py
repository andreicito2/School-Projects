var_one = 0


def main():
    var_two = 0

    def my_func(var_three=0):
        var_four = 0
        print(var_two)
        print(locals(), "\n")
        

    var_four = 0
    print(locals(), "\n")
    print(globals(), "\n")

    my_func(1)


main()
