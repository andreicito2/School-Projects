def character_range(start="a", end="z", skip=1):
    """
    return a list of characters in the given range
    """
    my_list = []
    for code in range(ord(start), ord(end) + 1, skip):
        my_list.append(chr(code))
    return my_list


print(character_range())
