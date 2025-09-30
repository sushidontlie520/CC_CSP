# ME CC SN SPC 6th Tic Tac Toe

import random
# Variables
user_input = input("Pick either O or x for a Tic Tac Toe game!: ").capitalize()

if user_input == "x":
    print("You picked x!")
elif user_input == "O":
    print("You picked O!")
else:
    print("You picked neither O or x, please pick O or x PLEASE!")

board = [" " for _ in range(9)] 
#display the current board
def print_board(): 
       print() 
       print(f"{board[0]} | {board[1]} | {board[2]}")
       print("---|---|---") 
       print(f" {board[3]} | {board[4]} | {board[5]}")
       print("---|---|---") 
       print(f"{board[6]} | {board[7]} | {board[8]}")
       print() 

#winning combos
def winner_combos(player): 
    win_combos = []
    [0,1,2], [3,4,5], [6,7,8],  #if_row
    [0,4,8], [2,4,6], #if_diagonal
    [0,3,6], [1,4,7], [2,5,8] #if_column
    for combo in win_combos:
            if all (board[i] == player for i in combo):
                return True 
            return False 
def is_full():
            return " " not in board 
                