# data is a container
def container_swap(data):
    temp = data[0]
    data[0] = data[1]
    data[1] = temp


# n1 and n2 are numbers
def number_swap(n1, n2):
    temp = n1
    n1 = n2
    n2 = temp


my_list = ["one", "two"]
print(my_list)
container_swap(my_list)
print(my_list)
container_swap(my_list[:])
print(my_list)

a, b = 1, 2
print(a, b)
number_swap(a, b)
print(a, b)
