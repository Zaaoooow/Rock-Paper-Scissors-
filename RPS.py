import random
import time

loop1 = 1
while loop1 == 1:
    print("1. Play against a friend")
    print("2. Play against ai")
    mode = input("Choose mode: ")

    moves = ["rock", "paper", "scissors"]

    p1 = input("Player 1, choose rock, paper, or scissors: ").lower()

    if mode == "1":
        p2 = input("Player 2, chooce rock, paper, or scissors: ").lower()
    elif mode == "2":
        p2 = random.choice(moves)
        print("Ai chose:", p2)
    else:
        print("Invalid")
        exit()

    if p1 == p2:
        print("It's a tie!")
    elif (p1 == "rock" and p2 == "scissors") or \
        (p1 == "paper" and p2 == "rock") or \
        (p1 == "scissors" and p2 == "paper"):
        print("Player 1 wins!")
    elif (p2 == "rock" and p1 == "scissors") or \
        (p2 == "paper" and p1 == "rock") or \
        (p2 == "scissors" and p1 == "paper"):
            if mode == "1":
                print("Player 2 wins!")
            else:
                print("Ai wins!")
    else:
         print("Invalid! ")
         exit()

    resetloop = 1
    if resetloop == 1:
        reset = input("Play again? Y/N: ").lower()
        if reset == "y":
            continue;
            resetloop = 0
        elif reset == "n":
            loop1 = 0
            break;
        else:
            print("Invalid!")
            exit()
            

        
    
    

    




