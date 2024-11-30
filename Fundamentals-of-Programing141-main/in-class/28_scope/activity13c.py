my_str = "global scope"


def my_func_one():
    my_str = "my_func_one() scope"
    print(my_str)


def my_func_two():
    print(my_str)
    my_func_one()


def main():
    my_str = "main() scope"
    print(my_str)
    my_func_two()
    print(my_str)


main()
print(my_str)
