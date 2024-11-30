import os.path

def get_setup(config_file):
    if os.path.exists(config_file) and os.path.isfile(config_file):
        cf = open(config_file)
        rows = int(cf.readline().strip())
        cols = int(cf.readline().strip())
        char_one = cf.readline().strip()
        char_two = cf.readline().strip()
    else:
        cf = open(config_file, 'w')
        rows = int(input("Enter Number of Rows: "))
        cols = int(input("Enter Number of Columns: "))
        char_one = input("Enter Player One Symbol: ")
        char_two = input("Enter Player Two Symbol: ")
        cf.write(rows) # + '\n' + cols,'\n'+ char_one +'\n' + char_two)
        cf.write(cols + '\n')
        cf.write(char_one + '\n')
        cf.write(char_two + '\n')
    return (rows, cols, char_one, char_two)


def switch_char(current, c1, c2):
    """
    Switch characters
    """
    if current == c2:
        current = c1
    else:
        current = c2
    return current


def print_board(rows, cols, c1, c2):
    """
    Print out the game board
    """
    the_char = c2
    for i in range(rows):
        for j in range(cols):
            the_char = switch_char(the_char, c1, c2)
            print(the_char, end="")
        if cols % 2 == 0:
            the_char = switch_char(the_char, c1, c2)
        print()
    print()


def print_menu():
  """
  Display menu and get choice
  """
  print(
    "Program Menu\n" +
    "========================\n" +
    "  (r)enter configuration\n" +
    "  (p)rint board again\n" +
    "  e(x)it the program\n"
  )
  return input("Enter Choice: ")


"""
The main program, which just executes a menu loop and calls these functions
"""

(rows, cols, c1, c2) = get_setup("game_board.cfg")
print_board(rows, cols, c1, c2)

while True:
    choice = print_menu()
    if choice == "p":
        print_board(rows, cols, c1, c2)
    elif choice == "r":
        (rows, cols, c1, c2) = get_setup("game_board.cfg")
    elif choice == "x":
        break;
    else:
        print("Error! Invalid Option")

print("Done!")
cf.close()