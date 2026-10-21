#include <bits/stdc++.h>
#include <chrono>
#include <iostream>
#include <string>
#include <thread>
#include <limits>
using namespace std;

void playGame(){
    bool loop2 = true;
    while(loop2){
        int userMove;
        cout << endl;
        cout << "Choose your move: " << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cout << endl;
        cout << "Your choice: ";
        cin >> userMove;
        cout << endl;

        if(cin.fail() || userMove != 1 && userMove != 2 && userMove != 3){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid choice. Try again." << endl;
            continue;
        }

        if(userMove == 1){
            cout << "You chose Rock! \n" << endl;
        }
        else if(userMove == 2){
            cout << "You chose Paper! \n" << endl;
        }
        else if(userMove == 3){
            cout << "You chose Scissors! \n" << endl;
        }
        int computerRand = rand() % 3 + 1;
        if(computerRand == 1){
            cout << "Computer chose Rock!" << endl;
            break;
        }
        else if(computerRand == 2){
            cout << "Computer chose Paper!" << endl;
            break;
    
        }
        else if(computerRand == 3){
            cout << "Computer chose Scissors!" << endl;
            break;
        }
    }
}
void menu(){
    cout << endl;
    cout << "=======================" << endl;
    cout << "  ROCK PAPER SCiSSORS  " << endl;
    cout << "=======================" << endl;
    cout << "1. PLAY" << endl;
    cout << "2. QUIT" << endl;
}

int main(){
    string userChoice;
    bool loop1 = true;
    srand(time(NULL));
    while(loop1){
        menu();
        cout << endl << "Enter your choice: ";
        cin >>userChoice;
        
        if(cin.fail() || userChoice != "1" && userChoice != "2"){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << endl;
            cout << "Invalid choice. Try again." << endl;
            continue;
        }

        if(userChoice == "1"){
            cout << endl;
            cout << "Starting game... \n" << endl;
            for(int i = 0; i<3; i++){
                cout << "." << flush;
                this_thread::sleep_for(chrono::seconds(1));
            }
            cout << endl;
            playGame();
            cout << endl;
        }
        else if(userChoice == "2"){
            cout << "Game end." << endl;
            return 0;
        }
    }
}