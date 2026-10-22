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
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_CYAN);
    init_pair(3, COLOR_WHITE, COLOR_BLACK);
    init_pair(4, COLOR_BLACK, COLOR_CYAN);
    init_pair(5, COLOR_RED, COLOR_BLACK);
    init_pair(6, COLOR_CYAN, COLOR_BLACK);

    srand(time(NULL));

    int p2Score = 0;
    int p1Score = 0;
    int cScore = 0;
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
        attron(COLOR_PAIR(1));
        mvprintw(2, 5, "===========================");
        mvprintw(3, 5, "    ROCK PAPER SCISSORS    ");
        mvprintw(4, 5, "===========================");
            
        mvprintw(5, 5, "   Use UP/DOWN and ENTER   ");
        attroff(COLOR_PAIR(1));
        if(mode == 0){
            attron(COLOR_PAIR(3));
            mvprintw(8, 5, "> Play against Computer");
            attroff(COLOR_PAIR(3));
        }
        else{
            attron(COLOR_PAIR(1));
            mvprintw(8, 5, "  Play against Computer");
            attron(COLOR_PAIR(1));
        }
        if(mode == 1){
            attron(COLOR_PAIR(3));
            mvprintw(10, 5, "> Two Player");
            attroff(COLOR_PAIR(3));
        }
        else{
            attron(COLOR_PAIR(1));
            mvprintw(10, 5, "  Two Player");
            attron(COLOR_PAIR(1));
        }
        attron(COLOR_PAIR(1));
        mvprintw(13, 5, "Press Q to quit");

        mvprintw(15, 5, "Press R to reset match scores");
        attroff(COLOR_PAIR(1));
        attron(COLOR_PAIR(2));
        mvprintw(2, 36, "========================");
        mvprintw(3, 36, "  HIGHEST MATCH SCORES  ");
        mvprintw(4, 36, "------------------------");
        mvprintw(5, 36, "Player 1: %d             ", p1Score);
        mvprintw(6, 36, "Player 2: %d             ", p2Score);
        mvprintw(7, 36, "Computer: %d             ", cScore);
        mvprintw(8, 36, "========================");
        attroff(COLOR_PAIR(2));
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
        else if(key == 'r' || key == 'R'){
            p1Score = 0;
            p2Score = 0;
            cScore = 0;
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
                                else if(key2 == KEY_ENTER || key2 == '\n' || key2 == '\r'){
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
                                                mvprintw(10, 5, "It's a tie this round");
                                                ties++;
                                            }
                                            if((choice == 0 && choice2 == 2) || (choice == 1 && choice2 == 0) || (choice == 2 && choice2 == 1) && (playerScore < 2)){
                                                mvprintw(10, 5, "Player 1 wins this round!");
                                                playerScore++;
                                            }
                                            else if((choice2 == 0 && choice == 2) || (choice2 == 1 && choice == 0) || (choice2 == 2 && choice == 1) && (playerScore2 < 2)){
                                                mvprintw(10, 5, "Player 2 wins this round!");
                                                playerScore2++;
                                            }
                                            mvprintw(3, 40, "|");
                                            mvprintw(4, 40, "|   FIRST TO 3 WINS!  ");
                                            mvprintw(5, 40, "| ====================");
                                            mvprintw(6, 40, "|      SCOREBOARD     ");
                                            mvprintw(7, 40, "| --------------------");
                                            mvprintw(8, 40, "| Player 1's score: %d", playerScore);
                                            mvprintw(9, 40, "| Player 2's score: %d", playerScore2);
                                            mvprintw(10, 40, "| Ties: %d", ties);
                                            mvprintw(11, 40, "| ====================");
                                            mvprintw(12, 40, "|");
                                            
                                            if(playerScore == 3){
                                                mvprintw(12, 5, "Player 1 wins this match!");
                                                mvprintw(14, 5, "Press any key to start next match");
                                                refresh();
                                                p1Score++;
                                                if(getch(), true){
                                                    choice = 0;
                                                    choice2 = 0;
                                                    playerScore2 = 0;
                                                    playerScore = 0;
                                                    ties = 0;

                                                    loop4 = false;
                                                    loop3 = false;
                                                }
                                            }
                                            else if(playerScore2 == 3){
                                                mvprintw(12, 5, "Player 2 wins this match!");
                                                mvprintw(14, 5, "Press any key to start next match");
                                                refresh();
                                                p2Score++;
                                                if(getch(), true){
                                                    choice = 0;
                                                    choice2 = 0;
                                                    playerScore2 = 0;
                                                    playerScore = 0;
                                                    ties = 0;
                                                    
                                                    loop4 = false;
                                                    loop3 = false;
                                                }  
                                            }
                                            else{
                                                mvprintw(12, 5, "Press any key to start next round");
                                                if(getch(), true){
                                                    loop4 = false;
                                                    loop3 = false;
                                                    choice = 0;
                                                    choice2 = 0;
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
        }
        else if(mode == 0 && (key == KEY_ENTER || key == '\n' || key == '\r')){
            loop2 = true;
            while(loop2){
                clear();

                if(choice == 0){
                    attron(COLOR_PAIR(3));
                    mvprintw(3, 5, "> Rock");
                    attroff(COLOR_PAIR(3));
                }
                else{
                    attron(COLOR_PAIR(1));
                    mvprintw(3, 5, "  Rock");
                    attroff(COLOR_PAIR(1));
                }
                if(choice == 1){
                    attron(COLOR_PAIR(3));
                    mvprintw(5, 5, "> Paper");
                    attroff(COLOR_PAIR(3));
                }
                else{
                    attron(COLOR_PAIR(1));
                    mvprintw(5, 5, "  Paper");
                    attroff(COLOR_PAIR(1));
                }
                if(choice == 2){
                    attron(COLOR_PAIR(3));
                    mvprintw(7, 5, "> Scissors");
                    attroff(COLOR_PAIR(3));
                }
                else{
                    attron(COLOR_PAIR(1));
                    mvprintw(7, 5, "  Scissors");
                    attroff(COLOR_PAIR(1));
                }
                attron(COLOR_PAIR(1));
                mvprintw(9, 5, "Press R to return to main menu");
                attroff(COLOR_PAIR(1));
                refresh();

                key = getch();

                if(key == KEY_UP && choice > 0){
                    choice--;
                }
                else if(key == KEY_DOWN && choice < 2){
                    choice++;
                }
                else if(key == 'r' || key == 'R'){
                    choice = 0;
                    playerScore = 0;
                    computerScore = 0;
                    loop2 = false;
                }
                else if(key == KEY_ENTER || key == '\n' || key == '\r'){
                    computer = rand() % 3;
                    clear();
                    attron(COLOR_PAIR(1));
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
                    attroff(COLOR_PAIR(1));
                    attron(COLOR_PAIR(5));
                    if(choice == computer){
                        mvprintw(10, 5, "It's a tie!");
                        ties++;
                    }
                    else if(choice == 0 && computer == 2 || (choice == 1 && computer == 0) || (choice == 2 && computer == 1) && (playerScore < 2)){
                        mvprintw(10, 5, "You win this round!");
                        playerScore++;
                    }
                    else if((computer == 0 && choice == 2) || (computer == 1 && choice == 0 ) || (computer == 2  && choice == 1) && (computerScore < 2)){
                        mvprintw(10, 5, "You lose this round!");
                        computerScore++;
                    }
                    attroff(COLOR_PAIR(5));
                    attron(COLOR_PAIR(2));
                    mvprintw(4, 42, " FIRST TO 3 WINS! ");
                    mvprintw(5, 42, "==================");
                    mvprintw(6, 42, "    SCOREBOARD    ");
                    mvprintw(7, 42, "------------------");
                    attroff(COLOR_PAIR(2));
                    attron(COLOR_PAIR(4));
                    mvprintw(8, 42, "Your score: %d     ", playerScore);
                    mvprintw(9, 42, "Computer score: %d ", computerScore);
                    mvprintw(10, 42, "Ties: %d           ", ties);
                    attroff(COLOR_PAIR(4));
                    attron(COLOR_PAIR(2));
                    mvprintw(11, 42, "==================");
                    attroff(COLOR_PAIR(2));
            
                    if(playerScore == 3){
                        attron(COLOR_PAIR(6));
                        mvprintw(12, 5, "You won the match!");
                        attroff(COLOR_PAIR(6));
                        attron(COLOR_PAIR(1));
                        mvprintw(14, 5, "Press any key to start next match");
                        attroff(COLOR_PAIR(1));
                        refresh();
                        getch();

                        p1Score++;
                        playerScore = 0;
                        computerScore = 0;
                        ties = 0;
                        choice = 0;
                    }
                    else if(computerScore == 3){
                        attron(COLOR_PAIR(6));
                        mvprintw(12, 5, "You lost the match!");
                        attroff(COLOR_PAIR(6));
                        attron(COLOR_PAIR(1));
                        mvprintw(14, 5, "Press any key to start next match");
                        attroff(COLOR_PAIR(1));
                        refresh();
                        getch();
                        
                        cScore++;
                        playerScore = 0;
                        computerScore = 0;
                        ties = 0;
                        choice = 0;
                    }
                    else{
                        attron(COLOR_PAIR(1));
                        mvprintw(12, 5, "Press any key to start next round");
                        refresh();
                        getch();
                        attroff(COLOR_PAIR(1));
                    }
                }
                

            }
        }


    }
    endwin();
}

