"""
Project II:  An implementation of the so-called "Russian Peasant" or "Ancient
             Egyptian" method for multiplication.

File Name:   multiplier.py
Name:        ?
Course:      CPTR 141
Code Review: 
"""
"""

Code Review: Karson Chrispens @ 6:01 PM on 10/31
"""
# 45 = -
# 32-47, 58-126
#48-57 is numbers



do_again = "y"
while do_again == "y": #looping funtion with sentinal value 'y'
    continue_flag = True
    #print("In loop")
    odd = {} #dictionary for even numbers
    odd_v2 = [] #list to store odd numbers
    a = (input("What is your first value: "))# getting values from human
    b = (input("What is your second value: "))
    numbers = ["1",'2','3','4','5','6','7','8','9','0','-']
    zero = ['0']
    for i in range(len(a)): # Checking if an integer was input with for loop
        if not(a[i] in numbers):
        #if (ord(a[i]) == range(32,45)) or (ord(a[i]) == range(46,48)) or (ord(a[i]) == range(58,126)):
            print("One of your values is not an integer. Pleas try again.")
            continue_flag = False
    for j in range(len(b)):
        if not(b[j] in numbers):
        #if (ord(b[i]) == range(32,45)) or (ord(b[i]) == range(46,48)) or (ord(b[i]) == range(58,126)):
            print("One of your values is not an integer. Pleas try again.")
            continue_flag = False
            '''
    for h in range(len(b)): #checks for zeros
        if (b[0] in zero):
            print("0")
            continue_flag = False
            '''
    if continue_flag:
        if (b[0] == '-'): # check if second value is negative 
            if (a[0] == '-'): # checks if a is negative so if both are negative then it sets it to positive
                a = int(a)
                b = int(b)
                a *= -1
                b *= -1
                print(a,b)#system that dose the math
                while b > 1:
                    if (b % 2) == 1: #ckecks it b is odd
                        odd[b] = a
                        odd_v2.append(a)
                    b = b//2
                    a = a+a
                    print(a, b)
                    if (b % 2) == 1:
                        odd[b] = a
                        odd_v2.append(a)
                    odd_list = (set(odd_v2))  
                    print(odd_list,"=", end=" ")
                    print(sum(odd_list))
            else: # if only b is negative then make final produte negative.
                a = int(a)
                b = int(b)
                b *= -1
                print(a,b)#
                while b > 1:#system that dose the math
                    if (b % 2) == 1: #ckecks it b is odd
                        odd[b] = a
                        odd_v2.append(a)
                    b = b//2
                    a = a+a
                    print(a, -1*b)
                    if (b % 2) == 1:
                        odd[b] = a
                        odd_v2.append(a)
                odd_list = (set(odd_v2)) # add a for loop here to do pluses 
                print(odd_list,"=", end=" ")
                print(-1*sum(odd_list))

        else:
            a = int(a)
            b = int(b)
            print(a,b)
            while b > 1: #system that dose the math
                if (b % 2) == 1: #ckecks it b is odd
                    odd[b] = a
                    odd_v2.append(a)
                b = b//2
                a = a+a
                print(a, b)
                if (b % 2) == 1:
                    odd[b] = a
                    odd_v2.append(a)
            odd_list = (set(odd_v2)) 
            print(odd_list,"=", end=" ")
            print(sum(odd_list))
    do_again = input("Type 'y' to continue: ") # asking if you want to continue
print("done")
