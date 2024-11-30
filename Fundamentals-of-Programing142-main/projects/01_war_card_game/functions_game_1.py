class Player:
    def __init__(self):
        self.hand = []

    def __str__(self):
        return f"{self.hand}"
    

    #make greater than and less then functions and == function
    

def even_check(counter):# checks if counter is even
    if (counter % 2) == 0:
        return True
    else:
        return False

def temp_store_values(temp_list, v1, v2):
    temp_list.append(v1)
    temp_list.append(v2)
    
def battle(temp_list, list_a, list_b ):
    turns_played =0
    if list_a[0] > list_b[0]:
        temp_list.append(list_a.pop(0))
        temp_list.append(list_b.pop(0))
        list_a.extend(temp_list)
        turns_played += 1

    
    elif list_a[0] < list_b[0]:
        temp_list.append(list_a.pop(0))
        temp_list.append(list_b.pop(0))
        list_b.extend(temp_list)
        turns_played += 1

    elif list_a[0] == list_b[0]:
        temp_list.append(list_a.pop(0))#a
        temp_list.append(list_b.pop(0))#b

        if len(list_a) == 0:
            return
        else:
            temp_list.append(list_a.pop(0))#a
        
        if len(list_a) == 0:
            return
        else:
            temp_list.append(list_a.pop(0))#a

        
        if len(list_a) == 0:
            return
        else:
            temp_list.append(list_a.pop(0))#a

        if len(list_b) ==0:
            return
        else:
            temp_list.append(list_b.pop(0))#b
        
        if len(list_b) ==0:
            return
        else:
            temp_list.append(list_b.pop(0))#b

        if len(list_b) ==0:
            return
        else:
            temp_list.append(list_b.pop(0))#b


        turns_played += battle(temp_list, list_a, list_b)
 
    
    # print()
    # print(list_a)
    # print(list_b)
    # print()
    # print(turns_played)
    return turns_played