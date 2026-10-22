/*

have to add graphics

*/
#include <bits/stdc++.h>
#include <chrono>
#include <iostream>
#include <string>
#include <thread>
#include <pdcurses.h>
using namespace std;
int main(){
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, true);
    curs_set(0);

    srand(time(NULL));

    int mode = 0;
    int choice = 0;
    int choice2 = 0;
    int playerScore = 0;
    int playerScore2 = 0;
    int computerScore = 0;
    int ties = 0;
    int key;
    int key2;
    int key3;
    int computer;

    string options[] = {"Rock", "Paper", "Scissors"};

    bool loop1 = true;
    bool loop2 = false;
    while(loop1){
        clear();

        mvprintw(2, 5, "===========================");
        mvprintw(3, 5, "    ROCK PAPER SCISSORS    ");
        mvprintw(4, 5, "===========================");
            
        mvprintw(5, 5, "   Use UP/DOWN and ENTER   ");

        if(mode == 0){
            mvprintw(8, 5, "> Play against Computer");
        }
        else{
            mvprintw(8, 5, "  Play against Computer");
        }
        if(mode == 1){
            mvprintw(10, 5, "> Two Player");
        }
        else{
            mvprintw(10, 5, "  Two Player");
        }
        mvprintw(13, 5, "Press Q to quit");

        refresh();

        key = getch();

        if(key == KEY_UP && mode > 0){
            mode--;
        }
        else if(key == KEY_DOWN && mode < 1){
            mode++;
        }
        else if(key == 'q' || key == 'Q'){
            loop1 = false;
        }
        else if(mode == 1 && (key == KEY_ENTER || key == '\n' || key == '\r')){
            loop2 = true;
            bool p1 = true;
            bool p2 = false;
            bool p2logic = false;
            while(loop2){
                if(p1 == true){
                    clear();

                    mvprintw(3, 5, "Player 1's turn");

                    if(choice == 0){
                        mvprintw(5, 5, "> Rock");
                    }
                    else{
                        mvprintw(5, 5, "  Rock");
                    }
                    if(choice == 1){
                        mvprintw(7, 5, "> Paper");
                    }
                    else{
                        mvprintw(7, 5, "  Paper");
                    }
                    if(choice == 2){
                        mvprintw(9, 5, "> Scissors");
                    }
                    else{
                        mvprintw(9, 5, "  Scissors");
                    }

                    mvprintw(11, 5, "Press R to return to main menu");

                    refresh();

                    key = getch();

                    if(key == KEY_UP && choice > 0){
                        choice--;
                    }
                    else if(key == KEY_DOWN && choice < 2){
                        choice++;
                    }
                    else if(key == 'r' || key == 'R'){
                        loop2 = false;
                    }
                    else if((key == KEY_ENTER || key == '\n' || key == '\r')){
                        clear();
                        p2 = true;
                        bool loop3 = true;
                        while(loop3){
                            if(p2 == true){
                                mvprintw(3, 5, "Player 2's turn");

                                if(choice2 == 0){
                                    mvprintw(5, 5, "> Rock");
                                }
                                else{
                                    mvprintw(5, 5, "  Rock");
                                }
                                if(choice2 == 1){
                                    mvprintw(7, 5, "> Paper");
                                }
                                else{
                                    mvprintw(7, 5, "  Paper");
                                }
                                if(choice2 == 2){
                                    mvprintw(9, 5, "> Scissors");
                                }
                                else{
                                    mvprintw(9, 5, "  Scissors");
                                }

                                refresh();

                                key2 = getch();

                                if(key2 == KEY_UP && choice2 > 0){
                                    choice2--;
                                }
                                else if(key2 == KEY_DOWN && choice2 < 2){
                                    choice2++;
                                }
                                else if(key2 == KEY_ENTER || key == '\n' || key == '\r'){
                                    clear();
                                    p2logic = true;
                                    int loop4 = true;
                                    while(loop4){
                                        if(p2logic == true){
                                            refresh();
                                            mvprintw(3, 5, "Player 1's choice: ");
                                            if(choice == 0){
                                                mvprintw(4, 5, "Rock");
                                            }
                                            else if(choice == 1){
                                                mvprintw(4, 5, "Paper");
                                            }
                                            else if(choice == 2){
                                                mvprintw(4, 5, "Scissors");
                                            }
                                            mvprintw(6, 5, "Player 2's choice: ");
                                            if(choice2 == 0){
                                                mvprintw(7, 5, "Rock");
                                            }
                                            else if(choice2 == 1){
                                                mvprintw(7, 5, "Paper");
                                            }
                                            else if(choice2 == 2){
                                                mvprintw(7, 5, "Scissors");
                                            }

                                            if(choice == choice2){
                                                mvprintw(10, 5, "It's a tie");
                                            }
                                            if((choice == 0 && choice2 == 2) || (choice == 1 && choice2 == 0) || (choice == 2 && choice2 == 1)){
                                                mvprintw(10, 5, "Player 1 wins!");
                                            }
                                            else if((choice2 == 0 && choice == 2) || (choice2 == 1 && choice == 0) || (choice2 == 2 && choice == 1)){
                                                mvprintw(10, 5, "Player 2 wins!");
                                            }
                                            mvprintw(12, 5, "Press any key to start next round");

                                            refresh();

                                            if(getch(), true){
                                                choice = 0;
                                                choice2 = 0;
                                                playerScore2 = 0;
                                                playerScore = 0;
                                                loop4 = false;
                                                loop3 = false;
                                            }
                                            
                                        }
                                    }
                                }
                            }
                        }
                    }
                    
                }
            }
        }
        else if(mode == 0 && (key == KEY_ENTER || key == '\n' || key == '\r')){
            loop2 = true;
            while(loop2){
                clear();

                if(choice == 0){
                    mvprintw(3, 5, "> Rock");
                }
                else{
                    mvprintw(3, 5, "  Rock");
                }
                if(choice == 1){
                    mvprintw(5, 5, "> Paper");
                }
                else{
                    mvprintw(5, 5, "  Paper");
                }
                if(choice == 2){
                    mvprintw(7, 5, "> Scissors");
                }
                else{
                    mvprintw(7, 5, "  Scissors");
                }
                
                mvprintw(9, 5, "Press R to return to main menu");

                refresh();

                key = getch();

                if(key == KEY_UP && choice > 0){
                    choice--;
                }
                else if(key == KEY_DOWN && choice < 2){
                    choice++;
                }
                else if(key == 'r' || key == 'R'){
                    loop2 = false;
                }
                else if(key == KEY_ENTER || key == '\n' || key == '\r'){
                    computer = rand() % 3;
                    clear();
                    
                    mvprintw(3, 5, "Your choice: ");

                    if(choice == 0){
                        mvprintw(4, 5, "Rock");
                    }
                    else if(choice == 1){
                        mvprintw(4, 5, "Paper");
                    }
                    else if(choice == 2){
                        mvprintw(4, 5, "Scissors");
                    }
                    mvprintw(6, 5, "Computer: ");

                    if(computer == 0){
                        mvprintw(7, 5, "Rock");
                    }
                    else if(computer == 1){
                        mvprintw(7, 5, "Paper");
                    }
                    else if(computer == 2){
                        mvprintw(7, 5, "Scissors");
                    }

                    if(choice == computer){
                        mvprintw(10, 5, "It's a tie!");
                        ties++;
                    }
                    else if(choice == 0 && computer == 2 || (choice == 1 && computer == 0) || (choice == 2 && computer == 1)){
                        mvprintw(10, 5, "You win!");
                        playerScore++;
                    }
                    else{
                        mvprintw(10, 5, "You lose!");
                        computerScore++;
                    }

                    mvprintw(12, 5, " FIRST TO 3 WINS! ");

                    mvprintw(13, 5, "==================");
                    mvprintw(14, 5, "    SCOREBOARD    ");
                    mvprintw(15, 5, "------------------");
                    mvprintw(16, 5, "Your score: %d", playerScore);
                    mvprintw(17, 5, "Computer score: %d", computerScore);
                    mvprintw(18, 5, "Ties: %d", ties);
                    mvprintw(19, 5, "==================");

                    if(playerScore == 3){
                        mvprintw(21, 5, "You won the match!");
                        mvprintw(23, 5, "Press any key to start next round");
                        refresh();
                        getch();

                        playerScore = 0;
                        computerScore = 0;
                        ties = 0;
                    }
                    else if(computerScore == 3){
                        mvprintw(21, 5, "You lost the match!");
                        mvprintw(23, 5, "Press any key to start next round");
                        refresh();
                        getch();
                            
                        playerScore = 0;
                        computerScore = 0;
                        ties = 0;
                    }
                    else{
                        mvprintw(21, 5, "Press any key to start next round");
                        refresh();
                        getch();
                    }
                }
                

            }
        }


    }
    /* while(loop2){
        clear();

        mvprintw(2, 5, "===========================");
        mvprintw(3, 5, "    ROCK PAPER SCISSORS    ");
        mvprintw(4, 5, "===========================");
            
        mvprintw(6, 5, "Use UP/DOWN and ENTER");

        if(choice == 0){
            mvprintw(8, 5, "> Rock");
        }
        else{
            mvprintw(8, 5, "  Rock");
        }
        if(choice == 1){
            mvprintw(10, 5, "> Paper");
        }
        else{
            mvprintw(10, 5, "  Paper");
        }
        if(choice == 2){
            mvprintw(12, 5, "> Scissors");
        }
        else{
            mvprintw(12, 5, "  Scissors");
        }



        mvprintw(15, 5, "Press Q to quit");

        refresh();

        if(key == KEY_UP && choice > 0){
            choice--;
        }
        else if(key == KEY_DOWN && choice < 2){
            choice++;
        }
        else if(key == 'q' || key == 'Q'){
            loop2 = false;
        }
        else if(key == KEY_ENTER || key == '\n' || key == '\r'){
            computer = rand() % 3;
            clear();
            
            mvprintw(3, 5, "Your choice: ");

            if(choice == 0){
                mvprintw(4, 5, "Rock");
            }
            else if(choice == 1){
                mvprintw(4, 5, "Paper");
            }
            else if(choice == 2){
                mvprintw(4, 5, "Scissors");
            }
            mvprintw(6, 5, "Computer: ");

            if(computer == 0){
                mvprintw(7, 5, "Rock");
            }
            else if(computer == 1){
                mvprintw(7, 5, "Paper");
            }
            else if(computer == 2){
                mvprintw(7, 5, "Scissors");
            }

            if(choice == computer){
                mvprintw(10, 5, "Its a tie!");
                ties++;
            }
            else if(choice == 0 && computer == 2 || (choice == 1 && computer == 0) || (choice == 2 && computer == 1)){
                mvprintw(10, 5, "You win!");
                playerScore++;
            }
            else{
                mvprintw(10, 5, "You lose!");
                computerScore++;
            }

            mvprintw(12, 5, " FIRST TO 3 WINS! ");

            mvprintw(13, 5, "==================");
            mvprintw(14, 5, "    SCOREBOARD    ");
            mvprintw(15, 5, "------------------");
            mvprintw(16, 5, "Your score: %d", playerScore);
            mvprintw(17, 5, "Computer score: %d", computerScore);
            mvprintw(18, 5, "Ties: %d", ties);
            mvprintw(19, 5, "==================");

            if(playerScore == 3){
                mvprintw(21, 5, "You won the match!");
                mvprintw(23, 5, "Press any key to return to menu");
                refresh();
                getch();

                playerScore = 0;
                computerScore = 0;
                ties = 0;
            }
            else if(computerScore == 3){
                mvprintw(21, 5, "You lost the match!");

                mvprintw(23, 5, "Press any key to return to menu");
                refresh();
                getch();
                    
                playerScore = 0;
                computerScore = 0;
                ties = 0;
            }
            else{
                mvprintw(21, 5, "Press any key to return to menu");
                refresh();
                getch();
            }
        }


    }
        */
    endwin();
}

