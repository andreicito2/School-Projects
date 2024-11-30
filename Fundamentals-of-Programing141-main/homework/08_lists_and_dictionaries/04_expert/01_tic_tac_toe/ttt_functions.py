"""
Expert Problem:  Functions for a tic-tac-toe game

File Name: ttt_functions.py
Name:      ?
Course:    CPTR 141
"""

 
def print_board(board):
    print(f" {board[0][0]} | {board[0][1]} | {board[0][2]} ")
    print("---+---+---")
    print(f" {board[1][0]} | {board[1][1]} | {board[1][2]} ")
    print("---+---+---")
    print(f" {board[2][0]} | {board[2][1]} | {board[2][2]} ")
    pass


def play(symbol, row, col, board):
    if board[row][col] == ' ':
        board[row][col] = symbol
        return True
    else:
        return False


def can_play(board):
    counter = 0
    for i in board:
        for j in i:
            if j != ' ': 
                counter += 1
    if counter == 9:
        return False
    else:
        return True
            


def check_win(board):
    for i in board:
        if i == ['X','X','X'] or i == ['O','O','O']:
            return i[0]
    if board[0][0] == board[1][0] == board[2][0]:
        return board[0][0]
    if board[0][1] == board[1][1] == board[2][1]:
        return board[0][1]
    if board[0][2] == board[1][2] == board[2][2]:
        return board[0][2]
    if board[0][0] == board[1][1] == board[2][2]:
        return board[0][0]
    if board[0][2] == board[1][1] == board[2][0]:
        return board[0][2]
    else:
        return False
