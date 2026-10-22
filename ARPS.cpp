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

    int choice = 0;
    int key;
    int computer;

    string options[] = {"Rock", "Paper", "Scissors"};

    bool loop1 = true;

    while(loop1){
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

        refresh();

        key = getch();

        if(key == KEY_UP && choice > 0){
            choice--;
        }
        else if(key == KEY_DOWN && choice < 2){
            choice++;
        }
        else if(key == 'q' || key == 'Q'){
            loop1 = false;
        }
        else if(key == 'e'){
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
                mvprintw(5, 5, "Scissors");
            }

        }


    }
    endwin();
}

