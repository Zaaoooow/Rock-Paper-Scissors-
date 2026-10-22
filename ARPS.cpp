/*

have to add graphics

rocks:
                       ......       
                    .:=+++++=-:.    
                  .-+++++*****+=-.  
                 .-=+++++++****++-. 
                 :-++***++++***++-. 
                 .-=+********+++=.  
                  ..:-====---:...   

paper: 

                @@=.........-@@
                @@=.........-@@
                @@=.........-@@
                @@=.........-@@
                @@=.........-@@
                @@=.........-@@
                @@=.........-@@

scissors: 
                    
            .....   
           .:::-.   
          ..::-.    
         .::=-.     
    .::.:--.:.      
   .:..::..::.      
    .:::..::::.     
         .:.:-       
                    

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
    int gameKey;
    int gameChoice = 0;
    bool gameLoop = true;
    bool loop1 = false;
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_CYAN);
    init_pair(3, COLOR_WHITE, COLOR_BLACK);
    init_pair(4, COLOR_BLACK, COLOR_CYAN);
    init_pair(5, COLOR_RED, COLOR_BLACK);
    init_pair(6, COLOR_CYAN, COLOR_BLACK);
    srand(time(NULL));
    while(gameLoop){
        clear();
        attron(COLOR_PAIR(1));
        mvprintw(2, 5, "===================================");
        mvprintw(3, 5, "     WELCOME TO EPIC-MINIGAMES     ");
        mvprintw(4, 5, "===================================");
        mvprintw(5, 5, "       Use UP/DOWN and ENTER       ");

        mvprintw(8, 5, "CHOOSE YOUR EPIC-MINIGAME : ");
        mvprintw(9, 5, "---------------------------");
        attroff(COLOR_PAIR(1));

        if(gameChoice == 0){
            attron(COLOR_PAIR(3));
            mvprintw(11, 5, "> ROCK PAPER SCISSORS");
            attroff(COLOR_PAIR(3));
        }
        else{
            attron(COLOR_PAIR(1));
            mvprintw(11, 5, "  ROCK PAPER SCISSORS");
            attroff(COLOR_PAIR(1));
        }
        if(gameChoice == 1){
            attron(COLOR_PAIR(3));
            mvprintw(13, 5, "> TIC TAC TOE");
            attroff(COLOR_PAIR(3));
        }
        else{
            attron(COLOR_PAIR(1));
            mvprintw(13, 5, "  TIC TAC TOE");
            attroff(COLOR_PAIR(1));
        }
        attron(COLOR_PAIR(1));
        mvprintw(29, 5, "Press Q to quit");
        attroff(COLOR_PAIR(1));

        refresh();
        gameKey = getch();

        if(gameKey == KEY_UP && gameChoice > 0){
            gameChoice--;
        }
        else if(gameKey == KEY_DOWN && gameChoice < 1){
            gameChoice++;
        }
        
        else if(gameChoice == 1 && (gameKey == KEY_ENTER || gameKey == '\r' || gameKey == '\n')){
            gameLoop = false;

        }
            
        else if(gameChoice == 0 && (gameKey == KEY_ENTER || gameKey == '\r' || gameKey == '\n')){
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
    loop1 = true;
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
        mvprintw(13, 5, "Press R to return to main menu");

        mvprintw(15, 5, "Press E to reset match scores");
        attroff(COLOR_PAIR(1));
        attron(COLOR_PAIR(2));
        mvprintw(2, 36, "========================");
        mvprintw(3, 36, "  HIGHEST MATCH SCORES  ");
        mvprintw(4, 36, "------------------------");
        attroff(COLOR_PAIR(2));
        attron(COLOR_PAIR(4));
        mvprintw(5, 36, "Player 1: %d             ", p1Score);
        mvprintw(6, 36, "Player 2: %d             ", p2Score);
        mvprintw(7, 36, "Computer: %d             ", cScore);
        attroff(COLOR_PAIR(4));
        attron(COLOR_PAIR(2));
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
        else if(key == 'r' || key == 'R'){
            loop1 = false;
        }
        else if(key == 'e' || key == 'E'){
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
                    attron(COLOR_PAIR(1));
                    mvprintw(3, 5, "Player 1's turn");
                    attroff(COLOR_PAIR(1));
                    if(choice == 0){
                        attron(COLOR_PAIR(3));
                        mvprintw(4, 30, R"(
                       ......       
                    .:=+++++=-:.    
                  .-+++++*****+=-.  
                 .-=+++++++****++-. 
                 :-++***++++***++-. 
                 .-=+********+++=.  
                  ..:-====---:...   )");
                        mvprintw(5, 5, "> Rock:");
                        attroff(COLOR_PAIR(3));
                    }
                    else{
                        attron(COLOR_PAIR(1));
                        mvprintw(4, 30, R"(
                       ......       
                    .:=+++++=-:.    
                  .-+++++*****+=-.  
                 .-=+++++++****++-. 
                 :-++***++++***++-. 
                 .-=+********+++=.  
                  ..:-====---:...   )");
                        mvprintw(5, 5, "  Rock:");
                        attroff(COLOR_PAIR(1));
                    }
                    if(choice == 1){
                        attron(COLOR_PAIR(3));
                        mvprintw(13, 30, R"(
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@                                  )");
                        mvprintw(14, 5, "> Paper:");
                        attroff(COLOR_PAIR(3));
                    }
                    else{
                        attron(COLOR_PAIR(1));
                        mvprintw(13, 30, R"(
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@                                  )");
                        mvprintw(14, 5, "  Paper:");
                        attroff(COLOR_PAIR(1));
                    }
                    if(choice == 2){
                        attron(COLOR_PAIR(3));
                        mvprintw(22, 30, R"(
                              .....   
                            .:::-.   
                          ..::-.    
                         .::=-.     
                    .::.:--.:.      
                   .:..::..::.      
                    .::: .::::.     
                          :.:-                                         )");
                        mvprintw(22, 5, "> Scissors:");
                        attroff(COLOR_PAIR(3));
                    }
                    else{
                        attron(COLOR_PAIR(1));
                        mvprintw(22, 30, R"(
                              .....   
                            .:::-.   
                          ..::-.    
                         .::=-.     
                    .::.:--.:.      
                   .:..::..::.      
                    .::: .::::.     
                          :.:-                                         )");
                        mvprintw(22, 5, "  Scissors:");
                        attron(COLOR_PAIR(1));
                    }
                    attron(COLOR_PAIR(1));
                    mvprintw(3, 50, "Press R to return to menu");
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
                        loop2 = false;
                    }
                    else if((key == KEY_ENTER || key == '\n' || key == '\r')){
                        clear();
                        p2 = true;
                        bool loop3 = true;
                        while(loop3){
                            if(p2 == true){
                                attron(COLOR_PAIR(1));
                                mvprintw(3, 5, "Player 2's turn");
                                attroff(COLOR_PAIR(1));

                                if(choice2 == 0){
                                    attron(COLOR_PAIR(3));
                                    mvprintw(4, 30, R"(
                       ......       
                    .:=+++++=-:.    
                  .-+++++*****+=-.  
                 .-=+++++++****++-. 
                 :-++***++++***++-. 
                 .-=+********+++=.  
                  ..:-====---:...   )");
                                    mvprintw(5, 5, "> Rock:");
                                    attroff(COLOR_PAIR(3));
                                }
                                else{
                                    attron(COLOR_PAIR(1));
                                    mvprintw(4, 30, R"(
                       ......       
                    .:=+++++=-:.    
                  .-+++++*****+=-.  
                 .-=+++++++****++-. 
                 :-++***++++***++-. 
                 .-=+********+++=.  
                  ..:-====---:...   )");
                                    mvprintw(5, 5, "  Rock:");
                                    attroff(COLOR_PAIR(1));
                                }
                                if(choice2 == 1){
                                    attron(COLOR_PAIR(3));
                                    mvprintw(13, 30, R"(
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@                                  )");
                                    mvprintw(14, 5, "> Paper:");
                                    attroff(COLOR_PAIR(3));
                                }
                                else{
                                    attron(COLOR_PAIR(1));
                                    mvprintw(13, 30, R"(
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@                                  )");
                                    mvprintw(14, 5, "  Paper:");
                                    attroff(COLOR_PAIR(1));
                                }
                                if(choice2 == 2){
                                    attron(COLOR_PAIR(3));
                                    mvprintw(22, 30, R"(
                              .....   
                            .:::-.   
                          ..::-.    
                         .::=-.     
                    .::.:--.:.      
                   .:..::..::.      
                    .::: .::::.     
                          :.:-                                         )");
                                    mvprintw(22, 5, "> Scissors:");
                                    attron(COLOR_PAIR(3));
                                }
                                else{
                                    attron(COLOR_PAIR(1));
                                    mvprintw(22, 30, R"(
                              .....   
                            .:::-.   
                          ..::-.    
                         .::=-.     
                    .::.:--.:.      
                   .:..::..::.      
                    .::: .::::.     
                          :.:-                                         )");
                                    mvprintw(22, 5, "  Scissors:");
                                    attroff(COLOR_PAIR(1));
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
                                            attron(COLOR_PAIR(1));
                                            mvprintw(3, 5, "Player 1's choice: ");
                                            attroff(COLOR_PAIR(1));
                                            attron(COLOR_PAIR(6));
                                            if(choice == 0){
                                                mvprintw(4, 5, "Rock");
                                                mvprintw(4, 30, R"(
                       ......       
                    .:=+++++=-:.    
                  .-+++++*****+=-.  
                 .-=+++++++****++-. 
                 :-++***++++***++-. 
                 .-=+********+++=.  
                  ..:-====---:...   )");
                                            }
                                            else if(choice == 1){
                                                mvprintw(4, 5, "Paper");
                                                mvprintw(4, 30, R"(
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@                                  )");
                                            }
                                            else if(choice == 2){
                                                mvprintw(4, 5, "Scissors");
                                                mvprintw(4, 30, R"(
                              .....   
                            .:::-.   
                          ..::-.    
                         .::=-.     
                    .::.:--.:.      
                   .:..::..::.      
                    .::: .::::.     
                          :.:-                                         )");
                                            }
                                            attroff(COLOR_PAIR(6));
                                            attron(COLOR_PAIR(1));
                                            mvprintw(14, 5, "Player 2's choice: ");
                                            attron(COLOR_PAIR(1));
                                            attron(COLOR_PAIR(6));
                                            if(choice2 == 0){
                                                mvprintw(15, 5, "Rock");
                                                mvprintw(15, 30, R"(
                       ......       
                    .:=+++++=-:.    
                  .-+++++*****+=-.  
                 .-=+++++++****++-. 
                 :-++***++++***++-. 
                 .-=+********+++=.  
                  ..:-====---:...   )");
                                            }
                                            else if(choice2 == 1){
                                                mvprintw(15, 5, "Paper");
                                                mvprintw(15, 30, R"(
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@                                  )");
                                            }
                                            else if(choice2 == 2){
                                                mvprintw(15, 5, "Scissors");
                                                mvprintw(15, 30, R"(
                              .....   
                            .:::-.   
                          ..::-.    
                         .::=-.     
                    .::.:--.:.      
                   .:..::..::.      
                    .::: .::::.     
                          :.:-                                         )");
                                            }
                                            attroff(COLOR_PAIR(6));
                                            
                                            attron(COLOR_PAIR(5));
                                            if(choice == choice2){
                                                mvprintw(25, 5, "It's a tie this round");
                                                ties++;
                                            }
                                            if((choice == 0 && choice2 == 2) || (choice == 1 && choice2 == 0) || (choice == 2 && choice2 == 1) && (playerScore < 2)){
                                                mvprintw(25, 5, "Player 1 wins this round!");
                                                playerScore++;
                                            }
                                            else if((choice2 == 0 && choice == 2) || (choice2 == 1 && choice == 0) || (choice2 == 2 && choice == 1) && (playerScore2 < 2)){
                                                mvprintw(25, 5, "Player 2 wins this round!");
                                                playerScore2++;
                                            }
                                            attroff(COLOR_PAIR(5));

                                            attron(COLOR_PAIR(2));
                                            mvprintw(4, 40, "  FIRST TO 3 WINS!  ");
                                            mvprintw(5, 40, "====================");
                                            mvprintw(6, 40, "     SCOREBOARD     ");
                                            mvprintw(7, 40, "--------------------");
                                            attroff(COLOR_PAIR(2));
                                            attron(COLOR_PAIR(4));
                                            mvprintw(8, 40, "Player 1's score: %d ", playerScore);
                                            mvprintw(9, 40, "Player 2's score: %d ", playerScore2);
                                            mvprintw(10, 40, "Ties: %d             ", ties);
                                            attroff(COLOR_PAIR(4));
                                            attron(COLOR_PAIR(2));
                                            mvprintw(11, 40, "====================");
                                            attroff(COLOR_PAIR(2));
                                            
                                            if(playerScore == 3){
                                                attron(COLOR_PAIR(6));
                                                mvprintw(27, 5, "Player 1 wins this match!");
                                                attroff(COLOR_PAIR(6));
                                                attron(COLOR_PAIR(1));
                                                mvprintw(29, 5, "Press any key to start next match");
                                                attroff(COLOR_PAIR(1));
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
                                                attron(COLOR_PAIR(6));
                                                mvprintw(27, 5, "Player 2 wins this match!");
                                                attroff(COLOR_PAIR(6));
                                                attron(COLOR_PAIR(1));
                                                mvprintw(29, 5, "Press any key to start next match");
                                                attron(COLOR_PAIR(1));
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
                                                attron(COLOR_PAIR(1));
                                                mvprintw(27, 5, "Press any key to start next round");
                                                attroff(COLOR_PAIR(1));
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
                    mvprintw(2, 30, R"(
                       ......       
                    .:=+++++=-:.    
                  .-+++++*****+=-.  
                 .-=+++++++****++-. 
                 :-++***++++***++-. 
                 .-=+********+++=.  
                  ..:-====---:...   )");
                    mvprintw(3, 5, "> Rock:");
                    attroff(COLOR_PAIR(3));
                }
                else{
                    attron(COLOR_PAIR(1));
                    mvprintw(2, 30, R"(
                       ......       
                    .:=+++++=-:.    
                  .-+++++*****+=-.  
                 .-=+++++++****++-. 
                 :-++***++++***++-. 
                 .-=+********+++=.  
                  ..:-====---:...   )");
                    mvprintw(3, 5, "  Rock:");
                    attroff(COLOR_PAIR(1));
                }
                if(choice == 1){
                    attron(COLOR_PAIR(3));
                    mvprintw(12, 30, R"(
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@                                  )");
                    mvprintw(11, 5, "> Paper:");
                    attroff(COLOR_PAIR(3));
                }
                else{
                    attron(COLOR_PAIR(1));
                    mvprintw(12, 30, R"(
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@                                  )");
                    mvprintw(11, 5, "  Paper:");
                    attroff(COLOR_PAIR(1));
                }
                if(choice == 2){
                    attron(COLOR_PAIR(3));
                    mvprintw(21, 30, R"(
                              .....   
                            .:::-.   
                          ..::-.    
                         .::=-.     
                    .::.:--.:.      
                   .:..::..::.      
                    .::: .::::.     
                          :.:-                                         )");
                    mvprintw(21, 5, "> Scissors:");
                    attroff(COLOR_PAIR(3));
                }
                else{
                    attron(COLOR_PAIR(1));
                    mvprintw(21, 30, R"(
                              .....   
                            .:::-.   
                          ..::-.    
                         .::=-.     
                    .::.:--.:.      
                   .:..::..::.      
                    .::: .::::.     
                          :.:-                                         )");
                    mvprintw(21, 5, "  Scissors:");
                    attroff(COLOR_PAIR(1));
                }
                attron(COLOR_PAIR(1));
                mvprintw(3, 50, "Press R to return to menu");
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
                    attroff(COLOR_PAIR(1));
                    attron(COLOR_PAIR(6));
                    if(choice == 0){
                        mvprintw(4, 5, "Rock");
                        mvprintw(4, 30, R"(
                       ......       
                    .:=+++++=-:.    
                  .-+++++*****+=-.  
                 .-=+++++++****++-. 
                 :-++***++++***++-. 
                 .-=+********+++=.  
                  ..:-====---:...   )");
                    }
                    else if(choice == 1){
                        mvprintw(4, 5, "Paper");
                        mvprintw(4, 30, R"(
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@                                  )");
                    }
                    else if(choice == 2){
                        mvprintw(4, 5, "Scissors");
                        mvprintw(4, 30, R"(
                              .....   
                            .:::-.   
                          ..::-.    
                         .::=-.     
                    .::.:--.:.      
                   .:..::..::.      
                    .::: .::::.     
                          :.:-                                         )");
                    }
                    attroff(COLOR_PAIR(6));
                    attron(COLOR_PAIR(1));
                    mvprintw(14, 5, "Computer: ");
                    attroff(COLOR_PAIR(1));
                    attron(COLOR_PAIR(6));
                    if(computer == 0){
                        mvprintw(15, 5, "Rock");
                        mvprintw(15, 30, R"(
                       ......       
                    .:=+++++=-:.    
                  .-+++++*****+=-.  
                 .-=+++++++****++-. 
                 :-++***++++***++-. 
                 .-=+********+++=.  
                  ..:-====---:...   )");
                    }
                    else if(computer == 1){
                        mvprintw(15, 5, "Paper");
                        mvprintw(15, 30, R"(
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@
                  @@=.........-@@                                  )");
                    }
                    else if(computer == 2){
                        mvprintw(15, 5, "Scissors");
                        mvprintw(15, 30, R"(
                              .....   
                            .:::-.   
                          ..::-.    
                         .::=-.     
                    .::.:--.:.      
                   .:..::..::.      
                    .::: .::::.     
                          :.:-                                         )");
                    }
                    attroff(COLOR_PAIR(6));
                    attron(COLOR_PAIR(5));
                    if(choice == computer){
                        mvprintw(25, 5, "It's a tie!");
                        ties++;
                    }
                    else if(choice == 0 && computer == 2 || (choice == 1 && computer == 0) || (choice == 2 && computer == 1) && (playerScore < 2)){
                        mvprintw(25, 5, "You win this round!");
                        playerScore++;
                    }
                    else if((computer == 0 && choice == 2) || (computer == 1 && choice == 0 ) || (computer == 2  && choice == 1) && (computerScore < 2)){
                        mvprintw(25, 5, "You lose this round!");
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
                        mvprintw(27, 5, "You won the match!");
                        attroff(COLOR_PAIR(6));
                        attron(COLOR_PAIR(1));
                        mvprintw(29, 5, "Press any key to start next match");
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
                        mvprintw(27, 5, "You lost the match!");
                        attroff(COLOR_PAIR(6));
                        attron(COLOR_PAIR(1));
                        mvprintw(29, 5, "Press any key to start next match");
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
                        mvprintw(27, 5, "Press any key to start next round");
                        refresh();
                        getch();
                        choice = 0;
                        attroff(COLOR_PAIR(1));
                    }
                }
                

            }
        }


    }
        }
    }



    
    endwin();
}

