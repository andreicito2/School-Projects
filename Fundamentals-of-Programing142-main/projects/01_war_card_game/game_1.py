"Code Review by Karson Chrispens at 4:48 PM on 1/19"

import math
import functions_game_1

player_a = functions_game_1.Player()
player_b = functions_game_1.Player()
#print(player_a) reminder text

deck = input("Enter deck(file) name: ")# add file checker
card_read = open(deck)


counter_1 = 1
for line in card_read:
    
    if functions_game_1.even_check(counter_1):
        player_b.hand.append(int(line.rstrip()))
        counter_1 += 1
    else:
        player_a.hand.append(int(line.rstrip()))
        counter_1 += 1

print(player_a, len(player_a.hand)) #testing
print(player_b, len(player_a.hand)) #testing
turns_played = 0
while (len(player_a.hand) != 0) and (len(player_b.hand) != 0):
    store = []
    if player_a.hand[0] > player_b.hand[0]:
        store.append(player_a.hand.pop(0))
        store.append(player_b.hand.pop(0))
        player_a.hand.extend(store)
        turns_played +=1

    elif player_a.hand[0] < player_b.hand[0]:
        store.append(player_a.hand.pop(0))
        store.append(player_b.hand.pop(0))
        player_b.hand.extend(store)
        turns_played +=1

    elif player_a.hand[0] == player_b.hand[0]:#draw 5 card compare the last, if still equal set off another battle
        #make a way to check if the hands are empty and exit if so
        store.append(player_a.hand.pop(0))#a
        store.append(player_b.hand.pop(0))#b

        if len(player_a.hand) == 0:
            break
        else:
            store.append(player_a.hand.pop(0))#a

        if len(player_a.hand) == 0:
            break
        else:
            store.append(player_a.hand.pop(0))#a

        if len(player_a.hand) == 0:
            break
        else:
            store.append(player_a.hand.pop(0))#a

        if len(player_b.hand) == 0:
            break
        else:
            store.append(player_b.hand.pop(0))#b
        
        if len(player_b.hand) == 0:
            break
        else:
            store.append(player_b.hand.pop(0))#b
        
        if len(player_b.hand) == 0:
            break
        else:
            store.append(player_b.hand.pop(0))#b



        turns_played +=functions_game_1.battle(store,player_a.hand, player_b.hand )


    print()
    print(player_a)
    print(player_b)
    print()
    print(turns_played)