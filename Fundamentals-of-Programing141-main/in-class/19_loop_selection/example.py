'''
list = []
for i in range(0,6):
    list.append( 2 ** i)
print(list)
'''
powers_of_2 = list(2** i for i in range(1000))
print(powers_of_2)