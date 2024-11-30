my_var = 1
def my_func():
    global my_var
    print(my_var)
    my_var = 2
    

my_func()
print(my_var)