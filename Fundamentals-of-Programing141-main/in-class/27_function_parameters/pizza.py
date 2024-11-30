def order_pizza(crust, sauce, *topping1):
    print("Pizza with {} crust and {} sauce".format(
        crust,sauce), end='')
    if len(topping1) > 0:
        print(" topped with ", end='')
        for i in range(len(topping1)):
            if i >0:
                print(" and ",end='')
            print(topping1[i], end="")
        print()

print()
order_pizza("thick", "tomato", "mushrooms")
order_pizza("think", "tomato", "mushrooms", "olives")
order_pizza("thin", "garlic")
print("\n")